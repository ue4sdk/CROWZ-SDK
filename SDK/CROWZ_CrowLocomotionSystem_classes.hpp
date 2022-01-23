#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_CrowLocomotionSystem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CrowLocomotionSystem.AnimNotify_CLSCameraShake
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_CLSCameraShake : public UAnimNotify
{
public:
	class UClass* /* UMatineeCameraShake*/             ShakeClass;                                               // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.AnimNotify_CLSCameraShake"));
		return ptr;
	}

};


// Class CrowLocomotionSystem.AnimNotify_CLSEarlyBlendOut
// 0x0038 (0x0068 - 0x0030)
class UAnimNotify_CLSEarlyBlendOut : public UAnimNotifyState
{
public:
	float                                              BlendOutTime;                                             // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<ECLSMovementMode>                           MovementModes;                                            // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<ECLSStance>                                 Stances;                                                  // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bCheckMovementInput;                                      // 0x0058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCheckRotationInput;                                      // 0x0059(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xE];                                       // 0x005A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.AnimNotify_CLSEarlyBlendOut"));
		return ptr;
	}

};


// Class CrowLocomotionSystem.AnimNotify_CLSMovementAction
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_CLSMovementAction : public UAnimNotifyState
{
public:
	ECLSMovementAction                                 MovementAction;                                           // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.AnimNotify_CLSMovementAction"));
		return ptr;
	}

};


// Class CrowLocomotionSystem.AnimNotify_CLSOverlayOverride
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_CLSOverlayOverride : public UAnimNotifyState
{
public:
	int                                                OverlayOverrideState;                                     // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.AnimNotify_CLSOverlayOverride"));
		return ptr;
	}

};


// Class CrowLocomotionSystem.AnimNotify_CLSWeaponAction
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_CLSWeaponAction : public UAnimNotifyState
{
public:
	ECLSWeaponAction                                   WeaponAction;                                             // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.AnimNotify_CLSWeaponAction"));
		return ptr;
	}

};


