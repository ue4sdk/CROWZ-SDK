#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_AkAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AkAudio.AkSoundAUD
// 0x0008 (0x0030 - 0x0028)
class UAkSoundAUD : public UAssetUserData
{
public:
	bool                                               IsSoundOccluder;                                          // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                OcclusionPercent;                                         // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkSoundAUD"));
		return ptr;
	}

};


// Class AkAudio.AkAcousticPortal
// 0x0090 (0x02E8 - 0x0258)
class AAkAcousticPortal : public AVolume
{
public:
	EAkAcousticPortalState                             InitialState;                                             // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0259(0x0003) MISSED OFFSET
	float                                              ObstructionRefreshInterval;                               // 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionChannel>                     ObstructionCollisionChannel;                              // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x87];                                      // 0x0261(0x0087) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAcousticPortal"));
		return ptr;
	}


	void OpenPortal();
	EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};


// Class AkAudio.AkPortalComponent
// 0x0000 (0x0200 - 0x0200)
class UAkPortalComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkPortalComponent"));
		return ptr;
	}

};


// Class AkAudio.AkAudioType
// 0x0018 (0x0040 - 0x0028)
class UAkAudioType : public UObject
{
public:
	uint32_t                                           ShortID;                                                  // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<class UObject*>                             UserData;                                                 // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAudioType"));
		return ptr;
	}

};


// Class AkAudio.AkAcousticTexture
// 0x0000 (0x0040 - 0x0040)
class UAkAcousticTexture : public UAkAudioType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAcousticTexture"));
		return ptr;
	}

};


// Class AkAudio.AkAmbientSound
// 0x0040 (0x0260 - 0x0220)
class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkComponent*                                AkComponent;                                              // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               StopWhenOwnerIsDestroyed;                                 // 0x0230(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_SimpleDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               AutoPost;                                                 // 0x0231(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_SimpleDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2E];                                      // 0x0232(0x002E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAmbientSound"));
		return ptr;
	}


	void StopAmbientSound();
	void StartAmbientSound();
};


// Class AkAudio.AkAndroidInitializationSettings
// 0x00D0 (0x00F8 - 0x0028)
class UAkAndroidInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0090(0x0028) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkAndroidAdvancedInitializationSettings    AdvancedSettings;                                         // 0x00B8(0x0040) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAndroidInitializationSettings"));
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkPlatformInfo
// 0x0048 (0x0070 - 0x0028)
class UAkPlatformInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkPlatformInfo"));
		return ptr;
	}

};


// Class AkAudio.AkAndroidPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAndroidPlatformInfo"));
		return ptr;
	}

};


// Class AkAudio.AkAssetData
// 0x0048 (0x0070 - 0x0028)
class UAkAssetData : public UObject
{
public:
	uint32_t                                           CachedHash;                                               // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x44];                                      // 0x002C(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAssetData"));
		return ptr;
	}

};


// Class AkAudio.AkAssetDataWithMedia
// 0x0020 (0x0090 - 0x0070)
class UAkAssetDataWithMedia : public UAkAssetData
{
public:
	TArray<TSoftObjectPtr<class UAkMediaAsset>>        MediaList;                                                // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAssetDataWithMedia"));
		return ptr;
	}

};


// Class AkAudio.AkAssetPlatformData
// 0x0008 (0x0030 - 0x0028)
class UAkAssetPlatformData : public UObject
{
public:
	class UAkAssetData*                                CurrentAssetData;                                         // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAssetPlatformData"));
		return ptr;
	}

};


// Class AkAudio.AkAssetBase
// 0x0018 (0x0058 - 0x0040)
class UAkAssetBase : public UAkAudioType
{
public:
	class UAkAssetPlatformData*                        PlatformAssetData;                                        // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAssetBase"));
		return ptr;
	}

};


// Class AkAudio.AkAudioBank
// 0x00D0 (0x0128 - 0x0058)
class UAkAudioBank : public UAkAssetBase
{
public:
	bool                                               AutoLoad;                                                 // 0x0058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TMap<struct FString, TSoftObjectPtr<class UAkAssetPlatformData>> LocalizedPlatformAssetDataMap;                            // 0x0060(0x0050) (CPF_Edit, CPF_EditConst, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TSet<TSoftObjectPtr<class UAkAudioEvent>>          LinkedAkEvents;                                           // 0x00B0(0x0050) (CPF_Edit, CPF_EditConst, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	class UAkAssetPlatformData*                        CurrentLocalizedPlatformAssetData;                        // 0x0100(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0108(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAudioBank"));
		return ptr;
	}

};


