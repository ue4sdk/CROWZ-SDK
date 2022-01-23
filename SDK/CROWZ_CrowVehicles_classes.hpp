#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_CrowVehicles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CrowVehicles.CrowBoatsSimEngine
// 0x0090 (0x0290 - 0x0200)
class UCrowBoatsSimEngine : public USceneComponent
{
public:
	class USkeletalMeshComponent*                      BodyMesh;                                                 // 0x0200(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowBoatsConfigEngine*                      EngineConfig;                                             // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowBoatsConfigBody*                        BodyConfig;                                               // 0x0210(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowVehicleOceanTracker*                    OceanTracker;                                             // 0x0218(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FTransform                                  InitialTransform;                                         // 0x0220(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SubstepLocation;                                          // 0x0250(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SubstepLinearForce;                                       // 0x025C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SubstepAngularForce;                                      // 0x0268(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowVehicleInputValue                      AccelerationInput;                                        // 0x0274(0x0008) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              TargetAccelerationInput;                                  // 0x027C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowVehicleInputValue                      SteeringInput;                                            // 0x0280(0x0008) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              TargetSteeringInput;                                      // 0x0288(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DebugEngineDepthRatio;                                    // 0x028C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowBoatsSimEngine"));
		return ptr;
	}

};


// Class CrowVehicles.CrowBoatsSimFloatingVolume
// 0x00B0 (0x02B0 - 0x0200)
class UCrowBoatsSimFloatingVolume : public USceneComponent
{
public:
	class USkeletalMeshComponent*                      BodyMesh;                                                 // 0x0200(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowBoatsFloatingVolumeSetup               VolumeSetup;                                              // 0x0208(0x0038) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UCrowBoatsConfigBody*                        BodyConfig;                                               // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowVehicleOceanTracker*                    OceanTracker;                                             // 0x0248(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FTransform                                  InitialTransform;                                         // 0x0250(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              SubstepDepthRatio;                                        // 0x0280(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SubstepBuoyancy;                                          // 0x0284(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SubstepLinearDamping;                                     // 0x0290(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SubstepAngularDamping;                                    // 0x029C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DebugBuoyanceDepth;                                       // 0x02A8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowBoatsSimFloatingVolume"));
		return ptr;
	}

};


// Class CrowVehicles.CrowBoatsConfigBody
// 0x0098 (0x00C0 - 0x0028)
class UCrowBoatsConfigBody : public UObject
{
public:
	bool                                               DrawDebugInfo;                                            // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               SimulationGenerateHitEvents;                              // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               LocalSpaceKinematics;                                     // 0x002A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               BeginWithReadyForDriving;                                 // 0x002B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccelerationTilt;                                         // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccelerationRollForce;                                    // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccelerationPitchForce;                                   // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccelerationCameraYaw;                                    // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccelerationCameraSpeed;                                  // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InAirAngularResistance;                                   // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InAirAngularRecoverRoll;                                  // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InAirAngularRecoverPitch;                                 // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ChasisMass;                                               // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     ChasisSize;                                               // 0x0050(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DirectionalDragRatio;                                     // 0x005C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     LinearDampingRatio;                                       // 0x0068(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PitchDampingRatio;                                        // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RollDampingRatio;                                         // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              YawDampingRatio;                                          // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DepthOffset;                                              // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpeedDragThreshold;                                       // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxTiltSpeed;                                             // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SteeringRollDegree;                                       // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ThrottlePitchDegree;                                      // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InterpolationSpeedRoll;                                   // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InterpolationSpeedPitch;                                  // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InterpolationSpeed;                                       // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RecoverAxisSpringConstant;                                // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RecoverMaxPitchTorque;                                    // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RecoverMaxRollTorque;                                     // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionChannel>                     OceanTraceChannel;                                        // 0x00AC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	TArray<struct FCrowBoatsFloatingVolumeSetup>       FloatingVolumes;                                          // 0x00B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowBoatsConfigBody"));
		return ptr;
	}

};