// Class CrowLocomotionSystem.CLSCharacter
// 0x0C30 (0x10F0 - 0x04C0)
class ACLSCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C0(0x0008) MISSED OFFSET
	bool                                               IsPressSprintKey;                                         // 0x04C8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	class AActor*                                      CurrentLadder;                                            // 0x04D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bIsProned : 1;                                            // 0x04D8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bIsSprinted : 1;                                          // 0x04D8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bIsWalked : 1;                                            // 0x04D8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bIsLookedFocus : 1;                                       // 0x04D8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bRightShoulder : 1;                                       // 0x04D8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bIsLookAround : 1;                                        // 0x04D8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bUnresolvedReplication_IsProned : 1;                      // 0x04D8(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bUnresolvedReplication_IsCrouched : 1;                    // 0x04D8(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bUnresolvedReplication_IsSprint : 1;                      // 0x04D9(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bUnresolvedReplication_IsWalk : 1;                        // 0x04D9(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bUnresolvedReplication_IsLookFocus : 1;                   // 0x04D9(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04DA(0x0002) MISSED OFFSET
	float                                              LookUpDownRate;                                           // 0x04DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LookLeftRightRate;                                        // 0x04E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LookDeltaSeconds;                                         // 0x04E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StandToCrouchAnimRate;                                    // 0x04E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StandToProneAnimRate;                                     // 0x04EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CrouchToStandAnimRate;                                    // 0x04F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CrouchToProneAnimRate;                                    // 0x04F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ProneToStandAnimRate;                                     // 0x04F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ProneToCrouchAnimRate;                                    // 0x04FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bUseProneLimitedArea : 1;                                 // 0x0500(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0501(0x0007) MISSED OFFSET
	class UCLSCharacterMovement*                       CachedCharacterMovement;                                  // 0x0508(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSRotationMode                                   AdjustClientRotationMode;                                 // 0x0510(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	class UTimelineComponent*                          VaultTimeline;                                            // 0x0518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 VaultTimelineCurve;                                       // 0x0520(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSRotationMode                                   RotationMode;                                             // 0x0528(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSViewMode                                       DesiredViewMode;                                          // 0x0529(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSViewMode                                       ViewMode;                                                 // 0x052A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSRotationMode                                   DesiredRotationMode;                                      // 0x052B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSMovementMode                                   CurrentMovementMode;                                      // 0x052C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSMovementMode                                   PrevMovementMode;                                         // 0x052D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSMovementAction                                 MovementAction;                                           // 0x052E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSWeaponAction                                   WeaponAction;                                             // 0x052F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSCommonAction                                   CommonAction;                                             // 0x0530(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSBattleStance                                   BattleStance;                                             // 0x0531(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSOverlayState                                   OverlayState;                                             // 0x0532(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSPeekState                                      DesiredPeekState;                                         // 0x0533(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSPeekState                                      ActualPeekState;                                          // 0x0534(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDesiredFiringState;                                      // 0x0535(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bActualFiringState;                                       // 0x0536(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSLadderState                                    LadderState;                                              // 0x0537(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    LookingRotation;                                          // 0x0538(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    LookAroundRotation;                                       // 0x0544(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     Acceleration;                                             // 0x0550(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsMoving;                                                // 0x055C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHasMovementInput;                                        // 0x055D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x2];                                       // 0x055E(0x0002) MISSED OFFSET
	struct FRotator                                    LastVelocityRotation;                                     // 0x0560(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    LastMovementInputRotation;                                // 0x056C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              Speed;                                                    // 0x0578(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MovementInputAmount;                                      // 0x057C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AimYawRate;                                               // 0x0580(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SubRootOffset;                                            // 0x0584(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CurrentSlopeAngle;                                        // 0x0590(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseArmLOverwrite;                                        // 0x0594(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCLSCameraParameters                        CameraParameters;                                         // 0x0595(0x0002) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0597(0x0001) MISSED OFFSET
	struct FDataTableRowHandle                         MovementModel;                                            // 0x0598(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSMovementSettingsData                    MovementData;                                             // 0x05A8(0x0120) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    SmoothTargetRotation;                                     // 0x06C8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    TurnTargetRotation;                                       // 0x06D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    InAirRotation;                                            // 0x06E0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              YawOffset;                                                // 0x06EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bRotateOnChangingProne;                                   // 0x06F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bPendingGroundRotate;                                     // 0x06F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsKeepWalking;                                           // 0x06F2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData07[0x5];                                       // 0x06F3(0x0005) MISSED OFFSET
	struct FCLSVaultParams                             VaultParams;                                              // 0x06F8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSComponentTransform                      VaultLedgeLS;                                             // 0x0720(0x0120) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FTransform                                  VaultTarget;                                              // 0x0840(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FTransform                                  VaultActualStartOffset;                                   // 0x0870(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FTransform                                  VaultAnimatedStartOffset;                                 // 0x08A0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultTraceSettings                      GroundedTraceSettings;                                    // 0x08D0(0x001C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultTraceSettings                      FallingTraceSettings;                                     // 0x08EC(0x001C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     RagdollLocation;                                          // 0x0908(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     RagdollVelocity;                                          // 0x0914(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bRagdollOnGround;                                         // 0x0920(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bRagdollFaceUp;                                           // 0x0921(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0922(0x0002) MISSED OFFSET
	struct FVector                                     PreviousVelocity;                                         // 0x0924(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PreviousAimYaw;                                           // 0x0930(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PreviousSlopeAngle;                                       // 0x0934(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCLSCharacterBattleStanceTime               BattleStanceTimeSetting;                                  // 0x0938(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UCurveVector*                                Vault1MCurve;                                             // 0x0948(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveVector*                                Vault2MCurve;                                             // 0x0950(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              Vault_2M_Default;                                         // 0x0958(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              Vault_1M_Default;                                         // 0x0998(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              Vault_1M_RH;                                              // 0x09D8(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              Vault_1M_LH;                                              // 0x0A18(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              Vault_1M_2H;                                              // 0x0A58(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              Vault_1M_Box;                                             // 0x0A98(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              Vault_Low70;                                              // 0x0AD8(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              Vault_Low70_Melee;                                        // 0x0B18(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              JumpOver_Low70;                                           // 0x0B58(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              JumpOver_Low70_Melee;                                     // 0x0B98(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              JumpOver_1M;                                              // 0x0BD8(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              JumpOver_1M_Under;                                        // 0x0C18(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              JumpOver_1M_Damage;                                       // 0x0C58(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              JumpOver_1M_Dying;                                        // 0x0C98(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              JumpOver_1M_Dead;                                         // 0x0CD8(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              JumpOver_2M;                                              // 0x0D18(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              JumpOver2M_Damage;                                        // 0x0D58(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              JumpOver_2M_Under;                                        // 0x0D98(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              JumpOver_2M_Dying;                                        // 0x0DD8(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              JumpOver_2M_Dead;                                         // 0x0E18(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              JumpOver_Window;                                          // 0x0E58(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVaultAsset                              JumpOver_Window_Under;                                    // 0x0E98(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     NotMovingPivotOffset;                                     // 0x0ED8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     WalkingPivotOffset;                                       // 0x0EE4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     RunningPivotOffset;                                       // 0x0EF0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SprintingPivotOffset;                                     // 0x0EFC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     CrouchSprintingPivotOffset;                               // 0x0F08(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchPivotOffsetZRatio;                                  // 0x0F14(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PronePivotOffsetZRatio;                                   // 0x0F18(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     AddPronePivotOffset;                                      // 0x0F1C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     WalkingPivotLerpSpeed;                                    // 0x0F28(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     RunningPivotLerpSpeed;                                    // 0x0F34(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SprintingPivotLerpSpeed;                                  // 0x0F40(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     CrouchSprintingPivotLerpSpeed;                            // 0x0F4C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WalkingAddFOV;                                            // 0x0F58(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RunningAddFOV;                                            // 0x0F5C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SprintingAddFOV;                                          // 0x0F60(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchSprintingAddFOV;                                    // 0x0F64(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WalkingAddFOVLerpSpeed;                                   // 0x0F68(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RunningAddFOVLerpSpeed;                                   // 0x0F6C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SprintingAddFOVLerpSpeed;                                 // 0x0F70(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchSprintingAddFOVLerpSpeed;                           // 0x0F74(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     DeadPivotOffset;                                          // 0x0F78(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ShoulderViewChangedInterpolationSpeed;                    // 0x0F84(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     FPStandingOffset;                                         // 0x0F88(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     FPCrouchingOffset;                                        // 0x0F94(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     PrePivot;                                                 // 0x0FA0(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bShoulderViewChanged;                                     // 0x0FAC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0FAD(0x0003) MISSED OFFSET
	float                                              PrevPivotY;                                               // 0x0FB0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     CurrentAdditionalFPCameraOffset;                          // 0x0FB4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData10[0x10C];                                     // 0x0FC0(0x010C) MISSED OFFSET
	bool                                               IsJumping;                                                // 0x10CC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               IsJumpOverVault;                                          // 0x10CD(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	ECLSVaultType                                      CurrVaultType;                                            // 0x10CE(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               IsPlayingVault;                                           // 0x10CF(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FVector                                     PrevVaultPos;                                             // 0x10D0(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              StartVaultPosition;                                       // 0x10DC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              PrevZValue;                                               // 0x10E0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData11[0xC];                                       // 0x10E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.CLSCharacter"));
		return ptr;
	}


	void Walk();
	void VaultUpdate(float BlendIn);
	void VaultStart(float VaultHeight, float VaultEndHeight, ECLSVaultType VaultType, struct FCLSComponentTransform* VaultLedgeWS);
	bool VaultIsCheckJumpOver(const struct FCLSVaultTraceSettings& TraceSettings, const struct FVector& TraceStart, bool IsWindow, struct FHitResult* JumpHitResult);
	void VaultEnd();
	bool VaultCheckWall(const struct FVector& FeetLocation, const struct FCLSVaultTraceSettings& TraceSettings, TEnumAsByte<ETraceTypeQuery> TraceType, struct FVector* ImpectPoint, struct FVector* ImpectNormal, struct FVector* TraceNormal, struct FVector* WindowFloor, bool* IsWindow);
	bool VaultCheckGround();
	bool VaultCheckFalling();
	bool VaultCheck(const struct FCLSVaultTraceSettings& TraceSettings);
	void UnRagdoll(bool bUseNetworking);
	void ToRagdoll(bool bUseNetworking);
	void SwimUp();
	void SwimDown();
	void Stand();
	void Sprint();
	void SetWeaponObject(class UObject* WeaponObject);
	void SetVehicleObject(class UObject* VehicleObject);
	void SetRotationMode(ECLSRotationMode NewRotationMode);
	void SetRightShoulder(bool NewRightShoulder);
	void SetPressedSprintState(bool IsPressed);
	void SetLadderState(ECLSLadderState NewLadderState);
	void SetBattleStance(ECLSBattleStance NewBattleStance);
	void Server_VaultStart(float VaultHeight, float VaultEndHeight, const struct FCLSComponentTransform& VaultLedgeWS, ECLSVaultType VaultType);
	void Server_UpdateRagdoll(const struct FVector& NewVelocity, const struct FVector& NewRagdollLocation, const struct FVector& NewActorLocation, const struct FRotator& NewActorRotation);
	void Server_UnRagdoll(bool bOnGround);
	void Server_ToRagdoll();
	void Server_StopAnimNetworked(const struct FCLSAnimation& AnimToStop, float BlendOut);
	void Server_StopAnimGroupNetworked(ECLSAnimationGroup GroupType, float BlendOut);
	void Server_SetTurnTargetRotation(const struct FRotator& NewRotation);
	void Server_SetSmoothTargetRotation(const struct FRotator& NewRotation);
	void Server_SetRotationMode(ECLSRotationMode NewRotationMode);
	void Server_SetRightShoulder(bool InRightShoulder);
	void Server_SetLookingRotation(const struct FRotator& NewRotation);
	void Server_SetLookAroundRotation(const struct FRotator& NewRotation);
	void Server_SetLookAround(bool InLookAround);
	void Server_SetLadderState(ECLSLadderState NewLadderState);
	void Server_SetLadder(class AActor* NewLadder);
	void Server_SetDesiredPeekState(ECLSPeekState NewPeekState);
	void Server_SetDesiredFiringState(bool bFiring);
	void Server_SetBattleStance(ECLSBattleStance NewBattleStance);
	void Server_ResetRotation(const struct FRotator& NewRotation);
	void Server_PlayAnimNetworked(const struct FCLSAnimation& Animation, const struct FName& SectionName, float PlayRate, float StartPosition, bool bStopMontages);
	void Server_MontangeSetNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, const struct FCLSAnimation& Animation);
	void Server_LadderTopEntry(class AActor* NewLader);
	void Server_ClearLadder();
	void Run();
	void RequestLadderTopEntry(class AActor* EntryTarget);
	void Prone();
	void PeekStop();
	void PeekRight(bool Flag);
	void PeekLeft(bool Flag);
	void OnRep_SetRotationMode();
	void OnRep_SetRightShoulder();
	void OnRep_SetLookingRotation();
	void OnRep_SetBattleStance();
	void OnRep_IsWalk();
	void OnRep_IsSprint();
	void OnRep_IsProned();
	void OnRep_IsLookFocus();
	void Multicast_VaultStart(float VaultHeight, float VaultEndHeight, const struct FCLSComponentTransform& VaultLedgeWS, ECLSVaultType VaultType);
	void Multicast_UpdateRagdoll(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void Multicast_UnRagdoll(bool bOnGround);
	void Multicast_ToRagdoll();
	void Multicast_StopAnimNetworked(const struct FCLSAnimation& AnimToStop, float BlendOut);
	void Multicast_StopAnimGroupNetworked(ECLSAnimationGroup GroupType, float BlendOut);
	void Multicast_SetTurnTargetRotation(const struct FRotator& NewRotation);
	void Multicast_SetLadderState(ECLSLadderState NewLadderState);
	void Multicast_SetLadder(class AActor* NewLadder);
	void Multicast_ResetRotation(const struct FRotator& NewRotation);
	void Multicast_PlayAnimNetworked(const struct FCLSAnimation& Animation, const struct FName& SectionName, float PlayRate, float StartPosition, bool bStopMontages);
	void Multicast_MontageSetNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, const struct FCLSAnimation& Animation);
	void Multicast_LadderTopEntry(class AActor* NewLadder);
	void Multicast_ClearLadder();
	void MoveUp(float AxisValue);
	void MoveRight(float AxisValue);
	void MoveForward(float AxisValue);
	void LookUp(float AxisValue);
	void LookRight(float AxisValue);
	void LookFocus(bool Value);
	void Latent_SmoothRotateOnProne();
	void Latent_SetKeepWalking();
	void Latent_SetBattleStanceRelaxed();
	void Latent_SetBattleStanceReady();
	void Latent_PendingGroundRotate();
	void Latent_OnLanded();
	void K2_OnWeaponActionChanged(ECLSWeaponAction PrevWeaponAction);
	void K2_OnMovementActionChanged(ECLSMovementAction PrevMovementAction);
	void K2_OnCommonActionChanged(ECLSCommonAction PrevCommonAction);
	bool K2_IsHoldingBreath();
	struct FDataTableRowHandle K2_GetVehiclePoseHandle(class UObject* TargetObject);
	struct FDataTableRowHandle K2_GetGroundPoseHandle(class UObject* TargetObject);
	struct FDataTableRowHandle K2_GetGripPoseHandle(class UObject* TargetObject);
	struct FCLSAnimation K2_GetCommonAnimation(const struct FName& MainName, const struct FName& SubName, bool bUseRandom, int Index);
	class UCameraComponent* K2_GetCameraFP();
	struct FCLSCharacterAdditional K2_GetAdditionalStates();
	struct FVector GetVaultFeetLoaction(const struct FVector& FeetLocation);
	void FiringState(bool bFiring);
};


