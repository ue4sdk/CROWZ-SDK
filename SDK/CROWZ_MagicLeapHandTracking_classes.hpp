#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapHandTracking_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory"));
		return ptr;
	}

};


// Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary"));
		return ptr;
	}


	static void SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture, float Confidence);
	static bool SetConfiguration(TArray<EMagicLeapHandTrackingGesture> StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled);
	static bool IsHoldingControl(EControllerHand hand);
	static float GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture);
	static bool GetMotionSourceForHandKeypoint(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, struct FName* OutMotionSource);
	static bool GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkSourceHandle* SourceHandle);
	static bool GetHandThumbTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Secondary);
	static bool GetHandKeypointForMotionSource(const struct FName& MotionSource, EMagicLeapHandTrackingKeypoint* OutKeyPoint);
	static bool GetHandIndexFingerTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Pointer);
	static bool GetHandCenterNormalized(EControllerHand hand, struct FVector* HandCenterNormalized);
	static bool GetHandCenter(EControllerHand hand, struct FTransform* HandCenter);
	static bool GetGestureKeypointTransform(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Transform);
	static bool GetGestureKeypoints(EControllerHand hand, TArray<struct FTransform>* Keypoints);
	static bool GetCurrentGestureConfidence(EControllerHand hand, float* Confidence);
	static bool GetCurrentGesture(EControllerHand hand, EMagicLeapHandTrackingGesture* Gesture);
	static bool GetConfiguration(TArray<EMagicLeapHandTrackingGesture>* ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
