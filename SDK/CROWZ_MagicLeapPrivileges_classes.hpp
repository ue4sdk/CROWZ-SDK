#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapPrivileges_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapPrivilegesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary"));
		return ptr;
	}


	static bool RequestPrivilegeAsync(EMagicLeapPrivilege Privilege, const struct FScriptDelegate& ResultDelegate);
	static bool RequestPrivilege(EMagicLeapPrivilege Privilege);
	static bool CheckPrivilege(EMagicLeapPrivilege Privilege);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