// Class CrowLocomotionSystem.CLSCharacterAnimInstance
// 0x0930 (0x0BF0 - 0x02C0)
class UCLSCharacterAnimInstance : public UAnimInstance
{
public:
	class ACharacter*                                  Character;                                                // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CurrentDeltaSeconds;                                      // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ConstFloatOne;                                            // 0x02CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ConstFloatZero;                                           // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SecondaryMotionAlpha;                                     // 0x02D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSMovementMode                                   CurrentMovementMode;                                      // 0x02D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSMovementMode                                   PrevMovementMode;                                         // 0x02D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSMovementAction                                 MovementAction;                                           // 0x02DA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSWeaponAction                                   WeaponAction;                                             // 0x02DB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSRotationMode                                   RotationMode;                                             // 0x02DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSGait                                           Gait;                                                     // 0x02DD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSStance                                         Stance;                                                   // 0x02DE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSBattleStance                                   BattleStance;                                             // 0x02DF(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSViewMode                                       ViewMode;                                                 // 0x02E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSOverlayState                                   OverlayState;                                             // 0x02E1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSPeekState                                      PeekState;                                                // 0x02E2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUsingFPCam;                                              // 0x02E3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    AimingRotation;                                           // 0x02E4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    CDBoneAimingRotation;                                     // 0x02F0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     Velocity;                                                 // 0x02FC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     RelativeVelocityDirection;                                // 0x0308(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     Acceleration;                                             // 0x0314(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     MovementInput;                                            // 0x0320(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsMoving;                                                // 0x032C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHasMovementInput;                                        // 0x032D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x2];                                       // 0x032E(0x0002) MISSED OFFSET
	float                                              Speed;                                                    // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MovementInputAmount;                                      // 0x0334(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AimYawRate;                                               // 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ZoomAmount;                                               // 0x033C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsUsingProneOffset;                                      // 0x0340(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	float                                              StandToCrouchAnimRate;                                    // 0x0344(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StandToProneAnimRate;                                     // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchToStandAnimRate;                                    // 0x034C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchToProneAnimRate;                                    // 0x0350(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ProneToStandAnimRate;                                     // 0x0354(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ProneToCrouchAnimRate;                                    // 0x0358(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSAdditionalState                                AdditionalMainState;                                      // 0x035C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      AdditionalSubState;                                       // 0x035D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSMovementDirection                              MovementDirection;                                        // 0x035E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSHipsDirection                                  TrackedHipDirection;                                      // 0x035F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     RelativeAccelerationAmount;                               // 0x0360(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bShouldMove;                                              // 0x036C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bRotate_L;                                                // 0x036D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bRotate_R;                                                // 0x036E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bPivot;                                                   // 0x036F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bSkipFootIK;                                              // 0x0370(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bSkipHandIK;                                              // 0x0371(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bStopLookAndIK;                                           // 0x0372(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bStopFootLock;                                            // 0x0373(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RotateOffset;                                             // 0x0374(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RotateDistance;                                           // 0x0378(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RotateRate;                                               // 0x037C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RotationScale;                                            // 0x0380(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DiagonalScaleAmount;                                      // 0x0384(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WalkRunBlend;                                             // 0x0388(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StandingPlayRate;                                         // 0x038C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchingPlayRate;                                        // 0x0390(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PronePlayRate;                                            // 0x0394(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SwimPlayRate;                                             // 0x0398(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StrideBlend;                                              // 0x039C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchingStrideBlend;                                     // 0x03A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCLSVelocityBlend                           VelocityBlend;                                            // 0x03A4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSLeanAmount                              LeanAmount;                                               // 0x03B4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              FYaw;                                                     // 0x03BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BYaw;                                                     // 0x03C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LYaw;                                                     // 0x03C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RYaw;                                                     // 0x03C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSVehicleType                                    VehicleType;                                              // 0x03CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSVehicleSeatType                                VehicleSeatType;                                          // 0x03CD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03CE(0x0002) MISSED OFFSET
	float                                              VehicleMovingDirectionForwardRatio;                       // 0x03D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VehicleMovingDirectionRightRatio;                         // 0x03D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bVehicleInvalidData;                                      // 0x03D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	struct FRotator                                    PeekLeftRotation;                                         // 0x03DC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    PeekRightRotation;                                        // 0x03E8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              PeekLeftWeight;                                           // 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PeekRightWeight;                                          // 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bJumped;                                                  // 0x03FC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	float                                              JumpPlayRate;                                             // 0x0400(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              FallSpeed;                                                // 0x0404(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LandPrediction;                                           // 0x0408(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SwimImmersionDepth;                                       // 0x040C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SwimPelvisAdjust;                                         // 0x0410(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SwimPelvisPitch;                                          // 0x0414(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   SkyDivingInput;                                           // 0x0418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SkyDivingRoll;                                            // 0x0420(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    SmoothedAimingRotation;                                   // 0x0424(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    SpineRotation;                                            // 0x0430(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   AimingAngle;                                              // 0x043C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   SmoothedAimingAngle;                                      // 0x0444(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   AimOffsetAngle;                                           // 0x044C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AimSweepTime;                                             // 0x0454(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              InputYawOffsetTime;                                       // 0x0458(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ForwardYawTime;                                           // 0x045C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LeftYawTime;                                              // 0x0460(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RightYawTime;                                             // 0x0464(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Enable_SecondarySight;                                    // 0x0468(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     CDBoneModificationBySituation;                            // 0x046C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LadderStepHeight;                                         // 0x0478(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LadderStepPosition;                                       // 0x047C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSLadderState                                    LadderState;                                              // 0x0480(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsAliving;                                               // 0x0481(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECLSStance                                         AlivingStance;                                            // 0x0482(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsUpSlope;                                               // 0x0483(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SlopePoseBlendingAlpha;                                   // 0x0484(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              FlailRate;                                                // 0x0488(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                OverlayOverrideState;                                     // 0x048C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Enable_AimOffset;                                         // 0x0490(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Enable_AfterAimOffsetL;                                   // 0x0494(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Enable_AfterAimOffsetR;                                   // 0x0498(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BasePose_Stand;                                           // 0x049C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BasePose_Crouch;                                          // 0x04A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BasePose_Prone;                                           // 0x04A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Arm_L;                                                    // 0x04A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Arm_L_Add;                                                // 0x04AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Arm_L_LS;                                                 // 0x04B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Arm_L_MS;                                                 // 0x04B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Arm_R;                                                    // 0x04B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Arm_R_Add;                                                // 0x04BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Arm_R_LS;                                                 // 0x04C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Arm_R_MS;                                                 // 0x04C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              hand_l;                                                   // 0x04C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              hand_r;                                                   // 0x04CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Legs;                                                     // 0x04D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Legs_Add;                                                 // 0x04D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Pelvis;                                                   // 0x04D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Pelvis_Add;                                               // 0x04DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Spine;                                                    // 0x04E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Spine_Add;                                                // 0x04E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Head;                                                     // 0x04E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Head_Add;                                                 // 0x04EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Enable_GripIK_L;                                          // 0x04F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Enable_GripIK_R;                                          // 0x04F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                GripIKLFindPriorityIndex;                                 // 0x04F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Enable_HandIK_L;                                          // 0x04FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Enable_HandIK_R;                                          // 0x0500(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Enable_TargetIK_L;                                        // 0x0504(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Enable_TargetIK_R;                                        // 0x0508(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Enable_HandsFollowToHead;                                 // 0x050C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Enable_HandLFollowToHead;                                 // 0x0510(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Arm_L_Overwrite;                                          // 0x0514(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0518(0x0008) MISSED OFFSET
	struct FTransform                                  LeftHandIK;                                               // 0x0520(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FTransform                                  RightHandIK;                                              // 0x0550(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bLeftValidHandIKTransform;                                // 0x0580(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bRightValidHandIKTransform;                               // 0x0581(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0582(0x0002) MISSED OFFSET
	float                                              Enable_GripPose_L;                                        // 0x0584(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Enable_GripPose_R;                                        // 0x0588(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    LastUpdatedRotation;                                      // 0x058C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              FootLock_L_Alpha;                                         // 0x0598(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              FootLock_R_Alpha;                                         // 0x059C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     FootLock_L_Location;                                      // 0x05A0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     FootLock_R_Location;                                      // 0x05AC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    FootLock_L_Rotation;                                      // 0x05B8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    FootLock_R_Rotation;                                      // 0x05C4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     FootOffset_L_Location;                                    // 0x05D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     FootOffset_R_Location;                                    // 0x05DC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    FootOffset_L_Rotation;                                    // 0x05E8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    FootOffset_R_Rotation;                                    // 0x05F4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     PelvisOffset;                                             // 0x0600(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     PelvisTranslation;                                        // 0x060C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PelvisAlpha;                                              // 0x0618(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     ProneNormal_Pelvis;                                       // 0x061C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     ProneOffset_Pelvis;                                       // 0x0628(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     ProneOffset_Spine;                                        // 0x0634(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     ProneOffset_Calf_L;                                       // 0x0640(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     ProneOffset_Calf_R;                                       // 0x064C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCLSCharacterAimBobInfo                     AimBobInfo;                                               // 0x0658(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              AimBobAlpha;                                              // 0x0688(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AimBobStartRatio;                                         // 0x068C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AimBobPlayRate;                                           // 0x0690(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AimBobElapsed;                                            // 0x0694(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TurnCheckMinAngle;                                        // 0x0698(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Turn180Threshold;                                         // 0x069C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AimYawRateLimit;                                          // 0x06A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ElapsedDelayTime;                                         // 0x06A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MinAngleDelay;                                            // 0x06A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxAngleDelay;                                            // 0x06AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsBlendingNoOffset;                                      // 0x06B0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData07[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	struct FCLSTurnInPlaceAsset                        Stand_TurnIP_L90;                                         // 0x06B8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSTurnInPlaceAsset                        Stand_TurnIP_R90;                                         // 0x06D8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSTurnInPlaceAsset                        Stand_TurnIP_L180;                                        // 0x06F8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSTurnInPlaceAsset                        Stand_TurnIP_R180;                                        // 0x0718(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSTurnInPlaceAsset                        Crouch_TurnIP_L90;                                        // 0x0738(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSTurnInPlaceAsset                        Crouch_TurnIP_R90;                                        // 0x0758(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSTurnInPlaceAsset                        Crouch_TurnIP_L180;                                       // 0x0778(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSTurnInPlaceAsset                        Crouch_TurnIP_R180;                                       // 0x0798(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              RotateMinThreshold;                                       // 0x07B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RotateMaxThreshold;                                       // 0x07BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AimYawRateMinRange;                                       // 0x07C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AimYawRateMaxRange;                                       // 0x07C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MinPlayRate;                                              // 0x07C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxPlayRate;                                              // 0x07CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 DiagonalScaleAmountCurve;                                 // 0x07D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 StrideBlend_Stand_Walk;                                   // 0x07D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 StrideBlend_Stand_Run;                                    // 0x07E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 StrideBlend_Crouch_Walk;                                  // 0x07E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 StrideBlend_Crouch_Run;                                   // 0x07F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 StrideBlend_Prone_Walk;                                   // 0x07F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 LandPredictionCurve;                                      // 0x0800(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 LeanInAirCurve;                                           // 0x0808(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveVector*                                YawOffset_FB;                                             // 0x0810(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveVector*                                YawOffset_LR;                                             // 0x0818(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AnimatedWalkSpeed;                                        // 0x0820(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AnimatedRunSpeed;                                         // 0x0824(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AnimatedSprintSpeed;                                      // 0x0828(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AnimatedCrouchWalkSpeed;                                  // 0x082C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AnimatedCrouchRunSpeed;                                   // 0x0830(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AnimatedCrouchSprintSpeed;                                // 0x0834(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AnimatedProneSpeed;                                       // 0x0838(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AnimatedProneWalkSpeed;                                   // 0x083C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AnimatedSwimSpeed;                                        // 0x0840(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AnimatedSwimSprintSpeed;                                  // 0x0844(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VelocityBlendInterpSpeed;                                 // 0x0848(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              GroundedLeanInterpSpeed;                                  // 0x084C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              InAirLeanInterpSpeed;                                     // 0x0850(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VehicleLeanInterpSpeed;                                   // 0x0854(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SmoothedAimingRotationInterpSpeed;                        // 0x0858(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              InputYawOffsetInterpSpeed;                                // 0x085C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TriggerPivotSpeedLimit;                                   // 0x0860(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              FootHeight;                                               // 0x0864(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              IK_TraceDistanceAboveFoot;                                // 0x0868(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              IK_TraceDistanceBelowFoot;                                // 0x086C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              IK_TraceDistanceBelowFootOnProne;                         // 0x0870(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PelvisDownwardTraceDistance;                              // 0x0874(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PelvisOffsetLerpSpeed;                                    // 0x0878(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanPlayDynamicTransition;                                // 0x087C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData08[0x3];                                       // 0x087D(0x0003) MISSED OFFSET
	struct FCLSGroundPose                              GroundPose;                                               // 0x0880(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSVehiclePose                             VehiclePose;                                              // 0x08D8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCLSGripPose                                GripPose;                                                 // 0x0900(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnStandStopR;                                         // 0x0910(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnStandStopL;                                         // 0x0918(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnCrouchStop;                                         // 0x0920(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnStandQuickStop;                                     // 0x0928(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnRollToIdle;                                         // 0x0930(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnLandToIdle;                                         // 0x0938(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnRelaxedToReady;                                     // 0x0940(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnReadyToRelaxed;                                     // 0x0948(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnBowRelaxedToReady;                                  // 0x0950(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnBowReadyToRelaxed;                                  // 0x0958(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnM4A1RelaxedToReady;                                 // 0x0960(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnM4A1ReadyToRelaxed;                                 // 0x0968(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnPistol1HRelaxedToReady;                             // 0x0970(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnPistol1HReadyToRelaxed;                             // 0x0978(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnPistol2HRelaxedToReady;                             // 0x0980(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnPistol2HReadyToRelaxed;                             // 0x0988(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnTransitionR;                                        // 0x0990(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           AnimOnTransitionL;                                        // 0x0998(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StandRelaxedPauseTime;                                    // 0x09A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StandRelaxedUpSlopePauseTime;                             // 0x09A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StandRelaxedDownSlopePauseTime;                           // 0x09A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StandRelaxedMovingPauseTime;                              // 0x09AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StandReadyPauseTime;                                      // 0x09B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StandReadyMovingPauseTime;                                // 0x09B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StandBattlePauseTime;                                     // 0x09B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StandBattleUpSlopePauseTime;                              // 0x09BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StandBattleDownSlopePauseTime;                            // 0x09C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StandBattleMovingPauseTime;                               // 0x09C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StandAimPauseTime;                                        // 0x09C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StandAimMovingPauseTime;                                  // 0x09CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StandSprintPauseTime;                                     // 0x09D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchRelaxedPauseTime;                                   // 0x09D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchRelaxedUpSlopePauseTime;                            // 0x09D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchRelaxedDownSlopePauseTime;                          // 0x09DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchRelaxedMovingPauseTime;                             // 0x09E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchReadyPauseTime;                                     // 0x09E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchReadyMovingPauseTime;                               // 0x09E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchBattlePauseTime;                                    // 0x09EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchBattleUpSlopePauseTime;                             // 0x09F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchBattleDownSlopePauseTime;                           // 0x09F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchBattleMovingPauseTime;                              // 0x09F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchAimPauseTime;                                       // 0x09FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchAimMovingPauseTime;                                 // 0x0A00(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ProneRelaxedPauseTime;                                    // 0x0A04(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ProneRelaxedMovingPauseTime;                              // 0x0A08(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ProneReadyPauseTime;                                      // 0x0A0C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ProneReadyMovingPauseTime;                                // 0x0A10(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ProneBattlePauseTime;                                     // 0x0A14(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ProneBattleMovingPauseTime;                               // 0x0A18(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ProneAimPauseTime;                                        // 0x0A1C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ProneAimMovingPauseTime;                                  // 0x0A20(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              FallingPauseTime;                                         // 0x0A24(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LandPredictionPauseTime;                                  // 0x0A28(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              FallingBattlePauseTime;                                   // 0x0A2C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LandPredictionBattlePauseTime;                            // 0x0A30(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VaultLowPauseTime;                                        // 0x0A34(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VaultHighPauseTime;                                       // 0x0A38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              GetUpDefaultPauseTime;                                    // 0x0A3C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              GetUpInjuredPauseTime;                                    // 0x0A40(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VehicleBoardingPauseTime;                                 // 0x0A44(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              OnVehiclePauseTime;                                       // 0x0A48(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              OnVehicleBattlePauseTime;                                 // 0x0A4C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              OnHellicopterBattlePauseTime;                             // 0x0A50(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VehicleRelaxedPauseTime;                                  // 0x0A54(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VehicleBattlePauseTime;                                   // 0x0A58(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualBattleStance_Relaxed : 1;                            // 0x0A5C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualBattleStance_Ready : 1;                              // 0x0A5C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualBattleStance_Directed : 1;                           // 0x0A5C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualBattleStance_Aiming : 1;                             // 0x0A5C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOrMoreBattleStance_Relaxed : 1;                      // 0x0A5C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOrMoreBattleStance_Ready : 1;                        // 0x0A5C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOrMoreBattleStance_Directed : 1;                     // 0x0A5C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOrMoreBattleStance_Aiming : 1;                       // 0x0A5C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOrLessBattleStance_Relaxed : 1;                      // 0x0A5D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOrLessBattleStance_Ready : 1;                        // 0x0A5D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOrLessBattleStance_Directed : 1;                     // 0x0A5D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOrLessBattleStance_Aiming : 1;                       // 0x0A5D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOrMoreBattleStance_Drected_OnVehicle : 1;            // 0x0A5D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOverlayState_Default : 1;                            // 0x0A5D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOverlayState_Rifle : 1;                              // 0x0A5D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOverlayState_HandGun1H : 1;                          // 0x0A5D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOverlayState_HandGun2H : 1;                          // 0x0A5E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOverlayState_Melee1H : 1;                            // 0x0A5E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOverlayState_Melee2H : 1;                            // 0x0A5E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOverlayState_Item1H : 1;                             // 0x0A5E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOverlayState_Item2H : 1;                             // 0x0A5E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOverlayState_VehicleWeapon : 1;                      // 0x0A5E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      EqualOverlayState_NotLayering : 1;                        // 0x0A5E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      NotOverlayState_Default : 1;                              // 0x0A5E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      NotOverlayState_Rifle : 1;                                // 0x0A5F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      NotOverlayState_HandGun1H : 1;                            // 0x0A5F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      NotOverlayState_HandGun2H : 1;                            // 0x0A5F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      NotOverlayState_Melee1H : 1;                              // 0x0A5F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      NotOverlayState_Melee2H : 1;                              // 0x0A5F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      NotOverlayState_Item1H : 1;                               // 0x0A5F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      NotOverlayState_Item2H : 1;                               // 0x0A5F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      NotOverlayState_VehicleWeapon : 1;                        // 0x0A5F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      NotOverlayState_NotLayering : 1;                          // 0x0A60(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UseOverlayState : 1;                                      // 0x0A60(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0A61(0x0007) MISSED OFFSET
	struct FCLSLadderAnimSet                           LaddAnimSet;                                              // 0x0A68(0x00F0) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      CLSTest_UseMovingAnimationOnSlope : 1;                    // 0x0B58(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0B59(0x0003) MISSED OFFSET
	float                                              HoldBreathUpTime;                                         // 0x0B5C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HoldBreathDownTime;                                       // 0x0B60(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCLSLeanAmount                              PrevVehicleLeanAmmount;                                   // 0x0B64(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData11[0x84];                                      // 0x0B6C(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.CLSCharacterAnimInstance"));
		return ptr;
	}


	void TraceVerticalOffset(const struct FName& SocketName, float OriginalHeight, struct FVector* InOutOffset, struct FVector* OutNormal);
	void Latent_StopLookAndIK();
	void Latent_StopFootLock();
	void Latent_OnPlayDynamicTransition();
	void Latent_OnJumped();
	void Latent_OnAnimNotifyPivot();
	bool IsSwimMoving(float MinOnSurface, float MinOnUnderWater);
	bool IsOwnFPCamActive();
	bool IsEqualOrMoreBattleStance(ECLSBattleStance CheckStance);
	bool IsEqualOrLessBattleStance(ECLSBattleStance CheckStance);
	bool IsEqualBattleStance(ECLSBattleStance CheckStance);
	bool IsAimThrowableMelee();
	bool IsAimSecondarySight();
	struct FVector InterpOffset(const struct FVector& InCurrent, const struct FVector& InTarget, float DeltaSeconds, float InterpSpeed);
	float GetSwimDirection(float MinOnSurface, float MinOnUnderWater);
	float GetSecondaryMotionAlpha(float InAlpha);
	struct FCLSLadderAnimSet GetLadderAnimSet();
	struct FCLSPoseExplicit GetExplicitVehicle(bool bIsBattle);
	struct FCLSPoseExplicit GetExplicitGround(ECLSBasePoseType PoseType);
	class UBlendSpaceBase* GetDriverAO();
	class UBlendSpaceBase* GetAimOffsetVehicle(bool bIsBattle);
	class UBlendSpaceBase* GetAimOffsetStand();
	class UBlendSpaceBase* GetAimOffsetProne();
	struct FVector2D GetAimOffsetAngle();
	void AnimNotify_StopTransition();
	void AnimNotify_StandStopR();
	void AnimNotify_StandStopL();
	void AnimNotify_StandQuickStop();
	void AnimNotify_RollToIdle();
	void AnimNotify_ResetGroundedEntryState();
	void AnimNotify_RelaxedToReady();
	void AnimNotify_Pivot();
	void AnimNotify_Pistol2HRelaxedToReady();
	void AnimNotify_Pistol2HReadyToRelaxed();
	void AnimNotify_Pistol1HRelaxedToReady();
	void AnimNotify_Pistol1HReadyToRelaxed();
	void AnimNotify_M4A1RelaxedToReady();
	void AnimNotify_M4A1ReadyToRelaxed();
	void AnimNotify_LandToIdle();
	void AnimNotify_HipsRF();
	void AnimNotify_HipsRB();
	void AnimNotify_HipsLF();
	void AnimNotify_HipsLB();
	void AnimNotify_HipsF();
	void AnimNotify_HipsB();
	void AnimNotify_CrouchStop();
	void AnimNotify_BowRelaxedToReady();
	void AnimNotify_BowReadyToRelaxed();
	void AnimNotify_BlendOutNoOffset();
	void AnimNotify_BlendInNoOffset();
	void AnimNoitfy_ReadyToRelaxed();
};