// Class CrowVehicles.CrowBoatsConfigEngine
// 0x0048 (0x0070 - 0x0028)
class UCrowBoatsConfigEngine : public UObject
{
public:
	bool                                               Debug;                                                    // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FName                                       BodySocketName;                                           // 0x002C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EngineSizeRadius;                                         // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinWaterDepthForEngine;                                   // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpeedMaxKmPH;                                             // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpeedReverseMaxKmPH;                                      // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpeedIdleKmPH;                                            // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BrakeStrength;                                            // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AccelerationTime;                                         // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SteeringMultiply;                                         // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SteeringRatioMax;                                         // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SteeringSpeedMax;                                         // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FCrowVehicleInputSetting                    AccelerationInputSetting;                                 // 0x005C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowVehicleInputSetting                    SteeringInputSetting;                                     // 0x0064(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowBoatsConfigEngine"));
		return ptr;
	}

};


// Class CrowVehicles.CrowLandWheelsAnimInstance
// 0x0010 (0x02D0 - 0x02C0)
class UCrowLandWheelsAnimInstance : public UAnimInstance
{
public:
	class UCrowVehicleMovementBoats*                   BoatsMovement;                                            // 0x02C0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowLandWheelsAnimInstance"));
		return ptr;
	}

};


// Class CrowVehicles.CrowLandWheelsConfigTireAndWheel
// 0x0110 (0x0138 - 0x0028)
class UCrowLandWheelsConfigTireAndWheel : public UObject
{
public:
	struct FCrowTireAndWheelSetting                    Setting;                                                  // 0x0028(0x0110) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowLandWheelsConfigTireAndWheel"));
		return ptr;
	}

};


// Class CrowVehicles.CrowLandWheelsConfigEngine
// 0x00D8 (0x0100 - 0x0028)
class UCrowLandWheelsConfigEngine : public UObject
{
public:
	bool                                               Debug;                                                    // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FCrowLandWheelsEngineSetting                Setting;                                                  // 0x0030(0x00D0) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowLandWheelsConfigEngine"));
		return ptr;
	}

};


// Class CrowVehicles.CrowLandWheelsConfigBody
// 0x0120 (0x0148 - 0x0028)
class UCrowLandWheelsConfigBody : public UObject
{
public:
	struct FCrowLandWheelsBodySetting                  Setting;                                                  // 0x0028(0x0120) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowLandWheelsConfigBody"));
		return ptr;
	}

};


// Class CrowVehicles.CrowLandWheelsConfigTank
// 0x00C0 (0x00E8 - 0x0028)
class UCrowLandWheelsConfigTank : public UObject
{
public:
	struct FCrowLandWheelsTankSetting                  Setting;                                                  // 0x0028(0x00C0) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowLandWheelsConfigTank"));
		return ptr;
	}

};


// Class CrowVehicles.CrowLibraryVehicleMath
// 0x0000 (0x0028 - 0x0028)
class UCrowLibraryVehicleMath : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowLibraryVehicleMath"));
		return ptr;
	}

};


// Class CrowVehicles.CrowVehicleFloodingEffectSetting
// 0x0050 (0x0078 - 0x0028)
class UCrowVehicleFloodingEffectSetting : public UObject
{
public:
	class UParticleSystem*                             FxImmerge;                                                // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       AttachSocketName_Bubble;                                  // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             FxBubble;                                                 // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       AttachSocketName_DrivingForward;                          // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       AttachSocketName_DrivingBackward;                         // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             FxDriving;                                                // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             FxGroundDust;                                             // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpeedForwardMax;                                          // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpeedRightMax;                                            // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       ParamNameSpeedForward;                                    // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       ParamNameSpeedRight;                                      // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowVehicleFloodingEffectSetting"));
		return ptr;
	}

};


