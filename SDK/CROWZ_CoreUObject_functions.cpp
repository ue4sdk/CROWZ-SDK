// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

int UObject::GetName(char* nameOut) const
{
	const auto nameLen = Name.GetName(nameOut);
	if (nameLen == -1) return -1;

	if (Name.Number > 0)
	{
		StringUtils::Concat(nameOut, "_");
		char number[50];
		number[0] = 0;
		StringUtils::FromInt(Name.Number, number);
		StringUtils::Concat(nameOut, number);
	}
	
	const auto pos = StringUtils::FindRight(nameOut, '/');
	if (pos == -1)
	{
		return nameLen;
	}

	char subStr[1024];
	subStr[0] = 0;
	StringUtils::SubStr(subStr, nameOut, pos + 1);
	StringUtils::Copy(nameOut, subStr);
	
	return StringUtils::Len(nameOut);
}

int UObject::GetFullName(char* fullNameOut) const
{
	int fullNameLen = -1;
	if (Class)
	{
		const auto MaxStrLen = 1024;
		
		char temp[MaxStrLen];
		temp[0] = 0;
		int tempLen = 0;
		for (auto outer = Outer; outer; outer = outer->Outer)
		{
			char buff[MaxStrLen];
			buff[0] = 0;
			const auto buffLen = outer->GetName(buff);			
			if(buffLen == -1)
			{
				return -1;
			}
			// temp = p->GetName() + "." + temp;
			StringUtils::Concat(buff, ".");
			StringUtils::Concat(buff, temp);
			tempLen = StringUtils::Copy(temp, buff);
		}

		char className[MaxStrLen];
		className[0] = 0;
		if (Class->GetName(className) == -1)
		{
			return -1;
		}
		
		StringUtils::Copy(fullNameOut, className);
		StringUtils::Concat(fullNameOut, " ");
		if(tempLen > 0)
		{
			StringUtils::Concat(fullNameOut, temp);
		}

		char localName[MaxStrLen];
		localName[0] = 0;
		GetName(localName);
		fullNameLen = StringUtils::Concat(fullNameOut, localName);
	}

	return fullNameLen;
}

bool UObject::IsA(UClass* cmp) const
{
	for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
	{
		if (super == cmp)
		{
			return true;
		}
	}

	return false;
}

// Function CoreUObject.Object.ExecuteUbergraph
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UObject::ExecuteUbergraph(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CoreUObject.Object.ExecuteUbergraph"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
