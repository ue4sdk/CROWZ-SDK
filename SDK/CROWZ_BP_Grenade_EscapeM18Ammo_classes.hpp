#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_Grenade_EscapeM18Ammo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Grenade_EscapeM18Ammo.BP_Grenade_EscapeM18Ammo_C
// 0x0008 (0x18D8 - 0x18D0)
class ABP_Grenade_EscapeM18Ammo_C : public ACrowProjectileEscapeSmoke
{
public:
	class USkeletalMeshComponent*                      SK_G67_02;                                                // 0x18D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Grenade_EscapeM18Ammo.BP_Grenade_EscapeM18Ammo_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
