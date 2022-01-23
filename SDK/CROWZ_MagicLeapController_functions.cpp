// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   MotionSource                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::SetMotionSourceForHand(EControllerHand hand, const struct FName& MotionSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand"));

	struct
	{
		EControllerHand                hand;
		struct FName                   MotionSource;
		bool                           ReturnValue;
	} params;

	params.hand = hand;
	params.MotionSource = MotionSource;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMagicLeapControllerTrackingMode TrackingMode                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode"));

	struct
	{
		EMagicLeapControllerTrackingMode TrackingMode;
		bool                           ReturnValue;
	} params;

	params.TrackingMode = TrackingMode;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDPattern LEDPattern                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDColor   LEDColor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DurationInSec                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayLEDPattern(const struct FName& MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern"));

	struct
	{
		struct FName                   MotionSource;
		EMagicLeapControllerLEDPattern LEDPattern;
		EMagicLeapControllerLEDColor   LEDColor;
		float                          DurationInSec;
		bool                           ReturnValue;
	} params;

	params.MotionSource = MotionSource;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDEffect  LEDEffect                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDSpeed   LEDSpeed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDPattern LEDPattern                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDColor   LEDColor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DurationInSec                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayLEDEffect(const struct FName& MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect"));

	struct
	{
		struct FName                   MotionSource;
		EMagicLeapControllerLEDEffect  LEDEffect;
		EMagicLeapControllerLEDSpeed   LEDSpeed;
		EMagicLeapControllerLEDPattern LEDPattern;
		EMagicLeapControllerLEDColor   LEDColor;
		float                          DurationInSec;
		bool                           ReturnValue;
	} params;

	params.MotionSource = MotionSource;
	params.LEDEffect = LEDEffect;
	params.LEDSpeed = LEDSpeed;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerHapticPattern HapticPattern                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerHapticIntensity Intensity                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayHapticPattern(const struct FName& MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern"));

	struct
	{
		struct FName                   MotionSource;
		EMagicLeapControllerHapticPattern HapticPattern;
		EMagicLeapControllerHapticIntensity Intensity;
		bool                           ReturnValue;
	} params;

	params.MotionSource = MotionSource;
	params.HapticPattern = HapticPattern;
	params.Intensity = Intensity;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDEffect  LEDEffect                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDSpeed   LEDSpeed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDPattern LEDPattern                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDColor   LEDColor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DurationInSec                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayControllerLEDEffect(EControllerHand hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect"));

	struct
	{
		EControllerHand                hand;
		EMagicLeapControllerLEDEffect  LEDEffect;
		EMagicLeapControllerLEDSpeed   LEDSpeed;
		EMagicLeapControllerLEDPattern LEDPattern;
		EMagicLeapControllerLEDColor   LEDColor;
		float                          DurationInSec;
		bool                           ReturnValue;
	} params;

	params.hand = hand;
	params.LEDEffect = LEDEffect;
	params.LEDSpeed = LEDSpeed;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDPattern LEDPattern                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDColor   LEDColor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DurationInSec                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayControllerLED(EControllerHand hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED"));

	struct
	{
		EControllerHand                hand;
		EMagicLeapControllerLEDPattern LEDPattern;
		EMagicLeapControllerLEDColor   LEDColor;
		float                          DurationInSec;
		bool                           ReturnValue;
	} params;

	params.hand = hand;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerHapticPattern HapticPattern                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerHapticIntensity Intensity                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayControllerHapticFeedback(EControllerHand hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback"));

	struct
	{
		EControllerHand                hand;
		EMagicLeapControllerHapticPattern HapticPattern;
		EMagicLeapControllerHapticIntensity Intensity;
		bool                           ReturnValue;
	} params;

	params.hand = hand;
	params.HapticPattern = HapticPattern;
	params.Intensity = Intensity;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMagicLeapControllerFunctionLibrary::MaxSupportedMagicLeapControllers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers"));

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   MotionSource                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::IsMLControllerConnected(const struct FName& MotionSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected"));

	struct
	{
		struct FName                   MotionSource;
		bool                           ReturnValue;
	} params;

	params.MotionSource = MotionSource;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UMagicLeapControllerFunctionLibrary::InvertControllerMapping()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName UMagicLeapControllerFunctionLibrary::GetMotionSourceForHand(EControllerHand hand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand"));

	struct
	{
		EControllerHand                hand;
		struct FName                   ReturnValue;
	} params;

	params.hand = hand;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerType       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetMLControllerType(EControllerHand hand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType"));

	struct
	{
		EControllerHand                hand;
		EMagicLeapControllerType       ReturnValue;
	} params;

	params.hand = hand;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControllerHand                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EControllerHand UMagicLeapControllerFunctionLibrary::GetHandForMotionSource(const struct FName& MotionSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource"));

	struct
	{
		struct FName                   MotionSource;
		EControllerHand                ReturnValue;
	} params;

	params.MotionSource = MotionSource;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   MotionSource                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerType       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetControllerType(const struct FName& MotionSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType"));

	struct
	{
		struct FName                   MotionSource;
		EMagicLeapControllerType       ReturnValue;
	} params;

	params.MotionSource = MotionSource;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMagicLeapControllerTrackingMode ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapControllerTrackingMode UMagicLeapControllerFunctionLibrary::GetControllerTrackingMode()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode"));

	struct
	{
		EMagicLeapControllerTrackingMode ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            ControllerIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControllerHand                hand                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::GetControllerMapping(int ControllerIndex, EControllerHand* hand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping"));

	struct
	{
		int                            ControllerIndex;
		EControllerHand                hand;
		bool                           ReturnValue;
	} params;

	params.ControllerIndex = ControllerIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (hand != nullptr)
		*hand = params.hand;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
