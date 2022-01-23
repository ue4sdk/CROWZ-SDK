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

// Enum HairStrandsCore.EHairCardsSourceType
enum class EHairCardsSourceType : uint8_t
{
	EHairCardsSourceType__Procedural = 0,
	EHairCardsSourceType__Imported = 1,
	EHairCardsSourceType__EHairCardsSourceType_MAX = 2
};


// Enum HairStrandsCore.EHairCardsGenerationType
enum class EHairCardsGenerationType : uint8_t
{
	EHairCardsGenerationType__CardsCount = 0,
	EHairCardsGenerationType__UseGuides = 1,
	EHairCardsGenerationType__EHairCardsGenerationType_MAX = 2
};


// Enum HairStrandsCore.EHairCardsClusterType
enum class EHairCardsClusterType : uint8_t
{
	EHairCardsClusterType__Low     = 0,
	EHairCardsClusterType__High    = 1,
	EHairCardsClusterType__EHairCardsClusterType_MAX = 2
};


// Enum HairStrandsCore.EGroomGeometryType
enum class EGroomGeometryType : uint8_t
{
	EGroomGeometryType__Strands    = 0,
	EGroomGeometryType__Cards      = 1,
	EGroomGeometryType__Meshes     = 2,
	EGroomGeometryType__EGroomGeometryType_MAX = 3
};


// Enum HairStrandsCore.EHairLODSelectionType
enum class EHairLODSelectionType : uint8_t
{
	EHairLODSelectionType__Cpu     = 0,
	EHairLODSelectionType__Gpu     = 1,
	EHairLODSelectionType__EHairLODSelectionType_MAX = 2
};


// Enum HairStrandsCore.EHairInterpolationWeight
enum class EHairInterpolationWeight : uint8_t
{
	EHairInterpolationWeight__Parametric = 0,
	EHairInterpolationWeight__Root = 1,
	EHairInterpolationWeight__Index = 2,
	EHairInterpolationWeight__Unknown = 3,
	EHairInterpolationWeight__EHairInterpolationWeight_MAX = 4
};


// Enum HairStrandsCore.EHairInterpolationQuality
enum class EHairInterpolationQuality : uint8_t
{
	EHairInterpolationQuality__Low = 0,
	EHairInterpolationQuality__Medium = 1,
	EHairInterpolationQuality__High = 2,
	EHairInterpolationQuality__Unknown = 3,
	EHairInterpolationQuality__EHairInterpolationQuality_MAX = 4
};


// Enum HairStrandsCore.EGroomInterpolationType
enum class EGroomInterpolationType : uint8_t
{
	EGroomInterpolationType__None  = 0,
	EGroomInterpolationType__RigidTransform = 1,
	EGroomInterpolationType__OffsetTransform = 2,
	EGroomInterpolationType__SmoothTransform = 3,
	EGroomInterpolationType__EGroomInterpolationType_MAX = 4
};


// Enum HairStrandsCore.EGroomStrandsSize
enum class EGroomStrandsSize : uint8_t
{
	EGroomStrandsSize__None        = 0,
	EGroomStrandsSize__Size2       = 1,
	EGroomStrandsSize__Size4       = 2,
	EGroomStrandsSize__Size8       = 3,
	EGroomStrandsSize__Size16      = 4,
	EGroomStrandsSize__Size32      = 5,
	EGroomStrandsSize__EGroomStrandsSize_MAX = 6
};


// Enum HairStrandsCore.EGroomNiagaraSolvers
enum class EGroomNiagaraSolvers : uint8_t
{
	EGroomNiagaraSolvers__None     = 0,
	EGroomNiagaraSolvers__CosseratRods = 1,
	EGroomNiagaraSolvers__AngularSprings = 2,
	EGroomNiagaraSolvers__CustomSolver = 3,
	EGroomNiagaraSolvers__EGroomNiagaraSolvers_MAX = 4
};


// Enum HairStrandsCore.EFollicleMaskChannel
enum class EFollicleMaskChannel : uint8_t
{
	EFollicleMaskChannel__R        = 0,
	EFollicleMaskChannel__G        = 1,
	EFollicleMaskChannel__B        = 2,
	EFollicleMaskChannel__A        = 3,
	EFollicleMaskChannel__EFollicleMaskChannel_MAX = 4
};


// Enum HairStrandsCore.EStrandsTexturesMeshType
enum class EStrandsTexturesMeshType : uint8_t
{
	EStrandsTexturesMeshType__Static = 0,
	EStrandsTexturesMeshType__Skeletal = 1,
	EStrandsTexturesMeshType__EStrandsTexturesMeshType_MAX = 2
};


// Enum HairStrandsCore.EStrandsTexturesTraceType
enum class EStrandsTexturesTraceType : uint8_t
{
	EStrandsTexturesTraceType__TraceInside = 0,
	EStrandsTexturesTraceType__TraceOuside = 1,
	EStrandsTexturesTraceType__TraceBidirectional = 2,
	EStrandsTexturesTraceType__EStrandsTexturesTraceType_MAX = 3
};


// Enum HairStrandsCore.EGroomInterpolationWeight
enum class EGroomInterpolationWeight : uint8_t
{
	EGroomInterpolationWeight__Parametric = 0,
	EGroomInterpolationWeight__Root = 1,
	EGroomInterpolationWeight__Index = 2,
	EGroomInterpolationWeight__Unknown = 3,
	EGroomInterpolationWeight__EGroomInterpolationWeight_MAX = 4
};


// Enum HairStrandsCore.EGroomInterpolationQuality
enum class EGroomInterpolationQuality : uint8_t
{
	EGroomInterpolationQuality__Low = 0,
	EGroomInterpolationQuality__Medium = 1,
	EGroomInterpolationQuality__High = 2,
	EGroomInterpolationQuality__Unknown = 3,
	EGroomInterpolationQuality__EGroomInterpolationQuality_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
