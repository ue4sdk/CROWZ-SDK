#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_Tank_AnimInstance_Abrams_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Tank_AnimInstance_Abrams_02.BP_Tank_AnimInstance_Abrams_02_C
// 0x06A8 (0x0998 - 0x02F0)
class UBP_Tank_AnimInstance_Abrams_02_C : public UCrowCarAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                // 0x02F8(0x0010)
	struct FAnimNode_CrowLandWheelsHandler             AnimGraphNode_CrowLandWheelsHandler;                      // 0x0308(0x0130)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0438(0x0020)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon_5;                            // 0x0458(0x0100)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0558(0x0030)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon_4;                            // 0x0588(0x0100)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon_3;                            // 0x0688(0x0100)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon_2;                            // 0x0788(0x0100)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon;                              // 0x0888(0x0100)
	float                                              CannonFireForce;                                          // 0x0988(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CannonFireForceTime;                                      // 0x098C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 CannonFireForceCurve;                                     // 0x0990(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Tank_AnimInstance_Abrams_02.BP_Tank_AnimInstance_Abrams_02_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void PlayAnimCannon();
	void ExecuteUbergraph_BP_Tank_AnimInstance_Abrams_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
