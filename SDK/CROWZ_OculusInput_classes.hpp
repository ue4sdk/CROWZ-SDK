#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_OculusInput_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OculusInput.OculusHandComponent
// 0x0090 (0x0880 - 0x07F0)
class UOculusHandComponent : public UPoseableMeshComponent
{
public:
	class UMaterialInterface*                          SystemGestureMaterial;                                    // 0x07F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInitializePhysics;                                       // 0x07F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUpdateHandScale;                                         // 0x07F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x07FA(0x0006) MISSED OFFSET
	class UMaterialInterface*                          MaterialOverride;                                         // 0x0800(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<EBone, struct FName>                          BoneNameMappings;                                         // 0x0808(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	TArray<struct FOculusCapsuleCollider>              CollisionCapsules;                                        // 0x0858(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bSkeletalMeshInitialized;                                 // 0x0868(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0869(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OculusInput.OculusHandComponent"));
		return ptr;
	}

};


// Class OculusInput.OculusInputFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UOculusInputFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OculusInput.OculusInputFunctionLibrary"));
		return ptr;
	}


	static bool IsPointerPoseValid(EOculusHandType DeviceHand, int ControllerIndex);
	static bool IsHandTrackingEnabled();
	static TArray<struct FOculusCapsuleCollider> InitializeHandPhysics(EOculusHandType SkeletonType, class USkinnedMeshComponent* HandComponent, float WorldToMeters);
	static ETrackingConfidence GetTrackingConfidence(EOculusHandType DeviceHand, int ControllerIndex);
	static struct FTransform GetPointerPose(EOculusHandType DeviceHand, int ControllerIndex);
	static bool GetHandSkeletalMesh(class USkeletalMesh* HandSkeletalMesh, EOculusHandType SkeletonType, EOculusHandType MeshType, float WorldToMeters);
	static float GetHandScale(EOculusHandType DeviceHand, int ControllerIndex);
	static EOculusHandType GetDominantHand(int ControllerIndex);
	static struct FQuat GetBoneRotation(EOculusHandType DeviceHand, EBone BoneId, int ControllerIndex);
	static struct FString GetBoneName(EBone BoneId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