// Class AkAudio.AkAssetDataSwitchContainerData
// 0x0060 (0x0088 - 0x0028)
class UAkAssetDataSwitchContainerData : public UObject
{
public:
	TSoftObjectPtr<class UAkGroupValue>                GroupValue;                                               // 0x0028(0x0028) (CPF_Edit, CPF_EditConst, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkGroupValue*                               DefaultGroupValue;                                        // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UAkMediaAsset>>        MediaList;                                                // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TArray<class UAkAssetDataSwitchContainerData*>     Children;                                                 // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAssetDataSwitchContainerData"));
		return ptr;
	}

};


// Class AkAudio.AkAssetDataSwitchContainer
// 0x0028 (0x00B8 - 0x0090)
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{
public:
	TArray<class UAkAssetDataSwitchContainerData*>     SwitchContainers;                                         // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	class UAkGroupValue*                               DefaultGroupValue;                                        // 0x00A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAssetDataSwitchContainer"));
		return ptr;
	}

};


// Class AkAudio.AkAudioEventData
// 0x01C8 (0x0280 - 0x00B8)
class UAkAudioEventData : public UAkAssetDataSwitchContainer
{
public:
	float                                              MaxAttenuationRadius;                                     // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsInfinite;                                               // 0x00BC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	float                                              MinimumDuration;                                          // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaximumDuration;                                          // 0x00C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, class UAkAssetDataSwitchContainer*> LocalizedMedia;                                           // 0x00C8(0x0050) (CPF_Edit, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	TSet<class UAkAudioEvent*>                         PostedEvents;                                             // 0x0118(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	TSet<class UAkAuxBus*>                             UserDefinedSends;                                         // 0x0168(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	TSet<class UAkTrigger*>                            PostedTriggers;                                           // 0x01B8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	TSet<class UAkGroupValue*>                         GroupValues;                                              // 0x0208(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0258(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAudioEventData"));
		return ptr;
	}

};


// Class AkAudio.AkAudioEvent
// 0x0090 (0x00E8 - 0x0058)
class UAkAudioEvent : public UAkAssetBase
{
public:
	TMap<struct FString, TSoftObjectPtr<class UAkAssetPlatformData>> LocalizedPlatformAssetDataMap;                            // 0x0058(0x0050) (CPF_Edit, CPF_EditConst, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	class UAkAudioBank*                                RequiredBank;                                             // 0x00A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	class UAkAssetPlatformData*                        CurrentLocalizedPlatformData;                             // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              MaxAttenuationRadius;                                     // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               IsInfinite;                                               // 0x00C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	float                                              MinimumDuration;                                          // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              MaximumDuration;                                          // 0x00CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAudioEvent"));
		return ptr;
	}


	float GetMinimumDuration();
	float GetMaximumDuration();
	float GetMaxAttenuationRadius();
	bool GetIsInfinite();
};


// Class AkAudio.AkGameObject
// 0x0020 (0x0220 - 0x0200)
class UAkGameObject : public USceneComponent
{
public:
	struct FString                                     EventName;                                                // 0x0200(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0210(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkGameObject"));
		return ptr;
	}


	void Stop();
	void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID);
	int PostAssociatedAkEvent(int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources);
	void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID);
	int PostAkEvent(class UAkAudioEvent* AkEvent, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FString& in_EventName);
};


// Class AkAudio.AkComponent
// 0x01C0 (0x03E0 - 0x0220)
class UAkComponent : public UAkGameObject
{
public:
	TEnumAsByte<ECollisionChannel>                     OcclusionCollisionChannel;                                // 0x0220(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	unsigned char                                      EnableSpotReflectors : 1;                                 // 0x0224(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                    // 0x0228(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     EarlyReflectionAuxBusName;                                // 0x0230(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                EarlyReflectionOrder;                                     // 0x0240(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              EarlyReflectionBusSendGain;                               // 0x0244(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              EarlyReflectionMaxPathLength;                             // 0x0248(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              roomReverbAuxBusGain;                                     // 0x024C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                diffractionMaxEdges;                                      // 0x0250(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                diffractionMaxPaths;                                      // 0x0254(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              diffractionMaxPathLength;                                 // 0x0258(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      DrawFirstOrderReflections : 1;                            // 0x025C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DrawSecondOrderReflections : 1;                           // 0x025C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DrawHigherOrderReflections : 1;                           // 0x025C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DrawDiffraction : 1;                                      // 0x025C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	bool                                               StopWhenOwnerDestroyed;                                   // 0x0260(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0261(0x0003) MISSED OFFSET
	float                                              AttenuationScalingFactor;                                 // 0x0264(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OcclusionRefreshInterval;                                 // 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseReverbVolumes;                                        // 0x026C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x173];                                     // 0x026D(0x0173) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkComponent"));
		return ptr;
	}


	void UseReverbVolumes(bool inUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName);
	void SetSwitch(class UAkSwitchValue* SwitchValue, const struct FString& SwitchGroup, const struct FString& SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int InterpolationTimeMs, const struct FString& RTPC);
	void SetOutputBusVolume(float BusVolume);
	void SetListeners(TArray<class UAkComponent*> Listeners);
	void SetEarlyReflectionsVolume(float SendVolume);
	void SetEarlyReflectionsAuxBus(const struct FString& AuxBusName);
	void SetAttenuationScalingFactor(float Value);
	void PostTrigger(class UAkTrigger* TriggerValue, const struct FString& Trigger);
	void PostAssociatedAkEventAndWaitForEndAsync(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID);
	int PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int PostAkEventByName(const struct FString& in_EventName);
	void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID);
	int PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const struct FString& in_EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
	void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, const struct FString& RTPC, int PlayingID, float* Value, ERTPCValueType* OutputValueType);
	float GetAttenuationRadius();
};


