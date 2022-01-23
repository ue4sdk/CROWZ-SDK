#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_ModelingComponents_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ModelingComponents.BaseCreateFromSelectedToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UBaseCreateFromSelectedToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.BaseCreateFromSelectedToolBuilder"));
		return ptr;
	}

};


// Class ModelingComponents.OnAcceptHandleSourcesProperties
// 0x0008 (0x0068 - 0x0060)
class UOnAcceptHandleSourcesProperties : public UInteractiveToolPropertySet
{
public:
	EHandleSourcesMethod                               OnToolAccept;                                             // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.OnAcceptHandleSourcesProperties"));
		return ptr;
	}

};


// Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
// 0x0028 (0x0090 - 0x0068)
class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{
public:
	EBaseCreateFromSelectedTargetType                  WriteOutputTo;                                            // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0068(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     OutputName;                                               // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OutputAsset;                                              // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties"));
		return ptr;
	}

};


// Class ModelingComponents.TransformInputsToolProperties
// 0x0008 (0x0068 - 0x0060)
class UTransformInputsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowTransformUI;                                         // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                         // 0x0061(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0062(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.TransformInputsToolProperties"));
		return ptr;
	}

};


// Class ModelingComponents.BaseCreateFromSelectedTool
// 0x0060 (0x00F0 - 0x0090)
class UBaseCreateFromSelectedTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	class UTransformInputsToolProperties*              TransformProperties;                                      // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;                                  // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                  // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UTransformProxy*>                     TransformProxies;                                         // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class UTransformGizmo*>                     TransformGizmos;                                          // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FVector>                             TransformInitialScales;                                   // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.BaseCreateFromSelectedTool"));
		return ptr;
	}

};


// Class ModelingComponents.BaseDynamicMeshComponent
// 0x0040 (0x04B0 - 0x0470)
class UBaseDynamicMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0470(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.BaseDynamicMeshComponent"));
		return ptr;
	}

};


// Class ModelingComponents.BaseMeshProcessingToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UBaseMeshProcessingToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.BaseMeshProcessingToolBuilder"));
		return ptr;
	}

};


// Class ModelingComponents.BaseMeshProcessingTool
// 0x0378 (0x0400 - 0x0088)
class UBaseMeshProcessingTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0088(0x0028) MISSED OFFSET
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                  // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x348];                                     // 0x00B8(0x0348) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.BaseMeshProcessingTool"));
		return ptr;
	}

};


// Class ModelingComponents.BaseVoxelTool
// 0x0018 (0x0108 - 0x00F0)
class UBaseVoxelTool : public UBaseCreateFromSelectedTool
{
public:
	class UVoxelProperties*                            VoxProperties;                                            // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.BaseVoxelTool"));
		return ptr;
	}

};


// Class ModelingComponents.CollectSurfacePathMechanic
// 0x0520 (0x0550 - 0x0030)
class UCollectSurfacePathMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData00[0x520];                                     // 0x0030(0x0520) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.CollectSurfacePathMechanic"));
		return ptr;
	}

};


// Class ModelingComponents.ConstructionPlaneMechanic
// 0x00C0 (0x00F0 - 0x0030)
class UConstructionPlaneMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0030(0x0098) MISSED OFFSET
	class UTransformGizmo*                             PlaneTransformGizmo;                                      // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTransformProxy*                             PlaneTransformProxy;                                      // 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET
	class USingleClickInputBehavior*                   ClickToSetPlaneBehavior;                                  // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.ConstructionPlaneMechanic"));
		return ptr;
	}

};


// Class ModelingComponents.CurveControlPointsMechanic
// 0x0620 (0x0650 - 0x0030)
class UCurveControlPointsMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	class USingleClickInputBehavior*                   ClickBehavior;                                            // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMouseHoverBehavior*                         HoverBehavior;                                            // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x498];                                     // 0x0050(0x0498) MISSED OFFSET
	class APreviewGeometryActor*                       PreviewGeometryActor;                                     // 0x04E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UPointSetComponent*                          DrawnControlPoints;                                       // 0x04F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class ULineSetComponent*                           DrawnControlSegments;                                     // 0x04F8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UPointSetComponent*                          PreviewPoint;                                             // 0x0500(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class ULineSetComponent*                           PreviewSegment;                                           // 0x0508(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x78];                                      // 0x0510(0x0078) MISSED OFFSET
	class UTransformProxy*                             PointTransformProxy;                                      // 0x0588(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UTransformGizmo*                             PointTransformGizmo;                                      // 0x0590(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0xB8];                                      // 0x0598(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.CurveControlPointsMechanic"));
		return ptr;
	}

};


