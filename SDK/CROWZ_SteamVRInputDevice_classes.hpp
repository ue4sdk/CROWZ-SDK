#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_SteamVRInputDevice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USteamVRInputDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary"));
		return ptr;
	}


	static void ShowSteamVR_ActionOrigin(const struct FSteamVRAction& SteamVRAction, const struct FSteamVRActionSet& SteamVRActionSet);
	static void ShowAllSteamVR_ActionOrigins();
	static float SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue);
	static void SetPoseSource(bool bUseSkeletonPose);
	static void SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState);
	static bool ResetSeatedPosition();
	static void PlaySteamVR_HapticFeedback(ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude);
	static float GetUserIPD();
	static bool GetSteamVR_OriginTrackedDeviceInfo(const struct FSteamVRAction& SteamVRAction, struct FSteamVRInputOriginInfo* InputOriginInfo);
	static void GetSteamVR_OriginLocalizedName(const struct FSteamVRAction& SteamVRAction, TArray<ESteamVRInputStringBits> LocalizedParts, struct FString* OriginLocalizedName);
	static TArray<struct FSteamVRInputBindingInfo> GetSteamVR_InputBindingInfo(const struct FSteamVRAction& SteamVRActionHandle);
	static bool GetSteamVR_HandPoseRelativeToNow(ESteamVRHand hand, float PredictedSecondsFromNow, struct FVector* position, struct FRotator* Orientation);
	static float GetSteamVR_GlobalPredictedSecondsFromNow();
	static void GetSteamVR_ActionSetArray(TArray<struct FSteamVRActionSet>* SteamVRActionSets);
	static void GetSteamVR_ActionArray(TArray<struct FSteamVRAction>* SteamVRActions);
	static void GetSkeletalTransform(bool bWithController, struct FSteamVRSkeletonTransform* LeftHand, struct FSteamVRSkeletonTransform* RightHand);
	static void GetSkeletalState(bool* LeftHandState, bool* RightHandState);
	static void GetRightHandPoseData(struct FVector* position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity);
	static void GetPoseSource(bool* bUsingSkeletonPose);
	static void GetLeftHandPoseData(struct FVector* position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity);
	static void GetFingerCurlsAndSplays(EHand hand, ESkeletalSummaryDataType SummaryDataType, struct FSteamVRFingerCurls* FingerCurls, struct FSteamVRFingerSplays* FingerSplays);
	static void GetCurlsAndSplaysState(bool* LeftHandState, bool* RightHandState);
	static void GetControllerFidelity(EControllerFidelity* LeftControllerFidelity, EControllerFidelity* RightControllerFidelity);
	static void FindSteamVR_OriginTrackedDeviceInfo(const struct FName& ActionName, const struct FName& ActionSet, bool* bResult, struct FSteamVRInputOriginInfo* InputOriginInfo);
	static TArray<struct FSteamVRInputBindingInfo> FindSteamVR_InputBindingInfo(const struct FName& ActionName, const struct FName& ActionSet);
	static bool FindSteamVR_ActionOrigin(const struct FName& ActionName, const struct FName& ActionSet);
	static void FindSteamVR_Action(const struct FName& ActionName, const struct FName& ActionSet, bool* bResult, struct FSteamVRAction* FoundAction, struct FSteamVRActionSet* FoundActionSet);
};


// Class SteamVRInputDevice.SteamVRTrackingReferences
// 0x0058 (0x0108 - 0x00B0)
class USteamVRTrackingReferences : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    OnTrackedDeviceActivated;                                 // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTrackedDeviceDeactivated;                               // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	float                                              ActiveDevicePollFrequency;                                // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     TrackingReferenceScale;                                   // 0x00D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UStaticMeshComponent*>                TrackingReferences;                                       // 0x00E0(0x0010) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamVRInputDevice.SteamVRTrackingReferences"));
		return ptr;
	}


	bool ShowTrackingReferences(class UStaticMesh* TrackingReferenceMesh);
	void HideTrackingReferences();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
