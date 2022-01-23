// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_PcMNew_FP_Test_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PcMNew_FP_Test.PcMNew_FP_Test_C.Hand IK
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               InPose                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FPoseLink               Hand_IK                        (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UPcMNew_FP_Test_C::Hand_IK(const struct FPoseLink& InPose, struct FPoseLink* Hand_IK)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PcMNew_FP_Test.PcMNew_FP_Test_C.Hand IK"));

	struct
	{
		struct FPoseLink               InPose;
		struct FPoseLink               Hand_IK;
	} params;

	params.InPose = InPose;

	UObject::ProcessEvent(fn, &params);

	if (Hand_IK != nullptr)
		*Hand_IK = params.Hand_IK;
}


// Function PcMNew_FP_Test.PcMNew_FP_Test_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UPcMNew_FP_Test_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PcMNew_FP_Test.PcMNew_FP_Test_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function PcMNew_FP_Test.PcMNew_FP_Test_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_ModifyBone_B8D82B5F4F5DC57AF1299EB7E1F05BE4
// (FUNC_BlueprintEvent)

void UPcMNew_FP_Test_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_ModifyBone_B8D82B5F4F5DC57AF1299EB7E1F05BE4()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PcMNew_FP_Test.PcMNew_FP_Test_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_ModifyBone_B8D82B5F4F5DC57AF1299EB7E1F05BE4"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PcMNew_FP_Test.PcMNew_FP_Test_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_ModifyBone_D1B40B1C46C3DBF89960B2AE680357EF
// (FUNC_BlueprintEvent)

void UPcMNew_FP_Test_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_ModifyBone_D1B40B1C46C3DBF89960B2AE680357EF()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PcMNew_FP_Test.PcMNew_FP_Test_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_ModifyBone_D1B40B1C46C3DBF89960B2AE680357EF"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PcMNew_FP_Test.PcMNew_FP_Test_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_BlendSpacePlayer_EF9EE931439B107C756764982B986ACE
// (FUNC_BlueprintEvent)

void UPcMNew_FP_Test_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_BlendSpacePlayer_EF9EE931439B107C756764982B986ACE()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PcMNew_FP_Test.PcMNew_FP_Test_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_BlendSpacePlayer_EF9EE931439B107C756764982B986ACE"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PcMNew_FP_Test.PcMNew_FP_Test_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_BlendSpacePlayer_DEF598B442C38B634D0082B4BBDE535A
// (FUNC_BlueprintEvent)

void UPcMNew_FP_Test_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_BlendSpacePlayer_DEF598B442C38B634D0082B4BBDE535A()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PcMNew_FP_Test.PcMNew_FP_Test_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_BlendSpacePlayer_DEF598B442C38B634D0082B4BBDE535A"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PcMNew_FP_Test.PcMNew_FP_Test_C.ExecuteUbergraph_PcMNew_FP_Test
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPcMNew_FP_Test_C::ExecuteUbergraph_PcMNew_FP_Test(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PcMNew_FP_Test.PcMNew_FP_Test_C.ExecuteUbergraph_PcMNew_FP_Test"));

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
