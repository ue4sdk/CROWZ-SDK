#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Basic.hpp"
#include "CROWZ_MeshModelingTools_enums.hpp"
#include "CROWZ_InteractiveToolsFramework_classes.hpp"
#include "CROWZ_Engine_classes.hpp"
#include "CROWZ_CoreUObject_classes.hpp"
#include "CROWZ_ModelingComponents_classes.hpp"
#include "CROWZ_ModelingOperators_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MeshModelingTools.PhysicsSphereData
// 0x0070
struct FPhysicsSphereData
{
	float                                              Radius;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_Edit, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FKShapeElem                                 Element;                                                  // 0x0040(0x0030) (CPF_Edit, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct MeshModelingTools.PhysicsBoxData
// 0x0070
struct FPhysicsBoxData
{
	struct FVector                                     Dimensions;                                               // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_Edit, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FKShapeElem                                 Element;                                                  // 0x0040(0x0030) (CPF_Edit, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct MeshModelingTools.PhysicsCapsuleData
// 0x0070
struct FPhysicsCapsuleData
{
	float                                              Radius;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Length;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_Edit, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FKShapeElem                                 Element;                                                  // 0x0040(0x0030) (CPF_Edit, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct MeshModelingTools.PhysicsConvexData
// 0x0038
struct FPhysicsConvexData
{
	int                                                NumVertices;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumFaces;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FKShapeElem                                 Element;                                                  // 0x0008(0x0030) (CPF_Edit, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct MeshModelingTools.PerlinLayerProperties
// 0x0008
struct FPerlinLayerProperties
{
	float                                              Frequency;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Intensity;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct MeshModelingTools.EditPivotTarget
// 0x0010
struct FEditPivotTarget
{
	class UTransformProxy*                             TransformProxy;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTransformGizmo*                             TransformGizmo;                                           // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct MeshModelingTools.TransformMeshesTarget
// 0x0010
struct FTransformMeshesTarget
{
	class UTransformProxy*                             TransformProxy;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTransformGizmo*                             TransformGizmo;                                           // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