// Class CrowLocomotionSystem.CLSCharacterMovement
// 0x0070 (0x0B70 - 0x0B00)
class UCLSCharacterMovement : public UCharacterMovementComponent
{
public:
	bool                                               bUseSlopeSpeedAtteunation;                                // 0x0B00(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseSprintInhibitionSlope;                                // 0x0B01(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0B02(0x0002) MISSED OFFSET
	struct FCLSSpeedAtteunationOnSlope                 SpeedAtteunationOnSlopeInfo;                              // 0x0B04(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              StandedHalfHeight;                                        // 0x0B14(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PronedHalfHeight;                                         // 0x0B18(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bWantsToProne : 1;                                        // 0x0B1C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bWantsToSprint : 1;                                       // 0x0B1C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bWantsToWalk : 1;                                         // 0x0B1C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bWantsToLookFocus : 1;                                    // 0x0B1C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B1D(0x0003) MISSED OFFSET
	float                                              SwimImmersionDepth;                                       // 0x0B20(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     WaterPlaneLocation;                                       // 0x0B24(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     WaterWaveLocation;                                        // 0x0B30(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     WaterSurfaceNormal;                                       // 0x0B3C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class APhysicsVolume>               WaterVolumePtr;                                           // 0x0B48(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AWaterBody>                   WaterBodyPtr;                                             // 0x0B50(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                       WaterPlanePtr;                                            // 0x0B58(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WaterBodyImmersionDepth;                                  // 0x0B60(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0B64(0x0004) MISSED OFFSET
	class ACLSCharacter*                               CachedCharacter;                                          // 0x0B68(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.CLSCharacterMovement"));
		return ptr;
	}


	void OnWaterPlaneOverlapEnd(class AActor* InWaterPlaneActor);
	void OnWaterPlaneOverlapBegin(class AActor* InWaterPlaneActor);
	void OnWaterBodyOverlapEnd(class AWaterBody* InWaterBodyActor);
	void OnWaterBodyOverlapBegin(class AWaterBody* InWaterBodyActor, bool InIsAlight);
	void OnCapsuleOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnCapsuleOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CheckWaterAndCallOverlapBegin();
};


