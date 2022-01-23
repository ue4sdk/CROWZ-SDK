#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CrowLocomotionSystem.ECLSBasePoseType
enum class ECLSBasePoseType : uint8_t
{
	ECLSBasePoseType__None         = 0,
	ECLSBasePoseType__StandRelaxed = 1,
	ECLSBasePoseType__StandRelaxedUpSlope = 2,
	ECLSBasePoseType__StandRelaxedDownSlope = 3,
	ECLSBasePoseType__StandRelaxedMoving = 4,
	ECLSBasePoseType__StandReady   = 5,
	ECLSBasePoseType__StandReadyMoving = 6,
	ECLSBasePoseType__StandBattle  = 7,
	ECLSBasePoseType__StandBattleUpSlope = 8,
	ECLSBasePoseType__StandBattleDownSlope = 9,
	ECLSBasePoseType__StandBattleMoving = 10,
	ECLSBasePoseType__StandAim     = 11,
	ECLSBasePoseType__StandAimMoving = 12,
	ECLSBasePoseType__StandSprint  = 13,
	ECLSBasePoseType__CrouchRelaxed = 14,
	ECLSBasePoseType__CrouchRelaxedUpSlope = 15,
	ECLSBasePoseType__CrouchRelaxedDownSlope = 16,
	ECLSBasePoseType__CrouchRelaxedMoving = 17,
	ECLSBasePoseType__CrouchReady  = 18,
	ECLSBasePoseType__CrouchReadyMoving = 19,
	ECLSBasePoseType__CrouchBattle = 20,
	ECLSBasePoseType__CrouchBattleUpSlope = 21,
	ECLSBasePoseType__CrouchBattleDownSlope = 22,
	ECLSBasePoseType__CrouchBattleMoving = 23,
	ECLSBasePoseType__CrouchAim    = 24,
	ECLSBasePoseType__CrouchAimMoving = 25,
	ECLSBasePoseType__ProneRelaxed = 26,
	ECLSBasePoseType__ProneRelaxedMoving = 27,
	ECLSBasePoseType__ProneReady   = 28,
	ECLSBasePoseType__ProneReadyMoving = 29,
	ECLSBasePoseType__ProneBattle  = 30,
	ECLSBasePoseType__ProneBattleMoving = 31,
	ECLSBasePoseType__ProneAim     = 32,
	ECLSBasePoseType__ProneAimMoving = 33,
	ECLSBasePoseType__Falling      = 34,
	ECLSBasePoseType__LandPrediction = 35,
	ECLSBasePoseType__FallingBattle = 36,
	ECLSBasePoseType__LandPredictionBattle = 37,
	ECLSBasePoseType__Action       = 38,
	ECLSBasePoseType__VaultLow     = 39,
	ECLSBasePoseType__VaultHigh    = 40,
	ECLSBasePoseType__GetUpDefault = 41,
	ECLSBasePoseType__GetUpInjured = 42,
	ECLSBasePoseType__VehicleBoarding = 43,
	ECLSBasePoseType__OnVehicle    = 44,
	ECLSBasePoseType__OnVehicleBattle = 45,
	ECLSBasePoseType__OnHellicopterBattle = 46,
	ECLSBasePoseType__ECLSBasePoseType_MAX = 47
};


// Enum CrowLocomotionSystem.ECLSVehicleType
enum class ECLSVehicleType : uint8_t
{
	ECLSVehicleType__None          = 0,
	ECLSVehicleType__Tank          = 1,
	ECLSVehicleType__Helicopter    = 2,
	ECLSVehicleType__Car           = 3,
	ECLSVehicleType__APC           = 4,
	ECLSVehicleType__Boat          = 5,
	ECLSVehicleType__ECLSVehicleType_MAX = 6
};


// Enum CrowLocomotionSystem.ECLSVehicleSeatType
enum class ECLSVehicleSeatType : uint8_t
{
	ECLSVehicleSeatType__None      = 0,
	ECLSVehicleSeatType__Driver    = 1,
	ECLSVehicleSeatType__VehicleWeapon = 2,
	ECLSVehicleSeatType__ArmedPassenger = 3,
	ECLSVehicleSeatType__ECLSVehicleSeatType_MAX = 4
};


// Enum CrowLocomotionSystem.ECLSPeekState
enum class ECLSPeekState : uint8_t
{
	ECLSPeekState__None            = 0,
	ECLSPeekState__Left            = 1,
	ECLSPeekState__Right           = 2,
	ECLSPeekState__ECLSPeekState_MAX = 3
};


// Enum CrowLocomotionSystem.ECLSAdditionalState
enum class ECLSAdditionalState : uint8_t
{
	ECLSAdditionalState__None      = 0,
	ECLSAdditionalState__Injured   = 1,
	ECLSAdditionalState__Skydiving = 2,
	ECLSAdditionalState__ECLSAdditionalState_MAX = 3
};


