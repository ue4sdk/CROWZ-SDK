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

// Enum ModelingComponents.EBaseCreateFromSelectedTargetType
enum class EBaseCreateFromSelectedTargetType : uint8_t
{
	EBaseCreateFromSelectedTargetType__NewAsset = 0,
	EBaseCreateFromSelectedTargetType__FirstInputAsset = 1,
	EBaseCreateFromSelectedTargetType__LastInputAsset = 2,
	EBaseCreateFromSelectedTargetType__EBaseCreateFromSelectedTargetType_MAX = 3
};


// Enum ModelingComponents.EDynamicMeshTangentCalcType
enum class EDynamicMeshTangentCalcType : uint8_t
{
	EDynamicMeshTangentCalcType__NoTangents = 0,
	EDynamicMeshTangentCalcType__AutoCalculated = 1,
	EDynamicMeshTangentCalcType__ExternallyCalculated = 2,
	EDynamicMeshTangentCalcType__EDynamicMeshTangentCalcType_MAX = 3
};


// Enum ModelingComponents.EMultiTransformerMode
enum class EMultiTransformerMode : uint8_t
{
	EMultiTransformerMode__DefaultGizmo = 0,
	EMultiTransformerMode__QuickAxisTranslation = 1,
	EMultiTransformerMode__EMultiTransformerMode_MAX = 2
};


// Enum ModelingComponents.EHandleSourcesMethod
enum class EHandleSourcesMethod : uint8_t
{
	EHandleSourcesMethod__DeleteSources = 0,
	EHandleSourcesMethod__HideSources = 1,
	EHandleSourcesMethod__KeepSources = 2,
	EHandleSourcesMethod__EHandleSourcesMethod_MAX = 3
};


// Enum ModelingComponents.ESpaceCurveControlPointFalloffType
enum class ESpaceCurveControlPointFalloffType : uint8_t
{
	ESpaceCurveControlPointFalloffType__Linear = 0,
	ESpaceCurveControlPointFalloffType__Smooth = 1,
	ESpaceCurveControlPointFalloffType__ESpaceCurveControlPointFalloffType_MAX = 2
};


// Enum ModelingComponents.ESpaceCurveControlPointOriginMode
enum class ESpaceCurveControlPointOriginMode : uint8_t
{
	ESpaceCurveControlPointOriginMode__Shared = 0,
	ESpaceCurveControlPointOriginMode__First = 1,
	ESpaceCurveControlPointOriginMode__Last = 2,
	ESpaceCurveControlPointOriginMode__ESpaceCurveControlPointOriginMode_MAX = 3
};


// Enum ModelingComponents.ESpaceCurveControlPointTransformMode
enum class ESpaceCurveControlPointTransformMode : uint8_t
{
	ESpaceCurveControlPointTransformMode__Shared = 0,
	ESpaceCurveControlPointTransformMode__PerVertex = 1,
	ESpaceCurveControlPointTransformMode__ESpaceCurveControlPointTransformMode_MAX = 2
};


// Enum ModelingComponents.EUVLayoutPreviewSide
enum class EUVLayoutPreviewSide : uint8_t
{
	EUVLayoutPreviewSide__Left     = 0,
	EUVLayoutPreviewSide__Right    = 1,
	EUVLayoutPreviewSide__EUVLayoutPreviewSide_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
