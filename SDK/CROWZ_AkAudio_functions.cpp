// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_AkAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AkAudio.AkAcousticPortal.OpenPortal
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AAkAcousticPortal::OpenPortal()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAcousticPortal.OpenPortal"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkAcousticPortal.GetCurrentState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EAkAcousticPortalState         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EAkAcousticPortalState AAkAcousticPortal::GetCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAcousticPortal.GetCurrentState"));

	struct
	{
		EAkAcousticPortalState         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkAcousticPortal.ClosePortal
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AAkAcousticPortal::ClosePortal()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAcousticPortal.ClosePortal"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkAmbientSound.StopAmbientSound
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AAkAmbientSound::StopAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAmbientSound.StopAmbientSound"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkAmbientSound.StartAmbientSound
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AAkAmbientSound::StartAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAmbientSound.StartAmbientSound"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkAndroidInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering"));

	struct
	{
		bool                           NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkAudioEvent.GetMinimumDuration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAkAudioEvent::GetMinimumDuration()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAudioEvent.GetMinimumDuration"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkAudioEvent.GetMaximumDuration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAkAudioEvent::GetMaximumDuration()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAudioEvent.GetMaximumDuration"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAkAudioEvent::GetMaxAttenuationRadius()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkAudioEvent.GetIsInfinite
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkAudioEvent::GetIsInfinite()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAudioEvent.GetIsInfinite"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameObject.Stop
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAkGameObject::Stop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameObject.Stop"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            CallbackMask                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         PostEventCallback              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// int                            PlayingID                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameObject::PostAssociatedAkEventAsync(class UObject* WorldContextObject, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameObject.PostAssociatedAkEventAsync"));

	struct
	{
		class UObject*                 WorldContextObject;
		int                            CallbackMask;
		struct FScriptDelegate         PostEventCallback;
		TArray<struct FAkExternalSourceInfo> ExternalSources;
		struct FLatentActionInfo       LatentInfo;
		int                            PlayingID;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	UObject::ProcessEvent(fn, &params);

	if (PlayingID != nullptr)
		*PlayingID = params.PlayingID;
}


// Function AkAudio.AkGameObject.PostAssociatedAkEvent
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            CallbackMask                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         PostEventCallback              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAkGameObject::PostAssociatedAkEvent(int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameObject.PostAssociatedAkEvent"));

	struct
	{
		int                            CallbackMask;
		struct FScriptDelegate         PostEventCallback;
		TArray<struct FAkExternalSourceInfo> ExternalSources;
		int                            ReturnValue;
	} params;

	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.ExternalSources = ExternalSources;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameObject.PostAkEventAsync
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PlayingID                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            CallbackMask                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         PostEventCallback              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)

void UAkGameObject::PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameObject.PostAkEventAsync"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UAkAudioEvent*           AkEvent;
		int                            PlayingID;
		int                            CallbackMask;
		struct FScriptDelegate         PostEventCallback;
		TArray<struct FAkExternalSourceInfo> ExternalSources;
		struct FLatentActionInfo       LatentInfo;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.AkEvent = AkEvent;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	UObject::ProcessEvent(fn, &params);

	if (PlayingID != nullptr)
		*PlayingID = params.PlayingID;
}


