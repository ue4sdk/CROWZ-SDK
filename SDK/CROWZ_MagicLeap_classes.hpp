#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeap.InAppPurchaseComponent
// 0x0078 (0x0128 - 0x00B0)
class UInAppPurchaseComponent : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    InAppPurchaseLogMessage;                                  // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    GetItemsDetailsSuccess;                                   // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    GetItemsDetailsFailure;                                   // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    PurchaseConfirmationSuccess;                              // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    PurchaseConfirmationFailure;                              // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    GetPurchaseHistorySuccess;                                // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    GetPurchaseHistoryFailure;                                // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeap.InAppPurchaseComponent"));
		return ptr;
	}


	bool TryPurchaseItemAsync(const struct FPurchaseItemDetails& ItemDetails);
	bool TryGetPurchaseHistoryAsync(int InNumPages);
	bool TryGetItemsDetailsAsync(TArray<struct FString> ItemIDs);
	void PurchaseConfirmationSuccess__DelegateSignature(const struct FPurchaseConfirmation& PurchaseConfirmations);
	void PurchaseConfirmationFailure__DelegateSignature();
	void InAppPurchaseLogMessage__DelegateSignature(const struct FString& LogMessage);
	void GetPurchaseHistorySuccess__DelegateSignature(TArray<struct FPurchaseConfirmation> PurchaseHistory);
	void GetPurchaseHistoryFailure__DelegateSignature();
	void GetItemsDetailsSuccess__DelegateSignature(TArray<struct FPurchaseItemDetails> ItemsDetails);
	void GetItemsDetailsFailure__DelegateSignature();
};


// Class MagicLeap.LuminApplicationLifecycleComponent
// 0x0050 (0x0190 - 0x0140)
class ULuminApplicationLifecycleComponent : public UApplicationLifecycleComponent
{
public:
	struct FMulticastScriptDelegate                    DeviceHasReactivatedDelegate;                             // 0x0140(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    DeviceWillEnterRealityModeDelegate;                       // 0x0150(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    DeviceWillGoInStandbyDelegate;                            // 0x0160(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    FocusLostDelegate;                                        // 0x0170(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    FocusGainedDelegate;                                      // 0x0180(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeap.LuminApplicationLifecycleComponent"));
		return ptr;
	}

};


// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
// 0x0090 (0x01D0 - 0x0140)
class UMagicLeapHeadTrackingNotificationsComponent : public UVRNotificationsComponent
{
public:
	struct FMulticastScriptDelegate                    OnHeadTrackingLost;                                       // 0x0140(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPrivate)
	struct FMulticastScriptDelegate                    OnHeadTrackingRecovered;                                  // 0x0150(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPrivate)
	struct FMulticastScriptDelegate                    OnHeadTrackingRecoveryFailed;                             // 0x0160(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPrivate)
	struct FMulticastScriptDelegate                    OnHeadTrackingNewSessionStarted;                          // 0x0170(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0180(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent"));
		return ptr;
	}

};


// Class MagicLeap.MagicLeapHMDFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapHMDFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeap.MagicLeapHMDFunctionLibrary"));
		return ptr;
	}


	static void SetStabilizationDepthActor(class AActor* InStabilizationDepthActor, bool bSetFocusActor);
	static void SetFocusActor(class AActor* InFocusActor, bool bSetStabilizationActor);
	static void SetBaseRotation(const struct FRotator& InBaseRotation);
	static void SetBasePosition(const struct FVector& InBasePosition);
	static void SetBaseOrientation(const struct FQuat& InBaseOrientation);
	static bool SetAppReady();
	static bool IsRunningOnMagicLeapHMD();
	static int GetPlatformAPILevel();
	static int GetMLSDKVersionRevision();
	static int GetMLSDKVersionMinor();
	static int GetMLSDKVersionMajor();
	static struct FString GetMLSDKVersion();
	static int GetMinimumAPILevel();
	static bool GetHeadTrackingState(struct FMagicLeapHeadTrackingState* State);
	static bool GetHeadTrackingMapEvents(TSet<EMagicLeapHeadTrackingMapEvent>* MapEvents);
	static bool GetGraphicsClientPerformanceInfo(struct FMagicLeapGraphicsClientPerformanceInfo* PerformanceInfo);
};


// Class MagicLeap.MagicLeapMeshTrackerComponent
// 0x0090 (0x0290 - 0x0200)
class UMagicLeapMeshTrackerComponent : public USceneComponent
{
public:
	struct FMulticastScriptDelegate                    OnMeshTrackerUpdated;                                     // 0x0200(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	bool                                               ScanWorld;                                                // 0x0210(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EMagicLeapMeshType                                 MeshType;                                                 // 0x0211(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0212(0x0006) MISSED OFFSET
	class UBoxComponent*                               BoundingVolume;                                           // 0x0218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EMagicLeapMeshLOD                                  LevelOfDetail;                                            // 0x0220(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	float                                              PerimeterOfGapsToFill;                                    // 0x0224(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Planarize;                                                // 0x0228(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0229(0x0003) MISSED OFFSET
	float                                              DisconnectedSectionArea;                                  // 0x022C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               RequestNormals;                                           // 0x0230(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               RequestVertexConfidence;                                  // 0x0231(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EMagicLeapMeshVertexColorMode                      VertexColorMode;                                          // 0x0232(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0233(0x0005) MISSED OFFSET
	TArray<struct FColor>                              BlockVertexColors;                                        // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                VertexColorFromConfidenceZero;                            // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                VertexColorFromConfidenceOne;                             // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               RemoveOverlappingTriangles;                               // 0x0268(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	class UMRMeshComponent*                            MRMesh;                                                   // 0x0270(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BricksPerFrame;                                           // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x14];                                      // 0x027C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeap.MagicLeapMeshTrackerComponent"));
		return ptr;
	}


	void SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh);
	void OnMeshTrackerUpdated__DelegateSignature(const struct FGuid& ID, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence);
	int GetNumQueuedBlockUpdates();
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void DisconnectBlockSelector();
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void ConnectBlockSelector(const TScriptInterface<class UMagicLeapMeshBlockSelectorInterface>& Selector);
};


// Class MagicLeap.MagicLeapSettings
// 0x0008 (0x0030 - 0x0028)
class UMagicLeapSettings : public UObject
{
public:
	bool                                               bEnableZI;                                                // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseVulkanForZI;                                          // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseMLAudioForZI;                                         // 0x002A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeap.MagicLeapSettings"));
		return ptr;
	}

};


// Class MagicLeap.MagicLeapMeshBlockSelectorInterface
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapMeshBlockSelectorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeap.MagicLeapMeshBlockSelectorInterface"));
		return ptr;
	}


	void SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh);
};


// Class MagicLeap.MagicLeapRaycastComponent
// 0x0068 (0x0118 - 0x00B0)
class UMagicLeapRaycastComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeap.MagicLeapRaycastComponent"));
		return ptr;
	}


	bool RequestRaycast(const struct FMagicLeapRaycastQueryParams& RequestParams, const struct FScriptDelegate& ResultDelegate);
	void RaycastResultDelegate__DelegateSignature(const struct FMagicLeapRaycastHitResult& HitResult);
};


// Class MagicLeap.MagicLeapRaycastFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapRaycastFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeap.MagicLeapRaycastFunctionLibrary"));
		return ptr;
	}


	static struct FMagicLeapRaycastQueryParams MakeRaycastQueryParams(const struct FVector& position, const struct FVector& Direction, const struct FVector& UpVector, int Width, int Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int UserData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
