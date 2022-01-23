// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_SkyCreatorPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SkyCreatorPlugin.SkyCreator.UpdateSunMoonIntensity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InTime                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::UpdateSunMoonIntensity(float InTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.UpdateSunMoonIntensity"));

	struct
	{
		float                          InTime;
	} params;

	params.InTime = InTime;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.UpdateSettings
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable)

void ASkyCreator::UpdateSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.UpdateSettings"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetWindSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorWindSettings InWindSettings                 (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::SetWindSettings(const struct FSkyCreatorWindSettings& InWindSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetWindSettings"));

	struct
	{
		struct FSkyCreatorWindSettings InWindSettings;
	} params;

	params.InWindSettings = InWindSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetWindIndependentSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorWindSettings InWindSettings                 (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::SetWindIndependentSettings(const struct FSkyCreatorWindSettings& InWindSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetWindIndependentSettings"));

	struct
	{
		struct FSkyCreatorWindSettings InWindSettings;
	} params;

	params.InWindSettings = InWindSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetWeatherSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorWeatherSettings InWeatherSettings              (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::SetWeatherSettings(const struct FSkyCreatorWeatherSettings& InWeatherSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetWeatherSettings"));

	struct
	{
		struct FSkyCreatorWeatherSettings InWeatherSettings;
	} params;

	params.InWeatherSettings = InWeatherSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetWeatherFXSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorWeatherFXSettings InWeatherFXSettings            (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::SetWeatherFXSettings(const struct FSkyCreatorWeatherFXSettings& InWeatherFXSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetWeatherFXSettings"));

	struct
	{
		struct FSkyCreatorWeatherFXSettings InWeatherFXSettings;
	} params;

	params.InWeatherFXSettings = InWeatherFXSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetVolumetricCloudSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettings      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::SetVolumetricCloudSettings(const struct FSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetVolumetricCloudSettings"));

	struct
	{
		struct FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettings;
	} params;

	params.InVolumetricCloudSettings = InVolumetricCloudSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InTime                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::SetTime(float InTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetTime"));

	struct
	{
		float                          InTime;
	} params;

	params.InTime = InTime;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetSunMoonPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InTime                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::SetSunMoonPosition(float InTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetSunMoonPosition"));

	struct
	{
		float                          InTime;
	} params;

	params.InTime = InTime;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetSunLightSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorSunLightSettings InSunLightSettings             (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::SetSunLightSettings(const struct FSkyCreatorSunLightSettings& InSunLightSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetSunLightSettings"));

	struct
	{
		struct FSkyCreatorSunLightSettings InSunLightSettings;
	} params;

	params.InSunLightSettings = InSunLightSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetStarMapSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorStarMapSettings InStarMapSettings              (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::SetStarMapSettings(const struct FSkyCreatorStarMapSettings& InStarMapSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetStarMapSettings"));

	struct
	{
		struct FSkyCreatorStarMapSettings InStarMapSettings;
	} params;

	params.InStarMapSettings = InStarMapSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetSkyLightSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorSkyLightSettings InSkyLightSettings             (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::SetSkyLightSettings(const struct FSkyCreatorSkyLightSettings& InSkyLightSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetSkyLightSettings"));

	struct
	{
		struct FSkyCreatorSkyLightSettings InSkyLightSettings;
	} params;

	params.InSkyLightSettings = InSkyLightSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetSkyAtmosphereSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettings        (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::SetSkyAtmosphereSettings(const struct FSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetSkyAtmosphereSettings"));

	struct
	{
		struct FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettings;
	} params;

	params.InSkyAtmosphereSettings = InSkyAtmosphereSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetMoonPhase
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InMoonPhase                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::SetMoonPhase(float InMoonPhase)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetMoonPhase"));

	struct
	{
		float                          InMoonPhase;
	} params;

	params.InMoonPhase = InMoonPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetMoonLightSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorMoonLightSettings InMoonLightSettings            (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::SetMoonLightSettings(const struct FSkyCreatorMoonLightSettings& InMoonLightSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetMoonLightSettings"));

	struct
	{
		struct FSkyCreatorMoonLightSettings InMoonLightSettings;
	} params;

	params.InMoonLightSettings = InMoonLightSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetExposureSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorExposureSettings InExposureSettings             (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::SetExposureSettings(const struct FSkyCreatorExposureSettings& InExposureSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetExposureSettings"));

	struct
	{
		struct FSkyCreatorExposureSettings InExposureSettings;
	} params;

	params.InExposureSettings = InExposureSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetExponentialHeightFogSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::SetExponentialHeightFogSettings(const struct FSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetExponentialHeightFogSettings"));

	struct
	{
		struct FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings;
	} params;

	params.InExponentialHeightFogSettings = InExponentialHeightFogSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.SetComponentsSettings
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable)

void ASkyCreator::SetComponentsSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.SetComponentsSettings"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.RerunConstructionScript
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable)

void ASkyCreator::RerunConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.RerunConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.RealtimeVolumetricCloudWind
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::RealtimeVolumetricCloudWind(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.RealtimeVolumetricCloudWind"));

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.RealtimeTimeOfDay
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DayCycleDuration               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.RealtimeTimeOfDay"));

	struct
	{
		float                          DeltaSeconds;
		float                          DayCycleDuration;
	} params;

	params.DeltaSeconds = DeltaSeconds;
	params.DayCycleDuration = DayCycleDuration;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.OnRep_UpdateWeather
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ASkyCreator::OnRep_UpdateWeather()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.OnRep_UpdateWeather"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.OnRep_UpdateTime
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ASkyCreator::OnRep_UpdateTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.OnRep_UpdateTime"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.LerpWindSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorWindSettings InWindSettingsA                (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FSkyCreatorWindSettings InWindSettingsB                (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::LerpWindSettings(const struct FSkyCreatorWindSettings& InWindSettingsA, const struct FSkyCreatorWindSettings& InWindSettingsB, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.LerpWindSettings"));

	struct
	{
		struct FSkyCreatorWindSettings InWindSettingsA;
		struct FSkyCreatorWindSettings InWindSettingsB;
		float                          Alpha;
	} params;

	params.InWindSettingsA = InWindSettingsA;
	params.InWindSettingsB = InWindSettingsB;
	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.LerpWindIndependentSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorWindSettings InWindSettingsA                (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FSkyCreatorWindSettings InWindSettingsB                (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::LerpWindIndependentSettings(const struct FSkyCreatorWindSettings& InWindSettingsA, const struct FSkyCreatorWindSettings& InWindSettingsB, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.LerpWindIndependentSettings"));

	struct
	{
		struct FSkyCreatorWindSettings InWindSettingsA;
		struct FSkyCreatorWindSettings InWindSettingsB;
		float                          Alpha;
	} params;

	params.InWindSettingsA = InWindSettingsA;
	params.InWindSettingsB = InWindSettingsB;
	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.LerpWeatherSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorWeatherSettings InWeatherSettingsA             (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FSkyCreatorWeatherSettings InWeatherSettingsB             (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::LerpWeatherSettings(const struct FSkyCreatorWeatherSettings& InWeatherSettingsA, const struct FSkyCreatorWeatherSettings& InWeatherSettingsB, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.LerpWeatherSettings"));

	struct
	{
		struct FSkyCreatorWeatherSettings InWeatherSettingsA;
		struct FSkyCreatorWeatherSettings InWeatherSettingsB;
		float                          Alpha;
	} params;

	params.InWeatherSettingsA = InWeatherSettingsA;
	params.InWeatherSettingsB = InWeatherSettingsB;
	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.LerpWeatherFXSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorWeatherFXSettings InWeatherFXSettingsA           (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FSkyCreatorWeatherFXSettings InWeatherFXSettingsB           (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::LerpWeatherFXSettings(const struct FSkyCreatorWeatherFXSettings& InWeatherFXSettingsA, const struct FSkyCreatorWeatherFXSettings& InWeatherFXSettingsB, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.LerpWeatherFXSettings"));

	struct
	{
		struct FSkyCreatorWeatherFXSettings InWeatherFXSettingsA;
		struct FSkyCreatorWeatherFXSettings InWeatherFXSettingsB;
		float                          Alpha;
	} params;

	params.InWeatherFXSettingsA = InWeatherFXSettingsA;
	params.InWeatherFXSettingsB = InWeatherFXSettingsB;
	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.LerpVolumetricCloudSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::LerpVolumetricCloudSettings(const struct FSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettingsA, const struct FSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettingsB, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.LerpVolumetricCloudSettings"));

	struct
	{
		struct FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA;
		struct FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB;
		float                          Alpha;
	} params;

	params.InVolumetricCloudSettingsA = InVolumetricCloudSettingsA;
	params.InVolumetricCloudSettingsB = InVolumetricCloudSettingsB;
	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.LerpSunLightSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorSunLightSettings InSunLightSettingsA            (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FSkyCreatorSunLightSettings InSunLightSettingsB            (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::LerpSunLightSettings(const struct FSkyCreatorSunLightSettings& InSunLightSettingsA, const struct FSkyCreatorSunLightSettings& InSunLightSettingsB, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.LerpSunLightSettings"));

	struct
	{
		struct FSkyCreatorSunLightSettings InSunLightSettingsA;
		struct FSkyCreatorSunLightSettings InSunLightSettingsB;
		float                          Alpha;
	} params;

	params.InSunLightSettingsA = InSunLightSettingsA;
	params.InSunLightSettingsB = InSunLightSettingsB;
	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.LerpStarMapSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorStarMapSettings InStarMapSettingsA             (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FSkyCreatorStarMapSettings InStarMapSettingsB             (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::LerpStarMapSettings(const struct FSkyCreatorStarMapSettings& InStarMapSettingsA, const struct FSkyCreatorStarMapSettings& InStarMapSettingsB, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.LerpStarMapSettings"));

	struct
	{
		struct FSkyCreatorStarMapSettings InStarMapSettingsA;
		struct FSkyCreatorStarMapSettings InStarMapSettingsB;
		float                          Alpha;
	} params;

	params.InStarMapSettingsA = InStarMapSettingsA;
	params.InStarMapSettingsB = InStarMapSettingsB;
	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.LerpSkyLightSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorSkyLightSettings InSkyLightSettingsA            (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FSkyCreatorSkyLightSettings InSkyLightSettingsB            (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::LerpSkyLightSettings(const struct FSkyCreatorSkyLightSettings& InSkyLightSettingsA, const struct FSkyCreatorSkyLightSettings& InSkyLightSettingsB, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.LerpSkyLightSettings"));

	struct
	{
		struct FSkyCreatorSkyLightSettings InSkyLightSettingsA;
		struct FSkyCreatorSkyLightSettings InSkyLightSettingsB;
		float                          Alpha;
	} params;

	params.InSkyLightSettingsA = InSkyLightSettingsA;
	params.InSkyLightSettingsB = InSkyLightSettingsB;
	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.LerpSkyAtmosphereSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA       (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB       (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::LerpSkyAtmosphereSettings(const struct FSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettingsA, const struct FSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettingsB, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.LerpSkyAtmosphereSettings"));

	struct
	{
		struct FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA;
		struct FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB;
		float                          Alpha;
	} params;

	params.InSkyAtmosphereSettingsA = InSkyAtmosphereSettingsA;
	params.InSkyAtmosphereSettingsB = InSkyAtmosphereSettingsB;
	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.LerpMoonLightSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorMoonLightSettings InMoonLightSettingsA           (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FSkyCreatorMoonLightSettings InMoonLightSettingsB           (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::LerpMoonLightSettings(const struct FSkyCreatorMoonLightSettings& InMoonLightSettingsA, const struct FSkyCreatorMoonLightSettings& InMoonLightSettingsB, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.LerpMoonLightSettings"));

	struct
	{
		struct FSkyCreatorMoonLightSettings InMoonLightSettingsA;
		struct FSkyCreatorMoonLightSettings InMoonLightSettingsB;
		float                          Alpha;
	} params;

	params.InMoonLightSettingsA = InMoonLightSettingsA;
	params.InMoonLightSettingsB = InMoonLightSettingsB;
	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.LerpExposureSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorExposureSettings InExposureSettingsA            (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FSkyCreatorExposureSettings InExposureSettingsB            (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::LerpExposureSettings(const struct FSkyCreatorExposureSettings& InExposureSettingsA, const struct FSkyCreatorExposureSettings& InExposureSettingsB, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.LerpExposureSettings"));

	struct
	{
		struct FSkyCreatorExposureSettings InExposureSettingsA;
		struct FSkyCreatorExposureSettings InExposureSettingsB;
		float                          Alpha;
	} params;

	params.InExposureSettingsA = InExposureSettingsA;
	params.InExposureSettingsB = InExposureSettingsB;
	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.LerpExponentialHeightFogSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Alpha                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ASkyCreator::LerpExponentialHeightFogSettings(const struct FSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettingsA, const struct FSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettingsB, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.LerpExponentialHeightFogSettings"));

	struct
	{
		struct FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA;
		struct FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB;
		float                          Alpha;
	} params;

	params.InExponentialHeightFogSettingsA = InExponentialHeightFogSettingsA;
	params.InExponentialHeightFogSettingsB = InExponentialHeightFogSettingsB;
	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreator.GetWindSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSkyCreatorWindSettings ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FSkyCreatorWindSettings ASkyCreator::GetWindSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetWindSettings"));

	struct
	{
		struct FSkyCreatorWindSettings ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.GetWeatherSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSkyCreatorWeatherSettings ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FSkyCreatorWeatherSettings ASkyCreator::GetWeatherSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetWeatherSettings"));

	struct
	{
		struct FSkyCreatorWeatherSettings ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.GetWeatherFXSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSkyCreatorWeatherFXSettings ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FSkyCreatorWeatherFXSettings ASkyCreator::GetWeatherFXSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetWeatherFXSettings"));

	struct
	{
		struct FSkyCreatorWeatherFXSettings ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.GetVolumetricCloudSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSkyCreatorVolumetricCloudSettings ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FSkyCreatorVolumetricCloudSettings ASkyCreator::GetVolumetricCloudSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetVolumetricCloudSettings"));

	struct
	{
		struct FSkyCreatorVolumetricCloudSettings ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.GetTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float ASkyCreator::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetTime"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.GetSunPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FRotator ASkyCreator::GetSunPosition(float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetSunPosition"));

	struct
	{
		float                          Time;
		struct FRotator                ReturnValue;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.GetSunLightSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSkyCreatorSunLightSettings ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FSkyCreatorSunLightSettings ASkyCreator::GetSunLightSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetSunLightSettings"));

	struct
	{
		struct FSkyCreatorSunLightSettings ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.GetStarMapSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSkyCreatorStarMapSettings ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FSkyCreatorStarMapSettings ASkyCreator::GetStarMapSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetStarMapSettings"));

	struct
	{
		struct FSkyCreatorStarMapSettings ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.GetStarMapRotation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FRotator ASkyCreator::GetStarMapRotation(float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetStarMapRotation"));

	struct
	{
		float                          Time;
		struct FRotator                ReturnValue;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.GetSkyLightSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSkyCreatorSkyLightSettings ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FSkyCreatorSkyLightSettings ASkyCreator::GetSkyLightSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetSkyLightSettings"));

	struct
	{
		struct FSkyCreatorSkyLightSettings ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.GetSkyAtmosphereSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSkyCreatorSkyAtmosphereSettings ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FSkyCreatorSkyAtmosphereSettings ASkyCreator::GetSkyAtmosphereSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetSkyAtmosphereSettings"));

	struct
	{
		struct FSkyCreatorSkyAtmosphereSettings ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.GetMoonPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FRotator ASkyCreator::GetMoonPosition(float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetMoonPosition"));

	struct
	{
		float                          Time;
		struct FRotator                ReturnValue;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.GetMoonPhase
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float ASkyCreator::GetMoonPhase()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetMoonPhase"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.GetMoonLightSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSkyCreatorMoonLightSettings ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FSkyCreatorMoonLightSettings ASkyCreator::GetMoonLightSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetMoonLightSettings"));

	struct
	{
		struct FSkyCreatorMoonLightSettings ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.GetExposureSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSkyCreatorExposureSettings ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FSkyCreatorExposureSettings ASkyCreator::GetExposureSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetExposureSettings"));

	struct
	{
		struct FSkyCreatorExposureSettings ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.GetExponentialHeightFogSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSkyCreatorExponentialHeightFogSettings ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FSkyCreatorExponentialHeightFogSettings ASkyCreator::GetExponentialHeightFogSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.GetExponentialHeightFogSettings"));

	struct
	{
		struct FSkyCreatorExponentialHeightFogSettings ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkyCreatorPlugin.SkyCreator.CreateVolumetricCloudMID
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ASkyCreator::CreateVolumetricCloudMID()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreator.CreateVolumetricCloudMID"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkyCreatorPlugin.SkyCreatorWeatherPreset.GetWeatherPresetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSkyCreatorWeatherSettings ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FSkyCreatorWeatherSettings USkyCreatorWeatherPreset::GetWeatherPresetSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SkyCreatorPlugin.SkyCreatorWeatherPreset.GetWeatherPresetSettings"));

	struct
	{
		struct FSkyCreatorWeatherSettings ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
