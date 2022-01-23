#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowLobbyCharacter_Anim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_CrowLobbyCharacter_Anim.BP_CrowLobbyCharacter_Anim_C
// 0x12C8 (0x1638 - 0x0370)
class UBP_CrowLobbyCharacter_Anim_C : public UCrowLobbyCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                        // 0x0378(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                         // 0x03A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                         // 0x03C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x03F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x0418(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x0440(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x0468(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x0490(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x04B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x04E0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x0508(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x0588(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x05B8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x0638(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x0668(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x06E8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0718(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x0798(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x07C8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x0848(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x0878(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x08A8(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0958(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x09A0(0x0020)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2;                                // 0x09C0(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                  // 0x0BA0(0x01E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0D80(0x0020)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_2;                                   // 0x0DA0(0x0190)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0F30(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x0F60(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0F88(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik;                                     // 0x0F90(0x0190)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x1120(0x0108)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x1228(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x12E8(0x0028)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                          // 0x1310(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x1360(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x14B8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x1610(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_CrowLobbyCharacter_Anim.BP_CrowLobbyCharacter_Anim_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CrowLobbyCharacter_Anim_AnimGraphNode_TransitionResult_AF9314E840D323D2BF463AB81430672C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CrowLobbyCharacter_Anim_AnimGraphNode_TransitionResult_E3565769457E7F4A37582A96F52C7021();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CrowLobbyCharacter_Anim_AnimGraphNode_TransitionResult_7A1EA7D8447009EEAB11C19AE3006F66();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CrowLobbyCharacter_Anim_AnimGraphNode_TransitionResult_2BE841E94E7A050BDF88CFAE0BEEB74A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CrowLobbyCharacter_Anim_AnimGraphNode_TransitionResult_B9487B4D44E7713375395BA84D09658C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CrowLobbyCharacter_Anim_AnimGraphNode_TransitionResult_A31C1D68411E04A9B6C3F6BA5878D922();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CrowLobbyCharacter_Anim_AnimGraphNode_TransitionResult_4168D4164EC99301AB7E04B1FD184881();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CrowLobbyCharacter_Anim_AnimGraphNode_TransitionResult_7385740E4354B1D5C5C835B62077DF97();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CrowLobbyCharacter_Anim_AnimGraphNode_TransitionResult_DE15BAA342DCFCB8F458C2AF0D20DB0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CrowLobbyCharacter_Anim_AnimGraphNode_TransitionResult_DFCD8FD947719A84416359AB12F9D4B9();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BP_CrowLobbyCharacter_Anim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
