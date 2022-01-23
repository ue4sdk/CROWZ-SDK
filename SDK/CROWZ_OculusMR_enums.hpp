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

// Enum OculusMR.EOculusMR_CompositionMethod
enum class EOculusMR_CompositionMethod : uint8_t
{
	EOculusMR_CompositionMethod__ExternalComposition = 0,
	EOculusMR_CompositionMethod__DirectComposition = 1,
	EOculusMR_CompositionMethod__EOculusMR_MAX = 2
};


// Enum OculusMR.EOculusMR_PostProcessEffects
enum class EOculusMR_PostProcessEffects : uint8_t
{
	EOculusMR_PostProcessEffects__PPE_Off = 0,
	EOculusMR_PostProcessEffects__PPE_On = 1,
	EOculusMR_PostProcessEffects__PPE_MAX = 2
};


// Enum OculusMR.EOculusMR_ClippingReference
enum class EOculusMR_ClippingReference : uint8_t
{
	EOculusMR_ClippingReference__CR_TrackingReference = 0,
	EOculusMR_ClippingReference__CR_Head = 1,
	EOculusMR_ClippingReference__CR_MAX = 2
};


// Enum OculusMR.EOculusMR_CameraDeviceEnum
enum class EOculusMR_CameraDeviceEnum : uint8_t
{
	EOculusMR_CameraDeviceEnum__CD_None = 0,
	EOculusMR_CameraDeviceEnum__CD_WebCamera0 = 1,
	EOculusMR_CameraDeviceEnum__CD_WebCamera1 = 2,
	EOculusMR_CameraDeviceEnum__CD_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