// Class AkAudio.AkAudioInputComponent
// 0x0010 (0x03F0 - 0x03E0)
class UAkAudioInputComponent : public UAkComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAudioInputComponent"));
		return ptr;
	}


	int PostAssociatedAudioInputEvent();
};


// Class AkAudio.AkAuxBus
// 0x0008 (0x0060 - 0x0058)
class UAkAuxBus : public UAkAssetBase
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkAuxBus"));
		return ptr;
	}

};


// Class AkAudio.AkCheckBox
// 0x0A08 (0x0B28 - 0x0120)
class UAkCheckBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x398];                                     // 0x0120(0x0398) MISSED OFFSET
	ECheckBoxState                                     CheckedState;                                             // 0x04B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	struct FScriptDelegate                             CheckedStateDelegate;                                     // 0x04BC(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	struct FCheckBoxStyle                              WidgetStyle;                                              // 0x04D0(0x0580) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0A50(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                              // 0x0A51(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0A52(0x0006) MISSED OFFSET
	struct FAkBoolPropertyToControl                    ThePropertyToControl;                                     // 0x0A58(0x0010) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                       ItemToControl;                                            // 0x0A68(0x0040) (CPF_Edit, CPF_Config, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    AkOnCheckStateChanged;                                    // 0x0AA8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnItemDropped;                                            // 0x0AB8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPropertyDropped;                                        // 0x0AC8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0AD8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkCheckBox"));
		return ptr;
	}


	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(ECheckBoxState InCheckedState);
	void SetAkItemId(const struct FGuid& ItemId);
	void SetAkBoolProperty(const struct FString& ItemProperty);
	bool IsPressed();
	bool IsChecked();
	ECheckBoxState GetCheckedState();
	struct FString GetAkProperty();
	struct FGuid GetAkItemId();
};


// Class AkAudio.AkGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkGameplayStatics"));
		return ptr;
	}


	static void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
	static void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName);
	static void UnloadBankByName(const struct FString& BankName);
	static void UnloadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankUnloadedCallback);
	static void UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	static void StopProfilerCapture();
	static void StopOutputCapture();
	static void StopAllAmbientSounds(class UObject* WorldContextObject);
	static void StopAll();
	static void StopActor(class AActor* Actor);
	static void StartProfilerCapture(const struct FString& Filename);
	static void StartOutputCapture(const struct FString& Filename);
	static void StartAllAmbientSounds(class UObject* WorldContextObject);
	static class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, bool AutoDestroy);
	static void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, const struct FName& SwitchGroup, const struct FName& SwitchState);
	static void SetState(class UAkStateValue* StateValue, const struct FName& StateGroup, const struct FName& State);
	static void SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const struct FString& DeviceShareset);
	static void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int InterpolationTimeMs, class AActor* Actor, const struct FName& RTPC);
	static void SetReflectionsOrder(int Order, bool RefreshPaths);
	static void SetPanningRule(EPanningRule PanRule);
	static void SetOutputBusVolume(float BusVolume, class AActor* Actor);
	static void SetOcclusionScalingFactor(float ScalingFactor);
	static void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
	static void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
	static void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FAkChannelMask> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
	static void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
	static void SetCurrentAudioCultureAsync(const struct FString& AudioCulture, const struct FScriptDelegate& Completed);
	static void SetCurrentAudioCulture(const struct FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	static void SetBusConfig(const struct FString& BusName, EAkChannelConfiguration ChannelConfiguration);
	static void Seek(class UAkComponent* AC, int MilliSeconds, int PlayingID);
	static void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, const struct FName& Trigger);
	static void PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	static int PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	static void PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
	static int PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject);
	static int PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	static void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID);
	static int PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FString& EventName, const struct FLatentActionInfo& LatentInfo);
	static void LoadInitBank();
	static void LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
	static void LoadBankByName(const struct FString& BankName);
	static void LoadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankLoadedCallback);
	static void LoadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	static bool IsGame(class UObject* WorldContextObject);
	static bool IsEditor();
	static void GetSpeakerAngles(const struct FString& DeviceShareset, TArray<float>* SpeakerAngles, float* HeightAngle);
	static int GetSourcePlayPosition(int PlayingID);
	static void GetRTPCValue(class UAkRtpc* RTPCValue, int PlayingID, ERTPCValueType InputValueType, class AActor* Actor, const struct FName& RTPC, float* Value, ERTPCValueType* OutputValueType);
	static float GetOcclusionScalingFactor();
	static struct FString GetCurrentAudioCulture();
	static TArray<struct FString> GetAvailableAudioCultures();
	static class UObject* GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* /* UObject*/ Type);
	static class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool* ComponentCreated);
	static class UObject* GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* /* UObject*/ Type);
	static void ExecuteActionOnPlayingID(EAkActionOnEventType ActionType, int PlayingID, int TransitionDuration, EAkCurveInterpolation FadeCurve);
	static void ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, EAkActionOnEventType ActionType, class AActor* Actor, int TransitionDuration, EAkCurveInterpolation FadeCurve, int PlayingID);
	static void ClearBanks();
	static void CancelEventCallback(const struct FScriptDelegate& PostEventCallback);
	static void AddOutputCaptureMarker(const struct FString& MarkerText);
};


