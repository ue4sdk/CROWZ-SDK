// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapARPin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMagicLeapARPinComponent::UnPin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.UnPin"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /* UMagicLeapARPinSaveGame*/ InPinDataClass                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           OutPinDataValid                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMagicLeapARPinSaveGame* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::TryGetPinData(class UClass* /* UMagicLeapARPinSaveGame*/ InPinDataClass, bool* OutPinDataValid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData"));

	struct
	{
		class UClass* /* UMagicLeapARPinSaveGame*/ InPinDataClass;
		bool                           OutPinDataValid;
		class UMagicLeapARPinSaveGame* ReturnValue;
	} params;

	params.InPinDataClass = InPinDataClass;

	UObject::ProcessEvent(fn, &params);

	if (OutPinDataValid != nullptr)
		*OutPinDataValid = params.OutPinDataValid;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::PinToRestoredOrSyncedID()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinToID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FGuid                   PinId                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::PinToID(const struct FGuid& PinId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.PinToID"));

	struct
	{
		struct FGuid                   PinId;
		bool                           ReturnValue;
	} params;

	params.PinId = PinId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMagicLeapARPinComponent::PinToBestFit()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToPin                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::PinSceneComponent(class USceneComponent* ComponentToPin)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent"));

	struct
	{
		class USceneComponent*         ComponentToPin;
		bool                           ReturnValue;
	} params;

	params.ComponentToPin = ComponentToPin;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::PinRestoredOrSynced()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  ActorToPin                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::PinActor(class AActor* ActorToPin)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.PinActor"));

	struct
	{
		class AActor*                  ActorToPin;
		bool                           ReturnValue;
	} params;

	params.ActorToPin = ActorToPin;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bRestoredOrSynced              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMagicLeapARPinComponent::PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature"));

	struct
	{
		bool                           bRestoredOrSynced;
	} params;

	params.bRestoredOrSynced = bRestoredOrSynced;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UMagicLeapARPinComponent::PersistentEntityPinLost__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bDataRestored                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMagicLeapARPinComponent::MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature"));

	struct
	{
		bool                           bDataRestored;
	} params;

	params.bDataRestored = bDataRestored;

	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::IsPinned()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FMagicLeapARPinState    State                          (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::GetPinState(struct FMagicLeapARPinState* State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState"));

	struct
	{
		struct FMagicLeapARPinState    State;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (State != nullptr)
		*State = params.State;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGuid                   PinId                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::GetPinnedPinID(struct FGuid* PinId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID"));

	struct
	{
		struct FGuid                   PinId;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PinId != nullptr)
		*PinId = params.PinId;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /* UMagicLeapARPinSaveGame*/ PinDataClass                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMagicLeapARPinSaveGame* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::GetPinData(class UClass* /* UMagicLeapARPinSaveGame*/ PinDataClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData"));

	struct
	{
		class UClass* /* UMagicLeapARPinSaveGame*/ PinDataClass;
		class UMagicLeapARPinSaveGame* ReturnValue;
	} params;

	params.PinDataClass = PinDataClass;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMagicLeapARPinComponent::AttemptPinDataRestorationAsync()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::AttemptPinDataRestoration()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapContentBindingFoundDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate"));

	struct
	{
		struct FScriptDelegate         Delegate;
	} params;

	params.Delegate = Delegate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate"));

	struct
	{
		struct FScriptDelegate         Delegate;
	} params;

	params.Delegate = Delegate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FMagicLeapARPinQuery    InGlobalFilter                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// EMagicLeapPassableWorldError   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::SetGlobalQueryFilter(const struct FMagicLeapARPinQuery& InGlobalFilter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter"));

	struct
	{
		struct FMagicLeapARPinQuery    InGlobalFilter;
		EMagicLeapPassableWorldError   ReturnValue;
	} params;

	params.InGlobalFilter = InGlobalFilter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            UserIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMagicLeapARPinFunctionLibrary::SetContentBindingSaveGameUserIndex(int UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex"));

	struct
	{
		int                            UserIndex;
	} params;

	params.UserIndex = UserIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FMagicLeapARPinQuery    Query                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FGuid>           Pins                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EMagicLeapPassableWorldError   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::QueryARPins(const struct FMagicLeapARPinQuery& Query, TArray<struct FGuid>* Pins)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins"));

	struct
	{
		struct FMagicLeapARPinQuery    Query;
		TArray<struct FGuid>           Pins;
		EMagicLeapPassableWorldError   ReturnValue;
	} params;

	params.Query = Query;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Pins != nullptr)
		*Pins = params.Pins;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 PinIdString                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGuid                   ARPinId                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapARPinFunctionLibrary::ParseStringToARPinId(const struct FString& PinIdString, struct FGuid* ARPinId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId"));

	struct
	{
		struct FString                 PinIdString;
		struct FGuid                   ARPinId;
		bool                           ReturnValue;
	} params;

	params.PinIdString = PinIdString;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ARPinId != nullptr)
		*ARPinId = params.ARPinId;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapARPinFunctionLibrary::IsTrackerValid()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapPassableWorldError   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetNumAvailableARPins(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins"));

	struct
	{
		int                            Count;
		EMagicLeapPassableWorldError   ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Count != nullptr)
		*Count = params.Count;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FMagicLeapARPinQuery    CurrentGlobalFilter            (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// EMagicLeapPassableWorldError   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetGlobalQueryFilter(struct FMagicLeapARPinQuery* CurrentGlobalFilter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter"));

	struct
	{
		struct FMagicLeapARPinQuery    CurrentGlobalFilter;
		EMagicLeapPassableWorldError   ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (CurrentGlobalFilter != nullptr)
		*CurrentGlobalFilter = params.CurrentGlobalFilter;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMagicLeapARPinFunctionLibrary::GetContentBindingSaveGameUserIndex()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex"));

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 SearchPoint                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGuid                   PinId                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapPassableWorldError   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin"));

	struct
	{
		struct FVector                 SearchPoint;
		struct FGuid                   PinId;
		EMagicLeapPassableWorldError   ReturnValue;
	} params;

	params.SearchPoint = SearchPoint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PinId != nullptr)
		*PinId = params.PinId;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            NumRequested                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FGuid>           Pins                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EMagicLeapPassableWorldError   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetAvailableARPins(int NumRequested, TArray<struct FGuid>* Pins)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins"));

	struct
	{
		int                            NumRequested;
		TArray<struct FGuid>           Pins;
		EMagicLeapPassableWorldError   ReturnValue;
	} params;

	params.NumRequested = NumRequested;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Pins != nullptr)
		*Pins = params.Pins;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FMagicLeapARPinState    State                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UMagicLeapARPinFunctionLibrary::GetARPinStateToString(const struct FMagicLeapARPinState& State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString"));

	struct
	{
		struct FMagicLeapARPinState    State;
		struct FString                 ReturnValue;
	} params;

	params.State = State;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FGuid                   PinId                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMagicLeapARPinState    State                          (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// EMagicLeapPassableWorldError   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetARPinState(const struct FGuid& PinId, struct FMagicLeapARPinState* State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState"));

	struct
	{
		struct FGuid                   PinId;
		struct FMagicLeapARPinState    State;
		EMagicLeapPassableWorldError   ReturnValue;
	} params;

	params.PinId = PinId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (State != nullptr)
		*State = params.State;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FGuid                   PinId                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 position                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           PinFoundInEnvironment          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinId, struct FVector* position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace"));

	struct
	{
		struct FGuid                   PinId;
		struct FVector                 position;
		struct FRotator                Orientation;
		bool                           PinFoundInEnvironment;
		bool                           ReturnValue;
	} params;

	params.PinId = PinId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (position != nullptr)
		*position = params.position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (PinFoundInEnvironment != nullptr)
		*PinFoundInEnvironment = params.PinFoundInEnvironment;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FGuid                   PinId                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 position                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           PinFoundInEnvironment          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation(const struct FGuid& PinId, struct FVector* position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation"));

	struct
	{
		struct FGuid                   PinId;
		struct FVector                 position;
		struct FRotator                Orientation;
		bool                           PinFoundInEnvironment;
		bool                           ReturnValue;
	} params;

	params.PinId = PinId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (position != nullptr)
		*position = params.position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (PinFoundInEnvironment != nullptr)
		*PinFoundInEnvironment = params.PinFoundInEnvironment;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMagicLeapPassableWorldError   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::DestroyTracker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker"));

	struct
	{
		EMagicLeapPassableWorldError   ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMagicLeapPassableWorldError   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::CreateTracker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker"));

	struct
	{
		EMagicLeapPassableWorldError   ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapContentBindingFoundDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate"));

	struct
	{
		struct FScriptDelegate         Delegate;
	} params;

	params.Delegate = Delegate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate"));

	struct
	{
		struct FScriptDelegate         Delegate;
	} params;

	params.Delegate = Delegate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGuid                   ARPinId                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UMagicLeapARPinFunctionLibrary::ARPinIdToString(const struct FGuid& ARPinId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString"));

	struct
	{
		struct FGuid                   ARPinId;
		struct FString                 ReturnValue;
	} params;

	params.ARPinId = ARPinId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMagicLeapARPinInfoActorBase::OnUpdateARPinState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// bool                           InVisibilityOverride           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMagicLeapARPinRenderer::SetVisibilityOverride(bool InVisibilityOverride)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride"));

	struct
	{
		bool                           InVisibilityOverride;
	} params;

	params.InVisibilityOverride = InVisibilityOverride;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
