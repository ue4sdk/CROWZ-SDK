#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowCharacterPawn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrowCharacterPawn.BP_CrowCharacterPawn_C
// 0x0028 (0x1B38 - 0x1B10)
class ABP_CrowCharacterPawn_C : public ACrowCharacterPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1B10(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UCrowFoliageAffectorComponent*               CrowFoliageAffector;                                      // 0x1B18(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               Box_Trigger;                                              // 0x1B20(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               Box_Interaction;                                          // 0x1B28(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCrowTriggerComponent*                       CrowTrigger_Revive;                                       // 0x1B30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CrowCharacterPawn.BP_CrowCharacterPawn_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CrowCharacterPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