// Class CrowVehicles.CrowVehicleFloodingComponent
// 0x01F0 (0x0660 - 0x0470)
class UCrowVehicleFloodingComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0470(0x0048) MISSED OFFSET
	float                                              TimeSecondToFlooding;                                     // 0x04B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              FloodingDamageTime;                                       // 0x04BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              FloodingDamage;                                           // 0x04C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 WaterCrashImpulseCurve;                                   // 0x04C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 Immerge_LinearDampingCurve;                               // 0x04D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 WaterLinearDampingCurve;                                  // 0x04D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCheckValidHeight;                                        // 0x04E0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	float                                              ValidHeight_DrivingFX;                                    // 0x04E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /* UCrowVehicleFloodingEffectSetting*/ FloodingEffectSettingClass;                               // 0x04E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowVehicleMovementWaterInfo               WaterInfo;                                                // 0x04F0(0x0060) (CPF_Transient, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	class UPrimitiveComponent*                         UpdatedComponent;                                         // 0x0550(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	ECrowVehicleFloodingWaterType                      LastFloodingWaterType;                                    // 0x0558(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0559(0x0007) MISSED OFFSET
	class UCrowVehicleFloodingEffectSetting*           FloodingEffectSetting;                                    // 0x0560(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	ECrowVehicleFloodingState                          FloodingState;                                            // 0x0568(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bFlooding;                                                // 0x0569(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x2];                                       // 0x056A(0x0002) MISSED OFFSET
	float                                              ElapsedOverlapTime;                                       // 0x056C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              ElapsedFloodingTime;                                      // 0x0570(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              DamageTimer;                                              // 0x0574(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              CurrentFloodingDepth;                                     // 0x0578(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              CurrentFloodingDepthClamped;                              // 0x057C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              WaterLinearDamping;                                       // 0x0580(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              PrevOwnerVelocityZ;                                       // 0x0584(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              WaterCrashImpulse;                                        // 0x0588(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData05[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleComponentImmerge;                                 // 0x0590(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*                    ParticleComponentBubble;                                  // 0x0598(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*                    ParticleComponentDrivingForward;                          // 0x05A0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*                    ParticleComponentDrivingBackward;                         // 0x05A8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*                    ParticleComponentGroundDust;                              // 0x05B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData06[0x8];                                       // 0x05B8(0x0008) MISSED OFFSET
	struct FTransform                                  RelativeTM_Bubble;                                        // 0x05C0(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	struct FTransform                                  RelativeTM_Driving;                                       // 0x05F0(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	struct FTransform                                  RelativeTM;                                               // 0x0620(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	class UPrimitiveComponent*                         BodyComponent;                                            // 0x0650(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bFadeOutDrivingParticle;                                  // 0x0658(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0659(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowVehicleFloodingComponent"));
		return ptr;
	}


	void UpdateWaterLinearDamping(float DeltaTime);
	void UpdateFlooding(float DeltaTime);
	void UpdateDrivingParticle(class UParticleSystemComponent* InParticle, const struct FName& InSocketName, float InSpeedForwardRatio, float InSpeedRightRatio, bool InReverse);
	void SetupFx();
	void SetupBodyComponent();
	void Reset();
	void RequestChangeState(ECrowVehicleFloodingState NewState);
	void OnWaterPlaneOverlapEnd(class AActor* InWaterPlaneActor);
	void OnWaterPlaneOverlapBegin(class AActor* InWaterPlaneActor);
	void OnWaterBodyOverlapEnd(class AWaterBody* InWaterBodyActor);
	void OnWaterBodyOverlapBegin(class AWaterBody* InWaterBodyActor);
	void OnImmerge(const struct FVector& InWaterLocation, const struct FVector& InWaterNormal);
	void OnFloodingExit();
	void OnFloodingEnter();
	void OnFloodingDepthAndElapsedTime(float InDepth, float InDeltaTime);
	void OnDamage(float InDamage);
	struct FVector GetBodyVelocity();
	void FadeOutParticle(float DeltaTime, class UParticleSystemComponent* InParticle);
	void FadeOutDrivingParticles(float DeltaTime);
	void DeactivateDrivingParticles();
	void DeactivateBubbleParticle();
	class UParticleSystemComponent* CreateParticleSystem(class UParticleSystem* InFxAsset, const struct FName& InAttachSocketName);
	void ClientUpdateParticles(float DeltaTime);
	void ActivateDrivingParticles();
	void ActivateBubbleParticle();
};


