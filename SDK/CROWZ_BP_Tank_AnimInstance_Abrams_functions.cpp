// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_Tank_AnimInstance_Abrams_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Tank_AnimInstance_Abrams.BP_Tank_AnimInstance_Abrams_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UBP_Tank_AnimInstance_Abrams_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tank_AnimInstance_Abrams.BP_Tank_AnimInstance_Abrams_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function BP_Tank_AnimInstance_Abrams.BP_Tank_AnimInstance_Abrams_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Tank_AnimInstance_Abrams_AnimGraphNode_ModifyBone_CBBE30964F27775EA8B22D8FFA060E15
// (FUNC_BlueprintEvent)

void UBP_Tank_AnimInstance_Abrams_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Tank_AnimInstance_Abrams_AnimGraphNode_ModifyBone_CBBE30964F27775EA8B22D8FFA060E15()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tank_AnimInstance_Abrams.BP_Tank_AnimInstance_Abrams_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Tank_AnimInstance_Abrams_AnimGraphNode_ModifyBone_CBBE30964F27775EA8B22D8FFA060E15"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Tank_AnimInstance_Abrams.BP_Tank_AnimInstance_Abrams_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Tank_AnimInstance_Abrams_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tank_AnimInstance_Abrams.BP_Tank_AnimInstance_Abrams_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Tank_AnimInstance_Abrams.BP_Tank_AnimInstance_Abrams_C.PlayAnimCannon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Tank_AnimInstance_Abrams_C::PlayAnimCannon()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tank_AnimInstance_Abrams.BP_Tank_AnimInstance_Abrams_C.PlayAnimCannon"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Tank_AnimInstance_Abrams.BP_Tank_AnimInstance_Abrams_C.ExecuteUbergraph_BP_Tank_AnimInstance_Abrams
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Tank_AnimInstance_Abrams_C::ExecuteUbergraph_BP_Tank_AnimInstance_Abrams(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tank_AnimInstance_Abrams.BP_Tank_AnimInstance_Abrams_C.ExecuteUbergraph_BP_Tank_AnimInstance_Abrams"));

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
