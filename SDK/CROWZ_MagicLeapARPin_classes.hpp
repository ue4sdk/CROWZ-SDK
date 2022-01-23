#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapARPin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapARPin.MagicLeapARPinComponent
// 0x01B0 (0x03B0 - 0x0200)
class UMagicLeapARPinComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0200(0x0008) MISSED OFFSET
	int                                                UserIndex;                                                // 0x0208(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EMagicLeapAutoPinType                              AutoPinType;                                              // 0x020C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShouldPinActor;                                          // 0x020D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x020E(0x0002) MISSED OFFSET
	class UClass* /* UMagicLeapARPinSaveGame*/         PinDataClass;                                             // 0x0210(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSet<EMagicLeapARPinType>                          SearchPinTypes;                                           // 0x0218(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	class USphereComponent*                            SearchVolume;                                             // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPersistentEntityPinned;                                 // 0x0270(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPersistentEntityPinLost;                                // 0x0280(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPinDataLoadAttemptCompleted;                            // 0x0290(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       PinnedCFUID;                                              // 0x02A0(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class USceneComponent*                             PinnedSceneComponent;                                     // 0x02B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UMagicLeapARPinSaveGame*                     PinData;                                                  // 0x02B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0xF0];                                      // 0x02C0(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapARPin.MagicLeapARPinComponent"));
		return ptr;
	}


	void UnPin();
	class UMagicLeapARPinSaveGame* TryGetPinData(class UClass* /* UMagicLeapARPinSaveGame*/ InPinDataClass, bool* OutPinDataValid);
	bool PinToRestoredOrSyncedID();
	bool PinToID(const struct FGuid& PinId);
	void PinToBestFit();
	bool PinSceneComponent(class USceneComponent* ComponentToPin);
	bool PinRestoredOrSynced();
	bool PinActor(class AActor* ActorToPin);
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
	void PersistentEntityPinLost__DelegateSignature();
	void MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored);
	bool IsPinned();
	bool GetPinState(struct FMagicLeapARPinState* State);
	bool GetPinnedPinID(struct FGuid* PinId);
	class UMagicLeapARPinSaveGame* GetPinData(class UClass* /* UMagicLeapARPinSaveGame*/ PinDataClass);
	void AttemptPinDataRestorationAsync();
	bool AttemptPinDataRestoration();
};


// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapARPin.MagicLeapARPinFunctionLibrary"));
		return ptr;
	}


	static void UnBindToOnMagicLeapContentBindingFoundDelegate(const struct FScriptDelegate& Delegate);
	static void UnBindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate);
	static EMagicLeapPassableWorldError SetGlobalQueryFilter(const struct FMagicLeapARPinQuery& InGlobalFilter);
	static void SetContentBindingSaveGameUserIndex(int UserIndex);
	static EMagicLeapPassableWorldError QueryARPins(const struct FMagicLeapARPinQuery& Query, TArray<struct FGuid>* Pins);
	static bool ParseStringToARPinId(const struct FString& PinIdString, struct FGuid* ARPinId);
	static bool IsTrackerValid();
	static EMagicLeapPassableWorldError GetNumAvailableARPins(int* Count);
	static EMagicLeapPassableWorldError GetGlobalQueryFilter(struct FMagicLeapARPinQuery* CurrentGlobalFilter);
	static int GetContentBindingSaveGameUserIndex();
	static EMagicLeapPassableWorldError GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinId);
	static EMagicLeapPassableWorldError GetAvailableARPins(int NumRequested, TArray<struct FGuid>* Pins);
	static struct FString GetARPinStateToString(const struct FMagicLeapARPinState& State);
	static EMagicLeapPassableWorldError GetARPinState(const struct FGuid& PinId, struct FMagicLeapARPinState* State);
	static bool GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinId, struct FVector* position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	static bool GetARPinPositionAndOrientation(const struct FGuid& PinId, struct FVector* position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	static EMagicLeapPassableWorldError DestroyTracker();
	static EMagicLeapPassableWorldError CreateTracker();
	static void BindToOnMagicLeapContentBindingFoundDelegate(const struct FScriptDelegate& Delegate);
	static void BindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate);
	static struct FString ARPinIdToString(const struct FGuid& ARPinId);
};


// Class MagicLeapARPin.MagicLeapARPinInfoActorBase
// 0x0018 (0x0238 - 0x0220)
class AMagicLeapARPinInfoActorBase : public AActor
{
public:
	struct FGuid                                       PinId;                                                    // 0x0220(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bVisibilityOverride;                                      // 0x0230(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapARPin.MagicLeapARPinInfoActorBase"));
		return ptr;
	}


	void OnUpdateARPinState();
};


// Class MagicLeapARPin.MagicLeapARPinRenderer
// 0x0068 (0x0288 - 0x0220)
class AMagicLeapARPinRenderer : public AActor
{
public:
	bool                                               bInfoActorsVisibilityOverride;                            // 0x0220(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	TMap<struct FGuid, class AMagicLeapARPinInfoActorBase*> AllInfoActors;                                            // 0x0228(0x0050) (CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0278(0x0008) MISSED OFFSET
	class UClass* /* AMagicLeapARPinInfoActorBase*/    ClassToSpawn;                                             // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapARPin.MagicLeapARPinRenderer"));
		return ptr;
	}


	void SetVisibilityOverride(bool InVisibilityOverride);
};


// Class MagicLeapARPin.MagicLeapARPinSettings
// 0x0018 (0x0040 - 0x0028)
class UMagicLeapARPinSettings : public UObject
{
public:
	float                                              UpdateCheckFrequency;                                     // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMagicLeapARPinState                        OnUpdatedEventTriggerDelta;                               // 0x002C(0x0014) (CPF_Edit, CPF_Config, CPF_GlobalConfig, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapARPin.MagicLeapARPinSettings"));
		return ptr;
	}

};


// Class MagicLeapARPin.MagicLeapARPinSaveGame
// 0x0088 (0x00B0 - 0x0028)
class UMagicLeapARPinSaveGame : public USaveGame
{
public:
	struct FGuid                                       PinnedID;                                                 // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  ComponentWorldTransform;                                  // 0x0040(0x0030) (CPF_Edit, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  PinTransform;                                             // 0x0070(0x0030) (CPF_Edit, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bShouldPinActor;                                          // 0x00A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00A1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapARPin.MagicLeapARPinSaveGame"));
		return ptr;
	}

};


// Class MagicLeapARPin.MagicLeapARPinContentBindings
// 0x0050 (0x0078 - 0x0028)
class UMagicLeapARPinContentBindings : public USaveGame
{
public:
	TMap<struct FGuid, struct FMagicLeapARPinObjectIdList> AllContentBindings;                                       // 0x0028(0x0050) (CPF_Edit, CPF_EditConst, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapARPin.MagicLeapARPinContentBindings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
