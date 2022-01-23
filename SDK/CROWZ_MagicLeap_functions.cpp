// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPurchaseItemDetails    ItemDetails                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UInAppPurchaseComponent::TryPurchaseItemAsync(const struct FPurchaseItemDetails& ItemDetails)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync"));

	struct
	{
		struct FPurchaseItemDetails    ItemDetails;
		bool                           ReturnValue;
	} params;

	params.ItemDetails = ItemDetails;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InNumPages                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UInAppPurchaseComponent::TryGetPurchaseHistoryAsync(int InNumPages)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync"));

	struct
	{
		int                            InNumPages;
		bool                           ReturnValue;
	} params;

	params.InNumPages = InNumPages;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FString>         ItemIDs                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UInAppPurchaseComponent::TryGetItemsDetailsAsync(TArray<struct FString> ItemIDs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync"));

	struct
	{
		TArray<struct FString>         ItemIDs;
		bool                           ReturnValue;
	} params;

	params.ItemIDs = ItemIDs;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FPurchaseConfirmation   PurchaseConfirmations          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UInAppPurchaseComponent::PurchaseConfirmationSuccess__DelegateSignature(const struct FPurchaseConfirmation& PurchaseConfirmations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature"));

	struct
	{
		struct FPurchaseConfirmation   PurchaseConfirmations;
	} params;

	params.PurchaseConfirmations = PurchaseConfirmations;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UInAppPurchaseComponent::PurchaseConfirmationFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 LogMessage                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UInAppPurchaseComponent::InAppPurchaseLogMessage__DelegateSignature(const struct FString& LogMessage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature"));

	struct
	{
		struct FString                 LogMessage;
	} params;

	params.LogMessage = LogMessage;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// TArray<struct FPurchaseConfirmation> PurchaseHistory                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UInAppPurchaseComponent::GetPurchaseHistorySuccess__DelegateSignature(TArray<struct FPurchaseConfirmation> PurchaseHistory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature"));

	struct
	{
		TArray<struct FPurchaseConfirmation> PurchaseHistory;
	} params;

	params.PurchaseHistory = PurchaseHistory;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UInAppPurchaseComponent::GetPurchaseHistoryFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// TArray<struct FPurchaseItemDetails> ItemsDetails                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UInAppPurchaseComponent::GetItemsDetailsSuccess__DelegateSignature(TArray<struct FPurchaseItemDetails> ItemsDetails)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature"));

	struct
	{
		TArray<struct FPurchaseItemDetails> ItemsDetails;
	} params;

	params.ItemsDetails = ItemsDetails;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UInAppPurchaseComponent::GetItemsDetailsFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  InStabilizationDepthActor      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSetFocusActor                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMagicLeapHMDFunctionLibrary::SetStabilizationDepthActor(class AActor* InStabilizationDepthActor, bool bSetFocusActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor"));

	struct
	{
		class AActor*                  InStabilizationDepthActor;
		bool                           bSetFocusActor;
	} params;

	params.InStabilizationDepthActor = InStabilizationDepthActor;
	params.bSetFocusActor = bSetFocusActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  InFocusActor                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSetStabilizationActor         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMagicLeapHMDFunctionLibrary::SetFocusActor(class AActor* InFocusActor, bool bSetStabilizationActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor"));

	struct
	{
		class AActor*                  InFocusActor;
		bool                           bSetStabilizationActor;
	} params;

	params.InFocusActor = InFocusActor;
	params.bSetStabilizationActor = bSetStabilizationActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FRotator                InBaseRotation                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMagicLeapHMDFunctionLibrary::SetBaseRotation(const struct FRotator& InBaseRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation"));

	struct
	{
		struct FRotator                InBaseRotation;
	} params;

	params.InBaseRotation = InBaseRotation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 InBasePosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMagicLeapHMDFunctionLibrary::SetBasePosition(const struct FVector& InBasePosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition"));

	struct
	{
		struct FVector                 InBasePosition;
	} params;

	params.InBasePosition = InBasePosition;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FQuat                   InBaseOrientation              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMagicLeapHMDFunctionLibrary::SetBaseOrientation(const struct FQuat& InBaseOrientation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation"));

	struct
	{
		struct FQuat                   InBaseOrientation;
	} params;

	params.InBaseOrientation = InBaseOrientation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHMDFunctionLibrary::SetAppReady()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHMDFunctionLibrary::IsRunningOnMagicLeapHMD()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMagicLeapHMDFunctionLibrary::GetPlatformAPILevel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel"));

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMagicLeapHMDFunctionLibrary::GetMLSDKVersionRevision()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision"));

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMagicLeapHMDFunctionLibrary::GetMLSDKVersionMinor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor"));

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMagicLeapHMDFunctionLibrary::GetMLSDKVersionMajor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor"));

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UMagicLeapHMDFunctionLibrary::GetMLSDKVersion()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMagicLeapHMDFunctionLibrary::GetMinimumAPILevel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel"));

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FMagicLeapHeadTrackingState State                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHMDFunctionLibrary::GetHeadTrackingState(struct FMagicLeapHeadTrackingState* State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState"));

	struct
	{
		struct FMagicLeapHeadTrackingState State;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (State != nullptr)
		*State = params.State;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TSet<EMagicLeapHeadTrackingMapEvent> MapEvents                      (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHMDFunctionLibrary::GetHeadTrackingMapEvents(TSet<EMagicLeapHeadTrackingMapEvent>* MapEvents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents"));

	struct
	{
		TSet<EMagicLeapHeadTrackingMapEvent> MapEvents;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (MapEvents != nullptr)
		*MapEvents = params.MapEvents;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FMagicLeapGraphicsClientPerformanceInfo PerformanceInfo                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHMDFunctionLibrary::GetGraphicsClientPerformanceInfo(struct FMagicLeapGraphicsClientPerformanceInfo* PerformanceInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo"));

	struct
	{
		struct FMagicLeapGraphicsClientPerformanceInfo PerformanceInfo;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PerformanceInfo != nullptr)
		*PerformanceInfo = params.PerformanceInfo;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMagicLeapTrackingMeshInfo NewMeshInfo                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FMagicLeapMeshBlockRequest> RequestedMesh                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMagicLeapMeshTrackerComponent::SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks"));

	struct
	{
		struct FMagicLeapTrackingMeshInfo NewMeshInfo;
		TArray<struct FMagicLeapMeshBlockRequest> RequestedMesh;
	} params;

	params.NewMeshInfo = NewMeshInfo;

	UObject::ProcessEvent(fn, &params);

	if (RequestedMesh != nullptr)
		*RequestedMesh = params.RequestedMesh;
}


// DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FGuid                   ID                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVector>         Vertices                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    Triangles                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVector>         Normals                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  Confidence                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UMagicLeapMeshTrackerComponent::OnMeshTrackerUpdated__DelegateSignature(const struct FGuid& ID, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature"));

	struct
	{
		struct FGuid                   ID;
		TArray<struct FVector>         Vertices;
		TArray<int>                    Triangles;
		TArray<struct FVector>         Normals;
		TArray<float>                  Confidence;
	} params;

	params.ID = ID;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.Confidence = Confidence;

	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMagicLeapMeshTrackerComponent::GetNumQueuedBlockUpdates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMagicLeapMeshTrackerComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh"));

	struct
	{
		class UMRMeshComponent*        InMRMeshPtr;
	} params;

	params.InMRMeshPtr = InMRMeshPtr;

	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMagicLeapMeshTrackerComponent::DisconnectBlockSelector()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMagicLeapMeshTrackerComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh"));

	struct
	{
		class UMRMeshComponent*        InMRMeshPtr;
	} params;

	params.InMRMeshPtr = InMRMeshPtr;

	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UMagicLeapMeshBlockSelectorInterface> Selector                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

void UMagicLeapMeshTrackerComponent::ConnectBlockSelector(const TScriptInterface<class UMagicLeapMeshBlockSelectorInterface>& Selector)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector"));

	struct
	{
		TScriptInterface<class UMagicLeapMeshBlockSelectorInterface> Selector;
	} params;

	params.Selector = Selector;

	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMagicLeapTrackingMeshInfo NewMeshInfo                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FMagicLeapMeshBlockRequest> RequestedMesh                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UMagicLeapMeshBlockSelectorInterface::SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks"));

	struct
	{
		struct FMagicLeapTrackingMeshInfo NewMeshInfo;
		TArray<struct FMagicLeapMeshBlockRequest> RequestedMesh;
	} params;

	params.NewMeshInfo = NewMeshInfo;

	UObject::ProcessEvent(fn, &params);

	if (RequestedMesh != nullptr)
		*RequestedMesh = params.RequestedMesh;
}


// Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FMagicLeapRaycastQueryParams RequestParams                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         ResultDelegate                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapRaycastComponent::RequestRaycast(const struct FMagicLeapRaycastQueryParams& RequestParams, const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast"));

	struct
	{
		struct FMagicLeapRaycastQueryParams RequestParams;
		struct FScriptDelegate         ResultDelegate;
		bool                           ReturnValue;
	} params;

	params.RequestParams = RequestParams;
	params.ResultDelegate = ResultDelegate;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FMagicLeapRaycastHitResult HitResult                      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMagicLeapRaycastComponent::RaycastResultDelegate__DelegateSignature(const struct FMagicLeapRaycastHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature"));

	struct
	{
		struct FMagicLeapRaycastHitResult HitResult;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Direction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 UpVector                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Width                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Height                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          HorizontalFovDegrees           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           CollideWithUnobserved          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            UserData                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMagicLeapRaycastQueryParams ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FMagicLeapRaycastQueryParams UMagicLeapRaycastFunctionLibrary::MakeRaycastQueryParams(const struct FVector& position, const struct FVector& Direction, const struct FVector& UpVector, int Width, int Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int UserData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams"));

	struct
	{
		struct FVector                 position;
		struct FVector                 Direction;
		struct FVector                 UpVector;
		int                            Width;
		int                            Height;
		float                          HorizontalFovDegrees;
		bool                           CollideWithUnobserved;
		int                            UserData;
		struct FMagicLeapRaycastQueryParams ReturnValue;
	} params;

	params.position = position;
	params.Direction = Direction;
	params.UpVector = UpVector;
	params.Width = Width;
	params.Height = Height;
	params.HorizontalFovDegrees = HorizontalFovDegrees;
	params.CollideWithUnobserved = CollideWithUnobserved;
	params.UserData = UserData;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
