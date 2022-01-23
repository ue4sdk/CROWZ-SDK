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

// Enum CrowVehicles.ECrowLandWheelsTireStatus
enum class ECrowLandWheelsTireStatus : uint8_t
{
	ECrowLandWheelsTireStatus__Normal = 0,
	ECrowLandWheelsTireStatus__Flat = 1,
	ECrowLandWheelsTireStatus__Destroyed = 2,
	ECrowLandWheelsTireStatus__ECrowLandWheelsTireStatus_MAX = 3
};


// Enum CrowVehicles.ECrowVehicleFloodingWaterType
enum class ECrowVehicleFloodingWaterType : uint8_t
{
	ECrowVehicleFloodingWaterType__NotInWater = 0,
	ECrowVehicleFloodingWaterType__WaterPlane = 1,
	ECrowVehicleFloodingWaterType__WaterBodyOcean = 2,
	ECrowVehicleFloodingWaterType__WaterBodyLake = 3,
	ECrowVehicleFloodingWaterType__WaterBodyOther = 4,
	ECrowVehicleFloodingWaterType__ECrowVehicleFloodingWaterType_MAX = 5
};


// Enum CrowVehicles.ECrowVehicleFloodingState
enum class ECrowVehicleFloodingState : uint8_t
{
	ECrowVehicleFloodingState__NONE = 0,
	ECrowVehicleFloodingState__NoOverlap = 1,
	ECrowVehicleFloodingState__Overlap = 2,
	ECrowVehicleFloodingState__InWater = 3,
	ECrowVehicleFloodingState__Immerge = 4,
	ECrowVehicleFloodingState__ImmergeToFlooding = 5,
	ECrowVehicleFloodingState__Flooding = 6,
	ECrowVehicleFloodingState__ECrowVehicleFloodingState_MAX = 7
};


// Enum CrowVehicles.ECrowVehicleRotorType
enum class ECrowVehicleRotorType : uint8_t
{
	ECrowVehicleRotorType__Acceleration = 0,
	ECrowVehicleRotorType__Torque  = 1,
	ECrowVehicleRotorType__ECrowVehicleRotorType_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
