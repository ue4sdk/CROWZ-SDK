#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowSpectatorIconActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrowSpectatorIconActor.BP_CrowSpectatorIconActor_C
// 0x0008 (0x0358 - 0x0350)
class ABP_CrowSpectatorIconActor_C : public ACrowSpectatorIconActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CrowSpectatorIconActor.BP_CrowSpectatorIconActor_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
