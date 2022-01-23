// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_FoliageRemover_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FoliageRemover.BP_FoliageRemover_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_FoliageRemover_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FoliageRemover.BP_FoliageRemover_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FoliageRemover.BP_FoliageRemover_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_FoliageRemover_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FoliageRemover.BP_FoliageRemover_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FoliageRemover.BP_FoliageRemover_C.ExecuteUbergraph_BP_FoliageRemover
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_FoliageRemover_C::ExecuteUbergraph_BP_FoliageRemover(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FoliageRemover.BP_FoliageRemover_C.ExecuteUbergraph_BP_FoliageRemover"));

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
