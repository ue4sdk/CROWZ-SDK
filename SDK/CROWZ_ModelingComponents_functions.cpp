// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_ModelingComponents_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 LineSetIdentifier              (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bVisible                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPreviewGeometry::SetLineSetVisibility(const struct FString& LineSetIdentifier, bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.SetLineSetVisibility"));

	struct
	{
		struct FString                 LineSetIdentifier;
		bool                           bVisible;
		bool                           ReturnValue;
	} params;

	params.LineSetIdentifier = LineSetIdentifier;
	params.bVisible = bVisible;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 LineSetIdentifier              (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMaterialInterface*      NewMaterial                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPreviewGeometry::SetLineSetMaterial(const struct FString& LineSetIdentifier, class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.SetLineSetMaterial"));

	struct
	{
		struct FString                 LineSetIdentifier;
		class UMaterialInterface*      NewMaterial;
		bool                           ReturnValue;
	} params;

	params.LineSetIdentifier = LineSetIdentifier;
	params.NewMaterial = NewMaterial;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UMaterialInterface*      Material                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPreviewGeometry::SetAllLineSetsMaterial(class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial"));

	struct
	{
		class UMaterialInterface*      Material;
	} params;

	params.Material = Material;

	UObject::ProcessEvent(fn, &params);
}


// Function ModelingComponents.PreviewGeometry.RemoveLineSet
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 LineSetIdentifier              (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bDestroy                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPreviewGeometry::RemoveLineSet(const struct FString& LineSetIdentifier, bool bDestroy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.RemoveLineSet"));

	struct
	{
		struct FString                 LineSetIdentifier;
		bool                           bDestroy;
		bool                           ReturnValue;
	} params;

	params.LineSetIdentifier = LineSetIdentifier;
	params.bDestroy = bDestroy;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           bDestroy                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPreviewGeometry::RemoveAllLineSets(bool bDestroy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.RemoveAllLineSets"));

	struct
	{
		bool                           bDestroy;
	} params;

	params.bDestroy = bDestroy;

	UObject::ProcessEvent(fn, &params);
}


// Function ModelingComponents.PreviewGeometry.GetActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// class APreviewGeometryActor*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class APreviewGeometryActor* UPreviewGeometry::GetActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.GetActor"));

	struct
	{
		class APreviewGeometryActor*   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ModelingComponents.PreviewGeometry.FindLineSet
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 LineSetIdentifier              (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ULineSetComponent*       ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ULineSetComponent* UPreviewGeometry::FindLineSet(const struct FString& LineSetIdentifier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.FindLineSet"));

	struct
	{
		struct FString                 LineSetIdentifier;
		class ULineSetComponent*       ReturnValue;
	} params;

	params.LineSetIdentifier = LineSetIdentifier;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ModelingComponents.PreviewGeometry.Disconnect
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UPreviewGeometry::Disconnect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.Disconnect"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ModelingComponents.PreviewGeometry.CreateInWorld
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class UWorld*                  World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              WithTransform                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UPreviewGeometry::CreateInWorld(class UWorld* World, const struct FTransform& WithTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.CreateInWorld"));

	struct
	{
		class UWorld*                  World;
		struct FTransform              WithTransform;
	} params;

	params.World = World;
	params.WithTransform = WithTransform;

	UObject::ProcessEvent(fn, &params);
}


// Function ModelingComponents.PreviewGeometry.AddLineSet
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 LineSetIdentifier              (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ULineSetComponent*       ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ULineSetComponent* UPreviewGeometry::AddLineSet(const struct FString& LineSetIdentifier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.PreviewGeometry.AddLineSet"));

	struct
	{
		struct FString                 LineSetIdentifier;
		class ULineSetComponent*       ReturnValue;
	} params;

	params.LineSetIdentifier = LineSetIdentifier;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FString> UWeightMapSetProperties::GetWeightMapsFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc"));

	struct
	{
		TArray<struct FString>         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
