// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapHandTracking_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMagicLeapHandTrackingGesture  Gesture                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Confidence                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMagicLeapHandTrackingFunctionLibrary::SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture, float Confidence)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold"));

	struct
	{
		EMagicLeapHandTrackingGesture  Gesture;
		float                          Confidence;
	} params;

	params.Gesture = Gesture;
	params.Confidence = Confidence;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<EMagicLeapHandTrackingGesture> StaticGesturesToActivate       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTrackingEnabled               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::SetConfiguration(TArray<EMagicLeapHandTrackingGesture> StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration"));

	struct
	{
		TArray<EMagicLeapHandTrackingGesture> StaticGesturesToActivate;
		EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel;
		EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel;
		bool                           bTrackingEnabled;
		bool                           ReturnValue;
	} params;

	params.StaticGesturesToActivate = StaticGesturesToActivate;
	params.KeypointsFilterLevel = KeypointsFilterLevel;
	params.GestureFilterLevel = GestureFilterLevel;
	params.bTrackingEnabled = bTrackingEnabled;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::IsHoldingControl(EControllerHand hand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl"));

	struct
	{
		EControllerHand                hand;
		bool                           ReturnValue;
	} params;

	params.hand = hand;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMagicLeapHandTrackingGesture  Gesture                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UMagicLeapHandTrackingFunctionLibrary::GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold"));

	struct
	{
		EMagicLeapHandTrackingGesture  Gesture;
		float                          ReturnValue;
	} params;

	params.Gesture = Gesture;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapHandTrackingKeypoint Keypoint                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   OutMotionSource                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetMotionSourceForHandKeypoint(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, struct FName* OutMotionSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint"));

	struct
	{
		EControllerHand                hand;
		EMagicLeapHandTrackingKeypoint Keypoint;
		struct FName                   OutMotionSource;
		bool                           ReturnValue;
	} params;

	params.hand = hand;
	params.Keypoint = Keypoint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutMotionSource != nullptr)
		*OutMotionSource = params.OutMotionSource;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkSourceHandle* SourceHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource"));

	struct
	{
		struct FLiveLinkSourceHandle   SourceHandle;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapGestureTransformSpace TransformSpace                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              Secondary                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetHandThumbTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Secondary)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip"));

	struct
	{
		EControllerHand                hand;
		EMagicLeapGestureTransformSpace TransformSpace;
		struct FTransform              Secondary;
		bool                           ReturnValue;
	} params;

	params.hand = hand;
	params.TransformSpace = TransformSpace;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Secondary != nullptr)
		*Secondary = params.Secondary;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapHandTrackingKeypoint OutKeyPoint                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetHandKeypointForMotionSource(const struct FName& MotionSource, EMagicLeapHandTrackingKeypoint* OutKeyPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource"));

	struct
	{
		struct FName                   MotionSource;
		EMagicLeapHandTrackingKeypoint OutKeyPoint;
		bool                           ReturnValue;
	} params;

	params.MotionSource = MotionSource;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutKeyPoint != nullptr)
		*OutKeyPoint = params.OutKeyPoint;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapGestureTransformSpace TransformSpace                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              Pointer                        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetHandIndexFingerTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Pointer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip"));

	struct
	{
		EControllerHand                hand;
		EMagicLeapGestureTransformSpace TransformSpace;
		struct FTransform              Pointer;
		bool                           ReturnValue;
	} params;

	params.hand = hand;
	params.TransformSpace = TransformSpace;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Pointer != nullptr)
		*Pointer = params.Pointer;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 HandCenterNormalized           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetHandCenterNormalized(EControllerHand hand, struct FVector* HandCenterNormalized)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized"));

	struct
	{
		EControllerHand                hand;
		struct FVector                 HandCenterNormalized;
		bool                           ReturnValue;
	} params;

	params.hand = hand;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (HandCenterNormalized != nullptr)
		*HandCenterNormalized = params.HandCenterNormalized;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              HandCenter                     (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetHandCenter(EControllerHand hand, struct FTransform* HandCenter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter"));

	struct
	{
		EControllerHand                hand;
		struct FTransform              HandCenter;
		bool                           ReturnValue;
	} params;

	params.hand = hand;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (HandCenter != nullptr)
		*HandCenter = params.HandCenter;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapHandTrackingKeypoint Keypoint                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapGestureTransformSpace TransformSpace                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypointTransform(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform"));

	struct
	{
		EControllerHand                hand;
		EMagicLeapHandTrackingKeypoint Keypoint;
		EMagicLeapGestureTransformSpace TransformSpace;
		struct FTransform              Transform;
		bool                           ReturnValue;
	} params;

	params.hand = hand;
	params.Keypoint = Keypoint;
	params.TransformSpace = TransformSpace;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Transform != nullptr)
		*Transform = params.Transform;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FTransform>      Keypoints                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypoints(EControllerHand hand, TArray<struct FTransform>* Keypoints)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints"));

	struct
	{
		EControllerHand                hand;
		TArray<struct FTransform>      Keypoints;
		bool                           ReturnValue;
	} params;

	params.hand = hand;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Keypoints != nullptr)
		*Keypoints = params.Keypoints;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Confidence                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetCurrentGestureConfidence(EControllerHand hand, float* Confidence)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence"));

	struct
	{
		EControllerHand                hand;
		float                          Confidence;
		bool                           ReturnValue;
	} params;

	params.hand = hand;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Confidence != nullptr)
		*Confidence = params.Confidence;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapHandTrackingGesture  Gesture                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetCurrentGesture(EControllerHand hand, EMagicLeapHandTrackingGesture* Gesture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture"));

	struct
	{
		EControllerHand                hand;
		EMagicLeapHandTrackingGesture  Gesture;
		bool                           ReturnValue;
	} params;

	params.hand = hand;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Gesture != nullptr)
		*Gesture = params.Gesture;

	return params.ReturnValue;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<EMagicLeapHandTrackingGesture> ActiveStaticGestures           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTrackingEnabled               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetConfiguration(TArray<EMagicLeapHandTrackingGesture>* ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration"));

	struct
	{
		TArray<EMagicLeapHandTrackingGesture> ActiveStaticGestures;
		EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel;
		EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel;
		bool                           bTrackingEnabled;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ActiveStaticGestures != nullptr)
		*ActiveStaticGestures = params.ActiveStaticGestures;
	if (KeypointsFilterLevel != nullptr)
		*KeypointsFilterLevel = params.KeypointsFilterLevel;
	if (GestureFilterLevel != nullptr)
		*GestureFilterLevel = params.GestureFilterLevel;
	if (bTrackingEnabled != nullptr)
		*bTrackingEnabled = params.bTrackingEnabled;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
