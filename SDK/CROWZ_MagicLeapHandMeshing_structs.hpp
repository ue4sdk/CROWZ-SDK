#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Basic.hpp"
#include "CROWZ_CoreUObject_classes.hpp"
#include "CROWZ_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapHandMeshing.MagicLeapHandMeshBlock
// 0x0028
struct FMagicLeapHandMeshBlock
{
	int                                                IndexCount;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                vertexcount;                                              // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Vertex;                                                   // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        Index;                                                    // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct MagicLeapHandMeshing.MagicLeapHandMesh
// 0x0018
struct FMagicLeapHandMesh
{
	int                                                Version;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DataCount;                                                // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapHandMeshBlock>             Data;                                                     // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
