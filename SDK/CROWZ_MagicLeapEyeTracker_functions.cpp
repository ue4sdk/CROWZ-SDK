// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapEyeTracker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FMagicLeapEyeBlinkState BlinkState                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapEyeTrackerFunctionLibrary::GetEyeBlinkState(struct FMagicLeapEyeBlinkState* BlinkState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState"));

	struct
	{
		struct FMagicLeapEyeBlinkState BlinkState;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (BlinkState != nullptr)
		*BlinkState = params.BlinkState;

	return params.ReturnValue;
}


// Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EMagicLeapEyeTrackingCalibrationStatus ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapEyeTrackingCalibrationStatus UMagicLeapEyeTrackerFunctionLibrary::GetCalibrationStatus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus"));

	struct
	{
		EMagicLeapEyeTrackingCalibrationStatus ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
