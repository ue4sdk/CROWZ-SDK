#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_PcMNew_FPBody_Test_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass PcMNew_FPBody_Test.PcMNew_FPBody_Test_C
// 0x0468 (0x0728 - 0x02C0)
class UPcMNew_FPBody_Test_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                           // 0x02F8(0x01D8) (CPF_ContainsInstancedReference)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x04D0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x05D8(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x06E0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0700(0x0020)
	class USkeletalMeshComponent*                      TargetMesh;                                               // 0x0720(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass PcMNew_FPBody_Test.PcMNew_FPBody_Test_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_PcMNew_FPBody_Test(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
