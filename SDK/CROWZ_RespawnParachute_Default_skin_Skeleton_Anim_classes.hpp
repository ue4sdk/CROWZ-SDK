#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_RespawnParachute_Default_skin_Skeleton_Anim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass RespawnParachute_Default_skin_Skeleton_Anim.RespawnParachute_Default_skin_Skeleton_Anim_C
// 0x0700 (0x09C0 - 0x02C0)
class URespawnParachute_Default_skin_Skeleton_Anim_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x02F8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x0378(0x0080)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x03F8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x0418(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0520(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x0540(0x0108)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x0648(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x06F8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0778(0x0080)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x07F8(0x0108)
	struct FTransform                                  LeftHandSocketTransform;                                  // 0x0900(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FTransform                                  RightHandSocketTransform;                                 // 0x0930(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	ECrowSkydivingParachuteState                       ParachuteState;                                           // 0x0960(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0961(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           SpreadAnimation;                                          // 0x0968(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequenceBase*                           FallAnimation;                                            // 0x0970(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimSequenceBase*                           LandAnimation;                                            // 0x0978(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BoneTransformAlpha;                                       // 0x0980(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0984(0x000C) MISSED OFFSET
	struct FTransform                                  SpineSocketTransform;                                     // 0x0990(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass RespawnParachute_Default_skin_Skeleton_Anim.RespawnParachute_Default_skin_Skeleton_Anim_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RespawnParachute_Default_skin_Skeleton_Anim_AnimGraphNode_ModifyBone_43EBF22041A1AAD21B1D50AFE743EA12();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RespawnParachute_Default_skin_Skeleton_Anim_AnimGraphNode_ModifyBone_27D9848B4ED173D5010CCD8842893CF2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RespawnParachute_Default_skin_Skeleton_Anim_AnimGraphNode_ModifyBone_D0AB26B443C719499E70B38E6FF84DF4();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_RespawnParachute_Default_skin_Skeleton_Anim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