// Enum CrowLocomotionSystem.ECLSAnimationGroup
enum class ECLSAnimationGroup : uint8_t
{
	ECLSAnimationGroup__Default    = 0,
	ECLSAnimationGroup__Ground     = 1,
	ECLSAnimationGroup__Layered    = 2,
	ECLSAnimationGroup__MovementAction = 3,
	ECLSAnimationGroup__ECLSAnimationGroup_MAX = 4
};


// Enum CrowLocomotionSystem.ECLSMovementDirection
enum class ECLSMovementDirection : uint8_t
{
	ECLSMovementDirection__Forward = 0,
	ECLSMovementDirection__Right   = 1,
	ECLSMovementDirection__Left    = 2,
	ECLSMovementDirection__Backward = 3,
	ECLSMovementDirection__ECLSMovementDirection_MAX = 4
};


// Enum CrowLocomotionSystem.ECLSVaultType
enum class ECLSVaultType : uint8_t
{
	ECLSVaultType__VaultHigh       = 0,
	ECLSVaultType__VaultLow        = 1,
	ECLSVaultType__VaultVeryLow    = 2,
	ECLSVaultType__FallingCatch    = 3,
	ECLSVaultType__JumpOverVeryLow = 4,
	ECLSVaultType__JumpOverLow     = 5,
	ECLSVaultType__JumpOverWindow  = 6,
	ECLSVaultType__ValutHighJumpOver = 7,
	ECLSVaultType__JumpOverHigh    = 8,
	ECLSVaultType__JumpOverWindowUnder = 9,
	ECLSVaultType__JumpOverHighUnder = 10,
	ECLSVaultType__JumpOverLowUnder = 11,
	ECLSVaultType__JumpOverLow_Damage = 12,
	ECLSVaultType__JumpOverLow_Dying = 13,
	ECLSVaultType__JumpOverLow_Dead = 14,
	ECLSVaultType__JumpOverHigh_Damage = 15,
	ECLSVaultType__JumpOverHigh_Dying = 16,
	ECLSVaultType__JumpOverHigh_Dead = 17,
	ECLSVaultType__ECLSVaultType_MAX = 18
};


// Enum CrowLocomotionSystem.ECLSPlayerState
enum class ECLSPlayerState : uint8_t
{
	ECLSPlayerState__Aliving       = 0,
	ECLSPlayerState__Alive         = 1,
	ECLSPlayerState__Dying         = 2,
	ECLSPlayerState__Other         = 3,
	ECLSPlayerState__ECLSPlayerState_MAX = 4
};


// Enum CrowLocomotionSystem.ECLSHipsDirection
enum class ECLSHipsDirection : uint8_t
{
	ECLSHipsDirection__F           = 0,
	ECLSHipsDirection__B           = 1,
	ECLSHipsDirection__RF          = 2,
	ECLSHipsDirection__RB          = 3,
	ECLSHipsDirection__LF          = 4,
	ECLSHipsDirection__LB          = 5,
	ECLSHipsDirection__ECLSHipsDirection_MAX = 6
};


// Enum CrowLocomotionSystem.ECLSViewMode
enum class ECLSViewMode : uint8_t
{
	ECLSViewMode__None             = 0,
	ECLSViewMode__ThirdPerson      = 1,
	ECLSViewMode__FirstPerson      = 2,
	ECLSViewMode__ECLSViewMode_MAX = 3
};


// Enum CrowLocomotionSystem.ECLSStance
enum class ECLSStance : uint8_t
{
	ECLSStance__Standing           = 0,
	ECLSStance__Crouching          = 1,
	ECLSStance__Prone              = 2,
	ECLSStance__ECLSStance_MAX     = 3
};


// Enum CrowLocomotionSystem.ECLSRotationMode
enum class ECLSRotationMode : uint8_t
{
	ECLSRotationMode__VelocityDirection = 0,
	ECLSRotationMode__LookingDirection = 1,
	ECLSRotationMode__CombatDirection = 2,
	ECLSRotationMode__ECLSRotationMode_MAX = 3
};


// Enum CrowLocomotionSystem.ECLSOverlayState
enum class ECLSOverlayState : uint8_t
{
	ECLSOverlayState__Default      = 0,
	ECLSOverlayState__Rifle        = 1,
	ECLSOverlayState__HandGun1H    = 2,
	ECLSOverlayState__HandGun2H    = 3,
	ECLSOverlayState__Melee1H      = 4,
	ECLSOverlayState__Melee2H      = 5,
	ECLSOverlayState__Item1H       = 6,
	ECLSOverlayState__Item2H       = 7,
	ECLSOverlayState__VehicleWeapon = 8,
	ECLSOverlayState__NotLayering  = 9,
	ECLSOverlayState__ECLSOverlayState_MAX = 10
};


