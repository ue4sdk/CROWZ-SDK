#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowWeaponRoadRoverM2Browing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrowWeaponRoadRoverM2Browing.BP_CrowWeaponRoadRoverM2Browing_C
// 0x0000 (0x31F0 - 0x31F0)
class ABP_CrowWeaponRoadRoverM2Browing_C : public ACrowWeaponVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CrowWeaponRoadRoverM2Browing.BP_CrowWeaponRoadRoverM2Browing_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
