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

// Enum MagicLeapImageTracker.EMagicLeapImageTargetOrientation
enum class EMagicLeapImageTargetOrientation : uint8_t
{
	EMagicLeapImageTargetOrientation__ForwardAxisAsNormal = 0,
	EMagicLeapImageTargetOrientation__UpAxisAsNormal = 1,
	EMagicLeapImageTargetOrientation__EMagicLeapImageTargetOrientation_MAX = 2
};


// Enum MagicLeapImageTracker.EMagicLeapImageTargetStatus
enum class EMagicLeapImageTargetStatus : uint8_t
{
	EMagicLeapImageTargetStatus__Tracked = 0,
	EMagicLeapImageTargetStatus__Unreliable = 1,
	EMagicLeapImageTargetStatus__NotTracked = 2,
	EMagicLeapImageTargetStatus__EMagicLeapImageTargetStatus_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
