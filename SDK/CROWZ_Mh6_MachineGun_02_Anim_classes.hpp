#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Mh6_MachineGun_02_Anim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Mh6_MachineGun_02_Anim.Mh6_MachineGun_02_Anim_C
// 0x027C (0x055C - 0x02E0)
class UMh6_MachineGun_02_Anim_C : public UCrowWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02E8(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x0318(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x0420(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0528(0x0020)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                // 0x0548(0x0010)
	float                                              RotorRoll;                                                // 0x0558(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass Mh6_MachineGun_02_Anim.Mh6_MachineGun_02_Anim_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Mh6_MachineGun_02_Anim_AnimGraphNode_ModifyBone_31F1AE55432A6F2A707F39A1B9554F1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Mh6_MachineGun_02_Anim_AnimGraphNode_ModifyBone_B0255D854C07DEBCBBB40C95167884F1();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Mh6_MachineGun_02_Anim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
