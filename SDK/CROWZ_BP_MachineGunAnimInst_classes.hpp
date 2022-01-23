#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_MachineGunAnimInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_MachineGunAnimInst.BP_MachineGunAnimInst_C
// 0x01E0 (0x04A0 - 0x02C0)
class UBP_MachineGunAnimInst_C : public UCrowWeaponCharacterAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                // 0x02F8(0x0010)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x0308(0x0020)
	struct FAnimNode_MachineGunHandler                 AnimGraphNode_MachineGun;                                 // 0x0328(0x00F0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0418(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0460(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0480(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_MachineGunAnimInst.BP_MachineGunAnimInst_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_MachineGunAnimInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
