#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_PcMNew_FP_Test_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass PcMNew_FP_Test.PcMNew_FP_Test_C
// 0x4458 (0x4B48 - 0x06F0)
class UPcMNew_FP_Test_C : public UCrowCharacterAnimInstFP
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x06F8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0718(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_3;                                   // 0x0720(0x0190)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_2;                                   // 0x08B0(0x0190)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik;                                     // 0x0A40(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                         // 0x0BD0(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                          // 0x0C90(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_10;                          // 0x0CE0(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_16;                           // 0x0E38(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_15;                           // 0x0E60(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9;                           // 0x0E88(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_14;                           // 0x0FE0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                         // 0x1008(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13;                           // 0x10C8(0x0028)
	struct FAnimNode_Root                              AnimGraphNode_Root_2;                                     // 0x10F0(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_35;                        // 0x1120(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34;                        // 0x1148(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33;                        // 0x1170(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32;                        // 0x1198(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31;                        // 0x11C0(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                             // 0x11E8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                          // 0x1218(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                             // 0x1298(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                          // 0x12C8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                             // 0x1348(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x1378(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x1418(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x1498(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x1518(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x15B8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x1658(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x16D8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x1758(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                          // 0x17D8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x1888(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                             // 0x1908(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5;                             // 0x1938(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30;                        // 0x19E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29;                        // 0x1A10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                        // 0x1A38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                        // 0x1A60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                        // 0x1A88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                        // 0x1AB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                        // 0x1AD8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                        // 0x1B00(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                        // 0x1B28(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                        // 0x1B50(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                        // 0x1B78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                        // 0x1BA0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                        // 0x1BC8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                        // 0x1BF0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                        // 0x1C18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                        // 0x1C40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                        // 0x1C68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                        // 0x1C90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                        // 0x1CB8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                         // 0x1CE0(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12;                           // 0x1DA0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x1DC8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                             // 0x1E48(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                        // 0x1E78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x1EA0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x1EC8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                             // 0x1F48(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x1F78(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                             // 0x1FF8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x2028(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                              // 0x20A8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x20D8(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5;                         // 0x2100(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x21E8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x2268(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x2308(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x23A8(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                         // 0x2428(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x2510(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x25C0(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                              // 0x26A8(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                           // 0x26D8(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x2700(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                             // 0x2730(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8;                           // 0x27E0(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7;                           // 0x2938(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6;                           // 0x2A90(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                           // 0x2BE8(0x0158)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x2D40(0x0020)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2;                                // 0x2D60(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                  // 0x2F40(0x01E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                           // 0x3120(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x3148(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x3170(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                            // 0x3198(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x31C0(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                            // 0x31F0(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x3218(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                             // 0x3248(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                           // 0x32F8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                            // 0x3450(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x3478(0x0158)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x35D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x35F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x3620(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x3648(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x3670(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x3698(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x36C0(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x36E8(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x3718(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x3740(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x3770(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x3798(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x37C8(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x3878(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x39D0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                     // 0x39F8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x3A40(0x00E8)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive;                     // 0x3B28(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x3BF8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x3C40(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x3D28(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x3DA8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x3E48(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x3E78(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x3F28(0x0158)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose;                            // 0x4080(0x0118)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x4198(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x41C0(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                           // 0x4208(0x01D8) (CPF_ContainsInstancedReference)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x43E0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x4408(0x00C0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                // 0x44C8(0x00C8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                               // 0x4590(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x4698(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x46B8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x46D8(0x0108)
	struct FAnimNode_AimLocationGather                 AnimGraphNode_CharacterAimLocationGather;                 // 0x47E0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x4810(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x4840(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x4948(0x0020)
	struct FAnimNode_LinkedAnimLayer                   AnimGraphNode_LinkedAnimLayer;                            // 0x4968(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x4A18(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x4B20(0x0020)
	class USkeletalMeshComponent*                      TargetMesh;                                               // 0x4B40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass PcMNew_FP_Test.PcMNew_FP_Test_C"));
		return ptr;
	}


	void Hand_IK(const struct FPoseLink& InPose, struct FPoseLink* Hand_IK);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_ModifyBone_B8D82B5F4F5DC57AF1299EB7E1F05BE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_ModifyBone_D1B40B1C46C3DBF89960B2AE680357EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_BlendSpacePlayer_EF9EE931439B107C756764982B986ACE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PcMNew_FP_Test_AnimGraphNode_BlendSpacePlayer_DEF598B442C38B634D0082B4BBDE535A();
	void ExecuteUbergraph_PcMNew_FP_Test(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
