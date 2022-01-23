#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Basic.hpp"
#include "CROWZ_CrowWorld_enums.hpp"
#include "CROWZ_Foliage_classes.hpp"
#include "CROWZ_Engine_classes.hpp"
#include "CROWZ_CoreUObject_classes.hpp"
#include "CROWZ_DeveloperSettings_classes.hpp"
#include "CROWZ_AkAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CrowWorld.CrowWorldSMCShakingState
// 0x0090
struct FCrowWorldSMCShakingState
{
	struct FTransform                                  BeginShakeTransform;                                      // 0x0000(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  NextShakeTransform;                                       // 0x0030(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      Shaking : 1;                                              // 0x0060(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      NextTimeStep : 1;                                         // 0x0060(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              ShakeDuration;                                            // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShakeTimeLeft;                                            // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShakeStepTime;                                            // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShakeStepLeft;                                            // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShakeOffset;                                              // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     ShakeOffsetVector;                                        // 0x0078(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShakeOffsetMultiply;                                      // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct CrowWorld.BitFlagArray
// 0x0018
struct FBitFlagArray
{
	int16_t                                            MaxFlagCount;                                             // 0x0000(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<uint32_t>                                   FlagBlocks;                                               // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_Protected, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct CrowWorld.CrowWorldActorLayoutItemLookups
// 0x0040
struct FCrowWorldActorLayoutItemLookups
{
	TArray<int16_t>                                    LayoutToDestructibleFlag;                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<int16_t>                                    DestructibleFlagToLayout;                                 // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<int16_t>                                    LayoutToDynamicStates;                                    // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<int16_t>                                    DynamicStatesToLayout;                                    // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldActorLayoutItemInstance
// 0x0058
struct FCrowWorldActorLayoutItemInstance
{
	unsigned char                                      bDestroyedInstance : 1;                                   // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bDestructibleInstance : 1;                                // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bDestroyParent : 1;                                       // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bDestroyOnVehicleOverlap : 1;                             // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bDestroyByShockwave : 1;                                  // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bNeedDecalReceiver : 1;                                   // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bInteractiveInstance : 1;                                 // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bComponentVisibility : 1;                                 // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bShakeOnDamage : 1;                                       // 0x0001(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      ClientOnlyDestroy : 1;                                    // 0x0001(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bSoundOccluder : 1;                                       // 0x0001(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int8_t                                             DynamicState;                                             // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	int16_t                                            OwnerLayoutItemIndex;                                     // 0x0004(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            AttachParentIndex;                                        // 0x0006(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       AttachParentSocketName;                                   // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HealthPoint;                                              // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RelayDamageRatioToParent;                                 // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OverlapImpactResistRatio;                                 // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OverlapImpactResistMax;                                   // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USceneComponent*                             Component;                                                // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        DecalReceiver;                                            // 0x0028(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UPrimitiveComponent*>                 RemainMeshComponents;                                     // 0x0030(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	class UCrowWorldBreakableAUD*                      BreakableAUD;                                             // 0x0040(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCrowWorldDestructionAUD*                    DestructionAUD;                                           // 0x0048(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCrowWorldDamageCheckerBase*                 DamageChecker;                                            // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldActorDestructionState
// 0x0028
struct FCrowWorldActorDestructionState
{
	float                                              ActorHealthPoint;                                         // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ActorMaxHP;                                               // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCrowWorldDamageCheckerBase*                 ActorDamageChecker;                                       // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCrowWorldDestructionAUD*                    ActorDestructionAUD;                                      // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UPrimitiveComponent*>                 RemainMeshComponents;                                     // 0x0018(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldActorLODState
// 0x0008
struct FCrowWorldActorLODState
{
	class UStaticMeshComponent*                        LODMeshComponent;                                         // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldLayoutItemAnim
// 0x0030
struct FCrowWorldLayoutItemAnim
{
	float                                              Duration;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UCurveFloat*                                 AnimationCurve;                                           // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               Sound;                                                    // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               HasQuickAction;                                           // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              DurationQuick;                                            // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 AnimationCurveQuick;                                      // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               SoundQuick;                                               // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldLayoutItemAnimation
// 0x0108
struct FCrowWorldLayoutItemAnimation
{
	unsigned char                                      IsValidAnimation : 1;                                     // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bHasStateHolderParent : 1;                                // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bHasAnyGeometry : 1;                                      // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bHasBody : 1;                                             // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bHasTrigger1 : 1;                                         // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bHasTrigger2 : 1;                                         // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bHasChecker1 : 1;                                         // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bHasChecker2 : 1;                                         // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bHasTrace : 1;                                            // 0x0001(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bHasHinge1 : 1;                                           // 0x0001(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bHasHinge2 : 1;                                           // 0x0001(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bHasSlideTarget : 1;                                      // 0x0001(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            StateHolderParentIndex;                                   // 0x0002(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     LocalTextKey_Open;                                        // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     LocalTextKey_Close;                                       // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     HingeLocation1;                                           // 0x0028(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    HingeRotator1;                                            // 0x0034(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     HingeLocation2;                                           // 0x0040(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    HingeRotator2;                                            // 0x004C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SlideTarget;                                              // 0x0058(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<class UBodySetup*>                          BodySetups;                                               // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldLayoutItemAnim                    AnimOpen;                                                 // 0x0078(0x0030) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldLayoutItemAnim                    AnimClose;                                                // 0x00A8(0x0030) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldLayoutItemAnim                    AnimBlocked;                                              // 0x00D8(0x0030) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldAnimationInstance
// 0x0090
struct FCrowWorldAnimationInstance
{
	int8_t                                             DynamicState;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bIsValidInstance : 1;                                     // 0x0001(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bTriggersActivated : 1;                                   // 0x0001(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0002(0x000E) MISSED OFFSET
	struct FTransform                                  InitialRelativeTransform;                                 // 0x0010(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  InitialWorldTransform;                                    // 0x0040(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class USceneComponent*                             LayoutItemComponent;                                      // 0x0070(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UCrowWorldTrigger*>                   TriggerComponents;                                        // 0x0078(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct CrowWorld.CrowWorldAnimationState
// 0x0060
struct FCrowWorldAnimationState
{
	int16_t                                            LayoutItemIndex;                                          // 0x0000(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            DynamicStateIndex;                                        // 0x0002(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bAnimationFinished : 1;                                   // 0x0004(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bAnimateRotation : 1;                                     // 0x0004(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bAnimateLocation : 1;                                     // 0x0004(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              TimeBegin;                                                // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 AnimationCurve;                                           // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SlideLocationFrom;                                        // 0x0018(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SlideLocationTo;                                          // 0x0024(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     HingeLocation;                                            // 0x0030(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FQuat                                       HingeRotationFrom;                                        // 0x0040(0x0010) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FQuat                                       HingeRotationTo;                                          // 0x0050(0x0010) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldEditorActorBuildCache
// 0x0018
struct FCrowWorldEditorActorBuildCache
{
	TArray<TWeakObjectPtr<class ACrowWorldEditorActor>> TargetActors;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	int                                                CurrentIndex;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct CrowWorld.CrowWorldActorLayoutItem
// 0x0050
struct FCrowWorldActorLayoutItem
{
	unsigned char                                      bDestructible : 1;                                        // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bDestroyParent : 1;                                       // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bDestroyOnVehicleOverlap : 1;                             // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bDestroyByShockwave : 1;                                  // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bNeedDecalReceiver : 1;                                   // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bInteraction : 1;                                         // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bInteractionParent : 1;                                   // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bInteractionChild : 1;                                    // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      AutoDetectParent : 1;                                     // 0x0001(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      ShakeOnDamage : 1;                                        // 0x0001(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      ClientOnlyDestroy : 1;                                    // 0x0001(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      ClientDecorationOnly : 1;                                 // 0x0001(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bSoundOccluder : 1;                                       // 0x0001(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            OwnerLayoutItemIndex;                                     // 0x0002(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            AttachParentLayoutIndex;                                  // 0x0004(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FName                                       AttachParentSocket;                                       // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  RelativeTransform;                                        // 0x0010(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UCrowWorldAsset*                             WorldAsset;                                               // 0x0040(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct CrowWorld.CrowWorldActorDestruction
// 0x0018
struct FCrowWorldActorDestruction
{
	float                                              MaxHP;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass* /* UCrowWorldDamageCheckerBase*/     DamageChecker;                                            // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCrowWorldDestructionAUD*                    DestructionAUD;                                           // 0x0010(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldActorMeshLOD
// 0x0010
struct FCrowWorldActorMeshLOD
{
	int8_t                                             LODLevelMin;                                              // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int8_t                                             LODLevelMax;                                              // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UStaticMesh*                                 MeshLOD;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldActorLOD
// 0x0078
struct FCrowWorldActorLOD
{
	float                                              BoundingSphereRadius;                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     BoundingSphereCenter;                                     // 0x0004(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      LODLevelCameraDistanceOverride;                           // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowWorldActorMeshLOD>              MeshLODArray;                                             // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FBitFlagArray>                       LayoutItemShowFlags;                                      // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FBitFlagArray>                       MeshLODShowFlags;                                         // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FBitFlagArray                               CameraDistanceOverrideFlags;                              // 0x0050(0x0018) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      CameraDistanceOverrides;                                  // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldActorLayout
// 0x00F8
struct FCrowWorldActorLayout
{
	unsigned char                                      UseActorDestruction : 1;                                  // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UseWorldActorLOD : 1;                                     // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      SkipItemDestroyedFlag : 1;                                // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DestroyedFlagInCluster : 1;                               // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DestroyedFlagInLandmark : 1;                              // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      AutoDetectParentActor : 1;                                // 0x0000(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FCrowWorldActorLayoutItem>           LayoutItems;                                              // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldActorLayoutItemLookups            LayoutItemLookups;                                        // 0x0018(0x0040) (CPF_Edit, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldLayoutItemAnimation>       LayoutItemAnimations;                                     // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldActorDestruction                  ActorDestruction;                                         // 0x0068(0x0018) (CPF_Edit, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldActorLOD                          ActorLOD;                                                 // 0x0080(0x0078) (CPF_Edit, CPF_Protected, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct CrowWorld.CrowWorldActorData
// 0x0040
struct FCrowWorldActorData
{
	uint32_t                                           WorldActorIndex;                                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            ActorLayoutIndex;                                         // 0x0004(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            ActorDestructibleFlagLookupInSector;                      // 0x0006(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            ActorDestructibleFlagLookupInCluster;                     // 0x0008(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            ActorDestructibleFlagLookupInLandmark;                    // 0x000A(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            DestructibleFlagOrigin;                                   // 0x000C(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            DynamicStateOrigin;                                       // 0x000E(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  WorldTransform;                                           // 0x0010(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldSectorData
// 0x0020
struct FCrowWorldSectorData
{
	uint32_t                                           SectorIndex;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           ParentClusterIndex;                                       // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowWorldActorData>                 ActorArray;                                               // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int16_t                                            ActorDestructibleFlagCount;                               // 0x0018(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            LayoutItemDestructibleFlagCount;                          // 0x001A(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            LayoutItemDynamicStateCount;                              // 0x001C(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct CrowWorld.CrowWorldClusterData
// 0x0028
struct FCrowWorldClusterData
{
	uint32_t                                           ClusterIndex;                                             // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<uint32_t>                                   SectorIndexArray;                                         // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   ActorIndexArray;                                          // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldLandmarkData
// 0x0010
struct FCrowWorldLandmarkData
{
	TArray<uint32_t>                                   ActorIndexArray;                                          // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldLinkedActorData
// 0x0008
struct FCrowWorldLinkedActorData
{
	uint32_t                                           ChildWorldActorIndex;                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           ParentWorldActorIndex;                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldDestructionMeshData
// 0x0020
struct FCrowWorldDestructionMeshData
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                        // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       CollisionProfileName;                                     // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldDestructionSimulation
// 0x0090
struct FCrowWorldDestructionSimulation
{
	class UStaticMesh*                                 SimulationSMC;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  MaterialOverridesSMC;                                     // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	float                                              MassOverrideSMC;                                          // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class USkeletalMesh*                               SimulationSKC;                                            // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FName>                               SimulationBoneNames;                                      // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FName>                               HideBoneNames;                                            // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  MaterialOverridesSKC;                                     // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       ImpulseSocket;                                            // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       ImpulseTargetBone;                                        // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ImpulseMagnitude;                                         // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       CollisionProfileName;                                     // 0x006C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseBreakingBones;                                         // 0x0074(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	TArray<struct FName>                               BreakingBoneNames;                                        // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	float                                              BreakingBoneTime;                                         // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct CrowWorld.CrowWorldDestructionSimulationActor
// 0x0018
struct FCrowWorldDestructionSimulationActor
{
	class UClass* /* ACrowWorldSimulationActor*/       SimulationActor;                                          // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       CollisionProfileName;                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ImpulseMagnitude;                                         // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct CrowWorld.CrowWorldDestructionFxStart
// 0x0028
struct FCrowWorldDestructionFxStart
{
	struct FName                                       FxSocketName;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UFXSystemAsset*                              FxOnDestroyed;                                            // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               SoundDestroyed;                                           // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UFXSystemAsset*>                      FxOnDestroyedArray;                                       // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldDestructionFxAttached
// 0x0020
struct FCrowWorldDestructionFxAttached
{
	TArray<struct FName>                               AttachSocketNames;                                        // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	class UFXSystemAsset*                              FxAttachToSocket;                                         // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               StopEmitterAfterHitGround;                                // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct CrowWorld.CrowWorldDestructionFxHitGround
// 0x0030
struct FCrowWorldDestructionFxHitGround
{
	struct FName                                       GroundActorTag;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FName>                               HitBoneNames;                                             // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	class UFXSystemAsset*                              FxHitGound;                                               // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               SoundHitGround;                                           // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxHitCount;                                              // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HitCoolTime;                                              // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldDestructionSetting
// 0x0140
struct FCrowWorldDestructionSetting
{
	float                                              DurationMin;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DurationMax;                                              // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ExplosionRadialDamage;                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ExplosionDamageRadius;                                    // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ExplosionDamageDelay;                                     // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass* /* UCrowChainExplosionDamageType*/   ChainExplosionDamageType;                                 // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldDestructionSimulation             Simulation;                                               // 0x0020(0x0090) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldDestructionSimulationActor        SimulationActor;                                          // 0x00B0(0x0018) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldDestructionFxStart                FxStart;                                                  // 0x00C8(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldDestructionFxAttached             FxAttached;                                               // 0x00F0(0x0020) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldDestructionFxHitGround            FxHitGround;                                              // 0x0110(0x0030) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldDestructionCacheItem
// 0x0028
struct FCrowWorldDestructionCacheItem
{
	class ACrowMeshDestructionActor*                   DestructionActor;                                         // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FBoxSphereBounds                            ComponentBounds;                                          // 0x0008(0x001C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              TimeRegistered;                                           // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldLightProbeSetting
// 0x004C
struct FCrowWorldLightProbeSetting
{
	struct FLinearColor                                LightColor;                                               // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LightCheckDistance;                                       // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SourceRadius;                                             // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OverlapCheckRadius;                                       // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OpenCheckExtent;                                          // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OpenCheckStep;                                            // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OpenCheckUpperLimitPercent;                               // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OpenCheckThresholdPercent;                                // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinDistanceToHitSurface;                                  // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxDistanceToHitSurface;                                  // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              IntensityMultiplyMin;                                     // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              IntensityMultiplyMax;                                     // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AttenuationRadiusMin;                                     // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AttenuationRadiusMax;                                     // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxDrawDistance;                                          // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxDistanceFadeRange;                                     // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldLightProbeVolumeSetting
// 0x0020
struct FCrowWorldLightProbeVolumeSetting
{
	int                                                VolumeOpenCheckStep;                                      // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OpenGroupDistance;                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OpenGroupRadius;                                          // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OpenAreaPercentMax;                                       // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DistanceToSurface;                                        // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxLightProbePerVolume;                                   // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinOpenCount;                                             // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxOpenCount;                                             // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldLightGroup
// 0x0028
struct FCrowWorldLightGroup
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Radius;                                                   // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OpenRatio;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FVector>                             LocationArray;                                            // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldLODState
// 0x0038
struct FCrowWorldLODState
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class ACrowWorldActor*                             WorldActor;                                               // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCrowWorldAnimator*                          WorldAnimator;                                            // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldLODData
// 0x0020
struct FCrowWorldLODData
{
	TArray<struct FBitFlagArray>                       LayoutItemShowFlags;                                      // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
	TArray<struct FBitFlagArray>                       MeshLODShowFlags;                                         // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldSoundSetting
// 0x0004
struct FCrowWorldSoundSetting
{
	float                                              OcclusionRefreshInterval;                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldActorLODSetting
// 0x0020
struct FCrowWorldActorLODSetting
{
	TArray<float>                                      LODLevelCameraDistance;                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                MinNumberOfCores;                                         // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxNumberOfCores;                                         // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinCountPerThread;                                        // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct CrowWorld.CrowWorldTriggerCollisionSetting
// 0x0020
struct FCrowWorldTriggerCollisionSetting
{
	struct FName                                       CollisionName_Body;                                       // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       CollisionName_Activator;                                  // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       CollisionName_Checker;                                    // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       CollisionName_Trace;                                      // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldDataHandlerActorItem
// 0x0010
struct FCrowWorldDataHandlerActorItem
{
	class UClass* /* AActor*/                          ActorClass;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /* UCrowWorldDataActorCheckerBase*/  Checker;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldDataHandlerComponentItem
// 0x0010
struct FCrowWorldDataHandlerComponentItem
{
	class UClass* /* USceneComponent*/                 ComponentClass;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /* UCrowWorldAsset*/                 WorldAssetClass;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldCameraAttachedFX
// 0x0010
struct FCrowWorldCameraAttachedFX
{
	class UFXSystemAsset*                              FxAsset;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ERendererStencilMask                               CustomDepthStencilMask;                                   // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldMapLightSetting
// 0x0018
struct FCrowWorldMapLightSetting
{
	class UPointLightComponent*                        PointLightFP;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     LightFPOffset;                                            // 0x0008(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct CrowWorld.CrowWorldMaterialParameterScalar
// 0x000C
struct FCrowWorldMaterialParameterScalar
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DefaultValue;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldMaterialParameterVector
// 0x0018
struct FCrowWorldMaterialParameterVector
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                DefaultValue;                                             // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldMaterialParameterOverride
// 0x0028
struct FCrowWorldMaterialParameterOverride
{
	class UMaterialParameterCollection*                TargetCollection;                                         // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowWorldMaterialParameterScalar>   ScalarValues;                                             // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowWorldMaterialParameterVector>   VectorValues;                                             // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldGridActors
// 0x0018
struct FCrowWorldGridActors
{
	unsigned char                                      bNearGrid : 1;                                            // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                SMCList;                                                  // 0x0008(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldLevelStreamData
// 0x0060
struct FCrowWorldLevelStreamData
{
	TArray<class AActor*>                              LevelActors;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
	TMap<uint32_t, struct FCrowWorldGridActors>        GridActors;                                               // 0x0010(0x0050) (CPF_Transient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldGrid
// 0x0018
struct FCrowWorldGrid
{
	int8_t                                             GridLevel;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              GridSize;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              GridSizeHalf;                                             // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HeightLimit;                                              // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   WorldOrigin2D;                                            // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct CrowWorld.CrowWorldClientObjects
// 0x0020
struct FCrowWorldClientObjects
{
	class UCrowWorldLODUpdater*                        LODUpdater;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCrowWorldOcclusion*                         WorldOcclusion;                                           // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCrowWorldFoliage*                           WorldFoliage;                                             // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCrowWorldTerrainSetup*                      WorldTerrainSetup;                                        // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldPlayerControllerInfo
// 0x0070
struct FCrowWorldPlayerControllerInfo
{
	float                                              NextUpdateSynTime;                                        // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsValidController;                                        // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bServerInitAck;                                           // 0x0005(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	uint32_t                                           SectorIndex;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           ClusterIndex;                                             // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FBox                                        SectorBox;                                                // 0x0010(0x001C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FBox                                        ClusterBox;                                               // 0x002C(0x001C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     LastUpdateSynLocation;                                    // 0x0048(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class ACrowWorldReplicationController*             ReplicationController;                                    // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                         // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCrowWorldSyncClientWorker*                  ClientWorker;                                             // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldReplicationCluster
// 0x0020
struct FCrowWorldReplicationCluster
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	uint32_t                                           ClusterIndex;                                             // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FBitFlagArray                               ActorDestroyedFlags;                                      // 0x0008(0x0018) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldReplicationSector
// 0x0048
struct FCrowWorldReplicationSector
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	uint32_t                                           SectorIndex;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FBitFlagArray                               ActorDestroyedFlags;                                      // 0x0008(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FBitFlagArray                               LayoutItemDestroyedFlags;                                 // 0x0020(0x0018) (CPF_NativeAccessSpecifierPublic)
	TArray<int8_t>                                     LayoutItemDynamicStates;                                  // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldReplicationSyncData
// 0x0040
struct FCrowWorldReplicationSyncData
{
	TArray<uint32_t>                                   SectorDropArray;                                          // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   ClusterDropArray;                                         // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowWorldReplicationCluster>        ClusterArray;                                             // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowWorldReplicationSector>         SectorArray;                                              // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldReplicationLandmark
// 0x0018
struct FCrowWorldReplicationLandmark
{
	struct FBitFlagArray                               ActorDestroyedFlags;                                      // 0x0000(0x0018) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldReplicationGlobalData
// 0x0018
struct FCrowWorldReplicationGlobalData
{
	struct FCrowWorldReplicationLandmark               LandmarkData;                                             // 0x0000(0x0018) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldDestructionSyncDataActor
// 0x0010
struct FCrowWorldDestructionSyncDataActor
{
	TArray<int16_t>                                    DestroyedLayoutItems;                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldDestructionSyncData
// 0x0070
struct FCrowWorldDestructionSyncData
{
	struct FVector                                     Origin;                                                   // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxRadius;                                                // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<uint32_t, struct FCrowWorldDestructionSyncDataActor> ActorDataCollection;                                      // 0x0010(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   FullyDestroyedActors;                                     // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldClientCluster
// 0x0070
struct FCrowWorldClientCluster
{
	struct FCrowWorldReplicationCluster                ClusterData;                                              // 0x0000(0x0020) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	TMap<uint32_t, class ACrowWorldActor*>             WorldActors;                                              // 0x0020(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldClientSector
// 0x00F0
struct FCrowWorldClientSector
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FCrowWorldReplicationSector                 SectorData;                                               // 0x0008(0x0048) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	TMap<uint32_t, class ACrowWorldActor*>             WorldActors;                                              // 0x0050(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	TMap<uint32_t, class ACrowWorldActor*>             ClusterActors;                                            // 0x00A0(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldClientDropClusterIndex
// 0x0008
struct FCrowWorldClientDropClusterIndex
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	uint32_t                                           ClusterIndex;                                             // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldClientDropSectorIndex
// 0x0008
struct FCrowWorldClientDropSectorIndex
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	uint32_t                                           SectorIndex;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldClientClusterActorKey
// 0x0008
struct FCrowWorldClientClusterActorKey
{
	uint32_t                                           SectorIndex;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ActorLoopIndex;                                           // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldDestructionLinkInfo
// 0x0008
struct FCrowWorldDestructionLinkInfo
{
	int                                                IndexOrigin;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Count;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldDestructionLink
// 0x00B8
struct FCrowWorldDestructionLink
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TMap<uint32_t, uint32_t>                           LinkedParentActors;                                       // 0x0008(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<uint32_t, struct FCrowWorldDestructionLinkInfo> DestructionLinkInfos;                                     // 0x0058(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<uint32_t>                                   WorldActorIndexArray;                                     // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct CrowWorld.CrowWorldSyncServerPlayerState
// 0x0020
struct FCrowWorldSyncServerPlayerState
{
	TArray<uint32_t>                                   ActiveSectors;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   ActiveClusters;                                           // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldSyncServerControllerContainer
// 0x0050
struct FCrowWorldSyncServerControllerContainer
{
	TMap<class ACrowWorldReplicationController*, int>  Controllers;                                              // 0x0000(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldDestructionActorItem
// 0x0020
struct FCrowWorldDestructionActorItem
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct CrowWorld.CrowWorldDestructionSyncCache
// 0x0068
struct FCrowWorldDestructionSyncCache
{
	unsigned char                                      bCacheInitialized : 1;                                    // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0004(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamageRadius;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShockwaveRadius;                                          // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<uint32_t, struct FCrowWorldDestructionActorItem> SyncCacheActors;                                          // 0x0018(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowFoliageReplicationInfo
// 0x0068
struct FCrowFoliageReplicationInfo
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct CrowWorld.CrowWorldAutoDetectParentPair
// 0x0008
struct FCrowWorldAutoDetectParentPair
{
	uint32_t                                           ChildActorIndex;                                          // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           ParentActorIndex;                                         // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldLayoutActorCache
// 0x0050
struct FCrowWorldLayoutActorCache
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USceneComponent*                             RootComponent;                                            // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FTransform                                  ActorTransform;                                           // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class USceneComponent*>                     Components;                                               // 0x0040(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct CrowWorld.CrowWorldDestruction
// 0x0001
struct FCrowWorldDestruction
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct CrowWorld.CrowWorldDestructionSyncCacheItem
// 0x0010
struct FCrowWorldDestructionSyncCacheItem
{
	class ACrowWorldActor*                             WorldActor;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            LayoutItemIndex;                                          // 0x0008(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct CrowWorld.CrowWorldLightProbeAssetData
// 0x0050
struct FCrowWorldLightProbeAssetData
{
	class UCrowWorldAssetLightProbe*                   LightProbeAsset;                                          // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  LightProbeTransform;                                      // 0x0010(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Intensity;                                                // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AttenuationRadius;                                        // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SourceRadius;                                             // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct CrowWorld.CrowWorldLightProbeCollector
// 0x0038
struct FCrowWorldLightProbeCollector
{
	TArray<struct FCrowWorldLightProbeAssetData>       LightProbeAssetDatas;                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FTransform>                          LightPathArray;                                           // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UWorld*                                      World;                                                    // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldMapConfig*                         MapConfig;                                                // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UDirectionalLightComponent*                  DirectionalLight;                                         // 0x0030(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct CrowWorld.CrowWorldLightProbeGridValue
// 0x0018
struct FCrowWorldLightProbeGridValue
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Flag;                                                     // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OpenRatio;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Increment;                                                // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldLightProbeGrid
// 0x00B8
struct FCrowWorldLightProbeGrid
{
	TArray<struct FCrowWorldLightProbeGridValue>       LightProbeGridData;                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldLightProbeSetting                 LightProbeSetting;                                        // 0x0010(0x004C) (CPF_Edit, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldLightProbeVolumeSetting           LightProbeVolumeSetting;                                  // 0x005C(0x0020) (CPF_Edit, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0080(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     LightForward;                                             // 0x0088(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     WorldPosition;                                            // 0x0094(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Radius;                                                   // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Height;                                                   // 0x00A4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CheckStep;                                                // 0x00A8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                GridCountRadius;                                          // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               ShowDebug;                                                // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct CrowWorld.CrowWorldLightProbeGridKey
// 0x0008
struct FCrowWorldLightProbeGridKey
{
	int                                                X;                                                        // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Y;                                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldMeshLOD
// 0x0002
struct FCrowWorldMeshLOD
{
	int8_t                                             LODLevelMin;                                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int8_t                                             LODLevelMax;                                              // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldSyncIndexes
// 0x0040
struct FCrowWorldSyncIndexes
{
	TArray<uint32_t>                                   EnterSectorIndex;                                         // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   LeaveSectorIndex;                                         // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   EnterClusterIndex;                                        // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   LeaveClusterIndex;                                        // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowWorld.CrowWorldAsyncSectorData
// 0x0050
struct FCrowWorldAsyncSectorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FCrowWorldReplicationSector                 ReceivedData;                                             // 0x0008(0x0048) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