// Class AkAudio.AkCallbackInfo
// 0x0008 (0x0030 - 0x0028)
class UAkCallbackInfo : public UObject
{
public:
	class UAkComponent*                                AkComponent;                                              // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkCallbackInfo"));
		return ptr;
	}

};


// Class AkAudio.AkEventCallbackInfo
// 0x0008 (0x0038 - 0x0030)
class UAkEventCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                PlayingID;                                                // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                EventId;                                                  // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkEventCallbackInfo"));
		return ptr;
	}

};


// Class AkAudio.AkMIDIEventCallbackInfo
// 0x0008 (0x0040 - 0x0038)
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkMIDIEventCallbackInfo"));
		return ptr;
	}


	EAkMidiEventType GetType();
	bool GetProgramChange(struct FAkMidiProgramChange* AsProgramChange);
	bool GetPitchBend(struct FAkMidiPitchBend* AsPitchBend);
	bool GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn);
	bool GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff);
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch);
	bool GetGeneric(struct FAkMidiGeneric* AsGeneric);
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch);
	unsigned char GetChannel();
	bool GetCc(struct FAkMidiCc* AsCc);
};


// Class AkAudio.AkMarkerCallbackInfo
// 0x0018 (0x0050 - 0x0038)
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
public:
	int                                                Identifier;                                               // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                position;                                                 // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Label;                                                    // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkMarkerCallbackInfo"));
		return ptr;
	}

};


// Class AkAudio.AkDurationCallbackInfo
// 0x0018 (0x0050 - 0x0038)
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
public:
	float                                              Duration;                                                 // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EstimatedDuration;                                        // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AudioNodeID;                                              // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MediaID;                                                  // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bStreaming;                                               // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkDurationCallbackInfo"));
		return ptr;
	}

};


// Class AkAudio.AkMusicSyncCallbackInfo
// 0x0040 (0x0070 - 0x0030)
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                PlayingID;                                                // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FAkSegmentInfo                              SegmentInfo;                                              // 0x0034(0x0024) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	EAkCallbackType                                    MusicSyncType;                                            // 0x0058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FString                                     UserCueName;                                              // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkMusicSyncCallbackInfo"));
		return ptr;
	}

};


// Class AkAudio.AkGeometryComponent
// 0x0130 (0x0330 - 0x0200)
class UAkGeometryComponent : public USceneComponent
{
public:
	float                                              WeldingThreshold;                                         // 0x0200(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	TMap<class UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                                // 0x0208(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FAkGeometrySurfaceOverride                  CollisionMeshSurfaceOverride;                             // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDiffraction : 1;                                   // 0x0268(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDiffractionOnBoundaryEdges : 1;                    // 0x0268(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	class AActor*                                      AssociatedRoom;                                           // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0278(0x0010) MISSED OFFSET
	struct FAkGeometryData                             GeometryData;                                             // 0x0288(0x0050) (CPF_NativeAccessSpecifierPrivate)
	TMap<class UMaterialInterface*, struct FAkGeometrySurfaceOverride> PreviousStaticMeshSurfaceOverride;                        // 0x02D8(0x0050) (CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0328(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkGeometryComponent"));
		return ptr;
	}


	void UpdateGeometry();
	void RemoveGeometry();
	void ConvertMesh();
};


// Class AkAudio.AkGroupValue
// 0x0018 (0x0058 - 0x0040)
class UAkGroupValue : public UAkAudioType
{
public:
	uint32_t                                           GroupShortID;                                             // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0044(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkGroupValue"));
		return ptr;
	}

};


// Class AkAudio.AkHololensInitializationSettings
// 0x00D0 (0x00F8 - 0x0028)
class UAkHololensInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0090(0x0028) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkHololensAdvancedInitializationSettings   AdvancedSettings;                                         // 0x00B8(0x0040) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkHololensInitializationSettings"));
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkHololensPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkHololensPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkHololensPlatformInfo"));
		return ptr;
	}

};