// Enum CrowLocomotionSystem.ECLSBattleStance
enum class ECLSBattleStance : uint8_t
{
	ECLSBattleStance__Relaxed      = 0,
	ECLSBattleStance__Ready        = 1,
	ECLSBattleStance__Directed     = 2,
	ECLSBattleStance__Aimming      = 3,
	ECLSBattleStance__ECLSBattleStance_MAX = 4
};


// Enum CrowLocomotionSystem.ECLSCommonAction
enum class ECLSCommonAction : uint8_t
{
	ECLSCommonAction__None         = 0,
	ECLSCommonAction__Hit          = 1,
	ECLSCommonAction__Death        = 2,
	ECLSCommonAction__Burn         = 3,
	ECLSCommonAction__Injured      = 4,
	ECLSCommonAction__ECLSCommonAction_MAX = 5
};


// Enum CrowLocomotionSystem.ECLSWeaponAction
enum class ECLSWeaponAction : uint8_t
{
	ECLSWeaponAction__None         = 0,
	ECLSWeaponAction__Equip        = 1,
	ECLSWeaponAction__Unequip      = 2,
	ECLSWeaponAction__PreFire      = 3,
	ECLSWeaponAction__Fire         = 4,
	ECLSWeaponAction__PostFire     = 5,
	ECLSWeaponAction__Reload       = 6,
	ECLSWeaponAction__ReloadShort  = 7,
	ECLSWeaponAction__BoltAction   = 8,
	ECLSWeaponAction__ChangeFireMode = 9,
	ECLSWeaponAction__ECLSWeaponAction_MAX = 10
};


// Enum CrowLocomotionSystem.ECLSMovementAction
enum class ECLSMovementAction : uint8_t
{
	ECLSMovementAction__None       = 0,
	ECLSMovementAction__VaultLow   = 1,
	ECLSMovementAction__VaultHigh  = 2,
	ECLSMovementAction__GettingUp  = 3,
	ECLSMovementAction__ChangingProne = 4,
	ECLSMovementAction__ECLSMovementAction_MAX = 5
};


// Enum CrowLocomotionSystem.ECLSGait
enum class ECLSGait : uint8_t
{
	ECLSGait__NotMoving            = 0,
	ECLSGait__Walking              = 1,
	ECLSGait__Running              = 2,
	ECLSGait__Sprinting            = 3,
	ECLSGait__ECLSGait_MAX         = 4
};


// Enum CrowLocomotionSystem.ECLSLadderState
enum class ECLSLadderState : uint8_t
{
	ECLSLadderState__None          = 0,
	ECLSLadderState__LadderBottomEnter = 1,
	ECLSLadderState__LadderBottomExit = 2,
	ECLSLadderState__LadderIdle    = 3,
	ECLSLadderState__LadderUp      = 4,
	ECLSLadderState__LadderDown    = 5,
	ECLSLadderState__LadderTopEnter = 6,
	ECLSLadderState__LadderTopExit = 7,
	ECLSLadderState__LadderMiddleExit = 8,
	ECLSLadderState__ECLSLadderState_MAX = 9
};


// Enum CrowLocomotionSystem.ECLSCustomMovementMode
enum class ECLSCustomMovementMode : uint8_t
{
	ECLSCustomMovementMode__None   = 0,
	ECLSCustomMovementMode__Ragdoll = 1,
	ECLSCustomMovementMode__Death  = 2,
	ECLSCustomMovementMode__OnVehicle = 3,
	ECLSCustomMovementMode__Vault  = 4,
	ECLSCustomMovementMode__Drowning = 5,
	ECLSCustomMovementMode__Ladder = 6,
	ECLSCustomMovementMode__ECLSCustomMovementMode_MAX = 7
};


// Enum CrowLocomotionSystem.ECLSMovementMode
enum class ECLSMovementMode : uint8_t
{
	ECLSMovementMode__None         = 0,
	ECLSMovementMode__Grounded     = 1,
	ECLSMovementMode__Falling      = 2,
	ECLSMovementMode__Swimming     = 3,
	ECLSMovementMode__Flying       = 4,
	ECLSMovementMode__OnVehicle    = 5,
	ECLSMovementMode__Death        = 6,
	ECLSMovementMode__Ragdoll      = 7,
	ECLSMovementMode__Vault        = 8,
	ECLSMovementMode__Drowning     = 9,
	ECLSMovementMode__Ladder       = 10,
	ECLSMovementMode__ECLSMovementMode_MAX = 11
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
