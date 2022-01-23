// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapLightEstimation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapLightEstimationFunctionLibrary::IsTrackerValid()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState          (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapLightEstimationFunctionLibrary::GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState* ColorTemperatureState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState"));

	struct
	{
		struct FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ColorTemperatureState != nullptr)
		*ColorTemperatureState = params.ColorTemperatureState;

	return params.ReturnValue;
}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState             (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapLightEstimationFunctionLibrary::GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState* GlobalAmbientState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState"));

	struct
	{
		struct FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GlobalAmbientState != nullptr)
		*GlobalAmbientState = params.GlobalAmbientState;

	return params.ReturnValue;
}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UMagicLeapLightEstimationFunctionLibrary::DestroyTracker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapLightEstimationFunctionLibrary::CreateTracker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