// Class AkAudio.AkInitBankAssetData
// 0x0010 (0x00A0 - 0x0090)
class UAkInitBankAssetData : public UAkAssetDataWithMedia
{
public:
	TArray<struct FAkPluginInfo>                       PluginInfos;                                              // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkInitBankAssetData"));
		return ptr;
	}

};


// Class AkAudio.AkInitBank
// 0x0020 (0x0078 - 0x0058)
class UAkInitBank : public UAkAssetBase
{
public:
	TArray<struct FString>                             AvailableAudioCultures;                                   // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DefaultLanguage;                                          // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkInitBank"));
		return ptr;
	}

};


// Class AkAudio.AkIOSInitializationSettings
// 0x00D8 (0x0100 - 0x0028)
class UAkIOSInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkAudioSession                             AudioSession;                                             // 0x0090(0x000C) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x00A0(0x0028) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettings           AdvancedSettings;                                         // 0x00C8(0x0034) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkIOSInitializationSettings"));
		return ptr;
	}

};


// Class AkAudio.AkIOSPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkIOSPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkIOSPlatformInfo"));
		return ptr;
	}

};


// Class AkAudio.AkItemBoolPropertiesConv
// 0x0000 (0x0028 - 0x0028)
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkItemBoolPropertiesConv"));
		return ptr;
	}


	static struct FText Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
	static struct FString Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
};


// Class AkAudio.AkItemBoolProperties
// 0x0040 (0x0148 - 0x0108)
class UAkItemBoolProperties : public UWidget
{
public:
	struct FMulticastScriptDelegate                    OnSelectionChanged;                                       // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPropertyDragged;                                        // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkItemBoolProperties"));
		return ptr;
	}


	void SetSearchText(const struct FString& newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
};


// Class AkAudio.AkItemPropertiesConv
// 0x0000 (0x0028 - 0x0028)
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkItemPropertiesConv"));
		return ptr;
	}


	static struct FText Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl);
	static struct FString Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl);
};


// Class AkAudio.AkItemProperties
// 0x0040 (0x0148 - 0x0108)
class UAkItemProperties : public UWidget
{
public:
	struct FMulticastScriptDelegate                    OnSelectionChanged;                                       // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPropertyDragged;                                        // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkItemProperties"));
		return ptr;
	}


	void SetSearchText(const struct FString& newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
};


// Class AkAudio.AkLateReverbComponent
// 0x0040 (0x0240 - 0x0200)
class UAkLateReverbComponent : public USceneComponent
{
public:
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0200(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     AuxBusName;                                               // 0x0208(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SendLevel;                                                // 0x0218(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FadeRate;                                                 // 0x021C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Priority;                                                 // 0x0220(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0224(0x0004) MISSED OFFSET
	class UAkLateReverbComponent*                      NextLowerPriorityComponent;                               // 0x0228(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0230(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkLateReverbComponent"));
		return ptr;
	}

};


// Class AkAudio.AkLinuxInitializationSettings
// 0x00C8 (0x00F0 - 0x0028)
class UAkLinuxInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0090(0x0028) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                         // 0x00B8(0x0038) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkLinuxInitializationSettings"));
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkLinuxPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkLinuxPlatformInfo"));
		return ptr;
	}

};


// Class AkAudio.AkLuminInitializationSettings
// 0x00C8 (0x00F0 - 0x0028)
class UAkLuminInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0090(0x0028) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                         // 0x00B8(0x0038) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkLuminInitializationSettings"));
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkLuminPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkLuminPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkLuminPlatformInfo"));
		return ptr;
	}

};


// Class AkAudio.AkMacInitializationSettings
// 0x00C8 (0x00F0 - 0x0028)
class UAkMacInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0090(0x0028) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                         // 0x00B8(0x0038) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkMacInitializationSettings"));
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkMacPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkMacPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkMacPlatformInfo"));
		return ptr;
	}

};


// Class AkAudio.AkMediaAssetData
// 0x0018 (0x0040 - 0x0028)
class UAkMediaAssetData : public UObject
{
public:
	bool                                               IsStreamed;                                               // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseDeviceMemory;                                          // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x16];                                      // 0x002A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkMediaAssetData"));
		return ptr;
	}

};


// Class AkAudio.AkMediaAsset
// 0x0030 (0x0058 - 0x0028)
class UAkMediaAsset : public UObject
{
public:
	uint32_t                                           ID;                                                       // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<class UObject*>                             UserData;                                                 // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	class UAkMediaAssetData*                           CurrentMediaAssetData;                                    // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkMediaAsset"));
		return ptr;
	}

};


// Class AkAudio.AkLocalizedMediaAsset
// 0x0000 (0x0058 - 0x0058)
class UAkLocalizedMediaAsset : public UAkMediaAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkLocalizedMediaAsset"));
		return ptr;
	}

};


