#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowWeaponPartsLaserSight_Side_LPX8_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrowWeaponPartsLaserSight_Side_LPX8.BP_CrowWeaponPartsLaserSight_Side_LPX8_C
// 0x0018 (0x0278 - 0x0260)
class ABP_CrowWeaponPartsLaserSight_Side_LPX8_C : public ACrowWeaponPartsLaserSightActor
{
public:
	class UParticleSystemComponent*                    FX_Wp_LaserLight_M001;                                    // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCrowLaserBeamComponent*                     CrowLaserBeam;                                            // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      AK_LasersightSIDE;                                        // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CrowWeaponPartsLaserSight_Side_LPX8.BP_CrowWeaponPartsLaserSight_Side_LPX8_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