// Class ModelingComponents.DynamicMeshReplacementChangeTarget
// 0x0030 (0x0058 - 0x0028)
class UDynamicMeshReplacementChangeTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.DynamicMeshReplacementChangeTarget"));
		return ptr;
	}

};


// Class ModelingComponents.LineSetComponent
// 0x0060 (0x04D0 - 0x0470)
class ULineSetComponent : public UMeshComponent
{
public:
	struct FBoxSphereBounds                            Bounds;                                                   // 0x0470(0x001C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	bool                                               bBoundsDirty;                                             // 0x048C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x43];                                      // 0x048D(0x0043) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.LineSetComponent"));
		return ptr;
	}

};


// Class ModelingComponents.MeshCommandChangeTarget
// 0x0000 (0x0028 - 0x0028)
class UMeshCommandChangeTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.MeshCommandChangeTarget"));
		return ptr;
	}

};


// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
// 0x0068 (0x0090 - 0x0028)
class UMeshOpPreviewWithBackgroundCompute : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	class UPreviewMesh*                                PreviewMesh;                                              // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  StandardMaterials;                                        // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInterface*                          WorkingMaterial;                                          // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.MeshOpPreviewWithBackgroundCompute"));
		return ptr;
	}

};


// Class ModelingComponents.MeshReplacementCommandChangeTarget
// 0x0000 (0x0028 - 0x0028)
class UMeshReplacementCommandChangeTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.MeshReplacementCommandChangeTarget"));
		return ptr;
	}

};


// Class ModelingComponents.MeshVertexCommandChangeTarget
// 0x0000 (0x0028 - 0x0028)
class UMeshVertexCommandChangeTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.MeshVertexCommandChangeTarget"));
		return ptr;
	}

};


// Class ModelingComponents.MultiTransformer
// 0x0118 (0x0140 - 0x0028)
class UMultiTransformer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET
	class UInteractiveGizmoManager*                    GizmoManager;                                             // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0078(0x0068) MISSED OFFSET
	class UTransformGizmo*                             TransformGizmo;                                           // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTransformProxy*                             TransformProxy;                                           // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x50];                                      // 0x00F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.MultiTransformer"));
		return ptr;
	}

};


// Class ModelingComponents.OctreeDynamicMeshComponent
// 0x0110 (0x05C0 - 0x04B0)
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04B0(0x0018) MISSED OFFSET
	bool                                               bExplicitShowWireframe;                                   // 0x04C8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF7];                                      // 0x04C9(0x00F7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.OctreeDynamicMeshComponent"));
		return ptr;
	}

};


// Class ModelingComponents.PlaneDistanceFromHitMechanic
// 0x0480 (0x04B0 - 0x0030)
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData00[0x480];                                     // 0x0030(0x0480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.PlaneDistanceFromHitMechanic"));
		return ptr;
	}

};


// Class ModelingComponents.PointSetComponent
// 0x0060 (0x04D0 - 0x0470)
class UPointSetComponent : public UMeshComponent
{
public:
	struct FBoxSphereBounds                            Bounds;                                                   // 0x0470(0x001C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	bool                                               bBoundsDirty;                                             // 0x048C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x43];                                      // 0x048D(0x0043) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.PointSetComponent"));
		return ptr;
	}

};


// Class ModelingComponents.PreviewMesh
// 0x00B8 (0x00E0 - 0x0028)
class UPreviewMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	bool                                               bBuildSpatialDataStructure;                               // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDrawOnTop;                                               // 0x0041(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0042(0x000E) MISSED OFFSET
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                     // 0x0050(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x88];                                      // 0x0058(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.PreviewMesh"));
		return ptr;
	}

};


