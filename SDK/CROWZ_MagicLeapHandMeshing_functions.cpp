// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapHandMeshing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInUseWeightedNormals          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMagicLeapHandMeshingComponent::SetUseWeightedNormals(bool bInUseWeightedNormals)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals"));

	struct
	{
		bool                           bInUseWeightedNormals;
	} params;

	params.bInUseWeightedNormals = bInUseWeightedNormals;

	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandMeshingComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh"));

	struct
	{
		class UMRMeshComponent*        InMRMeshPtr;
		bool                           ReturnValue;
	} params;

	params.InMRMeshPtr = InMRMeshPtr;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandMeshingComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh"));

	struct
	{
		class UMRMeshComponent*        InMRMeshPtr;
		bool                           ReturnValue;
	} params;

	params.InMRMeshPtr = InMRMeshPtr;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandMeshingFunctionLibrary::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh"));

	struct
	{
		class UMRMeshComponent*        InMRMeshPtr;
		bool                           ReturnValue;
	} params;

	params.InMRMeshPtr = InMRMeshPtr;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandMeshingFunctionLibrary::DestroyClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandMeshingFunctionLibrary::CreateClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandMeshingFunctionLibrary::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh"));

	struct
	{
		class UMRMeshComponent*        InMRMeshPtr;
		bool                           ReturnValue;
	} params;

	params.InMRMeshPtr = InMRMeshPtr;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
