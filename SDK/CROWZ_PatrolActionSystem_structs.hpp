#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Basic.hpp"
#include "CROWZ_PatrolActionSystem_enums.hpp"
#include "CROWZ_Engine_classes.hpp"
#include "CROWZ_GameplayTasks_classes.hpp"
#include "CROWZ_CoreUObject_classes.hpp"
#include "CROWZ_GameplayTags_classes.hpp"
#include "CROWZ_AIModule_classes.hpp"
#include "CROWZ_DeveloperSettings_classes.hpp"
#include "CROWZ_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PatrolActionSystem.DrawerItemInfo
// 0x0058
struct FDrawerItemInfo
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct PatrolActionSystem.EnemyActionSelector
// 0x0018
struct FEnemyActionSelector
{
	bool                                               bUseInstancedEnemyActions;                                // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UUPSEnemyAction*                             InstancedEnemyAction;                                     // 0x0008(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UUPSEnemyAction*                             DAEnemyAction;                                            // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct PatrolActionSystem.FormationPointsGenerationSettings
// 0x000C
struct FFormationPointsGenerationSettings
{
	float                                              Length;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Width;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DistanceBetweenPoints;                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct PatrolActionSystem.PatrolPointScript
// 0x0008
struct FPatrolPointScript
{
	class UUPSPatrolPointScript*                       PatrolPointScript;                                        // 0x0000(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct PatrolActionSystem.MovementGroupMemberInfo
// 0x0018
struct FMovementGroupMemberInfo
{
	class AUPSGroupMemberMovementPoint*                GroupMemberMovementPointActor;                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     GroupMemberLocation;                                      // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct PatrolActionSystem.DelayedGroupMovement
// 0x0020
struct FDelayedGroupMovement
{
	class AActor*                                      MovementTargetActor;                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct PatrolActionSystem.UPSMoveParams
// 0x0018
struct FUPSMoveParams
{
	bool                                               bUsePathfinding;                                          // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAllowPartialPath;                                        // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bProjectGoalLocation;                                     // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	class UClass* /* UNavigationQueryFilter*/          NavFilter;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AcceptenceRadius;                                         // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bReachTestIncludesAgentRadius;                            // 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanStrafe;                                               // 0x0015(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
};

// ScriptStruct PatrolActionSystem.PatrolPointSettings
// 0x0040
struct FPatrolPointSettings
{
	TArray<struct FPatrolPointScript>                  PatrolPointScripts;                                       // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	TArray<struct FEnemyActionSelector>                PatrolPointActions;                                       // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseEnemyActionsPreset;                                   // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UUPSEnemyActionsPreset*                      EnemyActionsPreset;                                       // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EEnemyActionsExecutionType                         EnemyActionsExecutionType;                                // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRotateOnPointAfterReach;                                 // 0x0031(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              ReachRadius;                                              // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UUPSPatrolPointSolver*                       NextPatrolPointSolver;                                    // 0x0038(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct PatrolActionSystem.PatrolPointLink
// 0x0010
struct FPatrolPointLink
{
	class AUPSPatrolPoint*                             PatrolPoint;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGameplayTag                                LinkTag;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct PatrolActionSystem.UPSPathData
// 0x0018
struct FUPSPathData
{
	TArray<struct FVector>                             PathPoints;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bPathIsValid;                                             // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct PatrolActionSystem.UPSPatrolPointPathData
// 0x0010 (0x0028 - 0x0018)
struct FUPSPatrolPointPathData : public FUPSPathData
{
	TWeakObjectPtr<class AUPSPatrolPoint>              FirstPoint;                                               // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AUPSPatrolPoint>              SecondPoint;                                              // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct PatrolActionSystem.UPSPatrolComponentPathData
// 0x0008 (0x0020 - 0x0018)
struct FUPSPatrolComponentPathData : public FUPSPathData
{
	TWeakObjectPtr<class UUPSPatrolComponent>          PatrolComponent;                                          // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct PatrolActionSystem.VisitedPoint
// 0x0010
struct FVisitedPoint
{
	TWeakObjectPtr<class AUPSPatrolPoint>              FirstPoint;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AUPSPatrolPoint>              SecondPoint;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct PatrolActionSystem.GroupVisualizationInfo
// 0x0001
struct FGroupVisualizationInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
