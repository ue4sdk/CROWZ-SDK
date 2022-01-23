// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackUnpluggedDelegate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         ResultDelegate                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapAudioFunctionLibrary::SetOnAudioJackUnpluggedDelegate(const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackUnpluggedDelegate"));

	struct
	{
		struct FScriptDelegate         ResultDelegate;
		bool                           ReturnValue;
	} params;

	params.ResultDelegate = ResultDelegate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackPluggedDelegate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         ResultDelegate                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapAudioFunctionLibrary::SetOnAudioJackPluggedDelegate(const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackPluggedDelegate"));

	struct
	{
		struct FScriptDelegate         ResultDelegate;
		bool                           ReturnValue;
	} params;

	params.ResultDelegate = ResultDelegate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetMicMute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           IsMuted                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapAudioFunctionLibrary::SetMicMute(bool IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetMicMute"));

	struct
	{
		bool                           IsMuted;
		bool                           ReturnValue;
	} params;

	params.IsMuted = IsMuted;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.IsMicMuted
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapAudioFunctionLibrary::IsMicMuted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.IsMicMuted"));

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
