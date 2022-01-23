// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapAR_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class ULuminARSessionConfig*   Configuration                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ULuminARSessionFunctionLibrary::StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class ULuminARSessionConfig*   Configuration;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Configuration = Configuration;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               ScreenPosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSet<ELuminARLineTraceChannel> TraceChannels                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FARTraceResult>  OutHitResults                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULuminARFrameFunctionLibrary::LuminARLineTrace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, TSet<ELuminARLineTraceChannel> TraceChannels, TArray<struct FARTraceResult>* OutHitResults)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector2D               ScreenPosition;
		TSet<ELuminARLineTraceChannel> TraceChannels;
		TArray<struct FARTraceResult>  OutHitResults;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;
	params.TraceChannels = TraceChannels;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutHitResults != nullptr)
		*OutHitResults = params.OutHitResults;

	return params.ReturnValue;
}


// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// ELuminARTrackingState          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

ELuminARTrackingState ULuminARFrameFunctionLibrary::GetTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState"));

	struct
	{
		ELuminARTrackingState          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImageEx
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UARSessionConfig*        SessionConfig                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTexture2D*              CandidateTexture               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 FriendlyName                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          PhysicalWidth                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseUnreliablePose             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bImageIsStationary             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapImageTargetOrientation InAxisOrientation              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ULuminARCandidateImage*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ULuminARCandidateImage* ULuminARImageTrackingFunctionLibrary::AddLuminRuntimeCandidateImageEx(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, EMagicLeapImageTargetOrientation InAxisOrientation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImageEx"));

	struct
	{
		class UARSessionConfig*        SessionConfig;
		class UTexture2D*              CandidateTexture;
		struct FString                 FriendlyName;
		float                          PhysicalWidth;
		bool                           bUseUnreliablePose;
		bool                           bImageIsStationary;
		EMagicLeapImageTargetOrientation InAxisOrientation;
		class ULuminARCandidateImage*  ReturnValue;
	} params;

	params.SessionConfig = SessionConfig;
	params.CandidateTexture = CandidateTexture;
	params.FriendlyName = FriendlyName;
	params.PhysicalWidth = PhysicalWidth;
	params.bUseUnreliablePose = bUseUnreliablePose;
	params.bImageIsStationary = bImageIsStationary;
	params.InAxisOrientation = InAxisOrientation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UARSessionConfig*        SessionConfig                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTexture2D*              CandidateTexture               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 FriendlyName                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          PhysicalWidth                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseUnreliablePose             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bImageIsStationary             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ULuminARCandidateImage*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ULuminARCandidateImage* ULuminARImageTrackingFunctionLibrary::AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage"));

	struct
	{
		class UARSessionConfig*        SessionConfig;
		class UTexture2D*              CandidateTexture;
		struct FString                 FriendlyName;
		float                          PhysicalWidth;
		bool                           bUseUnreliablePose;
		bool                           bImageIsStationary;
		class ULuminARCandidateImage*  ReturnValue;
	} params;

	params.SessionConfig = SessionConfig;
	params.CandidateTexture = CandidateTexture;
	params.FriendlyName = FriendlyName;
	params.PhysicalWidth = PhysicalWidth;
	params.bUseUnreliablePose = bUseUnreliablePose;
	params.bImageIsStationary = bImageIsStationary;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<float>                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<float> ULuminARLightEstimate::GetAmbientIntensityNits()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits"));

	struct
	{
		TArray<float>                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULuminARCandidateImage::GetUseUnreliablePose()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ULuminARCandidateImage::GetImageIsStationary()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapAR.LuminARCandidateImage.GetAxisOrientation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EMagicLeapImageTargetOrientation ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapImageTargetOrientation ULuminARCandidateImage::GetAxisOrientation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARCandidateImage.GetAxisOrientation"));

	struct
	{
		EMagicLeapImageTargetOrientation ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
