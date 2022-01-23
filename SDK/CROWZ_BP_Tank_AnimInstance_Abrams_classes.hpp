#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_Tank_AnimInstance_Abrams_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Tank_AnimInstance_Abrams.BP_Tank_AnimInstance_Abrams_C
// 0x07B0 (0x0AA0 - 0x02F0)
class UBP_Tank_AnimInstance_Abrams_C : public UCrowCarAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02F8(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                // 0x0328(0x0010)
	struct FAnimNode_CrowLandWheelsHandler             AnimGraphNode_CrowLandWheelsHandler;                      // 0x0338(0x0130)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0468(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x0488(0x0108)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon_5;                            // 0x0590(0x0100)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon_4;                            // 0x0690(0x0100)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon_3;                            // 0x0790(0x0100)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon_2;                            // 0x0890(0x0100)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon;                              // 0x0990(0x0100)
	float                                              CannonFireForce;                                          // 0x0A90(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CannonFireForceTime;                                      // 0x0A94(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 CannonFireForceCurve;                                     // 0x0A98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Tank_AnimInstance_Abrams.BP_Tank_AnimInstance_Abrams_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Tank_AnimInstance_Abrams_AnimGraphNode_ModifyBone_CBBE30964F27775EA8B22D8FFA060E15();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void PlayAnimCannon();
	void ExecuteUbergraph_BP_Tank_AnimInstance_Abrams(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
