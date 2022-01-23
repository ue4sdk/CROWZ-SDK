// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_PcMNew_FPBody_Test_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PcMNew_FPBody_Test.PcMNew_FPBody_Test_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UPcMNew_FPBody_Test_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PcMNew_FPBody_Test.PcMNew_FPBody_Test_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function PcMNew_FPBody_Test.PcMNew_FPBody_Test_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPcMNew_FPBody_Test_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PcMNew_FPBody_Test.PcMNew_FPBody_Test_C.BlueprintInitializeAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PcMNew_FPBody_Test.PcMNew_FPBody_Test_C.ExecuteUbergraph_PcMNew_FPBody_Test
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPcMNew_FPBody_Test_C::ExecuteUbergraph_PcMNew_FPBody_Test(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PcMNew_FPBody_Test.PcMNew_FPBody_Test_C.ExecuteUbergraph_PcMNew_FPBody_Test"));

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
