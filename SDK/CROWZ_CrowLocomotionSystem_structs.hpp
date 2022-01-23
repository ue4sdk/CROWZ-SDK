#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Basic.hpp"
#include "CROWZ_CrowLocomotionSystem_enums.hpp"
#include "CROWZ_CoreUObject_classes.hpp"
#include "CROWZ_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CrowLocomotionSystem.CLSCameraParameters
// 0x0002
struct FCLSCameraParameters
{
	ECLSViewMode                                       DesiredViewMode;                                          // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRightShoulder;                                           // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSMovementSettings
// 0x0020
struct FCLSMovementSettings
{
	float                                              WalkSpeed;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RunSpeed;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SprintSpeed;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UCurveVector*                                MovementCurve;                                            // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 RotationRateCurve;                                        // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSMovementSettingsStance
// 0x0060
struct FCLSMovementSettingsStance
{
	struct FCLSMovementSettings                        Standing;                                                 // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSMovementSettings                        Crouching;                                                // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSMovementSettings                        Prone;                                                    // 0x0040(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSMovementSettingsSwim
// 0x0048
struct FCLSMovementSettingsSwim
{
	struct FCLSMovementSettings                        Settings;                                                 // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              DiveAcceleration;                                         // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BuoyancySurface;                                          // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BuoyancyUnderwater;                                       // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DiveImpactDelayTime;                                      // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DiveImpactBuoyancy;                                       // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DiveImpactDelayDecel;                                     // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DiveImpactSpeedXY;                                        // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DiveImpactSpeedZ;                                         // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CrouchLimitDepth;                                         // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ProneLimitDepth;                                          // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSMovementSettingsLadder
// 0x000C
struct FCLSMovementSettingsLadder
{
	float                                              LadderUpSpeed;                                            // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LadderDownSpeed;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LadderJumpOutImpulse;                                     // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSMovementSettingsData
// 0x0118 (0x0120 - 0x0008)
struct FCLSMovementSettingsData : public FTableRowBase
{
	struct FCLSMovementSettingsStance                  OnGround;                                                 // 0x0008(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSMovementSettingsStance                  OnInjured;                                                // 0x0068(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSMovementSettingsSwim                    OnSwimming;                                               // 0x00C8(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSMovementSettingsLadder                  OnLadder;                                                 // 0x0110(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
};

// ScriptStruct CrowLocomotionSystem.CLSVaultParams
// 0x0028
struct FCLSVaultParams
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveVector*                                PositionCorrectionCurve;                                  // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StartingPosition;                                         // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                 // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     StartingOffset;                                           // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BlendOutTime;                                             // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSComponentTransform
// 0x0120
struct FCLSComponentTransform
{
	struct FMatrix                                     TransformMatrix;                                          // 0x0000(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                // 0x0040(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         Component;                                                // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                // 0x0078(0x008C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FString                                     ComponentName;                                            // 0x0108(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
};

// ScriptStruct CrowLocomotionSystem.CLSVaultTraceSettings
// 0x001C
struct FCLSVaultTraceSettings
{
	float                                              MaxLedgeHeight;                                           // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinLedgeHeight;                                           // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ReachDistance;                                            // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RunReachDistance;                                         // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ForwardTraceRadius;                                       // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DownwardTraceRadius;                                      // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxWindowHeightSize;                                      // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterBattleStanceTime
// 0x0010
struct FCLSCharacterBattleStanceTime
{
	float                                              ToReady;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ToRelaxed;                                                // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ToKeepDirectedOnWalk;                                     // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ToReadyOnWalkStop;                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSVaultAsset
// 0x0040
struct FCLSVaultAsset
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveVector*                                PositionCorrectionCurve;                                  // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     StartingOffset;                                           // 0x0010(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LowHeight;                                                // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LowPlayRate;                                              // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LowStartPosition;                                         // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HighHeight;                                               // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HighPlayRate;                                             // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HighStartPosition;                                        // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BlendOutTime;                                             // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              JumpOverCurveOffset;                                      // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct CrowLocomotionSystem.CLSAnimation
// 0x0020
struct FCLSAnimation
{
	class UAnimMontage*                                TP;                                                       // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                FP;                                                       // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                TP_Prone;                                                 // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                FP_Prone;                                                 // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAdditional
// 0x0002
struct FCLSCharacterAdditional
{
	ECLSAdditionalState                                MainState;                                                // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      SubState;                                                 // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSVelocityBlend
// 0x0010
struct FCLSVelocityBlend
{
	float                                              F;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              B;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              L;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              R;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSLeanAmount
// 0x0008
struct FCLSLeanAmount
{
	float                                              LR;                                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FB;                                                       // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAimBobInfo
// 0x0030
struct FCLSCharacterAimBobInfo
{
	float                                              AlphaBasis;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AlphaStand;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AlphaCrouch;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AlphaProne;                                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CycleSpeed;                                               // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UCurveFloat*                                 HoldBreathDownSpeedCurve;                                 // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 HoldBreathUpSpeedCurve;                                   // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   PlayRateMinMax;                                           // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSTurnInPlaceAsset
// 0x0020
struct FCLSTurnInPlaceAsset
{
	class UAnimSequenceBase*                           Animation;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AnimatedAngle;                                            // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SlotName;                                                 // 0x000C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                 // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bScaleTurnAngle;                                          // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct CrowLocomotionSystem.CLSGroundPose
// 0x0058
struct FCLSGroundPose
{
	class UAnimSequenceBase*                           BasePose;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<ECLSBasePoseType, int>                        PoseFrameMap;                                             // 0x0008(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSVehiclePose
// 0x0028
struct FCLSVehiclePose
{
	class UBlendSpaceBase*                             DriverAO;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           BasePose;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RelaxedFrameIndex;                                        // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BattleFrameIndex;                                         // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             AimOffsetRelaxed;                                         // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             AimOffsetBattle;                                          // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSGripPose
// 0x0010
struct FCLSGripPose
{
	class UAnimSequence*                               TP;                                                       // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequence*                               FP;                                                       // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSLadderAnimSet
// 0x00F0
struct FCLSLadderAnimSet
{
	struct FCLSAnimation                               LadderBottomEnter;                                        // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               LadderBottomExit;                                         // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               LadderTopEnter;                                           // 0x0040(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               LadderTopExit;                                            // 0x0060(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               LadderIdle;                                               // 0x0080(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               LadderUp;                                                 // 0x00A0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               LadderDown;                                               // 0x00C0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UAnimSequence*                               NoRootMotionLadderUp;                                     // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequence*                               NoRootMotionLadderDown;                                   // 0x00E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSPoseExplicit
// 0x0010
struct FCLSPoseExplicit
{
	class UAnimSequenceBase*                           Anim;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ExplicitTime;                                             // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct CrowLocomotionSystem.CLSSpeedAtteunationOnSlope
// 0x0010
struct FCLSSpeedAtteunationOnSlope
{
	float                                              SpeedAttenuationSlopeStartAngle;                          // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpeedAttenuationSlopeEndAngle;                            // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpeedAtteunationTotalValue;                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SprintInhibitionSlopeAngle;                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterHandIK
// 0x0070
struct FCLSCharacterHandIK
{
	struct FTransform                                  LeftHand;                                                 // 0x0000(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  RightHand;                                                // 0x0030(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bLeftValidIKTransform;                                    // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRightValidIKTransform;                                   // 0x0061(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0062(0x000E) MISSED OFFSET
};

// ScriptStruct CrowLocomotionSystem.CLSVehiclePoseInfo
// 0x0018
struct FCLSVehiclePoseInfo
{
	int                                                RelaxedFrameIndex;                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BattleFrameIndex;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             AimOffsetRelaxed;                                         // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             AimOffsetBattle;                                          // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSVehiclePoseSet
// 0x0060 (0x0068 - 0x0008)
struct FCLSVehiclePoseSet : public FTableRowBase
{
	class UAnimSequenceBase*                           BasePose;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             DriverAO;                                                 // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<int, struct FCLSVehiclePoseInfo>              InfoMap;                                                  // 0x0018(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSGroundPoseSet
// 0x0058 (0x0060 - 0x0008)
struct FCLSGroundPoseSet : public FTableRowBase
{
	ECLSOverlayState                                   OverlayState;                                             // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TMap<struct FName, struct FCLSGroundPose>          PoseMap;                                                  // 0x0010(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.AnimNode_CLSDistanceMatch
// 0x0010 (0x0090 - 0x0080)
struct FAnimNode_CLSDistanceMatch : public FAnimNode_SequencePlayer
{
	struct FName                                       CurveName;                                                // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Distance;                                                 // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bBadDataLog;                                              // 0x008C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAnimInstanceProxy
// 0x0010 (0x0770 - 0x0760)
struct FCLSCharacterAnimInstanceProxy : public FAnimInstanceProxy
{
	class UCLSCharacterAnimInstance*                   AnimInstance;                                             // 0x0760(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0768(0x0008) MISSED OFFSET
};

// ScriptStruct CrowLocomotionSystem.CLSGripPoseSet
// 0x0050 (0x0058 - 0x0008)
struct FCLSGripPoseSet : public FTableRowBase
{
	TMap<struct FName, struct FCLSGripPose>            GripPose;                                                 // 0x0008(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSCommonAnimList
// 0x0010
struct FCLSCommonAnimList
{
	TArray<struct FCLSAnimation>                       AnimArray;                                                // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSCommonAnimSet
// 0x0050 (0x0058 - 0x0008)
struct FCLSCommonAnimSet : public FTableRowBase
{
	TMap<struct FName, struct FCLSCommonAnimList>      AnimMap;                                                  // 0x0008(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSMagazineAnimation
// 0x00A0
struct FCLSMagazineAnimation
{
	struct FCLSAnimation                               Reload;                                                   // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               ReloadShort;                                              // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               ReloadStart;                                              // 0x0040(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               ReloadLoop;                                               // 0x0060(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               ReloadEnd;                                                // 0x0080(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSWeaponAnimation
// 0x0230
struct FCLSWeaponAnimation
{
	struct FCLSAnimation                               Select;                                                   // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               Deselect;                                                 // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               SelectLeftSide;                                           // 0x0040(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               DeselectLeftSide;                                         // 0x0060(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               PreFire;                                                  // 0x0080(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCLSAnimation>                       FireArray;                                                // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               PostFire;                                                 // 0x00B0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSAnimation                               ChangeFireMode;                                           // 0x00D0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSMagazineAnimation                       MagazineAnim;                                             // 0x00F0(0x00A0) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCLSMagazineAnimation                       ProneMagazineAnim;                                        // 0x0190(0x00A0) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAdditionalLadder
// 0x000C
struct FCLSCharacterAdditionalLadder
{
	float                                              LadderStepPosition;                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LadderStepHeight;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSLadderState                                    LadderState;                                              // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAdditionalInjured
// 0x0002
struct FCLSCharacterAdditionalInjured
{
	bool                                               bIsAliving;                                               // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSStance                                         AlivingStance;                                            // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAdditionalSkydiving
// 0x000C
struct FCLSCharacterAdditionalSkydiving
{
	struct FVector2D                                   InputAmount;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RollAmount;                                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAdditionalSwim
// 0x000C
struct FCLSCharacterAdditionalSwim
{
	bool                                               bFloorHit;                                                // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ImmersionDepth;                                           // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TargetAdjust;                                             // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAdditionalVehicle
// 0x0018
struct FCLSCharacterAdditionalVehicle
{
	ECLSVehicleType                                    VehicleType;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSVehicleSeatType                                VehicleSeatType;                                          // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              MovingDirectionForwardAngleRatio;                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MovingDirectionRightAngleRatio;                           // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   Strain;                                                   // 0x000C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInvalidData;                                             // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterEssential
// 0x0060
struct FCLSCharacterEssential
{
	struct FVector                                     Velocity;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Acceleration;                                             // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     MovementInput;                                            // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsMoving;                                                // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHasMovementInput;                                        // 0x0025(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              Speed;                                                    // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MovementInputAmount;                                      // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    AimingRotation;                                           // 0x0030(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              AimYawRate;                                               // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RotateOffset;                                             // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StandToCrouchAnimRate;                                    // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StandToProneAnimRate;                                     // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CrouchToStandAnimRate;                                    // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CrouchToProneAnimRate;                                    // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ProneToStandAnimRate;                                     // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ProneToCrouchAnimRate;                                    // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseArmLOverwrite;                                        // 0x005C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterStates
// 0x000D
struct FCLSCharacterStates
{
	ECLSMovementMode                                   CurrentMovementMode;                                      // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSMovementMode                                   PrevMovementMode;                                         // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSMovementAction                                 MovementAction;                                           // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSWeaponAction                                   WeaponAction;                                             // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSCommonAction                                   CommonAction;                                             // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSRotationMode                                   RotationMode;                                             // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSGait                                           ActualGait;                                               // 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSStance                                         ActualStance;                                             // 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSBattleStance                                   BattleStance;                                             // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSViewMode                                       ViewMode;                                                 // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSOverlayState                                   OverlayState;                                             // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSPeekState                                      PeekState;                                                // 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSLadderState                                    LadderState;                                              // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSTPTraceParams
// 0x0014
struct FCLSTPTraceParams
{
	struct FVector                                     TraceOrigin;                                              // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TraceRadius;                                              // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct CrowLocomotionSystem.CLSViewModeParameters
// 0x0018
struct FCLSViewModeParameters
{
	ECLSViewMode                                       DesiredViewMode;                                          // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSViewMode                                       ActualViewMode;                                           // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              FirstPersonInTime;                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FirstPersonOutTime;                                       // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FirstPersonChangeRate;                                    // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ThirdPersonChangeRate;                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsImmediately;                                           // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct CrowLocomotionSystem.CLSRotateInPlaceAsset
// 0x0020
struct FCLSRotateInPlaceAsset
{
	class UAnimSequenceBase*                           Animation;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SlotName;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SlowTurnRate;                                             // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FastTurnRate;                                             // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SlowPlayRate;                                             // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FastPlayRate;                                             // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowLocomotionSystem.CLSDynamicMontageParams
// 0x0018
struct FCLSDynamicMontageParams
{
	class UAnimSequenceBase*                           Animation;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BlendInTime;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BlendOutTime;                                             // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StartTime;                                                // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
