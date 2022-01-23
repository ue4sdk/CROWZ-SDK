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

// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t
{
	EMagicLeapEyeTrackingCalibrationStatus__None = 0,
	EMagicLeapEyeTrackingCalibrationStatus__Bad = 1,
	EMagicLeapEyeTrackingCalibrationStatus__Good = 2,
	EMagicLeapEyeTrackingCalibrationStatus__EMagicLeapEyeTrackingCalibrationStatus_MAX = 3
};


// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
enum class EMagicLeapEyeTrackingStatus : uint8_t
{
	EMagicLeapEyeTrackingStatus__NotConnected = 0,
	EMagicLeapEyeTrackingStatus__Disabled = 1,
	EMagicLeapEyeTrackingStatus__UserNotPresent = 2,
	EMagicLeapEyeTrackingStatus__UserPresent = 3,
	EMagicLeapEyeTrackingStatus__UserPresentAndWatchingWindow = 4,
	EMagicLeapEyeTrackingStatus__EMagicLeapEyeTrackingStatus_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
