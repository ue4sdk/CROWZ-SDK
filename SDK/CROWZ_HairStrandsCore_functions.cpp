// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_HairStrandsCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InDesiredPackagePath           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UGroomAsset*             InGroomAsset                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USkeletalMesh*           InSkeletalMesh                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InNumInterpolationPoints       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USkeletalMesh*           InSourceSkeletalMeshForTransfer (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InMatchingSection              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UGroomBindingAsset*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAssetWithPath(const struct FString& InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int InMatchingSection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath"));

	struct
	{
		struct FString                 InDesiredPackagePath;
		class UGroomAsset*             InGroomAsset;
		class USkeletalMesh*           InSkeletalMesh;
		int                            InNumInterpolationPoints;
		class USkeletalMesh*           InSourceSkeletalMeshForTransfer;
		int                            InMatchingSection;
		class UGroomBindingAsset*      ReturnValue;
	} params;

	params.InDesiredPackagePath = InDesiredPackagePath;
	params.InGroomAsset = InGroomAsset;
	params.InSkeletalMesh = InSkeletalMesh;
	params.InNumInterpolationPoints = InNumInterpolationPoints;
	params.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
	params.InMatchingSection = InMatchingSection;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGroomAsset*             InGroomAsset                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USkeletalMesh*           InSkeletalMesh                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InNumInterpolationPoints       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USkeletalMesh*           InSourceSkeletalMeshForTransfer (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InMatchingSection              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UGroomBindingAsset*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int InMatchingSection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset"));

	struct
	{
		class UGroomAsset*             InGroomAsset;
		class USkeletalMesh*           InSkeletalMesh;
		int                            InNumInterpolationPoints;
		class USkeletalMesh*           InSourceSkeletalMeshForTransfer;
		int                            InMatchingSection;
		class UGroomBindingAsset*      ReturnValue;
	} params;

	params.InGroomAsset = InGroomAsset;
	params.InSkeletalMesh = InSkeletalMesh;
	params.InNumInterpolationPoints = InNumInterpolationPoints;
	params.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
	params.InMatchingSection = InMatchingSection;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HairStrandsCore.GroomComponent.SetGroomAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGroomAsset*             Asset                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGroomComponent::SetGroomAsset(class UGroomAsset* Asset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HairStrandsCore.GroomComponent.SetGroomAsset"));

	struct
	{
		class UGroomAsset*             Asset;
	} params;

	params.Asset = Asset;

	UObject::ProcessEvent(fn, &params);
}


// Function HairStrandsCore.GroomComponent.SetBindingAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGroomBindingAsset*      InBinding                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGroomComponent::SetBindingAsset(class UGroomBindingAsset* InBinding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HairStrandsCore.GroomComponent.SetBindingAsset"));

	struct
	{
		class UGroomBindingAsset*      InBinding;
	} params;

	params.InBinding = InBinding;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
