// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapPlanes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapPlanesComponent::RequestPlanesAsync()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<EMagicLeapPlaneQueryFlags> InPriority                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<EMagicLeapPlaneQueryFlags> InFlagsToReorder               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<EMagicLeapPlaneQueryFlags> OutReorderedFlags              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMagicLeapPlanesFunctionLibrary::ReorderPlaneFlags(TArray<EMagicLeapPlaneQueryFlags> InPriority, TArray<EMagicLeapPlaneQueryFlags> InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>* OutReorderedFlags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags"));

	struct
	{
		TArray<EMagicLeapPlaneQueryFlags> InPriority;
		TArray<EMagicLeapPlaneQueryFlags> InFlagsToReorder;
		TArray<EMagicLeapPlaneQueryFlags> OutReorderedFlags;
	} params;

	params.InPriority = InPriority;
	params.InFlagsToReorder = InFlagsToReorder;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutReorderedFlags != nullptr)
		*OutReorderedFlags = params.OutReorderedFlags;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FGuid                   Handle                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapPlanesFunctionLibrary::RemovePersistentQuery(const struct FGuid& Handle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery"));

	struct
	{
		struct FGuid                   Handle;
		bool                           ReturnValue;
	} params;

	params.Handle = Handle;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<EMagicLeapPlaneQueryFlags> InQueryFlags                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<EMagicLeapPlaneQueryFlags> InResultFlags                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<EMagicLeapPlaneQueryFlags> OutFlags                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMagicLeapPlanesFunctionLibrary::RemoveFlagsNotInQuery(TArray<EMagicLeapPlaneQueryFlags> InQueryFlags, TArray<EMagicLeapPlaneQueryFlags> InResultFlags, TArray<EMagicLeapPlaneQueryFlags>* OutFlags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery"));

	struct
	{
		TArray<EMagicLeapPlaneQueryFlags> InQueryFlags;
		TArray<EMagicLeapPlaneQueryFlags> InResultFlags;
		TArray<EMagicLeapPlaneQueryFlags> OutFlags;
	} params;

	params.InQueryFlags = InQueryFlags;
	params.InResultFlags = InResultFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutFlags != nullptr)
		*OutFlags = params.OutFlags;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FMagicLeapPlanesQuery   Query                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         ResultDelegate                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapPlanesFunctionLibrary::PlanesQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync"));

	struct
	{
		struct FMagicLeapPlanesQuery   Query;
		struct FScriptDelegate         ResultDelegate;
		bool                           ReturnValue;
	} params;

	params.Query = Query;
	params.ResultDelegate = ResultDelegate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FMagicLeapPlanesQuery   Query                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FGuid                   Handle                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         ResultDelegate                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapPlanesFunctionLibrary::PlanesPersistentQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FGuid& Handle, const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync"));

	struct
	{
		struct FMagicLeapPlanesQuery   Query;
		struct FGuid                   Handle;
		struct FScriptDelegate         ResultDelegate;
		bool                           ReturnValue;
	} params;

	params.Query = Query;
	params.Handle = Handle;
	params.ResultDelegate = ResultDelegate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapPlanesFunctionLibrary::IsTrackerValid()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  ContentActor                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMagicLeapPlaneResult   PlaneResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UMagicLeapPlanesFunctionLibrary::GetContentScale(class AActor* ContentActor, const struct FMagicLeapPlaneResult& PlaneResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale"));

	struct
	{
		class AActor*                  ContentActor;
		struct FMagicLeapPlaneResult   PlaneResult;
		struct FTransform              ReturnValue;
	} params;

	params.ContentActor = ContentActor;
	params.PlaneResult = PlaneResult;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapPlanesFunctionLibrary::DestroyTracker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapPlanesFunctionLibrary::CreateTracker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// EMagicLeapPlaneQueryType       PersistentQueryType            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGuid                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FGuid UMagicLeapPlanesFunctionLibrary::AddPersistentQuery(EMagicLeapPlaneQueryType PersistentQueryType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery"));

	struct
	{
		EMagicLeapPlaneQueryType       PersistentQueryType;
		struct FGuid                   ReturnValue;
	} params;

	params.PersistentQueryType = PersistentQueryType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
