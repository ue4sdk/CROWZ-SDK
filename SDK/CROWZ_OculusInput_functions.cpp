// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_OculusInput_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OculusInput.OculusInputFunctionLibrary.IsPointerPoseValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EOculusHandType                DeviceHand                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ControllerIndex                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusInputFunctionLibrary::IsPointerPoseValid(EOculusHandType DeviceHand, int ControllerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusInput.OculusInputFunctionLibrary.IsPointerPoseValid"));

	struct
	{
		EOculusHandType                DeviceHand;
		int                            ControllerIndex;
		bool                           ReturnValue;
	} params;

	params.DeviceHand = DeviceHand;
	params.ControllerIndex = ControllerIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OculusInput.OculusInputFunctionLibrary.IsHandTrackingEnabled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusInputFunctionLibrary::IsHandTrackingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusInput.OculusInputFunctionLibrary.IsHandTrackingEnabled"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OculusInput.OculusInputFunctionLibrary.InitializeHandPhysics
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EOculusHandType                SkeletonType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USkinnedMeshComponent*   HandComponent                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          WorldToMeters                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FOculusCapsuleCollider> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

TArray<struct FOculusCapsuleCollider> UOculusInputFunctionLibrary::InitializeHandPhysics(EOculusHandType SkeletonType, class USkinnedMeshComponent* HandComponent, float WorldToMeters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusInput.OculusInputFunctionLibrary.InitializeHandPhysics"));

	struct
	{
		EOculusHandType                SkeletonType;
		class USkinnedMeshComponent*   HandComponent;
		float                          WorldToMeters;
		TArray<struct FOculusCapsuleCollider> ReturnValue;
	} params;

	params.SkeletonType = SkeletonType;
	params.HandComponent = HandComponent;
	params.WorldToMeters = WorldToMeters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OculusInput.OculusInputFunctionLibrary.GetTrackingConfidence
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EOculusHandType                DeviceHand                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ControllerIndex                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETrackingConfidence            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

ETrackingConfidence UOculusInputFunctionLibrary::GetTrackingConfidence(EOculusHandType DeviceHand, int ControllerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusInput.OculusInputFunctionLibrary.GetTrackingConfidence"));

	struct
	{
		EOculusHandType                DeviceHand;
		int                            ControllerIndex;
		ETrackingConfidence            ReturnValue;
	} params;

	params.DeviceHand = DeviceHand;
	params.ControllerIndex = ControllerIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OculusInput.OculusInputFunctionLibrary.GetPointerPose
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EOculusHandType                DeviceHand                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ControllerIndex                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UOculusInputFunctionLibrary::GetPointerPose(EOculusHandType DeviceHand, int ControllerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusInput.OculusInputFunctionLibrary.GetPointerPose"));

	struct
	{
		EOculusHandType                DeviceHand;
		int                            ControllerIndex;
		struct FTransform              ReturnValue;
	} params;

	params.DeviceHand = DeviceHand;
	params.ControllerIndex = ControllerIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OculusInput.OculusInputFunctionLibrary.GetHandSkeletalMesh
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USkeletalMesh*           HandSkeletalMesh               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EOculusHandType                SkeletonType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EOculusHandType                MeshType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          WorldToMeters                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusInputFunctionLibrary::GetHandSkeletalMesh(class USkeletalMesh* HandSkeletalMesh, EOculusHandType SkeletonType, EOculusHandType MeshType, float WorldToMeters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusInput.OculusInputFunctionLibrary.GetHandSkeletalMesh"));

	struct
	{
		class USkeletalMesh*           HandSkeletalMesh;
		EOculusHandType                SkeletonType;
		EOculusHandType                MeshType;
		float                          WorldToMeters;
		bool                           ReturnValue;
	} params;

	params.HandSkeletalMesh = HandSkeletalMesh;
	params.SkeletonType = SkeletonType;
	params.MeshType = MeshType;
	params.WorldToMeters = WorldToMeters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OculusInput.OculusInputFunctionLibrary.GetHandScale
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EOculusHandType                DeviceHand                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ControllerIndex                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UOculusInputFunctionLibrary::GetHandScale(EOculusHandType DeviceHand, int ControllerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusInput.OculusInputFunctionLibrary.GetHandScale"));

	struct
	{
		EOculusHandType                DeviceHand;
		int                            ControllerIndex;
		float                          ReturnValue;
	} params;

	params.DeviceHand = DeviceHand;
	params.ControllerIndex = ControllerIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OculusInput.OculusInputFunctionLibrary.GetDominantHand
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ControllerIndex                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EOculusHandType                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EOculusHandType UOculusInputFunctionLibrary::GetDominantHand(int ControllerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusInput.OculusInputFunctionLibrary.GetDominantHand"));

	struct
	{
		int                            ControllerIndex;
		EOculusHandType                ReturnValue;
	} params;

	params.ControllerIndex = ControllerIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OculusInput.OculusInputFunctionLibrary.GetBoneRotation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EOculusHandType                DeviceHand                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBone                          BoneId                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ControllerIndex                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FQuat                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FQuat UOculusInputFunctionLibrary::GetBoneRotation(EOculusHandType DeviceHand, EBone BoneId, int ControllerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusInput.OculusInputFunctionLibrary.GetBoneRotation"));

	struct
	{
		EOculusHandType                DeviceHand;
		EBone                          BoneId;
		int                            ControllerIndex;
		struct FQuat                   ReturnValue;
	} params;

	params.DeviceHand = DeviceHand;
	params.BoneId = BoneId;
	params.ControllerIndex = ControllerIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OculusInput.OculusInputFunctionLibrary.GetBoneName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EBone                          BoneId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UOculusInputFunctionLibrary::GetBoneName(EBone BoneId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OculusInput.OculusInputFunctionLibrary.GetBoneName"));

	struct
	{
		EBone                          BoneId;
		struct FString                 ReturnValue;
	} params;

	params.BoneId = BoneId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