// Class CrowVehicles.CrowVehicleMovementBase
// 0x00E0 (0x0190 - 0x00B0)
class UCrowVehicleMovementBase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
	bool                                               UseSubstepping;                                           // 0x00C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	class APawn*                                       OwnerPawn;                                                // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                         BodyComponent;                                            // 0x00D0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x00D8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USpringArmComponent*                         SpringArm;                                                // 0x00E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    SpringArmInitialRotation;                                 // 0x00E8(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    SpringArmCurrentRotation;                                 // 0x00F4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FTransform                                  RootBoneRelativeTransform;                                // 0x0100(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              CurrentThrottleInput;                                     // 0x0130(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CurrentSteeringInput;                                     // 0x0134(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LastRequestThrottleInput;                                 // 0x0138(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LastRequestSteeringInput;                                 // 0x013C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BoundsRadius;                                             // 0x0140(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               IsReadyForDriving;                                        // 0x0144(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               IsBlockedPhysics;                                         // 0x0145(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0146(0x0002) MISSED OFFSET
	float                                              LinearDamping;                                            // 0x0148(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LimitSteeringRatio;                                       // 0x014C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x40];                                      // 0x0150(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowVehicleMovementBase"));
		return ptr;
	}


	void SetThrottle(float ThrottleInput);
	void SetSteering(float SteeringInput);
	void SetSpringArm(class USpringArmComponent* InSpringArm);
	void SetReadyForDriving(bool Ready);
	void SetBlockPhysicsCalculation(bool IsBlocked);
	void ServerShutDown();
	void ServerFlooding();
	void ServerEngineStart();
	void RequestUpdateInput(float ThrottleInput, float SteeringInput);
	void MulticastResetInput();
	void MulticastInput(float ThrottleInput, float SteeringInput);
	struct FString GetStatusText();
	void BreakBoneConstraint(const struct FName& BoneName, const struct FVector& Impulse);
};


// Class CrowVehicles.CrowVehicleMovementBoats
// 0x0070 (0x0200 - 0x0190)
class UCrowVehicleMovementBoats : public UCrowVehicleMovementBase
{
public:
	class UClass* /* UCrowBoatsConfigEngine*/          EngineConfigClass;                                        // 0x0190(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /* UCrowBoatsConfigBody*/            BodyConfigClass;                                          // 0x0198(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowBoatsConfigEngine*                      EngineConfig;                                             // 0x01A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowBoatsConfigBody*                        BodyConfig;                                               // 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowBoatsSimEngine*                         EngineComponent;                                          // 0x01B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UCrowBoatsSimFloatingVolume*>         FloatingVolumeInstances;                                  // 0x01B8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     ChasisDragArea;                                           // 0x01C8(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CachedDeltaTime;                                          // 0x01D4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     PrevBodyVelocity;                                         // 0x01D8(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SubstepLinearForce;                                       // 0x01E4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SubstepAngularTorque;                                     // 0x01F0(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowVehicleMovementBoats"));
		return ptr;
	}


	bool IsInAir();
	bool IsIdleSpeed();
	struct FVector GetLocationOnSurface();
	float GetForwardSpeed();
	struct FVector GetBodyVelocity();
	float GetBodySpeed();
};


// Class CrowVehicles.CrowVehicleMovementLandWheels
// 0x0160 (0x02F0 - 0x0190)
class UCrowVehicleMovementLandWheels : public UCrowVehicleMovementBase
{
public:
	class UClass* /* UCrowLandWheelsConfigEngine*/     EngineConfigClass;                                        // 0x0190(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /* UCrowLandWheelsConfigBody*/       BodyConfigClass;                                          // 0x0198(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowLandWheelsEngineSetting                EngineSetting;                                            // 0x01A0(0x00D0) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0270(0x0010) MISSED OFFSET
	TArray<struct FCrowLandWheelsSingleWheelState>     WheelStates;                                              // 0x0280(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	int                                                UpdateCacheIndex;                                         // 0x0290(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	TMap<class AActor*, struct FCrowLandWheelsSqueezeDamage> DamagesByWheel;                                           // 0x0298(0x0050) (CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              LastDamageTime;                                           // 0x02E8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowVehicleMovementLandWheels"));
		return ptr;
	}


	void TestDestroyOneWheel(int WheelIndex);
	void SetDrivingForceUpdateEnable(bool Enabled);
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	int GetCurrentGear();
	float GetBrakeOutput();
};


// Class CrowVehicles.CrowRotorConfigHeli
// 0x0140 (0x0168 - 0x0028)
class UCrowRotorConfigHeli : public UObject
{
public:
	struct FCrowRotorBodySetting                       Setting;                                                  // 0x0028(0x00A0) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowRotorBodySetting                       Setting_Accel;                                            // 0x00C8(0x00A0) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowRotorConfigHeli"));
		return ptr;
	}

};


