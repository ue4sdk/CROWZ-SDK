#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowWeaponLockOnLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrowWeaponLockOnLauncher.BP_CrowWeaponLockOnLauncher_C
// 0x0000 (0x1F30 - 0x1F30)
class ABP_CrowWeaponLockOnLauncher_C : public ACrowWeaponLockonLauncher
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CrowWeaponLockOnLauncher.BP_CrowWeaponLockOnLauncher_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
