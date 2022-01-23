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

// Enum MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
enum class EMagicLeapLightEstimationCamera : uint8_t
{
	EMagicLeapLightEstimationCamera__Left = 0,
	EMagicLeapLightEstimationCamera__Right = 1,
	EMagicLeapLightEstimationCamera__FarLeft = 2,
	EMagicLeapLightEstimationCamera__FarRight = 3,
	EMagicLeapLightEstimationCamera__EMagicLeapLightEstimationCamera_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
