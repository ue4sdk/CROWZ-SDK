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

// Enum SteamVRInputDevice.ESkeletalSummaryDataType
enum class ESkeletalSummaryDataType : uint8_t
{
	ESkeletalSummaryDataType__VR_SummaryType_FromAnimation = 0,
	ESkeletalSummaryDataType__VR_SummaryType_FromDevice = 1,
	ESkeletalSummaryDataType__VR_SummaryType_MAX = 2
};


// Enum SteamVRInputDevice.ESteamVRInputStringBits
enum class ESteamVRInputStringBits : uint8_t
{
	ESteamVRInputStringBits__VR_InputString_Hand = 0,
	ESteamVRInputStringBits__VR_InputString_ControllerType = 1,
	ESteamVRInputStringBits__VR_InputString_InputSource = 2,
	ESteamVRInputStringBits__VR_InputString_All = 3,
	ESteamVRInputStringBits__VR_InputString_MAX = 4
};


// Enum SteamVRInputDevice.EControllerFidelity
enum class EControllerFidelity : uint8_t
{
	EControllerFidelity__VR_ControllerFidelity_Estimated = 0,
	EControllerFidelity__VR_ControllerFidelity_Full = 1,
	EControllerFidelity__VR_ControllerFidelity_Partial = 2,
	EControllerFidelity__VR_ControllerFidelity_MAX = 3
};


// Enum SteamVRInputDevice.EHandSkeleton
enum class EHandSkeleton : uint8_t
{
	EHandSkeleton__VR_SteamVRHandSkeleton = 0,
	EHandSkeleton__VR_UE4HandSkeleton = 1,
	EHandSkeleton__VR_MAX          = 2
};


// Enum SteamVRInputDevice.EHand
enum class EHand : uint8_t
{
	EHand__VR_LeftHand             = 0,
	EHand__VR_RightHand            = 1,
	EHand__VR_MAX                  = 2
};


// Enum SteamVRInputDevice.EMotionRange
enum class EMotionRange : uint8_t
{
	EMotionRange__VR_WithoutController = 0,
	EMotionRange__VR_WithController = 1,
	EMotionRange__VR_MAX           = 2
};


// Enum SteamVRInputDevice.ESteamVRHand
enum class ESteamVRHand : uint8_t
{
	ESteamVRHand__VR_Left          = 0,
	ESteamVRHand__VR_Right         = 1,
	ESteamVRHand__VR_MAX           = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
