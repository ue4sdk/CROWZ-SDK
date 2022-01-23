#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowDamageType_BlastingVehicle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrowDamageType_BlastingVehicle.BP_CrowDamageType_BlastingVehicle_C
// 0x0000 (0x0058 - 0x0058)
class UBP_CrowDamageType_BlastingVehicle_C : public UCrowDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CrowDamageType_BlastingVehicle.BP_CrowDamageType_BlastingVehicle_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
