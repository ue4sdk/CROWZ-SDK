// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_SteamVRInputDevice_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSteamVRAction          SteamVRAction                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FSteamVRActionSet       SteamVRActionSet               (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::ShowSteamVR_ActionOrigin(const struct FSteamVRAction& SteamVRAction, const struct FSteamVRActionSet& SteamVRActionSet)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin"));

	struct
	{
		struct FSteamVRAction          SteamVRAction;
		struct FSteamVRActionSet       SteamVRActionSet;
	} params;

	params.SteamVRAction = SteamVRAction;
	params.SteamVRActionSet = SteamVRActionSet;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void USteamVRInputDeviceFunctionLibrary::ShowAllSteamVR_ActionOrigins()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float USteamVRInputDeviceFunctionLibrary::SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow"));

	struct
	{
		float                          NewValue;
		float                          ReturnValue;
	} params;

	params.NewValue = NewValue;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bUseSkeletonPose               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::SetPoseSource(bool bUseSkeletonPose)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource"));

	struct
	{
		bool                           bUseSkeletonPose;
	} params;

	params.bUseSkeletonPose = bUseSkeletonPose;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           NewLeftHandState               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           NewRightHandState              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState"));

	struct
	{
		bool                           NewLeftHandState;
		bool                           NewRightHandState;
	} params;

	params.NewLeftHandState = NewLeftHandState;
	params.NewRightHandState = NewRightHandState;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamVRInputDeviceFunctionLibrary::ResetSeatedPosition()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ESteamVRHand                   hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          StartSecondsFromNow            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DurationSeconds                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Frequency                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Amplitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::PlaySteamVR_HapticFeedback(ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback"));

	struct
	{
		ESteamVRHand                   hand;
		float                          StartSecondsFromNow;
		float                          DurationSeconds;
		float                          Frequency;
		float                          Amplitude;
	} params;

	params.hand = hand;
	params.StartSecondsFromNow = StartSecondsFromNow;
	params.DurationSeconds = DurationSeconds;
	params.Frequency = Frequency;
	params.Amplitude = Amplitude;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float USteamVRInputDeviceFunctionLibrary::GetUserIPD()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD"));

	struct
	{
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSteamVRAction          SteamVRAction                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FSteamVRInputOriginInfo InputOriginInfo                (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamVRInputDeviceFunctionLibrary::GetSteamVR_OriginTrackedDeviceInfo(const struct FSteamVRAction& SteamVRAction, struct FSteamVRInputOriginInfo* InputOriginInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo"));

	struct
	{
		struct FSteamVRAction          SteamVRAction;
		struct FSteamVRInputOriginInfo InputOriginInfo;
		bool                           ReturnValue;
	} params;

	params.SteamVRAction = SteamVRAction;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InputOriginInfo != nullptr)
		*InputOriginInfo = params.InputOriginInfo;

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSteamVRAction          SteamVRAction                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<ESteamVRInputStringBits> LocalizedParts                 (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// struct FString                 OriginLocalizedName            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetSteamVR_OriginLocalizedName(const struct FSteamVRAction& SteamVRAction, TArray<ESteamVRInputStringBits> LocalizedParts, struct FString* OriginLocalizedName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName"));

	struct
	{
		struct FSteamVRAction          SteamVRAction;
		TArray<ESteamVRInputStringBits> LocalizedParts;
		struct FString                 OriginLocalizedName;
	} params;

	params.SteamVRAction = SteamVRAction;
	params.LocalizedParts = LocalizedParts;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OriginLocalizedName != nullptr)
		*OriginLocalizedName = params.OriginLocalizedName;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSteamVRAction          SteamVRActionHandle            (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSteamVRInputBindingInfo> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FSteamVRInputBindingInfo> USteamVRInputDeviceFunctionLibrary::GetSteamVR_InputBindingInfo(const struct FSteamVRAction& SteamVRActionHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo"));

	struct
	{
		struct FSteamVRAction          SteamVRActionHandle;
		TArray<struct FSteamVRInputBindingInfo> ReturnValue;
	} params;

	params.SteamVRActionHandle = SteamVRActionHandle;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 position                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// ESteamVRHand                   hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          PredictedSecondsFromNow        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamVRInputDeviceFunctionLibrary::GetSteamVR_HandPoseRelativeToNow(ESteamVRHand hand, float PredictedSecondsFromNow, struct FVector* position, struct FRotator* Orientation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow"));

	struct
	{
		struct FVector                 position;
		struct FRotator                Orientation;
		ESteamVRHand                   hand;
		float                          PredictedSecondsFromNow;
		bool                           ReturnValue;
	} params;

	params.hand = hand;
	params.PredictedSecondsFromNow = PredictedSecondsFromNow;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (position != nullptr)
		*position = params.position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float USteamVRInputDeviceFunctionLibrary::GetSteamVR_GlobalPredictedSecondsFromNow()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow"));

	struct
	{
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FSteamVRActionSet> SteamVRActionSets              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetSteamVR_ActionSetArray(TArray<struct FSteamVRActionSet>* SteamVRActionSets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray"));

	struct
	{
		TArray<struct FSteamVRActionSet> SteamVRActionSets;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SteamVRActionSets != nullptr)
		*SteamVRActionSets = params.SteamVRActionSets;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FSteamVRAction>  SteamVRActions                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetSteamVR_ActionArray(TArray<struct FSteamVRAction>* SteamVRActions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray"));

	struct
	{
		TArray<struct FSteamVRAction>  SteamVRActions;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SteamVRActions != nullptr)
		*SteamVRActions = params.SteamVRActions;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSteamVRSkeletonTransform LeftHand                       (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FSteamVRSkeletonTransform RightHand                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           bWithController                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetSkeletalTransform(bool bWithController, struct FSteamVRSkeletonTransform* LeftHand, struct FSteamVRSkeletonTransform* RightHand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform"));

	struct
	{
		struct FSteamVRSkeletonTransform LeftHand;
		struct FSteamVRSkeletonTransform RightHand;
		bool                           bWithController;
	} params;

	params.bWithController = bWithController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LeftHand != nullptr)
		*LeftHand = params.LeftHand;
	if (RightHand != nullptr)
		*RightHand = params.RightHand;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// bool                           LeftHandState                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           RightHandState                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetSkeletalState(bool* LeftHandState, bool* RightHandState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState"));

	struct
	{
		bool                           LeftHandState;
		bool                           RightHandState;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LeftHandState != nullptr)
		*LeftHandState = params.LeftHandState;
	if (RightHandState != nullptr)
		*RightHandState = params.RightHandState;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 position                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 AngularVelocity                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Velocity                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetRightHandPoseData(struct FVector* position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData"));

	struct
	{
		struct FVector                 position;
		struct FRotator                Orientation;
		struct FVector                 AngularVelocity;
		struct FVector                 Velocity;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (position != nullptr)
		*position = params.position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (AngularVelocity != nullptr)
		*AngularVelocity = params.AngularVelocity;
	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// bool                           bUsingSkeletonPose             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetPoseSource(bool* bUsingSkeletonPose)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource"));

	struct
	{
		bool                           bUsingSkeletonPose;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (bUsingSkeletonPose != nullptr)
		*bUsingSkeletonPose = params.bUsingSkeletonPose;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 position                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 AngularVelocity                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Velocity                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetLeftHandPoseData(struct FVector* position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData"));

	struct
	{
		struct FVector                 position;
		struct FRotator                Orientation;
		struct FVector                 AngularVelocity;
		struct FVector                 Velocity;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (position != nullptr)
		*position = params.position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (AngularVelocity != nullptr)
		*AngularVelocity = params.AngularVelocity;
	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EHand                          hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSteamVRFingerCurls     FingerCurls                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FSteamVRFingerSplays    FingerSplays                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// ESkeletalSummaryDataType       SummaryDataType                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetFingerCurlsAndSplays(EHand hand, ESkeletalSummaryDataType SummaryDataType, struct FSteamVRFingerCurls* FingerCurls, struct FSteamVRFingerSplays* FingerSplays)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays"));

	struct
	{
		EHand                          hand;
		struct FSteamVRFingerCurls     FingerCurls;
		struct FSteamVRFingerSplays    FingerSplays;
		ESkeletalSummaryDataType       SummaryDataType;
	} params;

	params.hand = hand;
	params.SummaryDataType = SummaryDataType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (FingerCurls != nullptr)
		*FingerCurls = params.FingerCurls;
	if (FingerSplays != nullptr)
		*FingerSplays = params.FingerSplays;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// bool                           LeftHandState                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           RightHandState                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetCurlsAndSplaysState(bool* LeftHandState, bool* RightHandState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState"));

	struct
	{
		bool                           LeftHandState;
		bool                           RightHandState;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LeftHandState != nullptr)
		*LeftHandState = params.LeftHandState;
	if (RightHandState != nullptr)
		*RightHandState = params.RightHandState;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EControllerFidelity            LeftControllerFidelity         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControllerFidelity            RightControllerFidelity        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetControllerFidelity(EControllerFidelity* LeftControllerFidelity, EControllerFidelity* RightControllerFidelity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity"));

	struct
	{
		EControllerFidelity            LeftControllerFidelity;
		EControllerFidelity            RightControllerFidelity;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LeftControllerFidelity != nullptr)
		*LeftControllerFidelity = params.LeftControllerFidelity;
	if (RightControllerFidelity != nullptr)
		*RightControllerFidelity = params.RightControllerFidelity;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bResult                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSteamVRInputOriginInfo InputOriginInfo                (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   ActionSet                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::FindSteamVR_OriginTrackedDeviceInfo(const struct FName& ActionName, const struct FName& ActionSet, bool* bResult, struct FSteamVRInputOriginInfo* InputOriginInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo"));

	struct
	{
		struct FName                   ActionName;
		bool                           bResult;
		struct FSteamVRInputOriginInfo InputOriginInfo;
		struct FName                   ActionSet;
	} params;

	params.ActionName = ActionName;
	params.ActionSet = ActionSet;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (InputOriginInfo != nullptr)
		*InputOriginInfo = params.InputOriginInfo;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ActionSet                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSteamVRInputBindingInfo> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FSteamVRInputBindingInfo> USteamVRInputDeviceFunctionLibrary::FindSteamVR_InputBindingInfo(const struct FName& ActionName, const struct FName& ActionSet)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo"));

	struct
	{
		struct FName                   ActionName;
		struct FName                   ActionSet;
		TArray<struct FSteamVRInputBindingInfo> ReturnValue;
	} params;

	params.ActionName = ActionName;
	params.ActionSet = ActionSet;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ActionSet                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamVRInputDeviceFunctionLibrary::FindSteamVR_ActionOrigin(const struct FName& ActionName, const struct FName& ActionSet)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin"));

	struct
	{
		struct FName                   ActionName;
		struct FName                   ActionSet;
		bool                           ReturnValue;
	} params;

	params.ActionName = ActionName;
	params.ActionSet = ActionSet;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bResult                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSteamVRAction          FoundAction                    (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// struct FSteamVRActionSet       FoundActionSet                 (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   ActionSet                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::FindSteamVR_Action(const struct FName& ActionName, const struct FName& ActionSet, bool* bResult, struct FSteamVRAction* FoundAction, struct FSteamVRActionSet* FoundActionSet)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action"));

	struct
	{
		struct FName                   ActionName;
		bool                           bResult;
		struct FSteamVRAction          FoundAction;
		struct FSteamVRActionSet       FoundActionSet;
		struct FName                   ActionSet;
	} params;

	params.ActionName = ActionName;
	params.ActionSet = ActionSet;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (FoundAction != nullptr)
		*FoundAction = params.FoundAction;
	if (FoundActionSet != nullptr)
		*FoundActionSet = params.FoundActionSet;
}


// Function SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UStaticMesh*             TrackingReferenceMesh          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamVRTrackingReferences::ShowTrackingReferences(class UStaticMesh* TrackingReferenceMesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences"));

	struct
	{
		class UStaticMesh*             TrackingReferenceMesh;
		bool                           ReturnValue;
	} params;

	params.TrackingReferenceMesh = TrackingReferenceMesh;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USteamVRTrackingReferences::HideTrackingReferences()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
