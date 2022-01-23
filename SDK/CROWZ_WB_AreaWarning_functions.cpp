// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_AreaWarning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WB_AreaWarning.WB_AreaWarning_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWB_AreaWarning_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_AreaWarning.WB_AreaWarning_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WB_AreaWarning.WB_AreaWarning_C.ExecuteUbergraph_WB_AreaWarning
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWB_AreaWarning_C::ExecuteUbergraph_WB_AreaWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_AreaWarning.WB_AreaWarning_C.ExecuteUbergraph_WB_AreaWarning"));

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
