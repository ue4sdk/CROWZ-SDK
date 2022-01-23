#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_Tank_AnimInstance_T90_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Tank_AnimInstance_T90.BP_Tank_AnimInstance_T90_C
// 0x0598 (0x0888 - 0x02F0)
class UBP_Tank_AnimInstance_T90_C : public UCrowCarAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02F8(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                // 0x0328(0x0010)
	struct FAnimNode_CrowLandWheelsHandler             AnimGraphNode_CrowLandWheelsHandler;                      // 0x0338(0x0130)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0468(0x0020)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon_4;                            // 0x0488(0x0100)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon_3;                            // 0x0588(0x0100)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon_2;                            // 0x0688(0x0100)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon;                              // 0x0788(0x0100)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Tank_AnimInstance_T90.BP_Tank_AnimInstance_T90_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_Tank_AnimInstance_T90(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