// Class ModelingComponents.PolyEditPreviewMesh
// 0x03F0 (0x04D0 - 0x00E0)
class UPolyEditPreviewMesh : public UPreviewMesh
{
public:
	unsigned char                                      UnknownData00[0x3F0];                                     // 0x00E0(0x03F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.PolyEditPreviewMesh"));
		return ptr;
	}

};


// Class ModelingComponents.PolygonSelectionMechanicProperties
// 0x0008 (0x0068 - 0x0060)
class UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bSelectFaces;                                             // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSelectEdges;                                             // 0x0061(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSelectVertices;                                          // 0x0062(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPreferProjectedElement;                                  // 0x0063(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSelectDownRay;                                           // 0x0064(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIgnoreOcclusion;                                         // 0x0065(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0066(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.PolygonSelectionMechanicProperties"));
		return ptr;
	}

};


// Class ModelingComponents.PolygonSelectionMechanic
// 0x0640 (0x0670 - 0x0030)
class UPolygonSelectionMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
	class UPolygonSelectionMechanicProperties*         Properties;                                               // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x308];                                     // 0x0058(0x0308) MISSED OFFSET
	class APreviewGeometryActor*                       PreviewGeometryActor;                                     // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UTriangleSetComponent*                       DrawnTriangleSetComponent;                                // 0x0368(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0370(0x0050) MISSED OFFSET
	class UMaterialInterface*                          HighlightedFaceMaterial;                                  // 0x03C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x2A8];                                     // 0x03C8(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.PolygonSelectionMechanic"));
		return ptr;
	}

};


// Class ModelingComponents.PreviewGeometryActor
// 0x0000 (0x0220 - 0x0220)
class APreviewGeometryActor : public AInternalToolFrameworkActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.PreviewGeometryActor"));
		return ptr;
	}

};


// Class ModelingComponents.PreviewGeometry
// 0x0058 (0x0080 - 0x0028)
class UPreviewGeometry : public UObject
{
public:
	class APreviewGeometryActor*                       ParentActor;                                              // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, class ULineSetComponent*>     LineSets;                                                 // 0x0030(0x0050) (CPF_ExportObject, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.PreviewGeometry"));
		return ptr;
	}


	bool SetLineSetVisibility(const struct FString& LineSetIdentifier, bool bVisible);
	bool SetLineSetMaterial(const struct FString& LineSetIdentifier, class UMaterialInterface* NewMaterial);
	void SetAllLineSetsMaterial(class UMaterialInterface* Material);
	bool RemoveLineSet(const struct FString& LineSetIdentifier, bool bDestroy);
	void RemoveAllLineSets(bool bDestroy);
	class APreviewGeometryActor* GetActor();
	class ULineSetComponent* FindLineSet(const struct FString& LineSetIdentifier);
	void Disconnect();
	void CreateInWorld(class UWorld* World, const struct FTransform& WithTransform);
	class ULineSetComponent* AddLineSet(const struct FString& LineSetIdentifier);
};


// Class ModelingComponents.PreviewMeshActor
// 0x0000 (0x0220 - 0x0220)
class APreviewMeshActor : public AInternalToolFrameworkActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.PreviewMeshActor"));
		return ptr;
	}

};


// Class ModelingComponents.SimpleDynamicMeshComponent
// 0x0150 (0x0600 - 0x04B0)
class USimpleDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	EDynamicMeshTangentCalcType                        TangentsType;                                             // 0x04B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInvalidateProxyOnChange;                                 // 0x04B1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x36];                                      // 0x04B2(0x0036) MISSED OFFSET
	bool                                               bExplicitShowWireframe;                                   // 0x04E8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x47];                                      // 0x04E9(0x0047) MISSED OFFSET
	bool                                               bDrawOnTop;                                               // 0x0530(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xCF];                                      // 0x0531(0x00CF) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.SimpleDynamicMeshComponent"));
		return ptr;
	}

};


// Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
// 0x0010 (0x0070 - 0x0060)
class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{
public:
	ESpaceCurveControlPointTransformMode               TransformMode;                                            // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ESpaceCurveControlPointOriginMode                  TransformOrigin;                                          // 0x0064(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0064(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Softness;                                                 // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ESpaceCurveControlPointFalloffType                 SoftFalloff;                                              // 0x006C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x006C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet"));
		return ptr;
	}

};


// Class ModelingComponents.SpaceCurveDeformationMechanic
// 0x0280 (0x02B0 - 0x0030)
class USpaceCurveDeformationMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	class USingleClickInputBehavior*                   ClickBehavior;                                            // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMouseHoverBehavior*                         HoverBehavior;                                            // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0050(0x0018) MISSED OFFSET
	class USpaceCurveDeformationMechanicPropertySet*   TransformProperties;                                      // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xF8];                                      // 0x0070(0x00F8) MISSED OFFSET
	class APreviewGeometryActor*                       PreviewGeometryActor;                                     // 0x0168(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UPointSetComponent*                          RenderPoints;                                             // 0x0170(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class ULineSetComponent*                           RenderSegments;                                           // 0x0178(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x38];                                      // 0x0180(0x0038) MISSED OFFSET
	class UTransformProxy*                             PointTransformProxy;                                      // 0x01B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UTransformGizmo*                             PointTransformGizmo;                                      // 0x01C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0xE8];                                      // 0x01C8(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.SpaceCurveDeformationMechanic"));
		return ptr;
	}

};


// Class ModelingComponents.SpatialCurveDistanceMechanic
// 0x03C0 (0x03F0 - 0x0030)
class USpatialCurveDistanceMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData00[0x3C0];                                     // 0x0030(0x03C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.SpatialCurveDistanceMechanic"));
		return ptr;
	}

};


// Class ModelingComponents.TriangleSetComponent
// 0x00E0 (0x0550 - 0x0470)
class UTriangleSetComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0470(0x0014) MISSED OFFSET
	bool                                               bBoundsDirty;                                             // 0x0484(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0xCB];                                      // 0x0485(0x00CB) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.TriangleSetComponent"));
		return ptr;
	}

};


// Class ModelingComponents.UVLayoutPreviewProperties
// 0x0018 (0x0078 - 0x0060)
class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bVisible;                                                 // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              ScaleFactor;                                              // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EUVLayoutPreviewSide                               WhichSide;                                                // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0068(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bShowWireframe;                                           // 0x006C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	struct FVector2D                                   Shift;                                                    // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.UVLayoutPreviewProperties"));
		return ptr;
	}

};


// Class ModelingComponents.UVLayoutPreview
// 0x0118 (0x0140 - 0x0028)
class UUVLayoutPreview : public UObject
{
public:
	class UUVLayoutPreviewProperties*                  Settings;                                                 // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPreviewMesh*                                PreviewMesh;                                              // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTriangleSetComponent*                       TriangleComponent;                                        // 0x0038(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowBackingRectangle;                                    // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UMaterialInterface*                          BackingRectangleMaterial;                                 // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xF0];                                      // 0x0050(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.UVLayoutPreview"));
		return ptr;
	}

};


// Class ModelingComponents.VoxelProperties
// 0x0018 (0x0078 - 0x0060)
class UVoxelProperties : public UInteractiveToolPropertySet
{
public:
	int                                                VoxelCount;                                               // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAutoSimplify;                                            // 0x0064(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRemoveInternalSurfaces;                                  // 0x0065(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
	double                                             SimplifyMaxErrorFactor;                                   // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	double                                             CubeRootMinComponentVolume;                               // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.VoxelProperties"));
		return ptr;
	}

};


// Class ModelingComponents.WeightMapSetProperties
// 0x0020 (0x0080 - 0x0060)
class UWeightMapSetProperties : public UInteractiveToolPropertySet
{
public:
	struct FName                                       WeightMap;                                                // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             WeightMapsList;                                           // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bInvertWeightMap;                                         // 0x0078(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ModelingComponents.WeightMapSetProperties"));
		return ptr;
	}


	TArray<struct FString> GetWeightMapsFunc();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