// Class CrowVehicles.CrowVehicleMovementRotor
// 0x02B0 (0x0440 - 0x0190)
class UCrowVehicleMovementRotor : public UCrowVehicleMovementBase
{
public:
	class UClass* /* UCrowRotorConfigHeli*/            BodyConfig;                                               // 0x0190(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class APawn*                                       VehiclePawn;                                              // 0x0198(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                         PhysicsBody;                                              // 0x01A0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowRotorBodySetting                       PhysicsParam;                                             // 0x01A8(0x00A0) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              IdleHoverForce;                                           // 0x0248(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WorldOceanZ;                                              // 0x024C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WorldAltitudeLimitZ;                                      // 0x0250(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                RotorType;                                                // 0x0254(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TorqueToAccel;                                            // 0x0258(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               IsDirtyClientInput;                                       // 0x025C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	struct FCrowMovementRotorValues                    ClientRawInput;                                           // 0x0260(0x0018) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowMovementRotorValues                    ReceivedInput;                                            // 0x0278(0x0018) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowMovementRotorValues                    CalculatedInput;                                          // 0x0290(0x0018) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowMovementRotorValues                    ForceAndTorque;                                           // 0x02A8(0x0018) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowMovementRotorValues                    ForceAndTorqueCurrent;                                    // 0x02C0(0x0018) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0xC8];                                      // 0x02D8(0x00C8) MISSED OFFSET
	struct FVector                                     PhysicsBodyForward;                                       // 0x03A0(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     PhysicsBodyRight;                                         // 0x03AC(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     PhysicsBodyUp;                                            // 0x03B8(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     PlanarForward;                                            // 0x03C4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     PlanarRight;                                              // 0x03D0(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     PhysicsBodyVelocity;                                      // 0x03DC(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     DirectionalVelocity;                                      // 0x03E8(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     DragForce;                                                // 0x03F4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     IdleDampingForce;                                         // 0x0400(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CurrentCollectiveForce;                                   // 0x040C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               IsEngineStart;                                            // 0x0410(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	struct FCrowMovementRotorValues                    DamagedEffectInput;                                       // 0x0414(0x0018) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              DamagedEffectEnginePower;                                 // 0x042C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamagedInputFactor;                                       // 0x0430(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0434(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowVehicleMovementRotor"));
		return ptr;
	}


	void RequestClientInputRotor(const struct FCrowRotorInputNetValue& InputValues);
	void MulticastInputRotor(const struct FCrowRotorInputNetValue& InputValues);
	void MulticastEngineChanged(bool IsStart);
};


// Class CrowVehicles.CrowVehicleMovementTank
// 0x0030 (0x0320 - 0x02F0)
class UCrowVehicleMovementTank : public UCrowVehicleMovementLandWheels
{
public:
	class UClass* /* UCrowLandWheelsConfigTank*/       TankConfigClass;                                          // 0x02F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /* UCrowLandWheelsConfigTireAndWheel*/ VirtualWheelConfigClass;                                  // 0x02F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0300(0x0008) MISSED OFFSET
	bool                                               IsFirstUpdate;                                            // 0x0308(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	float                                              DistanceAlwaysVisible;                                    // 0x030C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DistanceFar;                                              // 0x0310(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0314(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowVehicleMovementTank"));
		return ptr;
	}

};


// Class CrowVehicles.CrowVehicleOceanTracker
// 0x0068 (0x0118 - 0x00B0)
class UCrowVehicleOceanTracker : public UActorComponent
{
public:
	class UMaterialParameterCollection*                TargetCollection;                                         // 0x00B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               DrawDebugInfo;                                            // 0x00B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              OceanDefaultZ;                                            // 0x00BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Intensity1;                                               // 0x00C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Intensity2;                                               // 0x00C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Intensity3;                                               // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Speed1;                                                   // 0x00CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Speed2;                                                   // 0x00D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Speed3;                                                   // 0x00D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WaveScale1;                                               // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WaveScale2;                                               // 0x00DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WaveScale3;                                               // 0x00E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MasterSpeed;                                              // 0x00E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MasterIntensity;                                          // 0x00E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Offset;                                                   // 0x00EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ServerWorldTime;                                          // 0x00F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               OceanFollowCamera;                                        // 0x00F4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	class AActor*                                      OceanActor;                                               // 0x00F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     OceanActorLocation;                                       // 0x0100(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class AWaterBody*                                  WaterBodyOceanActor;                                      // 0x0110(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowVehicleOceanTracker"));
		return ptr;
	}

};


