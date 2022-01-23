#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_M240B_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass M240B_AnimBlueprint.M240B_AnimBlueprint_C
// 0x02F0 (0x05D0 - 0x02E0)
class UM240B_AnimBlueprint_C : public UCrowWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02E8(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x0318(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0338(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0380(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x03A0(0x0020)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon_2;                            // 0x03C0(0x0100)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                // 0x04C0(0x0010)
	struct FAnimNode_VehicleWeaponHandler              AnimGraphNode_VehicleWeapon;                              // 0x04D0(0x0100)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass M240B_AnimBlueprint.M240B_AnimBlueprint_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M240B_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