// Class AkAudio.AkExternalMediaAsset
// 0x0060 (0x00B8 - 0x0058)
class UAkExternalMediaAsset : public UAkMediaAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0058(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkExternalMediaAsset"));
		return ptr;
	}

};


// Class AkAudio.AkPS4InitializationSettings
// 0x00C8 (0x00F0 - 0x0028)
class UAkPS4InitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                           // 0x0028(0x0060) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0088(0x0028) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkPS4AdvancedInitializationSettings        AdvancedSettings;                                         // 0x00B0(0x0040) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkPS4InitializationSettings"));
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkPS4PlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkPS4PlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkPS4PlatformInfo"));
		return ptr;
	}

};


// Class AkAudio.AkReverbVolume
// 0x0038 (0x0290 - 0x0258)
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0258(0x0001) (CPF_Deprecated, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     AuxBusName;                                               // 0x0268(0x0010) (CPF_ZeroConstructor, CPF_Deprecated, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SendLevel;                                                // 0x0278(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FadeRate;                                                 // 0x027C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Priority;                                                 // 0x0280(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	class UAkLateReverbComponent*                      LateReverbComponent;                                      // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkReverbVolume"));
		return ptr;
	}

};


// Class AkAudio.AkRoomComponent
// 0x0020 (0x0240 - 0x0220)
class UAkRoomComponent : public UAkGameObject
{
public:
	class UAkRoomComponent*                            NextLowerPriorityComponent;                               // 0x0220(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Priority;                                                 // 0x0228(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WallOcclusion;                                            // 0x022C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AuxSendLevel;                                             // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               AutoPost;                                                 // 0x0234(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_SimpleDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0235(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkRoomComponent"));
		return ptr;
	}

};


// Class AkAudio.AkRtpc
// 0x0000 (0x0040 - 0x0040)
class UAkRtpc : public UAkAudioType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkRtpc"));
		return ptr;
	}

};


// Class AkAudio.AkSettings
// 0x0118 (0x0140 - 0x0028)
class UAkSettings : public UObject
{
public:
	unsigned char                                      MaxSimultaneousReverbVolumes;                             // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FFilePath                                   WwiseProjectPath;                                         // 0x0030(0x0010) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FDirectoryPath                              WwiseSoundDataFolder;                                     // 0x0040(0x0010) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	bool                                               bAutoConnectToWAAPI;                                      // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionChannel>                     DefaultOcclusionCollisionChannel;                         // 0x0051(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	TMap<TSoftObjectPtr<class UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap;                                            // 0x0058(0x0050) (CPF_Edit, CPF_EditFixedSize, CPF_Config, CPF_NativeAccessSpecifierPublic)
	bool                                               SplitSwitchContainerMedia;                                // 0x00A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               SplitMediaPerFolder;                                      // 0x00A9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseEventBasedPackaging;                                   // 0x00AA(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EnableAutomaticAssetSynchronization;                      // 0x00AB(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FString                                     CommandletCommitMessage;                                  // 0x00B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               UnrealCultureToWwiseCulture;                              // 0x00C0(0x0050) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	bool                                               AskedToUseNewAssetManagement;                             // 0x0110(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableMultiCoreRendering;                                // 0x0111(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               MigratedEnableMultiCoreRendering;                         // 0x0112(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               FixupRedirectorsDuringMigration;                          // 0x0113(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0118(0x0010) (CPF_Config, CPF_Deprecated, CPF_NativeAccessSpecifierPublic)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0128(0x0010) (CPF_Config, CPF_Deprecated, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkSettings"));
		return ptr;
	}

};


// Class AkAudio.AkSettingsPerUser
// 0x0058 (0x0080 - 0x0028)
class UAkSettingsPerUser : public UObject
{
public:
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0028(0x0010) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0038(0x0010) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	bool                                               EnableAutomaticAssetSynchronization;                      // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     WaapiIPAddress;                                           // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           WaapiPort;                                                // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAutoConnectToWAAPI;                                      // 0x0064(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               AutoSyncSelection;                                        // 0x0065(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               SuppressWwiseProjectPathWarnings;                         // 0x0066(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               SoundDataGenerationSkipLanguage;                          // 0x0067(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkSettingsPerUser"));
		return ptr;
	}

};