// Class CrowLocomotionSystem.CLSAnimationInterface
// 0x0000 (0x0028 - 0x0028)
class UCLSAnimationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.CLSAnimationInterface"));
		return ptr;
	}

};


// Class CrowLocomotionSystem.CLSCameraInterface
// 0x0000 (0x0028 - 0x0028)
class UCLSCameraInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.CLSCameraInterface"));
		return ptr;
	}

};


// Class CrowLocomotionSystem.CLSCharacterInterface
// 0x0000 (0x0028 - 0x0028)
class UCLSCharacterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.CLSCharacterInterface"));
		return ptr;
	}


	void K2_StopAnimNetworked(const struct FCLSAnimation& Animation, float BlendOut);
	void K2_StopAnimGroupNetworked(ECLSAnimationGroup GroupType, float BlendOut);
	void K2_StopAnimationGroup(ECLSAnimationGroup GroupType, float BlendOut);
	void K2_StopAnimation(const struct FCLSAnimation& Animation, float BlendOut);
	float K2_PlayAnimNetworkedFromTable(const struct FName& MainName, const struct FName& SubName, const struct FName& SectionName, float PlayRate, float StartPosition, bool bStopMontages);
	float K2_PlayAnimNetworked(const struct FCLSAnimation& Animation, const struct FName& SectionName, float PlayRate, float StartPosition, bool bStopMontages);
	float K2_PlayAnimation(const struct FCLSAnimation& Animation, bool bIsLoop, const struct FName& SectionName, float PlayRate, float StartPosition, bool bStopMontages);
	void K2_OnWeaponChanged(class UObject* WeaponObject);
	void K2_OnVehicleChanged(class UObject* VehicleObject);
};


