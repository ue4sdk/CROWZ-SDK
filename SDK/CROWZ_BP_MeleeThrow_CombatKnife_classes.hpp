#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_MeleeThrow_CombatKnife_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MeleeThrow_CombatKnife.BP_MeleeThrow_CombatKnife_C
// 0x0008 (0x1948 - 0x1940)
class ABP_MeleeThrow_CombatKnife_C : public ACrowProjectileMeleeThrow
{
public:
	class USkeletalMeshComponent*                      Dagger001;                                                // 0x1940(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MeleeThrow_CombatKnife.BP_MeleeThrow_CombatKnife_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
