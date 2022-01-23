// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapImageTracker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture2D*              ImageTarget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapImageTrackerComponent::SetTargetAsync(class UTexture2D* ImageTarget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync"));

	struct
	{
		class UTexture2D*              ImageTarget;
		bool                           ReturnValue;
	} params;

	params.ImageTarget = ImageTarget;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapImageTrackerComponent::RemoveTargetAsync()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MaxSimultaneousTargets         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMagicLeapImageTrackerFunctionLibrary::SetMaxSimultaneousTargets(int MaxSimultaneousTargets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets"));

	struct
	{
		int                            MaxSimultaneousTargets;
	} params;

	params.MaxSimultaneousTargets = MaxSimultaneousTargets;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapImageTrackerFunctionLibrary::IsImageTrackingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMagicLeapImageTrackerFunctionLibrary::GetMaxSimultaneousTargets()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets"));

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMagicLeapImageTrackerFunctionLibrary::EnableImageTracking(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking"));

	struct
	{
		bool                           bEnable;
	} params;

	params.bEnable = bEnable;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