// Class CrowLocomotionSystem.CLSHandIKInterface
// 0x0000 (0x0028 - 0x0028)
class UCLSHandIKInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.CLSHandIKInterface"));
		return ptr;
	}


	struct FCLSCharacterHandIK K2_GetHandIKTargetByPawn(class APawn* InPawn, bool bIsFPModel, int FindPriorityIndex);
	struct FCLSCharacterHandIK K2_GetHandIKTarget(bool bIsFPModel, int FindPriorityIndex);
};


// Class CrowLocomotionSystem.CLSLadderInterface
// 0x0000 (0x0028 - 0x0028)
class UCLSLadderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.CLSLadderInterface"));
		return ptr;
	}

};


// Class CrowLocomotionSystem.CLSLibrary
// 0x0000 (0x0028 - 0x0028)
class UCLSLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.CLSLibrary"));
		return ptr;
	}


	static bool IsExistLatentAction(class UObject* WorldContextObject, class UObject* InActionObject, int InUUID);
	static struct FCLSVehiclePoseSet GetVehiclePoseSet(class UDataTable* DataTable, const struct FName& RowName);
	static struct FCLSVehiclePose GetVehiclePose(const struct FCLSVehiclePoseSet& PoseSet, int SeatIndex);
	static struct FVector GetRebasedWorldLocation(class UObject* WorldContextObject, const struct FVector& InLocation);
	static struct FVector GetRealWorldLocation(class UObject* WorldContextObject, const struct FVector& InLocation);
	static struct FCLSGroundPoseSet GetGroundPoseSet(class UDataTable* DataTable, const struct FName& RowName);
	static struct FCLSGroundPose GetGroundPose(const struct FCLSGroundPoseSet& PoseSet, const struct FName& GripParts);
	static struct FCLSGripPose GetGripPose(class UDataTable* DataTable, const struct FName& RowName, const struct FName& WeaponTextIndex);
	static struct FCLSAnimation GetCommonAnimation(class UDataTable* DataTable, const struct FName& MainName, const struct FName& SubName, bool bUseRandom, int Index);
	static class UAnimMontage* FindActiveMontageByAnimSequence(class UAnimInstance* AnimInstance, class UAnimSequenceBase* Animation);
};