// Class AkAudio.AkSlider
// 0x0428 (0x0530 - 0x0108)
class UAkSlider : public UWidget
{
public:
	float                                              Value;                                                    // 0x0108(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x010C(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FSliderStyle                                WidgetStyle;                                              // 0x0120(0x0340) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0460(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	struct FLinearColor                                SliderBarColor;                                           // 0x0464(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                SliderHandleColor;                                        // 0x0474(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IndentHandle;                                             // 0x0484(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Locked;                                                   // 0x0485(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0486(0x0002) MISSED OFFSET
	float                                              StepSize;                                                 // 0x0488(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                              // 0x048C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	struct FAkPropertyToControl                        ThePropertyToControl;                                     // 0x0490(0x0010) (CPF_Edit, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                       ItemToControl;                                            // 0x04A0(0x0040) (CPF_Edit, CPF_Config, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnValueChanged;                                           // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnItemDropped;                                            // 0x04F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPropertyDropped;                                        // 0x0500(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0510(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkSlider"));
		return ptr;
	}


	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	void SetAkSliderItemProperty(const struct FString& ItemProperty);
	void SetAkSliderItemId(const struct FGuid& ItemId);
	float GetValue();
	struct FString GetAkSliderItemProperty();
	struct FGuid GetAkSliderItemId();
};


// Class AkAudio.AkSpatialAudioVolume
// 0x0018 (0x0270 - 0x0258)
class AAkSpatialAudioVolume : public AVolume
{
public:
	class UAkSurfaceReflectorSetComponent*             SurfaceReflectorSet;                                      // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkLateReverbComponent*                      LateReverb;                                               // 0x0260(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkRoomComponent*                            Room;                                                     // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkSpatialAudioVolume"));
		return ptr;
	}

};


// Class AkAudio.AkSpotReflector
// 0x0028 (0x0248 - 0x0220)
class AAkSpotReflector : public AActor
{
public:
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                    // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     EarlyReflectionAuxBusName;                                // 0x0228(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkAcousticTexture*                          AcousticTexture;                                          // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DistanceScalingFactor;                                    // 0x0240(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Level;                                                    // 0x0244(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkSpotReflector"));
		return ptr;
	}

};


// Class AkAudio.AkStateValue
// 0x0000 (0x0058 - 0x0058)
class UAkStateValue : public UAkGroupValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkStateValue"));
		return ptr;
	}

};


// Class AkAudio.AkSurfaceReflectorSetComponent
// 0x0030 (0x0230 - 0x0200)
class UAkSurfaceReflectorSetComponent : public USceneComponent
{
public:
	TArray<struct FAkPoly>                             AcousticPolys;                                            // 0x0200(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDiffraction : 1;                                   // 0x0210(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDiffractionOnBoundaryEdges : 1;                    // 0x0210(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0211(0x0007) MISSED OFFSET
	class AActor*                                      AssociatedRoom;                                           // 0x0218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0220(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkSurfaceReflectorSetComponent"));
		return ptr;
	}


	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};


// Class AkAudio.AkSwitchInitializationSettings
// 0x00C8 (0x00F0 - 0x0028)
class UAkSwitchInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithCommSelection   CommunicationSettings;                                    // 0x0090(0x0028) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                         // 0x00B8(0x0038) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkSwitchInitializationSettings"));
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkSwitchPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkSwitchPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkSwitchPlatformInfo"));
		return ptr;
	}

};


// Class AkAudio.AkSwitchValue
// 0x0000 (0x0058 - 0x0058)
class UAkSwitchValue : public UAkGroupValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkSwitchValue"));
		return ptr;
	}

};


// Class AkAudio.AkTrigger
// 0x0000 (0x0040 - 0x0040)
class UAkTrigger : public UAkAudioType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkTrigger"));
		return ptr;
	}

};


// Class AkAudio.AkTVOSInitializationSettings
// 0x00D8 (0x0100 - 0x0028)
class UAkTVOSInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkAudioSession                             AudioSession;                                             // 0x0090(0x000C) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x00A0(0x0028) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettings           AdvancedSettings;                                         // 0x00C8(0x0034) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkTVOSInitializationSettings"));
		return ptr;
	}

};


// Class AkAudio.AkTVOSPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkTVOSPlatformInfo"));
		return ptr;
	}

};


// Class AkAudio.AkWaapiCalls
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkWaapiCalls"));
		return ptr;
	}


	static struct FAKWaapiJsonObject Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone);
	static struct FAKWaapiJsonObject SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const struct FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
	static void SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int ID);
	static bool RegisterWaapiProjectLoadedCallback(const struct FScriptDelegate& Callback);
	static bool RegisterWaapiConnectionLostCallback(const struct FScriptDelegate& Callback);
	static int GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription);
	static struct FText Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	static struct FString Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	static struct FAKWaapiJsonObject CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions);
};


// Class AkAudio.SAkWaapiFieldNamesConv
// 0x0000 (0x0028 - 0x0028)
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.SAkWaapiFieldNamesConv"));
		return ptr;
	}


	static struct FText Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
	static struct FString Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
};


// Class AkAudio.AkWaapiJsonManager
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkWaapiJsonManager"));
		return ptr;
	}


	static struct FAKWaapiJsonObject SetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FString& FieldValue, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FString> FieldStringValues, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target);
	static struct FString GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static float GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static int GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static bool GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static TArray<struct FAKWaapiJsonObject> GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static struct FText Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
	static struct FString Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
};


