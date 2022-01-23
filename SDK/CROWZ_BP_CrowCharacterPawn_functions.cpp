// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowCharacterPawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CrowCharacterPawn.BP_CrowCharacterPawn_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_CrowCharacterPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CrowCharacterPawn.BP_CrowCharacterPawn_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CrowCharacterPawn.BP_CrowCharacterPawn_C.ExecuteUbergraph_BP_CrowCharacterPawn
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CrowCharacterPawn_C::ExecuteUbergraph_BP_CrowCharacterPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CrowCharacterPawn.BP_CrowCharacterPawn_C.ExecuteUbergraph_BP_CrowCharacterPawn"));

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