// Class CrowLocomotionSystem.CLSPlayerCameraAnimInstance
// 0x0010 (0x02D0 - 0x02C0)
class UCLSPlayerCameraAnimInstance : public UAnimInstance
{
public:
	ECLSMovementMode                                   MovementMode;                                             // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSMovementAction                                 MovementAction;                                           // 0x02C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSRotationMode                                   RotationMode;                                             // 0x02C2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSGait                                           Gait;                                                     // 0x02C3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSStance                                         Stance;                                                   // 0x02C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSBattleStance                                   BattleStance;                                             // 0x02C5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSViewMode                                       ViewMode;                                                 // 0x02C6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSPeekState                                      PeekState;                                                // 0x02C7(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsMoving;                                                // 0x02C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRightShoulder;                                           // 0x02C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02CA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.CLSPlayerCameraAnimInstance"));
		return ptr;
	}

};


// Class CrowLocomotionSystem.CLSPlayerCameraManager
// 0x00C0 (0x2870 - 0x27B0)
class ACLSPlayerCameraManager : public APlayerCameraManager
{
public:
	class USkeletalMeshComponent*                      CameraBehavior;                                           // 0x27B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x27B8(0x0008) MISSED OFFSET
	struct FTransform                                  SmoothedPivotTarget;                                      // 0x27C0(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PivotLocation;                                            // 0x27F0(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     TargetCameraLocation;                                     // 0x27FC(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    TargetCameraRotation;                                     // 0x2808(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              SmoothedAddFOV;                                           // 0x2814(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PeekOffset;                                               // 0x2818(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PeekToNoneBlendTime;                                      // 0x281C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              NoneToPeekBlendTime;                                      // 0x2820(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CameraPeekWeight;                                         // 0x2824(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECLSPeekState                                      PrePeekState;                                             // 0x2828(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2829(0x0003) MISSED OFFSET
	float                                              PeekCameraInterpoationSpeed;                              // 0x282C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x40];                                      // 0x2830(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.CLSPlayerCameraManager"));
		return ptr;
	}

};


// Class CrowLocomotionSystem.CLSPlayerController
// 0x0000 (0x0570 - 0x0570)
class ACLSPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowLocomotionSystem.CLSPlayerController"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
