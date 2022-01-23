#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Basic.hpp"
#include "CROWZ_CrowVehicles_enums.hpp"
#include "CROWZ_CoreUObject_classes.hpp"
#include "CROWZ_Engine_classes.hpp"
#include "CROWZ_PhysicsCore_classes.hpp"
#include "CROWZ_DeveloperSettings_classes.hpp"
#include "CROWZ_AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CrowVehicles.CrowVehicleInputValue
// 0x0008
struct FCrowVehicleInputValue
{
	float                                              CurrentValue;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TargetValue;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowBoatsFloatingVolumeSetup
// 0x0038
struct FCrowBoatsFloatingVolumeSetup
{
	struct FName                                       BodySocketName;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Mass;                                                     // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Radius;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinWaterDepth;                                            // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BuoyancyDensity;                                          // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BuoyancyMultiplyMaxSpeed;                                 // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     IdleOffset;                                               // 0x001C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     FullSpeedOffset;                                          // 0x0028(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxOffsetSpeed;                                           // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowVehicleInputSetting
// 0x0008
struct FCrowVehicleInputSetting
{
	float                                              InputRaise;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InputFall;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsWheelSetting
// 0x0010
struct FCrowLandWheelsWheelSetting
{
	float                                              WheelRadius;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WheelWidth;                                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WheelMassInKg;                                            // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WheelRotationDampingRatio;                                // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsBrakeSetting
// 0x000C
struct FCrowLandWheelsBrakeSetting
{
	float                                              MaxTorque;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxTorqueNoSlip;                                          // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Speed;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsFrictionSetting
// 0x0018
struct FCrowLandWheelsFrictionSetting
{
	float                                              FrictionLongSlip;                                         // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FrictionLatSlip;                                          // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FrictionMagnitudeMax;                                     // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SlipRatioLongMax;                                         // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SlipForceLongMax;                                         // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SlipRatioThresholdSpeed;                                  // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsSteeringSetting
// 0x0098
struct FCrowLandWheelsSteeringSetting
{
	float                                              MaxAngle;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RaiseSpeed;                                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FallSpeed;                                                // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          SteeringCurve;                                            // 0x0010(0x0088) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsSuspensionSetting
// 0x0020
struct FCrowLandWheelsSuspensionSetting
{
	TEnumAsByte<ECollisionChannel>                     SuspensionTraceChannel;                                   // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              SuspensionLength;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SuspensionOffset;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SuspensionTopBump;                                        // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SuspensionBottomBump;                                     // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpringPower;                                              // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DampingRatio;                                             // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MultiplyOnSkeletalMesh;                                   // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsDamageSetting
// 0x0014
struct FCrowLandWheelsDamageSetting
{
	float                                              DrivingForceMultiply;                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WheelDampingRatioAdd;                                     // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TireBumpForSuspension;                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TireBumpFrequency;                                        // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EngineTorqueLimit;                                        // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowTireAndWheelSetting
// 0x0110
struct FCrowTireAndWheelSetting
{
	bool                                               Debug;                                                    // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsDrivingWheel;                                           // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ApplyBrake;                                               // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FCrowLandWheelsWheelSetting                 Wheel;                                                    // 0x0004(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowLandWheelsBrakeSetting                 Brake;                                                    // 0x0014(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowLandWheelsFrictionSetting              Friction;                                                 // 0x0020(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowLandWheelsSteeringSetting              Steering;                                                 // 0x0038(0x0098) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FCrowLandWheelsSuspensionSetting            Suspension;                                               // 0x00D0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowLandWheelsDamageSetting                Damage;                                                   // 0x00F0(0x0014) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              StationaryTime;                                           // 0x0104(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StationaryDistanceSquare;                                 // 0x0108(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StationaryRotationSpeedDegree;                            // 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsGearSetting
// 0x0010
struct FCrowLandWheelsGearSetting
{
	int16_t                                            GearIndex;                                                // 0x0000(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              GearUpRatioRPM;                                           // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              GearDownRatioRPM;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              GearRatioTorque;                                          // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsEngineSetting
// 0x00D0
struct FCrowLandWheelsEngineSetting
{
	bool                                               Debug;                                                    // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FCrowVehicleInputSetting                    AccelerationInput;                                        // 0x0004(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowVehicleInputSetting                    BrakeInput;                                               // 0x000C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              MaxRPM;                                                   // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxRPMReverse;                                            // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxTorque;                                                // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              IdleBrake;                                                // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          TorqueCurveNormalized;                                    // 0x0028(0x0088) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowLandWheelsGearSetting>          GearBox;                                                  // 0x00B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	float                                              GearFinalRatio;                                           // 0x00C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              GearSwitchDelay;                                          // 0x00C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              GearKeepDelay;                                            // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              GearResetRPM;                                             // 0x00CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsTireAndWheel
// 0x0050
struct FCrowLandWheelsTireAndWheel
{
	bool                                               IsFlipWheelRotation;                                      // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ShowDebug;                                                // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseOverrideWheelLocation;                                 // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FName                                       BodySocketName;                                           // 0x0004(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SkeletalBoneName;                                         // 0x000C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     OverrideWheelLocation;                                    // 0x0014(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                   // 0x0020(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SweepOffset;                                              // 0x002C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /* UCrowLandWheelsConfigTireAndWheel*/ WheelConfigClass;                                         // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /* UCrowLandWheelsConfigTireAndWheel*/ WheelConfigClassFlat;                                     // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /* UCrowLandWheelsConfigTireAndWheel*/ WheelConfigClassDestroyed;                                // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsAntiRoll
// 0x000C
struct FCrowLandWheelsAntiRoll
{
	int16_t                                            WheelIndexLeft;                                           // 0x0000(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            WheelIndexRight;                                          // 0x0002(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AntiRollStrength;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpringDiffThreshold;                                      // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsGripForce
// 0x0090
struct FCrowLandWheelsGripForce
{
	float                                              SuspensionMax;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          GripForceBySpeed;                                         // 0x0008(0x0088) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsBodySetting
// 0x0120
struct FCrowLandWheelsBodySetting
{
	bool                                               UpdateBoneTransform;                                      // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               LocalSpaceKinematics;                                     // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               LocalSpaceSimulation;                                     // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               SimulationGenerateHitEvents;                              // 0x0003(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               BeginWithReadyForDriving;                                 // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              SpeedMaxKmPH;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpeedReverseMaxKmPH;                                      // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccelerationRollForce;                                    // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccelerationPitchForce;                                   // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccelerationCameraYaw;                                    // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccelerationCameraSpeed;                                  // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WheelRollingResistance;                                   // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InAirAngularResistance;                                   // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InAirAngularRecoverRoll;                                  // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InAirAngularRecoverPitch;                                 // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ChasisMass;                                               // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ChasisMassInWater;                                        // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     ChasisSize;                                               // 0x0038(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DirectionalDragRatio;                                     // 0x0044(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FallRestitution;                                          // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpeedDragThreshold;                                       // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SlopeSlipPower;                                           // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UClass* /* UDamageType*/                     DamageTypeClass;                                          // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WheelSqueezeDamagePerSecond;                              // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FCrowLandWheelsTireAndWheel>         WheelSetup;                                               // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowLandWheelsAntiRoll>             AntiRollSetup;                                            // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FCrowLandWheelsGripForce                    GripSetup;                                                // 0x0090(0x0090) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsTankSetting
// 0x00C0
struct FCrowLandWheelsTankSetting
{
	float                                              ThrottleSpeed;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SteeringSpeed;                                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FrictionYaw;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SteeringYawMultply;                                       // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StandingRotationThrottle;                                 // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          SteeringTorqueRatio;                                      // 0x0018(0x0088) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	class UStaticMesh*                                 TrackMeshAsset;                                           // 0x00A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TrackThickness;                                           // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TrackSingleLength;                                        // 0x00AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TrackLeftLocalY;                                          // 0x00B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TrackRightLocalY;                                         // 0x00B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ShowTrackDebug;                                           // 0x00B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct CrowVehicles.CrowVehicleMovementWaterInfo
// 0x0060
struct FCrowVehicleMovementWaterInfo
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct CrowVehicles.CrowLandWheelsSingleWheelState
// 0x0040
struct FCrowLandWheelsSingleWheelState
{
	struct FVector                                     WorldPosition;                                            // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     OverlapPosition;                                          // 0x000C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RotationSpeed;                                            // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SlipForward;                                              // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SlipRight;                                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Slip;                                                     // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpringLengthRatio;                                        // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      InAir : 1;                                                // 0x002C(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bSpringSqueezed : 1;                                      // 0x002C(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bSpringStretched : 1;                                     // 0x002C(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x13];                                      // 0x002D(0x0013) MISSED OFFSET
};

// ScriptStruct CrowVehicles.CrowLandWheelsSqueezeDamage
// 0x0090
struct FCrowLandWheelsSqueezeDamage
{
	struct FHitResult                                  HitResult;                                                // 0x0000(0x008C) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	float                                              Damage;                                                   // 0x008C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowRotorBodySetting
// 0x00A0
struct FCrowRotorBodySetting
{
	float                                              WeightInKg;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              uuPerMeterFactor;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LinearDamping;                                            // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AngularDamping;                                           // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxHoverForce;                                            // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinHoverForce;                                            // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxPitchDegree;                                           // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxRollDegree;                                            // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxPitchTorque;                                           // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxYawTorque;                                             // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxRollTorque;                                            // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RecoverAxisSpringConstantPitch;                           // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RecoverAxisSpringConstantYaw;                             // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RecoverAxisSpringConstantRoll;                            // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpeedMultiplyForwardByRotation;                           // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpeedMultiplySideByRotation;                              // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MoveForwardPitchRatio;                                    // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MoveRightRollRatio;                                       // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              YawToRollRatio;                                           // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MoveForwardForce;                                         // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MoveRightForce;                                           // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MoveSpeedMax;                                             // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxPitchCameraAngle;                                      // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxYawCameraAngle;                                        // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CameraRotationLookUpScale;                                // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CameraRotationTurnScale;                                  // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EasyLandingHeight;                                        // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EasyLandingSpeed;                                         // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DirectionalDragArea;                                      // 0x0070(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DirectionalDragCoefficient;                               // 0x007C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DirectionalIdleDamping;                                   // 0x0088(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinInputValue;                                            // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ForceInterpolation;                                       // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               DrawDebugPhysicsLine;                                     // 0x009C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
};

// ScriptStruct CrowVehicles.CrowMovementRotorValues
// 0x0018
struct FCrowMovementRotorValues
{
	float                                              Pitch;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Yaw;                                                      // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Roll;                                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Collective;                                               // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MoveForward;                                              // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MoveRight;                                                // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowRotorInputNetValue
// 0x0008
struct FCrowRotorInputNetValue
{
	uint32_t                                           PackedValue1;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           PackedValue2;                                             // 0x0004(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct CrowVehicles.CrowVehicleUpdaterSetting
// 0x0010
struct FCrowVehicleUpdaterSetting
{
	TArray<struct FString>                             TestMapNamesClientCalculation;                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowVehicleUpdaterItem
// 0x0030
struct FCrowVehicleUpdaterItem
{
	unsigned char                                      IsValidElement : 1;                                       // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsValidComponent : 1;                                     // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsLegacyUpdate : 1;                                       // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsVehicleSKC : 1;                                         // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsFarFromCamera : 1;                                      // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsSafeToUpdateClient : 1;                                 // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int8_t                                             CounterSafeToUpdateClient;                                // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UCrowVehicleMovementBase*                    VehicleMovement;                                          // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCrowVehicleFloodingComponent*               VehicleFloodingComponent;                                 // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      BodySKC;                                                  // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCrowVehicleSKC*                             VehicleSKC;                                               // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      OwnerActor;                                               // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowVehiclesCameraInfo
// 0x0034
struct FCrowVehiclesCameraInfo
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct CrowVehicles.CrowVehicleForceItem
// 0x0018
struct FCrowVehicleForceItem
{
	class USkeletalMeshComponent*                      TargetSKC;                                                // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     ForceTotal;                                               // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct CrowVehicles.CrowVehicleDamageItem
// 0x00B8
struct FCrowVehicleDamageItem
{
	class AActor*                                      TargetActor;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /* UDamageType*/                     DamageType;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamageTotal;                                              // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class AController*                                 InstigatorController;                                     // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      InstigatorActor;                                          // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                // 0x0028(0x008C) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct CrowVehicles.CrowVehicleForceAndDamage
// 0x00C0
struct FCrowVehicleForceAndDamage
{
	TArray<struct FCrowVehicleForceItem>               Forces;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowVehicleDamageItem>              Damages;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<int, int>                                     LookupForce;                                              // 0x0020(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<int, int>                                     LookupDamage;                                             // 0x0070(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct CrowVehicles.CrowVehicleUpdateCacheBase
// 0x00E0
struct FCrowVehicleUpdateCacheBase
{
	bool                                               IsValidCache;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseSubstepping;                                           // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                ElementIndex;                                             // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InverseDeltaTime;                                         // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WorldGravity;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WaterCrashImpulse;                                        // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UWorld*                                      TraceWorld;                                               // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      OwnerActor;                                               // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      BodySKC;                                                  // 0x0028(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FTransform                                  BodyTransform;                                            // 0x0040(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     BodyLocation;                                             // 0x0070(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     BodyForward;                                              // 0x007C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     BodyRight;                                                // 0x0088(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     BodyUp;                                                   // 0x0094(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     BodyCOM;                                                  // 0x00A0(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     BodyAcceleration;                                         // 0x00AC(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     BodyVelocity;                                             // 0x00B8(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     BodyAngularVelocity;                                      // 0x00C4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BodySpeed;                                                // 0x00D0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BodySpeedForward;                                         // 0x00D4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BodySpeedRight;                                           // 0x00D8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TotalMass;                                                // 0x00DC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsUpdateCache
// 0x0130 (0x0210 - 0x00E0)
struct FCrowLandWheelsUpdateCache : public FCrowVehicleUpdateCacheBase
{
	struct FCrowLandWheelsBodySetting                  BodySetting;                                              // 0x00E0(0x0120) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	float                                              ChasisMassPerWheel;                                       // 0x0200(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TotalMassPerWheel;                                        // 0x0204(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            ActiveWheelCount;                                         // 0x0208(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x020A(0x0006) MISSED OFFSET
};

// ScriptStruct CrowVehicles.CrowLandWheelsSimEngineOutput
// 0x000C
struct FCrowLandWheelsSimEngineOutput
{
	float                                              Brake;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Torque;                                                   // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RotationSpeedMax;                                         // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsSimEngine
// 0x0120
struct FCrowLandWheelsSimEngine
{
	class AActor*                                      OwnerActor;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowLandWheelsEngineSetting                EngineSetting;                                            // 0x0008(0x00D0) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowLandWheelsSimEngineOutput              EngineOutput;                                             // 0x00D8(0x000C) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00E4(0x000C) MISSED OFFSET
	int16_t                                            ZeroGearPosition;                                         // 0x00F0(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            GearIndexMin;                                             // 0x00F2(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            GearIndexMax;                                             // 0x00F4(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               GearBoxReady;                                             // 0x00F6(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00F7(0x0001) MISSED OFFSET
	struct FCrowVehicleInputValue                      AccelerationInput;                                        // 0x00F8(0x0008) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              TargetAccelerationInput;                                  // 0x0100(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              EngineRPM;                                                // 0x0104(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MultiplyMaxEngineRPMForward;                              // 0x0108(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MultiplyMaxEngineRPMReverse;                              // 0x010C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExternRotationSpeed;                                      // 0x0110(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            CurrentGearIndex;                                         // 0x0114(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            TargetGearIndex;                                          // 0x0116(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              GearChangeTimeRemain;                                     // 0x0118(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              GearKeepTimeRemain;                                       // 0x011C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct CrowVehicles.CrowVehicleEntityLandWheels
// 0x01D0 (0x03E0 - 0x0210)
struct FCrowVehicleEntityLandWheels : public FCrowLandWheelsUpdateCache
{
	unsigned char                                      IsValidMovement : 1;                                      // 0x0210(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsPossessed : 1;                                          // 0x0210(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsTargetActorValid : 1;                                   // 0x0210(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsTargetActorAwake : 1;                                   // 0x0210(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsReadyForDriving : 1;                                    // 0x0210(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsBlockedPhysics : 1;                                     // 0x0210(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsInAir : 1;                                              // 0x0210(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsSafeToTrace : 1;                                        // 0x0210(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsUseAntiRoll : 1;                                        // 0x0211(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsVisibleInCamera : 1;                                    // 0x0211(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IsClientSafeToUpdate : 1;                                 // 0x0211(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0212(0x000E) MISSED OFFSET
	struct FTransform                                  RootBoneRelativeTransform;                                // 0x0220(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     BoundsLocation;                                           // 0x0250(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BoundsRadius;                                             // 0x025C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FCrowLandWheelsSimEngine                    LandWheelsEngine;                                         // 0x0260(0x0120) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	float                                              EngineTorqueLimitPrev;                                    // 0x0380(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SurfaceMultiplyEngineRPMForward;                          // 0x0384(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SurfaceMultiplyEngineRPMReverse;                          // 0x0388(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x038C(0x001C) MISSED OFFSET
	struct FVector                                     ChasisDragArea;                                           // 0x03A8(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FullyStationaryDuration;                                  // 0x03B4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PrevBodyVelocity;                                         // 0x03B8(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SubstepLinearImpulse;                                     // 0x03C4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SubstepAngularImpulse;                                    // 0x03D0(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
};

// ScriptStruct CrowVehicles.CrowVehicleEntityPoolLandWheels
// 0x0028
struct FCrowVehicleEntityPoolLandWheels
{
	int                                                CountPerGroup;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxElementIndex;                                          // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowVehicleEntityLandWheels>        PoolArray;                                                // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        RecycleIndexes;                                           // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowVehicleMovementTankValuePair
// 0x0008
struct FCrowVehicleMovementTankValuePair
{
	float                                              Left;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Right;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowVehicleEntityTank
// 0x0240 (0x0620 - 0x03E0)
struct FCrowVehicleEntityTank : public FCrowVehicleEntityLandWheels
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x03E0(0x0020) MISSED OFFSET
	struct FCrowTireAndWheelSetting                    VirtualWheelSetting;                                      // 0x0400(0x0110) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	struct FCrowLandWheelsTankSetting                  TankSetting;                                              // 0x0510(0x00C0) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	float                                              SquareMappedThrottle;                                     // 0x05D0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SquareMappedSteering;                                     // 0x05D4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CurrentThrottle;                                          // 0x05D8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CurrentSteering;                                          // 0x05DC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FCrowVehicleMovementTankValuePair           TorqueRatioTarget;                                        // 0x05E0(0x0008) (CPF_Transient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowVehicleMovementTankValuePair           TorqueRatioCurrent;                                       // 0x05E8(0x0008) (CPF_Transient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowVehicleMovementTankValuePair           Torque;                                                   // 0x05F0(0x0008) (CPF_Transient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowVehicleMovementTankValuePair           Brake;                                                    // 0x05F8(0x0008) (CPF_Transient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              TorqueRatioDiff;                                          // 0x0600(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DrivingLinearForce;                                       // 0x0604(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DrivingAngularForce;                                      // 0x0610(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
};

// ScriptStruct CrowVehicles.CrowVehicleEntityPoolTank
// 0x0028
struct FCrowVehicleEntityPoolTank
{
	int                                                CountPerGroup;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxElementIndex;                                          // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowVehicleEntityTank>              PoolArray;                                                // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        RecycleIndexes;                                           // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsTrackSplineNode
// 0x0010
struct FCrowLandWheelsTrackSplineNode
{
	int                                                SuspensionIndex;                                          // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PositionOffset;                                           // 0x0004(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsStatusRotation
// 0x0018
struct FCrowLandWheelsStatusRotation
{
	float                                              Rotation;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RotationSpeed;                                            // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RotationTorque;                                           // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SlipForward;                                              // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SlipRight;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SlipRatio;                                                // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsStatusSurface
// 0x00C8
struct FCrowLandWheelsStatusSurface
{
	unsigned char                                      IsContacting : 1;                                         // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      HitCount;                                                 // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              AngleDot;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              NormalRatio;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EngineTorqueMultiply;                                     // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FrictionMultiply;                                         // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class AActor*                                      OtherActor;                                               // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      OtherSKC;                                                 // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           OverlapMaterial;                                          // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     OverlapPosition;                                          // 0x0030(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                // 0x003C(0x008C) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsStatusSpring
// 0x0010
struct FCrowLandWheelsStatusSpring
{
	float                                              SpringPosition;                                           // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamperSpeed;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpringForceMagnitude;                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpringForceApplied;                                       // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsVirtualSuspension
// 0x03C0
struct FCrowLandWheelsVirtualSuspension
{
	class AActor*                                      OwnerActor;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bValidElement : 1;                                        // 0x0008(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bVehicleAwake : 1;                                        // 0x0008(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                ElementIndex;                                             // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                ElementCountPerGroup;                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class ACrowVehicleUpdater*                         VehicleUpdater;                                           // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowTireAndWheelSetting                    WheelSetting;                                             // 0x0020(0x0110) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowLandWheelsTankSetting                  TankSetting;                                              // 0x0130(0x00C0) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              TrackLocalY;                                              // 0x01F0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	class USplineComponent*                            TrackSpline;                                              // 0x01F8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UInstancedStaticMeshComponent*               TrackISM;                                                 // 0x0200(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0208(0x0020) MISSED OFFSET
	TArray<struct FCrowLandWheelsTrackSplineNode>      SplineNodes;                                              // 0x0228(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FTransform>                          TrackInstanceTransforms;                                  // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     DrivingForceLocation;                                     // 0x0248(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     FrontWheelLocation;                                       // 0x0254(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     BackWheelLocation;                                        // 0x0260(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     WorldLocation;                                            // 0x026C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SuspensionVelocity;                                       // 0x0278(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            WheelGroupIndex;                                          // 0x0284(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0286(0x0002) MISSED OFFSET
	int                                                VirtualSuspensionIndex;                                   // 0x0288(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CountFloat;                                               // 0x028C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TotalMassForSuspension;                                   // 0x0290(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TotalTravelDistance;                                      // 0x0294(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                TrackUpdateFrame;                                         // 0x0298(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowLandWheelsStatusRotation               RotationCurrent;                                          // 0x029C(0x0018) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	struct FCrowLandWheelsStatusSurface                SurfaceCurrent;                                           // 0x02B8(0x00C8) (CPF_Transient, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowLandWheelsStatusSpring                 SpringCurrent;                                            // 0x0380(0x0010) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SubstepDrivingForce;                                      // 0x0390(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     AccelerationForceFront;                                   // 0x039C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     AccelerationForceBack;                                    // 0x03A8(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DebugDrivingForceForward;                                 // 0x03B4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DebugDrivingForceRight;                                   // 0x03B8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DebugDrivingSpringDefault;                                // 0x03BC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct CrowVehicles.CrowVehiclePoolVirtualSuspension
// 0x0028
struct FCrowVehiclePoolVirtualSuspension
{
	int                                                CountPerGroup;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxElementIndex;                                          // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowLandWheelsVirtualSuspension>    PoolArray;                                                // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        RecycleIndexes;                                           // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsStateSuspension
// 0x0014
struct FCrowLandWheelsStateSuspension
{
	unsigned char                                      Detached : 1;                                             // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DisabledSpring : 1;                                       // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DisabledDriving : 1;                                      // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DisabledBraking : 1;                                      // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DisabledSteering : 1;                                     // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DisabledTireFlat : 1;                                     // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DisabledTireDestroyed : 1;                                // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              EfficiencySpring;                                         // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EfficiencyDriving;                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EfficiencyBraking;                                        // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EfficiencySteering;                                       // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsSuspensionSubstep
// 0x0060
struct FCrowLandWheelsSuspensionSubstep
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Forward;                                                  // 0x000C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Right;                                                    // 0x0018(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Up;                                                       // 0x0024(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                 // 0x0030(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SuspensionTop;                                            // 0x003C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SuspensionBottom;                                         // 0x0048(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InAirDamperSpeed;                                         // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InAirSpringPosition;                                      // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Mass;                                                     // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsStatusSteering
// 0x000C
struct FCrowLandWheelsStatusSteering
{
	float                                              Angle;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Steering;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TargetInput;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsSimSuspension
// 0x0590
struct FCrowLandWheelsSimSuspension
{
	unsigned char                                      bValidElement : 1;                                        // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bVehicleAwake : 1;                                        // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      ValidSuspension : 1;                                      // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      ShowDebug : 1;                                            // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      IsContactingPrev : 1;                                     // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      AddCounterVelocity : 1;                                   // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      PrevHoldingPosition : 1;                                  // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      HoldingPosition : 1;                                      // 0x0000(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ElementIndex;                                             // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                ElementCountPerGroup;                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class ACrowVehicleUpdater*                         VehicleUpdater;                                           // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowLandWheelsConfigTireAndWheel*           WheelConfigNormal;                                        // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowLandWheelsConfigTireAndWheel*           WheelConfigFlat;                                          // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowLandWheelsConfigTireAndWheel*           WheelConfigDestroyed;                                     // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class AActor*                                      OwnerActor;                                               // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0038(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            WheelIndex;                                               // 0x0040(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            WheelGroupIndex;                                          // 0x0042(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SweepOffset;                                              // 0x0044(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     RelativeRestLocation;                                     // 0x0050(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FQuat                                       RelativeRestRotation;                                     // 0x0060(0x0010) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowLandWheelsStateSuspension              SuspensionState;                                          // 0x0070(0x0014) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	ECrowLandWheelsTireStatus                          CurrentTireStatus;                                        // 0x0084(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	float                                              TargetSteeringInput;                                      // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CurrentBrakingInput;                                      // 0x008C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              EngineTorque;                                             // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              EngineBrake;                                              // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              EngineRotationSpeedMax;                                   // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BodySpeedMax;                                             // 0x009C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              FinalSpringOffset;                                        // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     FinalRelativeLocation;                                    // 0x00A4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FQuat                                       FinalRelativeRotation;                                    // 0x00B0(0x0010) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SubstepSpringForce;                                       // 0x00C0(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FCrowTireAndWheelSetting                    WheelSetting;                                             // 0x00D0(0x0110) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowLandWheelsUpdateCache                  UpdateCache;                                              // 0x01E0(0x0210) (CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowLandWheelsSuspensionSubstep            Substep;                                                  // 0x03F0(0x0060) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     TotalDrivingForce;                                        // 0x0450(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	struct FCrowLandWheelsStatusSurface                SurfaceCurrent;                                           // 0x0460(0x00C8) (CPF_Transient, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     LastSurfacePosition;                                      // 0x0528(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StationaryDuration;                                       // 0x0534(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowLandWheelsStatusSpring                 SpringCurrent;                                            // 0x0538(0x0010) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowLandWheelsStatusSteering               SteeringCurrent;                                          // 0x0548(0x000C) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowLandWheelsStatusRotation               RotationCurrent;                                          // 0x0554(0x0018) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              COMDistanceRatio;                                         // 0x056C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DebugWheelSpeedRatio;                                     // 0x0570(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DebugWheelTangentSpeed;                                   // 0x0574(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DebugSuspensionSpeedForward;                              // 0x0578(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DebugDrivingSpringDefault;                                // 0x057C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               DrivingForceEnabled;                                      // 0x0580(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0xF];                                       // 0x0581(0x000F) MISSED OFFSET
};

// ScriptStruct CrowVehicles.CrowVehiclePoolSuspension
// 0x0028
struct FCrowVehiclePoolSuspension
{
	int                                                CountPerGroup;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxElementIndex;                                          // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowLandWheelsSimSuspension>        PoolArray;                                                // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        RecycleIndexes;                                           // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowVehicleUpdaterSweepItem
// 0x00E0
struct FCrowVehicleUpdaterSweepItem
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
	TArray<struct FHitResult>                          HitResults;                                               // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsHandlerAnimSetup
// 0x0010
struct FCrowLandWheelsHandlerAnimSetup
{
	int                                                WheelIndex;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseSteerAngle;                                           // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseRotationAngle;                                        // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              RotationMultiply;                                         // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct CrowVehicles.LandWheelLookupData
// 0x001C
struct FLandWheelLookupData
{
	int                                                WheelIndex;                                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FBoneReference                              BoneReference;                                            // 0x0004(0x0010) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseSteerAnlge;                                           // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseRotationAngle;                                        // 0x0015(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	float                                              RotationMultiply;                                         // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.AnimNode_CrowLandWheelsHandler
// 0x0068 (0x0130 - 0x00C8)
struct FAnimNode_CrowLandWheelsHandler : public FAnimNode_SkeletalControlBase
{
	TMap<struct FName, struct FCrowLandWheelsHandlerAnimSetup> WheelAnimSetup;                                           // 0x00C8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	TArray<struct FLandWheelLookupData>                Wheels;                                                   // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
};

// ScriptStruct CrowVehicles.CrowLandWheelsAnimInstanceProxy
// 0x0010 (0x0770 - 0x0760)
struct FCrowLandWheelsAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0760(0x0010) MISSED OFFSET
};

// ScriptStruct CrowVehicles.CrowVehicleSuspensionTrace
// 0x00E0
struct FCrowVehicleSuspensionTrace
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
	class AActor*                                      OwnerActor;                                               // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FHitResult                                  HitResult;                                                // 0x0050(0x008C) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
};

// ScriptStruct CrowVehicles.VehicleImpactDamageEvent
// 0x00A0 (0x00B0 - 0x0010)
struct FVehicleImpactDamageEvent : public FDamageEvent
{
	float                                              Damage;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      VehicleImpactType;                                        // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FVector_NetQuantizeNormal                   ShotDirection;                                            // 0x0018(0x000C) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FHitResult                                  HitInfo;                                                  // 0x0024(0x008C) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct CrowVehicles.CrowLandWheelsMovementData
// 0x0050
struct FCrowLandWheelsMovementData
{
	struct FTransform                                  NetTransform;                                             // 0x0000(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     NetVelocity;                                              // 0x0030(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     NetAngularVelocity;                                       // 0x003C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct CrowVehicles.CrowBoatsUpdateCache
// 0x0010 (0x00F0 - 0x00E0)
struct FCrowBoatsUpdateCache : public FCrowVehicleUpdateCacheBase
{
	class UCrowBoatsConfigBody*                        BodyConfig;                                               // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
