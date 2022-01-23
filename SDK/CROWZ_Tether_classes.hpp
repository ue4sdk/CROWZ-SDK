#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Tether_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Tether.TetherCableActor
// 0x0170 (0x0390 - 0x0220)
class ATetherCableActor : public AActor
{
public:
	struct FTetherCableProperties                      CableProperties;                                          // 0x0220(0x00A0) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	bool                                               bLockCurrentState;                                        // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x02C8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoClear, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSynchronousRealtime;                                     // 0x02D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02D1(0x0003) MISSED OFFSET
	float                                              RealtimeInEditorTimeDilation;                             // 0x02D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebugVisualizeSimulationParticles;                       // 0x02D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebugVisualizeSimulationCollision;                       // 0x02D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebugVisualizeBuiltStaticMeshPoints;                     // 0x02DA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebugVisualizeContactPoints;                             // 0x02DB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebugVisualizeComponentLocations;                        // 0x02DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebugVisualizeTangents;                                  // 0x02DD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bVisible;                                                 // 0x02DE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x1];                                       // 0x02DF(0x0001) MISSED OFFSET
	class USceneComponent*                             SceneRoot;                                                // 0x02E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FDateTime                                   TimeCreated;                                              // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_NoDestructor, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UTetherGuideSplineComponent*                 GuideSpline;                                              // 0x02F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET
	struct FTetherSimulationModel                      ActiveSimulationModel;                                    // 0x0300(0x0050) (CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0350(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NonPIEDuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FCableMeshGenerationCurveDescription        BuiltCurveDescriptionLocalSpaceSimplified;                // 0x0358(0x0028) (CPF_NativeAccessSpecifierPrivate)
	class UTetherCableMeshComponent*                   DynamicPreviewMesh;                                       // 0x0380(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UTetherMeshGenerator*                        MeshGenerator;                                            // 0x0388(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tether.TetherCableActor"));
		return ptr;
	}

};


// Class Tether.TetherCableMeshComponent
// 0x0040 (0x04B0 - 0x0470)
class UTetherCableMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0470(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tether.TetherCableMeshComponent"));
		return ptr;
	}

};


// Class Tether.TetherGuideSplineMetadata
// 0x0010 (0x0038 - 0x0028)
class UTetherGuideSplineMetadata : public USplineMetadata
{
public:
	TArray<class UTetherPointSegmentDefinition*>       PointSegmentDefinitions;                                  // 0x0028(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tether.TetherGuideSplineMetadata"));
		return ptr;
	}

};


// Class Tether.TetherGuideSplineComponent
// 0x0030 (0x0570 - 0x0540)
class UTetherGuideSplineComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0540(0x0028) MISSED OFFSET
	class UTetherGuideSplineMetadata*                  MetaData;                                                 // 0x0568(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tether.TetherGuideSplineComponent"));
		return ptr;
	}

};


// Class Tether.TetherMeshGenerator
// 0x0000 (0x0028 - 0x0028)
class UTetherMeshGenerator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tether.TetherMeshGenerator"));
		return ptr;
	}

};


// Class Tether.TetherPointSegmentDefinition
// 0x0008 (0x0030 - 0x0028)
class UTetherPointSegmentDefinition : public UObject
{
public:
	float                                              Slack;                                                    // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTetherSegmentSimulationOptions             SimulationOptions;                                        // 0x002C(0x0002) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tether.TetherPointSegmentDefinition"));
		return ptr;
	}

};


// Class Tether.TMG_Basic
// 0x0020 (0x0048 - 0x0028)
class UTMG_Basic : public UTetherMeshGenerator
{
public:
	struct FBasicMeshProperties                        Properties;                                               // 0x0028(0x001C) (CPF_Edit, CPF_Config, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tether.TMG_Basic"));
		return ptr;
	}

};


// Class Tether.TMG_CustomMesh
// 0x0038 (0x0060 - 0x0028)
class UTMG_CustomMesh : public UTetherMeshGenerator
{
public:
	struct FCustomMeshProperties                       Properties;                                               // 0x0028(0x0038) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tether.TMG_CustomMesh"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
