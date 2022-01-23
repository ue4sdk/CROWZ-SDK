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

// Enum MagicLeapPlanes.EMagicLeapPlaneQueryFlags
enum class EMagicLeapPlaneQueryFlags : uint8_t
{
	EMagicLeapPlaneQueryFlags__Vertical = 0,
	EMagicLeapPlaneQueryFlags__Horizontal = 1,
	EMagicLeapPlaneQueryFlags__Arbitrary = 2,
	EMagicLeapPlaneQueryFlags__OrientToGravity = 3,
	EMagicLeapPlaneQueryFlags__PreferInner = 4,
	EMagicLeapPlaneQueryFlags__Ceiling = 5,
	EMagicLeapPlaneQueryFlags__Floor = 6,
	EMagicLeapPlaneQueryFlags__Wall = 7,
	EMagicLeapPlaneQueryFlags__Polygons = 8,
	EMagicLeapPlaneQueryFlags__EMagicLeapPlaneQueryFlags_MAX = 9
};


// Enum MagicLeapPlanes.EMagicLeapPlaneQueryType
enum class EMagicLeapPlaneQueryType : uint8_t
{
	EMagicLeapPlaneQueryType__Bulk = 0,
	EMagicLeapPlaneQueryType__Delta = 1,
	EMagicLeapPlaneQueryType__EMagicLeapPlaneQueryType_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
