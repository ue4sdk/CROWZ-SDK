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

// Enum Tether.ECableMeshGenerationType
enum class ECableMeshGenerationType : uint8_t
{
	ECableMeshGenerationType__Basic = 0,
	ECableMeshGenerationType__CustomMesh = 1,
	ECableMeshGenerationType__ECableMeshGenerationType_MAX = 2
};


// Enum Tether.EMeshBuildInstruction
enum class EMeshBuildInstruction : uint8_t
{
	DoNotBuild                     = 0,
	BuildIfModified                = 1,
	AlwaysBuild                    = 2,
	EMeshBuildInstruction_MAX      = 3
};


// Enum Tether.ETetherSimulationTimingMode
enum class ETetherSimulationTimingMode : uint8_t
{
	ETetherSimulationTimingMode__SimulateInSequence = 0,
	ETetherSimulationTimingMode__ProgressSimulation = 1,
	ETetherSimulationTimingMode__ETetherSimulationTimingMode_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
