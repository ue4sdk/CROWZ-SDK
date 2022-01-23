// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowLobbyCharacterPawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CrowLobbyCharacterPawn.BP_CrowLobbyCharacterPawn_C.InpActEvt_PageUp_K2Node_InputActionEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_CrowLobbyCharacterPawn_C::InpActEvt_PageUp_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CrowLobbyCharacterPawn.BP_CrowLobbyCharacterPawn_C.InpActEvt_PageUp_K2Node_InputActionEvent_3"));

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CrowLobbyCharacterPawn.BP_CrowLobbyCharacterPawn_C.InpActEvt_PageDown_K2Node_InputActionEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_CrowLobbyCharacterPawn_C::InpActEvt_PageDown_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CrowLobbyCharacterPawn.BP_CrowLobbyCharacterPawn_C.InpActEvt_PageDown_K2Node_InputActionEvent_2"));

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CrowLobbyCharacterPawn.BP_CrowLobbyCharacterPawn_C.InpActEvt_NightVisionToggle_K2Node_InputActionEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_CrowLobbyCharacterPawn_C::InpActEvt_NightVisionToggle_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CrowLobbyCharacterPawn.BP_CrowLobbyCharacterPawn_C.InpActEvt_NightVisionToggle_K2Node_InputActionEvent_1"));

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CrowLobbyCharacterPawn.BP_CrowLobbyCharacterPawn_C.ExecuteUbergraph_BP_CrowLobbyCharacterPawn
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CrowLobbyCharacterPawn_C::ExecuteUbergraph_BP_CrowLobbyCharacterPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CrowLobbyCharacterPawn.BP_CrowLobbyCharacterPawn_C.ExecuteUbergraph_BP_CrowLobbyCharacterPawn"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