// Class AkAudio.AkWaapiUriConv
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkWaapiUriConv"));
		return ptr;
	}


	static struct FText Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri);
	static struct FString Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri);
};


// Class AkAudio.AkWindowsInitializationSettings
// 0x00D0 (0x00F8 - 0x0028)
class UAkWindowsInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0090(0x0028) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkWindowsAdvancedInitializationSettings    AdvancedSettings;                                         // 0x00B8(0x0040) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkWindowsInitializationSettings"));
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkWin32PlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkWin32PlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkWin32PlatformInfo"));
		return ptr;
	}

};


// Class AkAudio.AkWin64PlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkWin64PlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkWin64PlatformInfo"));
		return ptr;
	}

};


// Class AkAudio.AkWindowsPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkWindowsPlatformInfo"));
		return ptr;
	}

};


// Class AkAudio.AkWwiseTree
// 0x0040 (0x0148 - 0x0108)
class UAkWwiseTree : public UWidget
{
public:
	struct FMulticastScriptDelegate                    OnSelectionChanged;                                       // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnItemDragged;                                            // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkWwiseTree"));
		return ptr;
	}


	void SetSearchText(const struct FString& newText);
	struct FAkWwiseObjectDetails GetSelectedItem();
	struct FString GetSearchText();
};


// Class AkAudio.AkWwiseTreeSelector
// 0x0060 (0x0168 - 0x0108)
class UAkWwiseTreeSelector : public UWidget
{
public:
	struct FMulticastScriptDelegate                    OnSelectionChanged;                                       // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnItemDragged;                                            // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0128(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkWwiseTreeSelector"));
		return ptr;
	}

};


// Class AkAudio.AkXboxOneInitializationSettings
// 0x00D0 (0x00F8 - 0x0028)
class UAkXboxOneInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                           // 0x0028(0x0060) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkXboxOneApuHeapInitializationSettings     ApuHeapSettings;                                          // 0x0088(0x0008) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0090(0x0028) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FAkXboxOneAdvancedInitializationSettings    AdvancedSettings;                                         // 0x00B8(0x003C) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkXboxOneInitializationSettings"));
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkXboxOnePlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.AkXboxOnePlatformInfo"));
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioEvent
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                   // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                           // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.InterpTrackAkAudioEvent"));
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                    // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.InterpTrackAkAudioRTPC"));
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.InterpTrackInstAkAudioEvent"));
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.InterpTrackInstAkAudioRTPC"));
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventSection
// 0x00E8 (0x01D0 - 0x00E8)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00E8(0x0040) MISSED OFFSET
	class UAkAudioEvent*                               Event;                                                    // 0x0128(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               RetriggerEvent;                                           // 0x0130(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	int                                                ScrubTailLengthMs;                                        // 0x0134(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               StopAtSectionEnd;                                         // 0x0138(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	struct FString                                     EventName;                                                // 0x0140(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0150(0x0020) MISSED OFFSET
	float                                              MaxSourceDuration;                                        // 0x0170(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	struct FString                                     MaxDurationSourceID;                                      // 0x0178(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData05[0x48];                                      // 0x0188(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.MovieSceneAkAudioEventSection"));
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkTrack
// 0x0018 (0x0090 - 0x0078)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0078(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bIsAMasterTrack : 1;                                      // 0x0088(0x0001) (CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.MovieSceneAkTrack"));
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventTrack
// 0x0008 (0x0098 - 0x0090)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.MovieSceneAkAudioEventTrack"));
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0x0168 (0x0250 - 0x00E8)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	class UAkRtpc*                                     RTPC;                                                     // 0x00E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FString                                     Name;                                                     // 0x00F0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRichCurve                                  FloatCurve;                                               // 0x0100(0x0080) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannelSerializationHelper  FloatChannelSerializationHelper;                          // 0x0180(0x0030) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannel                     RTPCChannel;                                              // 0x01B0(0x00A0) (CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.MovieSceneAkAudioRTPCSection"));
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCTrack
// 0x0008 (0x0098 - 0x0090)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.MovieSceneAkAudioRTPCTrack"));
		return ptr;
	}

};


// Class AkAudio.PostEventAsync
// 0x0070 (0x00A0 - 0x0030)
class UPostEventAsync : public UBlueprintAsyncActionBase
{
public:
	struct FMulticastScriptDelegate                    Completed;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0040(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.PostEventAsync"));
		return ptr;
	}


	static class UPostEventAsync* PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed);
	void PollPostEventFuture();
};


// Class AkAudio.PostEventAtLocationAsync
// 0x0050 (0x0080 - 0x0030)
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{
public:
	struct FMulticastScriptDelegate                    Completed;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0040(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AkAudio.PostEventAtLocationAsync"));
		return ptr;
	}


	static class UPostEventAtLocationAsync* PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation);
	void PollPostEventFuture();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
