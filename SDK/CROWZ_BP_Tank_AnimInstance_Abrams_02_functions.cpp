// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_Tank_AnimInstance_Abrams_02_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Tank_AnimInstance_Abrams_02.BP_Tank_AnimInstance_Abrams_02_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UBP_Tank_AnimInstance_Abrams_02_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tank_AnimInstance_Abrams_02.BP_Tank_AnimInstance_Abrams_02_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function BP_Tank_AnimInstance_Abrams_02.BP_Tank_AnimInstance_Abrams_02_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Tank_AnimInstance_Abrams_02_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tank_AnimInstance_Abrams_02.BP_Tank_AnimInstance_Abrams_02_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Tank_AnimInstance_Abrams_02.BP_Tank_AnimInstance_Abrams_02_C.PlayAnimCannon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Tank_AnimInstance_Abrams_02_C::PlayAnimCannon()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tank_AnimInstance_Abrams_02.BP_Tank_AnimInstance_Abrams_02_C.PlayAnimCannon"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Tank_AnimInstance_Abrams_02.BP_Tank_AnimInstance_Abrams_02_C.ExecuteUbergraph_BP_Tank_AnimInstance_Abrams_02
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Tank_AnimInstance_Abrams_02_C::ExecuteUbergraph_BP_Tank_AnimInstance_Abrams_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tank_AnimInstance_Abrams_02.BP_Tank_AnimInstance_Abrams_02_C.ExecuteUbergraph_BP_Tank_AnimInstance_Abrams_02"));

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
