#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SkyCreatorPlugin.ESkyCreatorStarMapRotationType
enum class ESkyCreatorStarMapRotationType : uint8_t
{
	StarMapRotationType_NoRotation = 0,
	StarMapRotationType_FollowSun  = 1,
	StarMapRotationType_FollowMoon = 2,
	StarMapRotationType_MAX        = 3
};


// Enum SkyCreatorPlugin.ESkyCreatorMoonOrbitType
enum class ESkyCreatorMoonOrbitType : uint8_t
{
	MoonOrbitType_SimplifiedCycle  = 0,
	MoonOrbitType_FixedElevation   = 1,
	MoonOrbitType_MAX              = 2
};


// Enum SkyCreatorPlugin.ESkyCreatorSunOrbitType
enum class ESkyCreatorSunOrbitType : uint8_t
{
	SunOrbitType_SimplifiedCycle   = 0,
	SunOrbitType_Simulated         = 1,
	SunOrbitType_MAX               = 2
};


// Enum SkyCreatorPlugin.ESkyCreatorEditorWeatherType
enum class ESkyCreatorEditorWeatherType : uint8_t
{
	EditorWeather_WeatherPreset    = 0,
	EditorWeather_WeatherSettings  = 1,
	EditorWeather_MAX              = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
