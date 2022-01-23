#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowLobbyCharacterPawn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrowLobbyCharacterPawn.BP_CrowLobbyCharacterPawn_C
// 0x0010 (0x1210 - 0x1200)
class ABP_CrowLobbyCharacterPawn_C : public ACrowLobbyCharacterPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1200(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USpotLightComponent*                         SpotLight;                                                // 0x1208(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CrowLobbyCharacterPawn.BP_CrowLobbyCharacterPawn_C"));
		return ptr;
	}


	void InpActEvt_PageUp_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_PageDown_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_NightVisionToggle_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ExecuteUbergraph_BP_CrowLobbyCharacterPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
