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

// Enum MagicLeap.PurchaseType
enum class EPurchaseType : uint8_t
{
	PurchaseType__Consumable       = 0,
	PurchaseType__Nonconsumable    = 1,
	PurchaseType__Undefined        = 2,
	PurchaseType__PurchaseType_MAX = 3
};


// Enum MagicLeap.EFocusLostReason
enum class EFocusLostReason : uint8_t
{
	EFocusLostReason__EFocusLostReason_Invalid = 0,
	EFocusLostReason__EFocusLostReason_System = 1,
	EFocusLostReason__EFocusLostReason_MAX = 2
};


// Enum MagicLeap.EMagicLeapMeshLOD
enum class EMagicLeapMeshLOD : uint8_t
{
	EMagicLeapMeshLOD__Minimum     = 0,
	EMagicLeapMeshLOD__Medium      = 1,
	EMagicLeapMeshLOD__Maximum     = 2,
	EMagicLeapMeshLOD__EMagicLeapMeshLOD_MAX = 3
};


// Enum MagicLeap.EMagicLeapMeshState
enum class EMagicLeapMeshState : uint8_t
{
	EMagicLeapMeshState__New       = 0,
	EMagicLeapMeshState__Updated   = 1,
	EMagicLeapMeshState__Deleted   = 2,
	EMagicLeapMeshState__Unchanged = 3,
	EMagicLeapMeshState__EMagicLeapMeshState_MAX = 4
};


// Enum MagicLeap.EMagicLeapMeshVertexColorMode
enum class EMagicLeapMeshVertexColorMode : uint8_t
{
	EMagicLeapMeshVertexColorMode__None = 0,
	EMagicLeapMeshVertexColorMode__Confidence = 1,
	EMagicLeapMeshVertexColorMode__Block = 2,
	EMagicLeapMeshVertexColorMode__LOD = 3,
	EMagicLeapMeshVertexColorMode__EMagicLeapMeshVertexColorMode_MAX = 4
};


// Enum MagicLeap.EMagicLeapMeshType
enum class EMagicLeapMeshType : uint8_t
{
	EMagicLeapMeshType__Triangles  = 0,
	EMagicLeapMeshType__PointCloud = 1,
	EMagicLeapMeshType__EMagicLeapMeshType_MAX = 2
};


// Enum MagicLeap.EMagicLeapRaycastResultState
enum class EMagicLeapRaycastResultState : uint8_t
{
	EMagicLeapRaycastResultState__RequestFailed = 0,
	EMagicLeapRaycastResultState__NoCollision = 1,
	EMagicLeapRaycastResultState__HitUnobserved = 2,
	EMagicLeapRaycastResultState__HitObserved = 3,
	EMagicLeapRaycastResultState__EMagicLeapRaycastResultState_MAX = 4
};


// Enum MagicLeap.CloudStatus
enum class ECloudStatus : uint8_t
{
	CloudStatus__CloudStatus_NotDone = 0,
	CloudStatus__CloudStatus_Done  = 1,
	CloudStatus__CloudStatus_MAX   = 2
};


// Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
enum class EMagicLeapHeadTrackingMapEvent : uint8_t
{
	EMagicLeapHeadTrackingMapEvent__Lost = 0,
	EMagicLeapHeadTrackingMapEvent__Recovered = 1,
	EMagicLeapHeadTrackingMapEvent__RecoveryFailed = 2,
	EMagicLeapHeadTrackingMapEvent__NewSession = 3,
	EMagicLeapHeadTrackingMapEvent__EMagicLeapHeadTrackingMapEvent_MAX = 4
};


// Enum MagicLeap.EMagicLeapHeadTrackingMode
enum class EMagicLeapHeadTrackingMode : uint8_t
{
	EMagicLeapHeadTrackingMode__PositionAndOrientation = 0,
	EMagicLeapHeadTrackingMode__Unavailable = 1,
	EMagicLeapHeadTrackingMode__Unknown = 2,
	EMagicLeapHeadTrackingMode__EMagicLeapHeadTrackingMode_MAX = 3
};


// Enum MagicLeap.EMagicLeapHeadTrackingError
enum class EMagicLeapHeadTrackingError : uint8_t
{
	EMagicLeapHeadTrackingError__None = 0,
	EMagicLeapHeadTrackingError__NotEnoughFeatures = 1,
	EMagicLeapHeadTrackingError__LowLight = 2,
	EMagicLeapHeadTrackingError__Unknown = 3,
	EMagicLeapHeadTrackingError__EMagicLeapHeadTrackingError_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
