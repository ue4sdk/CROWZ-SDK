#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_Dagor_Destroyed_N_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Dagor_Destroyed_N.BP_Dagor_Destroyed_N_C
// 0x0008 (0x03B8 - 0x03B0)
class ABP_Dagor_Destroyed_N_C : public ACrowVehicleDestroyedBase
{
public:
	class UBoxComponent*                               BurninigAreaBox;                                          // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Dagor_Destroyed_N.BP_Dagor_Destroyed_N_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
