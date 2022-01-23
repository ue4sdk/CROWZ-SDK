#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Basic.hpp"
#include "CROWZ_ModelingComponents_enums.hpp"
#include "CROWZ_InteractiveToolsFramework_classes.hpp"
#include "CROWZ_Engine_classes.hpp"
#include "CROWZ_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ModelingComponents.RenderableTriangleVertex
// 0x0024
struct FRenderableTriangleVertex
{
	struct FVector                                     position;                                                 // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   UV;                                                       // 0x000C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                   // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct ModelingComponents.RenderableTriangle
// 0x0078
struct FRenderableTriangle
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRenderableTriangleVertex                   Vertex0;                                                  // 0x0008(0x0024) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRenderableTriangleVertex                   Vertex1;                                                  // 0x002C(0x0024) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRenderableTriangleVertex                   Vertex2;                                                  // 0x0050(0x0024) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