// Function AkAudio.AkGameObject.PostAkEvent
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            CallbackMask                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         PostEventCallback              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FString                 in_EventName                   (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAkGameObject::PostAkEvent(class UAkAudioEvent* AkEvent, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FString& in_EventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameObject.PostAkEvent"));

	struct
	{
		class UAkAudioEvent*           AkEvent;
		int                            CallbackMask;
		struct FScriptDelegate         PostEventCallback;
		TArray<struct FAkExternalSourceInfo> ExternalSources;
		struct FString                 in_EventName;
		int                            ReturnValue;
	} params;

	params.AkEvent = AkEvent;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.ExternalSources = ExternalSources;
	params.in_EventName = in_EventName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.UseReverbVolumes
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           inUseReverbVolumes             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.UseReverbVolumes"));

	struct
	{
		bool                           inUseReverbVolumes;
	} params;

	params.inUseReverbVolumes = inUseReverbVolumes;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.UseEarlyReflections
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAuxBus*               AuxBus                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Order                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          BusSendGain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MaxPathLength                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           SpotReflectors                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 AuxBusName                     (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkComponent::UseEarlyReflections(class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.UseEarlyReflections"));

	struct
	{
		class UAkAuxBus*               AuxBus;
		int                            Order;
		float                          BusSendGain;
		float                          MaxPathLength;
		bool                           SpotReflectors;
		struct FString                 AuxBusName;
	} params;

	params.AuxBus = AuxBus;
	params.Order = Order;
	params.BusSendGain = BusSendGain;
	params.MaxPathLength = MaxPathLength;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.SetSwitch
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkSwitchValue*          SwitchValue                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 SwitchGroup                    (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 SwitchState                    (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkComponent::SetSwitch(class UAkSwitchValue* SwitchValue, const struct FString& SwitchGroup, const struct FString& SwitchState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetSwitch"));

	struct
	{
		class UAkSwitchValue*          SwitchValue;
		struct FString                 SwitchGroup;
		struct FString                 SwitchState;
	} params;

	params.SwitchValue = SwitchValue;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bStopWhenOwnerDestroyed        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed"));

	struct
	{
		bool                           bStopWhenOwnerDestroyed;
	} params;

	params.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.SetRTPCValue
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkRtpc*                 RTPCValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InterpolationTimeMs            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 RTPC                           (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkComponent::SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int InterpolationTimeMs, const struct FString& RTPC)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetRTPCValue"));

	struct
	{
		class UAkRtpc*                 RTPCValue;
		float                          Value;
		int                            InterpolationTimeMs;
		struct FString                 RTPC;
	} params;

	params.RTPCValue = RTPCValue;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;
	params.RTPC = RTPC;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.SetOutputBusVolume
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          BusVolume                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkComponent::SetOutputBusVolume(float BusVolume)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetOutputBusVolume"));

	struct
	{
		float                          BusVolume;
	} params;

	params.BusVolume = BusVolume;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.SetListeners
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UAkComponent*>    Listeners                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UAkComponent::SetListeners(TArray<class UAkComponent*> Listeners)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetListeners"));

	struct
	{
		TArray<class UAkComponent*>    Listeners;
	} params;

	params.Listeners = Listeners;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.SetEarlyReflectionsVolume
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          SendVolume                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkComponent::SetEarlyReflectionsVolume(float SendVolume)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetEarlyReflectionsVolume"));

	struct
	{
		float                          SendVolume;
	} params;

	params.SendVolume = SendVolume;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 AuxBusName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkComponent::SetEarlyReflectionsAuxBus(const struct FString& AuxBusName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus"));

	struct
	{
		struct FString                 AuxBusName;
	} params;

	params.AuxBusName = AuxBusName;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.SetAttenuationScalingFactor
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkComponent::SetAttenuationScalingFactor(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetAttenuationScalingFactor"));

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.PostTrigger
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkTrigger*              TriggerValue                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Trigger                        (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkComponent::PostTrigger(class UAkTrigger* TriggerValue, const struct FString& Trigger)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostTrigger"));

	struct
	{
		class UAkTrigger*              TriggerValue;
		struct FString                 Trigger;
	} params;

	params.TriggerValue = TriggerValue;
	params.Trigger = Trigger;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            PlayingID                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)

void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync"));

	struct
	{
		int                            PlayingID;
		TArray<struct FAkExternalSourceInfo> ExternalSources;
		struct FLatentActionInfo       LatentInfo;
	} params;

	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	UObject::ProcessEvent(fn, &params);

	if (PlayingID != nullptr)
		*PlayingID = params.PlayingID;
}


// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FAkExternalSourceInfo> ExternalSources                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAkComponent::PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd"));

	struct
	{
		TArray<struct FAkExternalSourceInfo> ExternalSources;
		struct FLatentActionInfo       LatentInfo;
		int                            ReturnValue;
	} params;

	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEventByName
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 in_EventName                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAkComponent::PostAkEventByName(const struct FString& in_EventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAkEventByName"));

	struct
	{
		struct FString                 in_EventName;
		int                            ReturnValue;
	} params;

	params.in_EventName = in_EventName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PlayingID                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)

void UAkComponent::PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync"));

	struct
	{
		class UAkAudioEvent*           AkEvent;
		int                            PlayingID;
		TArray<struct FAkExternalSourceInfo> ExternalSources;
		struct FLatentActionInfo       LatentInfo;
	} params;

	params.AkEvent = AkEvent;
	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	UObject::ProcessEvent(fn, &params);

	if (PlayingID != nullptr)
		*PlayingID = params.PlayingID;
}


// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 in_EventName                   (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAkComponent::PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const struct FString& in_EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAkEventAndWaitForEnd"));

	struct
	{
		class UAkAudioEvent*           AkEvent;
		struct FString                 in_EventName;
		TArray<struct FAkExternalSourceInfo> ExternalSources;
		struct FLatentActionInfo       LatentInfo;
		int                            ReturnValue;
	} params;

	params.AkEvent = AkEvent;
	params.in_EventName = in_EventName;
	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.GetRTPCValue
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAkRtpc*                 RTPCValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ERTPCValueType                 InputValueType                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ERTPCValueType                 OutputValueType                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 RTPC                           (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PlayingID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkComponent::GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, const struct FString& RTPC, int PlayingID, float* Value, ERTPCValueType* OutputValueType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.GetRTPCValue"));

	struct
	{
		class UAkRtpc*                 RTPCValue;
		ERTPCValueType                 InputValueType;
		float                          Value;
		ERTPCValueType                 OutputValueType;
		struct FString                 RTPC;
		int                            PlayingID;
	} params;

	params.RTPCValue = RTPCValue;
	params.InputValueType = InputValueType;
	params.RTPC = RTPC;
	params.PlayingID = PlayingID;

	UObject::ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
	if (OutputValueType != nullptr)
		*OutputValueType = params.OutputValueType;
}


// Function AkAudio.AkComponent.GetAttenuationRadius
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAkComponent::GetAttenuationRadius()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.GetAttenuationRadius"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAkAudioInputComponent::PostAssociatedAudioInputEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.SetIsChecked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InIsChecked                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkCheckBox::SetIsChecked(bool InIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.SetIsChecked"));

	struct
	{
		bool                           InIsChecked;
	} params;

	params.InIsChecked = InIsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkCheckBox.SetCheckedState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ECheckBoxState                 InCheckedState                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkCheckBox::SetCheckedState(ECheckBoxState InCheckedState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.SetCheckedState"));

	struct
	{
		ECheckBoxState                 InCheckedState;
	} params;

	params.InCheckedState = InCheckedState;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkCheckBox.SetAkItemId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FGuid                   ItemId                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkCheckBox::SetAkItemId(const struct FGuid& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.SetAkItemId"));

	struct
	{
		struct FGuid                   ItemId;
	} params;

	params.ItemId = ItemId;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkCheckBox.SetAkBoolProperty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ItemProperty                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkCheckBox::SetAkBoolProperty(const struct FString& ItemProperty)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.SetAkBoolProperty"));

	struct
	{
		struct FString                 ItemProperty;
	} params;

	params.ItemProperty = ItemProperty;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkCheckBox.IsPressed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkCheckBox::IsPressed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.IsPressed"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.IsChecked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkCheckBox::IsChecked()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.IsChecked"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.GetCheckedState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// ECheckBoxState                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

ECheckBoxState UAkCheckBox::GetCheckedState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.GetCheckedState"));

	struct
	{
		ECheckBoxState                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.GetAkProperty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAkCheckBox::GetAkProperty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.GetAkProperty"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.GetAkItemId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGuid                   ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FGuid UAkCheckBox::GetAkItemId()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.GetAkItemId"));

	struct
	{
		struct FGuid                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.UseReverbVolumes
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           inUseReverbVolumes             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.UseReverbVolumes"));

	struct
	{
		bool                           inUseReverbVolumes;
		class AActor*                  Actor;
	} params;

	params.inUseReverbVolumes = inUseReverbVolumes;
	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.UseEarlyReflections
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkAuxBus*               AuxBus                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Order                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          BusSendGain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MaxPathLength                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           SpotReflectors                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 AuxBusName                     (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.UseEarlyReflections"));

	struct
	{
		class AActor*                  Actor;
		class UAkAuxBus*               AuxBus;
		int                            Order;
		float                          BusSendGain;
		float                          MaxPathLength;
		bool                           SpotReflectors;
		struct FString                 AuxBusName;
	} params;

	params.Actor = Actor;
	params.AuxBus = AuxBus;
	params.Order = Order;
	params.BusSendGain = BusSendGain;
	params.MaxPathLength = MaxPathLength;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.UnloadBankByName
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 BankName                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::UnloadBankByName(const struct FString& BankName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.UnloadBankByName"));

	struct
	{
		struct FString                 BankName;
	} params;

	params.BankName = BankName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.UnloadBankAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         BankUnloadedCallback           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::UnloadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankUnloadedCallback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.UnloadBankAsync"));

	struct
	{
		class UAkAudioBank*            Bank;
		struct FScriptDelegate         BankUnloadedCallback;
	} params;

	params.Bank = Bank;
	params.BankUnloadedCallback = BankUnloadedCallback;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.UnloadBank
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 BankName                       (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.UnloadBank"));

	struct
	{
		class UAkAudioBank*            Bank;
		struct FString                 BankName;
		struct FLatentActionInfo       LatentInfo;
		class UObject*                 WorldContextObject;
	} params;

	params.Bank = Bank;
	params.BankName = BankName;
	params.LatentInfo = LatentInfo;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StopProfilerCapture
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAkGameplayStatics::StopProfilerCapture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StopProfilerCapture"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StopOutputCapture
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAkGameplayStatics::StopOutputCapture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StopOutputCapture"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::StopAllAmbientSounds(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StopAllAmbientSounds"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StopAll
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAkGameplayStatics::StopAll()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StopAll"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StopActor
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::StopActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StopActor"));

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StartProfilerCapture
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::StartProfilerCapture(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StartProfilerCapture"));

	struct
	{
		struct FString                 Filename;
	} params;

	params.Filename = Filename;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StartOutputCapture
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::StartOutputCapture(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StartOutputCapture"));

	struct
	{
		struct FString                 Filename;
	} params;

	params.Filename = Filename;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::StartAllAmbientSounds(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StartAllAmbientSounds"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           AutoPost                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           AutoDestroy                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkComponent*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, bool AutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UAkAudioEvent*           AkEvent;
		struct FVector                 Location;
		struct FRotator                Orientation;
		bool                           AutoPost;
		struct FString                 EventName;
		bool                           AutoDestroy;
		class UAkComponent*            ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.AkEvent = AkEvent;
	params.Location = Location;
	params.Orientation = Orientation;
	params.AutoPost = AutoPost;
	params.EventName = EventName;
	params.AutoDestroy = AutoDestroy;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.SetSwitch
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkSwitchValue*          SwitchValue                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   SwitchGroup                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   SwitchState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, const struct FName& SwitchGroup, const struct FName& SwitchState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetSwitch"));

	struct
	{
		class UAkSwitchValue*          SwitchValue;
		class AActor*                  Actor;
		struct FName                   SwitchGroup;
		struct FName                   SwitchState;
	} params;

	params.SwitchValue = SwitchValue;
	params.Actor = Actor;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetState
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkStateValue*           StateValue                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   StateGroup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   State                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetState(class UAkStateValue* StateValue, const struct FName& StateGroup, const struct FName& State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetState"));

	struct
	{
		class UAkStateValue*           StateValue;
		struct FName                   StateGroup;
		struct FName                   State;
	} params;

	params.StateValue = StateValue;
	params.StateGroup = StateGroup;
	params.State = State;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetSpeakerAngles
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<float>                  SpeakerAngles                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// float                          HeightAngle                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DeviceShareset                 (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const struct FString& DeviceShareset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetSpeakerAngles"));

	struct
	{
		TArray<float>                  SpeakerAngles;
		float                          HeightAngle;
		struct FString                 DeviceShareset;
	} params;

	params.SpeakerAngles = SpeakerAngles;
	params.HeightAngle = HeightAngle;
	params.DeviceShareset = DeviceShareset;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetRTPCValue
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkRtpc*                 RTPCValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InterpolationTimeMs            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   RTPC                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int InterpolationTimeMs, class AActor* Actor, const struct FName& RTPC)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetRTPCValue"));

	struct
	{
		class UAkRtpc*                 RTPCValue;
		float                          Value;
		int                            InterpolationTimeMs;
		class AActor*                  Actor;
		struct FName                   RTPC;
	} params;

	params.RTPCValue = RTPCValue;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;
	params.Actor = Actor;
	params.RTPC = RTPC;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetReflectionsOrder
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Order                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           RefreshPaths                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetReflectionsOrder(int Order, bool RefreshPaths)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetReflectionsOrder"));

	struct
	{
		int                            Order;
		bool                           RefreshPaths;
	} params;

	params.Order = Order;
	params.RefreshPaths = RefreshPaths;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetPanningRule
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EPanningRule                   PanRule                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetPanningRule(EPanningRule PanRule)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetPanningRule"));

	struct
	{
		EPanningRule                   PanRule;
	} params;

	params.PanRule = PanRule;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          BusVolume                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetOutputBusVolume"));

	struct
	{
		float                          BusVolume;
		class AActor*                  Actor;
	} params;

	params.BusVolume = BusVolume;
	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ScalingFactor                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetOcclusionScalingFactor(float ScalingFactor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor"));

	struct
	{
		float                          ScalingFactor;
	} params;

	params.ScalingFactor = ScalingFactor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          RefreshInterval                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval"));

	struct
	{
		float                          RefreshInterval;
		class AActor*                  Actor;
	} params;

	params.RefreshInterval = RefreshInterval;
	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetMultiplePositions
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkComponent*            GameObjectAkComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Positions                      (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EAkMultiPositionType           MultiPositionType              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetMultiplePositions"));

	struct
	{
		class UAkComponent*            GameObjectAkComponent;
		TArray<struct FTransform>      Positions;
		EAkMultiPositionType           MultiPositionType;
	} params;

	params.GameObjectAkComponent = GameObjectAkComponent;
	params.Positions = Positions;
	params.MultiPositionType = MultiPositionType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkComponent*            GameObjectAkComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAkChannelMask>  ChannelMasks                   (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Positions                      (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EAkMultiPositionType           MultiPositionType              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FAkChannelMask> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions"));

	struct
	{
		class UAkComponent*            GameObjectAkComponent;
		TArray<struct FAkChannelMask>  ChannelMasks;
		TArray<struct FTransform>      Positions;
		EAkMultiPositionType           MultiPositionType;
	} params;

	params.GameObjectAkComponent = GameObjectAkComponent;
	params.ChannelMasks = ChannelMasks;
	params.Positions = Positions;
	params.MultiPositionType = MultiPositionType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkComponent*            GameObjectAkComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<EAkChannelConfiguration> ChannelMasks                   (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Positions                      (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EAkMultiPositionType           MultiPositionType              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions"));

	struct
	{
		class UAkComponent*            GameObjectAkComponent;
		TArray<EAkChannelConfiguration> ChannelMasks;
		TArray<struct FTransform>      Positions;
		EAkMultiPositionType           MultiPositionType;
	} params;

	params.GameObjectAkComponent = GameObjectAkComponent;
	params.ChannelMasks = ChannelMasks;
	params.Positions = Positions;
	params.MultiPositionType = MultiPositionType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 AudioCulture                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         Completed                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetCurrentAudioCultureAsync(const struct FString& AudioCulture, const struct FScriptDelegate& Completed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync"));

	struct
	{
		struct FString                 AudioCulture;
		struct FScriptDelegate         Completed;
	} params;

	params.AudioCulture = AudioCulture;
	params.Completed = Completed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 AudioCulture                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetCurrentAudioCulture(const struct FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture"));

	struct
	{
		struct FString                 AudioCulture;
		struct FLatentActionInfo       LatentInfo;
		class UObject*                 WorldContextObject;
	} params;

	params.AudioCulture = AudioCulture;
	params.LatentInfo = LatentInfo;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetBusConfig
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 BusName                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EAkChannelConfiguration        ChannelConfiguration           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetBusConfig(const struct FString& BusName, EAkChannelConfiguration ChannelConfiguration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetBusConfig"));

	struct
	{
		struct FString                 BusName;
		EAkChannelConfiguration        ChannelConfiguration;
	} params;

	params.BusName = BusName;
	params.ChannelConfiguration = ChannelConfiguration;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.Seek
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkComponent*            AC                             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            MilliSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PlayingID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::Seek(class UAkComponent* AC, int MilliSeconds, int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.Seek"));

	struct
	{
		class UAkComponent*            AC;
		int                            MilliSeconds;
		int                            PlayingID;
	} params;

	params.AC = AC;
	params.MilliSeconds = MilliSeconds;
	params.PlayingID = PlayingID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.PostTrigger
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkTrigger*              TriggerValue                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   Trigger                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, const struct FName& Trigger)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostTrigger"));

	struct
	{
		class UAkTrigger*              TriggerValue;
		class AActor*                  Actor;
		struct FName                   Trigger;
	} params;

	params.TriggerValue = TriggerValue;
	params.Actor = Actor;
	params.Trigger = Trigger;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.PostEventByName
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostEventByName"));

	struct
	{
		struct FString                 EventName;
		class AActor*                  Actor;
		bool                           bStopWhenAttachedToDestroyed;
	} params;

	params.EventName = EventName;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.PostEventAttached
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   AttachPointName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAkGameplayStatics::PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostEventAttached"));

	struct
	{
		class UAkAudioEvent*           AkEvent;
		class AActor*                  Actor;
		struct FName                   AttachPointName;
		bool                           bStopWhenAttachedToDestroyed;
		struct FString                 EventName;
		int                            ReturnValue;
	} params;

	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.AttachPointName = AttachPointName;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostEventAtLocationByName"));

	struct
	{
		struct FString                 EventName;
		struct FVector                 Location;
		struct FRotator                Orientation;
		class UObject*                 WorldContextObject;
	} params;

	params.EventName = EventName;
	params.Location = Location;
	params.Orientation = Orientation;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.PostEventAtLocation
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAkGameplayStatics::PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostEventAtLocation"));

	struct
	{
		class UAkAudioEvent*           AkEvent;
		struct FVector                 Location;
		struct FRotator                Orientation;
		struct FString                 EventName;
		class UObject*                 WorldContextObject;
		int                            ReturnValue;
	} params;

	params.AkEvent = AkEvent;
	params.Location = Location;
	params.Orientation = Orientation;
	params.EventName = EventName;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEvent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            CallbackMask                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         PostEventCallback              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAkGameplayStatics::PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostEvent"));

	struct
	{
		class UAkAudioEvent*           AkEvent;
		class AActor*                  Actor;
		int                            CallbackMask;
		struct FScriptDelegate         PostEventCallback;
		TArray<struct FAkExternalSourceInfo> ExternalSources;
		bool                           bStopWhenAttachedToDestroyed;
		struct FString                 EventName;
		int                            ReturnValue;
	} params;

	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.ExternalSources = ExternalSources;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PlayingID                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync"));

	struct
	{
		class UAkAudioEvent*           AkEvent;
		class AActor*                  Actor;
		int                            PlayingID;
		bool                           bStopWhenAttachedToDestroyed;
		TArray<struct FAkExternalSourceInfo> ExternalSources;
		struct FLatentActionInfo       LatentInfo;
	} params;

	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PlayingID != nullptr)
		*PlayingID = params.PlayingID;
}


// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAkGameplayStatics::PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FString& EventName, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent"));

	struct
	{
		class UAkAudioEvent*           AkEvent;
		class AActor*                  Actor;
		bool                           bStopWhenAttachedToDestroyed;
		TArray<struct FAkExternalSourceInfo> ExternalSources;
		struct FString                 EventName;
		struct FLatentActionInfo       LatentInfo;
		int                            ReturnValue;
	} params;

	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.ExternalSources = ExternalSources;
	params.EventName = EventName;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.LoadInitBank
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAkGameplayStatics::LoadInitBank()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.LoadInitBank"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.LoadBanks
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UAkAudioBank*>    SoundBanks                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           SynchronizeSoundBanks          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.LoadBanks"));

	struct
	{
		TArray<class UAkAudioBank*>    SoundBanks;
		bool                           SynchronizeSoundBanks;
	} params;

	params.SoundBanks = SoundBanks;
	params.SynchronizeSoundBanks = SynchronizeSoundBanks;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.LoadBankByName
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 BankName                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::LoadBankByName(const struct FString& BankName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.LoadBankByName"));

	struct
	{
		struct FString                 BankName;
	} params;

	params.BankName = BankName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.LoadBankAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         BankLoadedCallback             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::LoadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankLoadedCallback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.LoadBankAsync"));

	struct
	{
		class UAkAudioBank*            Bank;
		struct FScriptDelegate         BankLoadedCallback;
	} params;

	params.Bank = Bank;
	params.BankLoadedCallback = BankLoadedCallback;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.LoadBank
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 BankName                       (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::LoadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.LoadBank"));

	struct
	{
		class UAkAudioBank*            Bank;
		struct FString                 BankName;
		struct FLatentActionInfo       LatentInfo;
		class UObject*                 WorldContextObject;
	} params;

	params.Bank = Bank;
	params.BankName = BankName;
	params.LatentInfo = LatentInfo;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.IsGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkGameplayStatics::IsGame(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.IsGame"));

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.IsEditor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkGameplayStatics::IsEditor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.IsEditor"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetSpeakerAngles
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<float>                  SpeakerAngles                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// float                          HeightAngle                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DeviceShareset                 (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::GetSpeakerAngles(const struct FString& DeviceShareset, TArray<float>* SpeakerAngles, float* HeightAngle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.GetSpeakerAngles"));

	struct
	{
		TArray<float>                  SpeakerAngles;
		float                          HeightAngle;
		struct FString                 DeviceShareset;
	} params;

	params.DeviceShareset = DeviceShareset;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SpeakerAngles != nullptr)
		*SpeakerAngles = params.SpeakerAngles;
	if (HeightAngle != nullptr)
		*HeightAngle = params.HeightAngle;
}


// Function AkAudio.AkGameplayStatics.GetSourcePlayPosition
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            PlayingID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAkGameplayStatics::GetSourcePlayPosition(int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.GetSourcePlayPosition"));

	struct
	{
		int                            PlayingID;
		int                            ReturnValue;
	} params;

	params.PlayingID = PlayingID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetRTPCValue
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAkRtpc*                 RTPCValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PlayingID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ERTPCValueType                 InputValueType                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ERTPCValueType                 OutputValueType                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   RTPC                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::GetRTPCValue(class UAkRtpc* RTPCValue, int PlayingID, ERTPCValueType InputValueType, class AActor* Actor, const struct FName& RTPC, float* Value, ERTPCValueType* OutputValueType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.GetRTPCValue"));

	struct
	{
		class UAkRtpc*                 RTPCValue;
		int                            PlayingID;
		ERTPCValueType                 InputValueType;
		float                          Value;
		ERTPCValueType                 OutputValueType;
		class AActor*                  Actor;
		struct FName                   RTPC;
	} params;

	params.RTPCValue = RTPCValue;
	params.PlayingID = PlayingID;
	params.InputValueType = InputValueType;
	params.Actor = Actor;
	params.RTPC = RTPC;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
	if (OutputValueType != nullptr)
		*OutputValueType = params.OutputValueType;
}


// Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAkGameplayStatics::GetOcclusionScalingFactor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor"));

	struct
	{
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAkGameplayStatics::GetCurrentAudioCulture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FString> UAkGameplayStatics::GetAvailableAudioCultures()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures"));

	struct
	{
		TArray<struct FString>         ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkMediaAsset*           Instance                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /* UObject*/     Type                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UObject* UAkGameplayStatics::GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* /* UObject*/ Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData"));

	struct
	{
		class UAkMediaAsset*           Instance;
		class UClass* /* UObject*/     Type;
		class UObject*                 ReturnValue;
	} params;

	params.Instance = Instance;
	params.Type = Type;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetAkComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         AttachToComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ComponentCreated               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   AttachPointName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EAttachLocation>   LocationType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkComponent*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAkComponent* UAkGameplayStatics::GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool* ComponentCreated)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.GetAkComponent"));

	struct
	{
		class USceneComponent*         AttachToComponent;
		bool                           ComponentCreated;
		struct FName                   AttachPointName;
		struct FVector                 Location;
		TEnumAsByte<EAttachLocation>   LocationType;
		class UAkComponent*            ReturnValue;
	} params;

	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ComponentCreated != nullptr)
		*ComponentCreated = params.ComponentCreated;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioType*            Instance                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /* UObject*/     Type                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UObject* UAkGameplayStatics::GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* /* UObject*/ Type)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData"));

	struct
	{
		class UAkAudioType*            Instance;
		class UClass* /* UObject*/     Type;
		class UObject*                 ReturnValue;
	} params;

	params.Instance = Instance;
	params.Type = Type;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EAkActionOnEventType           ActionType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PlayingID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            TransitionDuration             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EAkCurveInterpolation          FadeCurve                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::ExecuteActionOnPlayingID(EAkActionOnEventType ActionType, int PlayingID, int TransitionDuration, EAkCurveInterpolation FadeCurve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID"));

	struct
	{
		EAkActionOnEventType           ActionType;
		int                            PlayingID;
		int                            TransitionDuration;
		EAkCurveInterpolation          FadeCurve;
	} params;

	params.ActionType = ActionType;
	params.PlayingID = PlayingID;
	params.TransitionDuration = TransitionDuration;
	params.FadeCurve = FadeCurve;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EAkActionOnEventType           ActionType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            TransitionDuration             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EAkCurveInterpolation          FadeCurve                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PlayingID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, EAkActionOnEventType ActionType, class AActor* Actor, int TransitionDuration, EAkCurveInterpolation FadeCurve, int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent"));

	struct
	{
		class UAkAudioEvent*           AkEvent;
		EAkActionOnEventType           ActionType;
		class AActor*                  Actor;
		int                            TransitionDuration;
		EAkCurveInterpolation          FadeCurve;
		int                            PlayingID;
	} params;

	params.AkEvent = AkEvent;
	params.ActionType = ActionType;
	params.Actor = Actor;
	params.TransitionDuration = TransitionDuration;
	params.FadeCurve = FadeCurve;
	params.PlayingID = PlayingID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.ClearBanks
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAkGameplayStatics::ClearBanks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.ClearBanks"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.CancelEventCallback
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         PostEventCallback              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::CancelEventCallback(const struct FScriptDelegate& PostEventCallback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.CancelEventCallback"));

	struct
	{
		struct FScriptDelegate         PostEventCallback;
	} params;

	params.PostEventCallback = PostEventCallback;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 MarkerText                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkGameplayStatics::AddOutputCaptureMarker(const struct FString& MarkerText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker"));

	struct
	{
		struct FString                 MarkerText;
	} params;

	params.MarkerText = MarkerText;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EAkMidiEventType               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EAkMidiEventType UAkMIDIEventCallbackInfo::GetType()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetType"));

	struct
	{
		EAkMidiEventType               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiProgramChange    AsProgramChange                (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetProgramChange(struct FAkMidiProgramChange* AsProgramChange)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange"));

	struct
	{
		struct FAkMidiProgramChange    AsProgramChange;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsProgramChange != nullptr)
		*AsProgramChange = params.AsProgramChange;

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiPitchBend        AsPitchBend                    (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetPitchBend(struct FAkMidiPitchBend* AsPitchBend)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend"));

	struct
	{
		struct FAkMidiPitchBend        AsPitchBend;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsPitchBend != nullptr)
		*AsPitchBend = params.AsPitchBend;

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiNoteOnOff        AsNoteOn                       (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn"));

	struct
	{
		struct FAkMidiNoteOnOff        AsNoteOn;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsNoteOn != nullptr)
		*AsNoteOn = params.AsNoteOn;

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiNoteOnOff        AsNoteOff                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff"));

	struct
	{
		struct FAkMidiNoteOnOff        AsNoteOff;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsNoteOff != nullptr)
		*AsNoteOff = params.AsNoteOff;

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiNoteAftertouch   AsNoteAftertouch               (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch"));

	struct
	{
		struct FAkMidiNoteAftertouch   AsNoteAftertouch;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsNoteAftertouch != nullptr)
		*AsNoteAftertouch = params.AsNoteAftertouch;

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiGeneric          AsGeneric                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetGeneric(struct FAkMidiGeneric* AsGeneric)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric"));

	struct
	{
		struct FAkMidiGeneric          AsGeneric;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsGeneric != nullptr)
		*AsGeneric = params.AsGeneric;

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiChannelAftertouch AsChannelAftertouch            (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch"));

	struct
	{
		struct FAkMidiChannelAftertouch AsChannelAftertouch;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsChannelAftertouch != nullptr)
		*AsChannelAftertouch = params.AsChannelAftertouch;

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

unsigned char UAkMIDIEventCallbackInfo::GetChannel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetChannel"));

	struct
	{
		unsigned char                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetCc
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiCc               AsCc                           (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetCc(struct FAkMidiCc* AsCc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMIDIEventCallbackInfo.GetCc"));

	struct
	{
		struct FAkMidiCc               AsCc;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsCc != nullptr)
		*AsCc = params.AsCc;

	return params.ReturnValue;
}


// Function AkAudio.AkGeometryComponent.UpdateGeometry
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAkGeometryComponent::UpdateGeometry()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGeometryComponent.UpdateGeometry"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkGeometryComponent.RemoveGeometry
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAkGeometryComponent::RemoveGeometry()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGeometryComponent.RemoveGeometry"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkGeometryComponent.ConvertMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAkGeometryComponent::ConvertMesh()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGeometryComponent.ConvertMesh"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkHololensInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering"));

	struct
	{
		bool                           NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkBoolPropertyToControl INAkBoolPropertyToControl      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText"));

	struct
	{
		struct FAkBoolPropertyToControl INAkBoolPropertyToControl;
		struct FText                   ReturnValue;
	} params;

	params.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkBoolPropertyToControl INAkBoolPropertyToControl      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString"));

	struct
	{
		struct FAkBoolPropertyToControl INAkBoolPropertyToControl;
		struct FString                 ReturnValue;
	} params;

	params.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkItemBoolProperties.SetSearchText
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 newText                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkItemBoolProperties::SetSearchText(const struct FString& newText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemBoolProperties.SetSearchText"));

	struct
	{
		struct FString                 newText;
	} params;

	params.newText = newText;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkItemBoolProperties.GetSelectedProperty
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAkItemBoolProperties::GetSelectedProperty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemBoolProperties.GetSelectedProperty"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkItemBoolProperties.GetSearchText
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAkItemBoolProperties::GetSearchText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemBoolProperties.GetSearchText"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkPropertyToControl    INAkPropertyToControl          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText"));

	struct
	{
		struct FAkPropertyToControl    INAkPropertyToControl;
		struct FText                   ReturnValue;
	} params;

	params.INAkPropertyToControl = INAkPropertyToControl;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkPropertyToControl    INAkPropertyToControl          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString"));

	struct
	{
		struct FAkPropertyToControl    INAkPropertyToControl;
		struct FString                 ReturnValue;
	} params;

	params.INAkPropertyToControl = INAkPropertyToControl;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkItemProperties.SetSearchText
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 newText                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkItemProperties::SetSearchText(const struct FString& newText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemProperties.SetSearchText"));

	struct
	{
		struct FString                 newText;
	} params;

	params.newText = newText;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkItemProperties.GetSelectedProperty
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAkItemProperties::GetSelectedProperty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemProperties.GetSelectedProperty"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkItemProperties.GetSearchText
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAkItemProperties::GetSearchText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemProperties.GetSearchText"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkLinuxInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering"));

	struct
	{
		bool                           NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkLuminInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering"));

	struct
	{
		bool                           NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkMacInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering"));

	struct
	{
		bool                           NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkPS4InitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering"));

	struct
	{
		bool                           NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.SetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkSlider::SetValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetValue"));

	struct
	{
		float                          InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.SetStepSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkSlider::SetStepSize(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetStepSize"));

	struct
	{
		float                          InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.SetSliderHandleColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetSliderHandleColor"));

	struct
	{
		struct FLinearColor            InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.SetSliderBarColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkSlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetSliderBarColor"));

	struct
	{
		struct FLinearColor            InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.SetLocked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkSlider::SetLocked(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetLocked"));

	struct
	{
		bool                           InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.SetIndentHandle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkSlider::SetIndentHandle(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetIndentHandle"));

	struct
	{
		bool                           InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.SetAkSliderItemProperty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ItemProperty                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkSlider::SetAkSliderItemProperty(const struct FString& ItemProperty)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetAkSliderItemProperty"));

	struct
	{
		struct FString                 ItemProperty;
	} params;

	params.ItemProperty = ItemProperty;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.SetAkSliderItemId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FGuid                   ItemId                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkSlider::SetAkSliderItemId(const struct FGuid& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetAkSliderItemId"));

	struct
	{
		struct FGuid                   ItemId;
	} params;

	params.ItemId = ItemId;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.GetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAkSlider::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.GetValue"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkSlider.GetAkSliderItemProperty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAkSlider::GetAkSliderItemProperty()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.GetAkSliderItemProperty"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkSlider.GetAkSliderItemId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGuid                   ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FGuid UAkSlider::GetAkSliderItemId()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.GetAkSliderItemId"));

	struct
	{
		struct FGuid                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkSwitchInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering"));

	struct
	{
		bool                           NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkWaapiCalls.Unsubscribe
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId  SubscriptionId                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           UnsubscriptionDone             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiCalls::Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.Unsubscribe"));

	struct
	{
		struct FAkWaapiSubscriptionId  SubscriptionId;
		bool                           UnsubscriptionDone;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.SubscriptionId = SubscriptionId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (UnsubscriptionDone != nullptr)
		*UnsubscriptionDone = params.UnsubscriptionDone;

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.SubscribeToWaapi
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiUri             WaapiUri                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      WaapiOptions                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FAkWaapiSubscriptionId  SubscriptionId                 (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           SubscriptionDone               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiCalls::SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const struct FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.SubscribeToWaapi"));

	struct
	{
		struct FAkWaapiUri             WaapiUri;
		struct FAKWaapiJsonObject      WaapiOptions;
		struct FScriptDelegate         Callback;
		struct FAkWaapiSubscriptionId  SubscriptionId;
		bool                           SubscriptionDone;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.WaapiUri = WaapiUri;
	params.WaapiOptions = WaapiOptions;
	params.Callback = Callback;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SubscriptionId != nullptr)
		*SubscriptionId = params.SubscriptionId;
	if (SubscriptionDone != nullptr)
		*SubscriptionDone = params.SubscriptionDone;

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.SetSubscriptionID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId  Subscription                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// int                            ID                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkWaapiCalls::SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int ID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.SetSubscriptionID"));

	struct
	{
		struct FAkWaapiSubscriptionId  Subscription;
		int                            ID;
	} params;

	params.Subscription = Subscription;
	params.ID = ID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback"));

	struct
	{
		struct FScriptDelegate         Callback;
		bool                           ReturnValue;
	} params;

	params.Callback = Callback;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkWaapiCalls::RegisterWaapiConnectionLostCallback(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback"));

	struct
	{
		struct FScriptDelegate         Callback;
		bool                           ReturnValue;
	} params;

	params.Callback = Callback;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.GetSubscriptionID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId  Subscription                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAkWaapiCalls::GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.GetSubscriptionID"));

	struct
	{
		struct FAkWaapiSubscriptionId  Subscription;
		int                            ReturnValue;
	} params;

	params.Subscription = Subscription;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkWaapiSubscriptionId  INAkWaapiSubscriptionId        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText"));

	struct
	{
		struct FAkWaapiSubscriptionId  INAkWaapiSubscriptionId;
		struct FText                   ReturnValue;
	} params;

	params.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkWaapiSubscriptionId  INAkWaapiSubscriptionId        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString"));

	struct
	{
		struct FAkWaapiSubscriptionId  INAkWaapiSubscriptionId;
		struct FString                 ReturnValue;
	} params;

	params.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.CallWaapi
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiUri             WaapiUri                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      WaapiArgs                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      WaapiOptions                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiCalls::CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiCalls.CallWaapi"));

	struct
	{
		struct FAkWaapiUri             WaapiUri;
		struct FAKWaapiJsonObject      WaapiArgs;
		struct FAKWaapiJsonObject      WaapiOptions;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.WaapiUri = WaapiUri;
	params.WaapiArgs = WaapiArgs;
	params.WaapiOptions = WaapiOptions;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkWaapiFieldNames      INAkWaapiFieldNames            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText"));

	struct
	{
		struct FAkWaapiFieldNames      INAkWaapiFieldNames;
		struct FText                   ReturnValue;
	} params;

	params.INAkWaapiFieldNames = INAkWaapiFieldNames;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkWaapiFieldNames      INAkWaapiFieldNames            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString"));

	struct
	{
		struct FAkWaapiFieldNames      INAkWaapiFieldNames;
		struct FString                 ReturnValue;
	} params;

	params.INAkWaapiFieldNames = INAkWaapiFieldNames;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetStringField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 FieldValue                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FString& FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.SetStringField"));

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FString                 FieldValue;
		struct FAKWaapiJsonObject      Target;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetObjectField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      FieldValue                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.SetObjectField"));

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FAKWaapiJsonObject      FieldValue;
		struct FAKWaapiJsonObject      Target;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetNumberField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// float                          FieldValue                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.SetNumberField"));

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		float                          FieldValue;
		struct FAKWaapiJsonObject      Target;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetBoolField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           FieldValue                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.SetBoolField"));

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		bool                           FieldValue;
		struct FAKWaapiJsonObject      Target;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         FieldStringValues              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FString> FieldStringValues, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.SetArrayStringFields"));

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		TArray<struct FString>         FieldStringValues;
		struct FAKWaapiJsonObject      Target;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.FieldStringValues = FieldStringValues;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAKWaapiJsonObject> FieldObjectValues              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields"));

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		TArray<struct FAKWaapiJsonObject> FieldObjectValues;
		struct FAKWaapiJsonObject      Target;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.FieldObjectValues = FieldObjectValues;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetStringField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAkWaapiJsonManager::GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.GetStringField"));

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FAKWaapiJsonObject      Target;
		struct FString                 ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetObjectField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.GetObjectField"));

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FAKWaapiJsonObject      Target;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetNumberField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAkWaapiJsonManager::GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.GetNumberField"));

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FAKWaapiJsonObject      Target;
		float                          ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetIntegerField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAkWaapiJsonManager::GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.GetIntegerField"));

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FAKWaapiJsonObject      Target;
		int                            ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetBoolField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAkWaapiJsonManager::GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.GetBoolField"));

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FAKWaapiJsonObject      Target;
		bool                           ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetArrayField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAKWaapiJsonObject> ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FAKWaapiJsonObject> UAkWaapiJsonManager::GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.GetArrayField"));

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FAKWaapiJsonObject      Target;
		TArray<struct FAKWaapiJsonObject> ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAKWaapiJsonObject      INAKWaapiJsonObject            (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText"));

	struct
	{
		struct FAKWaapiJsonObject      INAKWaapiJsonObject;
		struct FText                   ReturnValue;
	} params;

	params.INAKWaapiJsonObject = INAKWaapiJsonObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAKWaapiJsonObject      INAKWaapiJsonObject            (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString"));

	struct
	{
		struct FAKWaapiJsonObject      INAKWaapiJsonObject;
		struct FString                 ReturnValue;
	} params;

	params.INAKWaapiJsonObject = INAKWaapiJsonObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkWaapiUri             INAkWaapiUri                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UAkWaapiUriConv::Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText"));

	struct
	{
		struct FAkWaapiUri             INAkWaapiUri;
		struct FText                   ReturnValue;
	} params;

	params.INAkWaapiUri = INAkWaapiUri;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkWaapiUri             INAkWaapiUri                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAkWaapiUriConv::Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString"));

	struct
	{
		struct FAkWaapiUri             INAkWaapiUri;
		struct FString                 ReturnValue;
	} params;

	params.INAkWaapiUri = INAkWaapiUri;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkWindowsInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering"));

	struct
	{
		bool                           NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkWwiseTree.SetSearchText
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 newText                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkWwiseTree::SetSearchText(const struct FString& newText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWwiseTree.SetSearchText"));

	struct
	{
		struct FString                 newText;
	} params;

	params.newText = newText;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkWwiseTree.GetSelectedItem
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FAkWwiseObjectDetails   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FAkWwiseObjectDetails UAkWwiseTree::GetSelectedItem()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWwiseTree.GetSelectedItem"));

	struct
	{
		struct FAkWwiseObjectDetails   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWwiseTree.GetSearchText
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAkWwiseTree::GetSearchText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWwiseTree.GetSearchText"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAkXboxOneInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering"));

	struct
	{
		bool                           NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.PostEventAsync.PostEventAsync
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            CallbackMask                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         PostEventCallback              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo> ExternalSources                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPostEventAsync*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPostEventAsync* UPostEventAsync::PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.PostEventAsync.PostEventAsync"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UAkAudioEvent*           AkEvent;
		class AActor*                  Actor;
		int                            CallbackMask;
		struct FScriptDelegate         PostEventCallback;
		TArray<struct FAkExternalSourceInfo> ExternalSources;
		bool                           bStopWhenAttachedToDestroyed;
		class UPostEventAsync*         ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.ExternalSources = ExternalSources;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.PostEventAsync.PollPostEventFuture
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UPostEventAsync::PollPostEventFuture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.PostEventAsync.PollPostEventFuture"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UPostEventAtLocationAsync* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPostEventAtLocationAsync* UPostEventAtLocationAsync::PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UAkAudioEvent*           AkEvent;
		struct FVector                 Location;
		struct FRotator                Orientation;
		class UPostEventAtLocationAsync* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.AkEvent = AkEvent;
	params.Location = Location;
	params.Orientation = Orientation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UPostEventAtLocationAsync::PollPostEventFuture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
