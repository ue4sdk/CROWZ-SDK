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

// Enum OculusHMD.EOculusDeviceType
enum class EOculusDeviceType : uint8_t
{
	EOculusDeviceType__OculusMobile_Deprecated0 = 0,
	EOculusDeviceType__OculusQuest = 1,
	EOculusDeviceType__OculusQuest2 = 2,
	EOculusDeviceType__Rift        = 3,
	EOculusDeviceType__Rift_S      = 4,
	EOculusDeviceType__Quest_Link  = 5,
	EOculusDeviceType__OculusUnknown = 6,
	EOculusDeviceType__EOculusDeviceType_MAX = 7
};


// Enum OculusHMD.EHandTrackingSupport
enum class EHandTrackingSupport : uint8_t
{
	EHandTrackingSupport__ControllersOnly = 0,
	EHandTrackingSupport__ControllersAndHands = 1,
	EHandTrackingSupport__HandsOnly = 2,
	EHandTrackingSupport__EHandTrackingSupport_MAX = 3
};


// Enum OculusHMD.EColorSpace
enum class EColorSpace : uint8_t
{
	EColorSpace__Unknown           = 0,
	EColorSpace__Unmanaged         = 1,
	EColorSpace__Rec               = 2,
	EColorSpace__Rec01             = 3,
	EColorSpace__Rift_CV1          = 4,
	EColorSpace__Rift_S            = 5,
	EColorSpace__Quest             = 6,
	EColorSpace__P3                = 7,
	EColorSpace__Adobe_RGB         = 8,
	EColorSpace__EColorSpace_MAX   = 9
};


// Enum OculusHMD.EBoundaryType
enum class EBoundaryType : uint8_t
{
	EBoundaryType__Boundary_Outer  = 0,
	EBoundaryType__Boundary_PlayArea = 1,
	EBoundaryType__Boundary_MAX    = 2
};


// Enum OculusHMD.EFixedFoveatedRenderingLevel
enum class EFixedFoveatedRenderingLevel : uint8_t
{
	EFixedFoveatedRenderingLevel__FFR_Off = 0,
	EFixedFoveatedRenderingLevel__FFR_Low = 1,
	EFixedFoveatedRenderingLevel__FFR_Medium = 2,
	EFixedFoveatedRenderingLevel__FFR_High = 3,
	EFixedFoveatedRenderingLevel__FFR_HighTop = 4,
	EFixedFoveatedRenderingLevel__FFR_MAX = 5
};


// Enum OculusHMD.ETrackedDeviceType
enum class ETrackedDeviceType : uint8_t
{
	ETrackedDeviceType__None       = 0,
	ETrackedDeviceType__HMD        = 1,
	ETrackedDeviceType__LTouch     = 2,
	ETrackedDeviceType__RTouch     = 3,
	ETrackedDeviceType__Touch      = 4,
	ETrackedDeviceType__DeviceObjectZero = 5,
	ETrackedDeviceType__All        = 6,
	ETrackedDeviceType__ETrackedDeviceType_MAX = 7
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
