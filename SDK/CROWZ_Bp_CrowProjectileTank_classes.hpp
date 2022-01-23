#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Bp_CrowProjectileTank_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bp_CrowProjectileTank.Bp_CrowProjectileTank_C
// 0x0008 (0x1848 - 0x1840)
class ABp_CrowProjectileTank_C : public ACrowProjectileRocketLauncher
{
public:
	class UStaticMeshComponent*                        SM_G67;                                                   // 0x1840(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Bp_CrowProjectileTank.Bp_CrowProjectileTank_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
