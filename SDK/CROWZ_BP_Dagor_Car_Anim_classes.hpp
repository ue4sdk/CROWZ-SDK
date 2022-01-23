#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_Dagor_Car_Anim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Dagor_Car_Anim.BP_Dagor_Car_Anim_C
// 0x04A0 (0x0790 - 0x02F0)
class UBP_Dagor_Car_Anim_C : public UCrowCarAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02F8(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                // 0x0328(0x0010)
	struct FAnimNode_CrowLandWheelsHandler             AnimGraphNode_CrowLandWheelsHandler;                      // 0x0338(0x0130)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0468(0x0020)
	struct FAnimNode_CarDashBoardHandler               AnimGraphNode_VehicleCarDashBoard;                        // 0x0488(0x0118)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon;                              // 0x05A0(0x0100)
	struct FAnimNode_CarSteeringHandler                AnimGraphNode_VehicleCarSteering;                         // 0x06A0(0x00F0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Dagor_Car_Anim.BP_Dagor_Car_Anim_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BP_Dagor_Car_Anim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