// Class CrowVehicles.CrowVehiclePhysicalMaterial
// 0x0020 (0x00A0 - 0x0080)
class UCrowVehiclePhysicalMaterial : public UPhysicalMaterial
{
public:
	float                                              MaxEngineRPMForwardMultiply;                              // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxEngineRPMReverseMultiply;                              // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxEngineTorqueMultiply;                                  // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WheelFrictionMultiply;                                    // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             ImpactFx;                                                 // 0x0090(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IgnoreMetalFx;                                            // 0x0098(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowVehiclePhysicalMaterial"));
		return ptr;
	}

};


// Class CrowVehicles.CrowVehicleSettings
// 0x0010 (0x0048 - 0x0038)
class UCrowVehicleSettings : public UDeveloperSettings
{
public:
	struct FCrowVehicleUpdaterSetting                  CrowVehicleUpdaterSetting;                                // 0x0038(0x0010) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowVehicleSettings"));
		return ptr;
	}


	static class UCrowVehicleSettings* Get();
};


// Class CrowVehicles.CrowVehicleSKC
// 0x0090 (0x0F60 - 0x0ED0)
class UCrowVehicleSKC : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0ED0(0x0004) MISSED OFFSET
	float                                              ComponentTransformUpdateDelayMin;                         // 0x0ED4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ComponentTransformUpdateDelayMax;                         // 0x0ED8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ComponentTransformUpdateDistanceMin;                      // 0x0EDC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FTransform                                  CachedWorldTransform;                                     // 0x0EE0(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FTransform                                  RootBoneRelativeTransform;                                // 0x0F10(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     ReplicatedLocation;                                       // 0x0F40(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ElapsedTimeAfterReplication;                              // 0x0F4C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TransformUpdateDelay;                                     // 0x0F50(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                TickUpdateCount;                                          // 0x0F54(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0F58(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowVehicleSKC"));
		return ptr;
	}

};


// Class CrowVehicles.CrowVehiclesPropertyActor
// 0x0010 (0x0230 - 0x0220)
class ACrowVehiclesPropertyActor : public AActor
{
public:
	class UStaticMeshComponent*                        SphereMesh;                                               // 0x0220(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowVehicleOceanTracker*                    OceanTracker;                                             // 0x0228(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowVehiclesPropertyActor"));
		return ptr;
	}

};


// Class CrowVehicles.CrowVehicleUpdater
// 0x0240 (0x0460 - 0x0220)
class ACrowVehicleUpdater : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class USphereComponent*                            SceneRoot;                                                // 0x0230(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               UseClientUpdateAlways;                                    // 0x0238(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        SphereMesh;                                               // 0x0240(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowVehicleUpdaterItem>             UpdateItems;                                              // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<int>                                        IndexToRemoveList;                                        // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowVehiclesCameraInfo                     CameraInfo;                                               // 0x0268(0x0034) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	struct FCrowVehicleForceAndDamage                  ForceAndDamageCache;                                      // 0x02A0(0x00C0) (CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              LastDamageTime;                                           // 0x0360(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CameraDistanceMin;                                        // 0x0364(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CameraDistanceMax;                                        // 0x0368(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               InitializedUpdater;                                       // 0x036C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	int                                                AvailableCoreCount;                                       // 0x0370(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	struct FCrowVehicleEntityPoolLandWheels            PoolLandWheels;                                           // 0x0378(0x0028) (CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowVehicleEntityPoolTank                  PoolTankEntity;                                           // 0x03A0(0x0028) (CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowVehiclePoolVirtualSuspension           PoolTankVirtualSuspensions;                               // 0x03C8(0x0028) (CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowVehiclePoolSuspension>          PoolSuspensionLandWheelsArray;                            // 0x03F0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<int, int>                                     LookupWheelCountToPoolIndex;                              // 0x0400(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowVehicleUpdaterSweepItem>        SweepItems;                                               // 0x0450(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowVehicles.CrowVehicleUpdater"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
