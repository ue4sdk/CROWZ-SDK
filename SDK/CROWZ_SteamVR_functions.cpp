// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_SteamVR_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void USteamVRChaperoneComponent::SteamVRChaperoneEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SteamVR.SteamVRChaperoneComponent.GetBounds
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FVector> USteamVRChaperoneComponent::GetBounds()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVR.SteamVRChaperoneComponent.GetBounds"));

	struct
	{
		TArray<struct FVector>         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// ESteamVRTrackedDeviceType      DeviceType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    OutTrackedDeviceIds            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void USteamVRFunctionLibrary::GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int>* OutTrackedDeviceIds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds"));

	struct
	{
		ESteamVRTrackedDeviceType      DeviceType;
		TArray<int>                    OutTrackedDeviceIds;
	} params;

	params.DeviceType = DeviceType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutTrackedDeviceIds != nullptr)
		*OutTrackedDeviceIds = params.OutTrackedDeviceIds;
}


// Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            DeviceID                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OutPosition                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                OutOrientation                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamVRFunctionLibrary::GetTrackedDevicePositionAndOrientation(int DeviceID, struct FVector* OutPosition, struct FRotator* OutOrientation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation"));

	struct
	{
		int                            DeviceID;
		struct FVector                 OutPosition;
		struct FRotator                OutOrientation;
		bool                           ReturnValue;
	} params;

	params.DeviceID = DeviceID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutPosition != nullptr)
		*OutPosition = params.OutPosition;
	if (OutOrientation != nullptr)
		*OutOrientation = params.OutOrientation;

	return params.ReturnValue;
}


// Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ControllerIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControllerHand                hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OutPosition                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                OutOrientation                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USteamVRFunctionLibrary::GetHandPositionAndOrientation(int ControllerIndex, EControllerHand hand, struct FVector* OutPosition, struct FRotator* OutOrientation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation"));

	struct
	{
		int                            ControllerIndex;
		EControllerHand                hand;
		struct FVector                 OutPosition;
		struct FRotator                OutOrientation;
		bool                           ReturnValue;
	} params;

	params.ControllerIndex = ControllerIndex;
	params.hand = hand;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutPosition != nullptr)
		*OutPosition = params.OutPosition;
	if (OutOrientation != nullptr)
		*OutOrientation = params.OutOrientation;

	return params.ReturnValue;
}


// Function SteamVR.SteamVRHQStereoLayerShape.SetCurved
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InCurved                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRHQStereoLayerShape::SetCurved(bool InCurved)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVR.SteamVRHQStereoLayerShape.SetCurved"));

	struct
	{
		bool                           InCurved;
	} params;

	params.InCurved = InCurved;

	UObject::ProcessEvent(fn, &params);
}


// Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMinDistance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InDistance                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRHQStereoLayerShape::SetAutoCurveMinDistance(float InDistance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMinDistance"));

	struct
	{
		float                          InDistance;
	} params;

	params.InDistance = InDistance;

	UObject::ProcessEvent(fn, &params);
}


// Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMaxDistance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InDistance                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRHQStereoLayerShape::SetAutoCurveMaxDistance(float InDistance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMaxDistance"));

	struct
	{
		float                          InDistance;
	} params;

	params.InDistance = InDistance;

	UObject::ProcessEvent(fn, &params);
}


// Function SteamVR.SteamVRHQStereoLayerShape.SetAntiAlias
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InAntiAlias                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USteamVRHQStereoLayerShape::SetAntiAlias(bool InAntiAlias)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SteamVR.SteamVRHQStereoLayerShape.SetAntiAlias"));

	struct
	{
		bool                           InAntiAlias;
	} params;

	params.InAntiAlias = InAntiAlias;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
