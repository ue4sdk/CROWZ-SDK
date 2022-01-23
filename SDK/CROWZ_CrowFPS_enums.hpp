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

// Enum CrowFPS.ECrowVehicleWeaponAxis
enum class ECrowVehicleWeaponAxis : uint8_t
{
	ECrowVehicleWeaponAxis__Yaw    = 0,
	ECrowVehicleWeaponAxis__Pitch  = 1,
	ECrowVehicleWeaponAxis__Roll   = 2,
	ECrowVehicleWeaponAxis__ECrowVehicleWeaponAxis_MAX = 3
};


// Enum CrowFPS.ECrowAISpawnerState
enum class ECrowAISpawnerState : uint8_t
{
	ECrowAISpawnerState__Active    = 0,
	ECrowAISpawnerState__Finished  = 1,
	ECrowAISpawnerState__ECrowAISpawnerState_MAX = 2
};


// Enum CrowFPS.ECrowAIZoneState
enum class ECrowAIZoneState : uint8_t
{
	ECrowAIZoneState__Active       = 0,
	ECrowAIZoneState__Finished     = 1,
	ECrowAIZoneState__ECrowAIZoneState_MAX = 2
};


// Enum CrowFPS.ECrowAIFindCoverPointMode
enum class ECrowAIFindCoverPointMode : uint8_t
{
	ECrowAIFindCoverPointMode__BlackboardValue = 0,
	ECrowAIFindCoverPointMode__Near = 1,
	ECrowAIFindCoverPointMode__Far = 2,
	ECrowAIFindCoverPointMode__NearTarget = 3,
	ECrowAIFindCoverPointMode__FarTarget = 4,
	ECrowAIFindCoverPointMode__Random = 5,
	ECrowAIFindCoverPointMode__ECrowAIFindCoverPointMode_MAX = 6
};


// Enum CrowFPS.ECrowAICharacterStance
enum class ECrowAICharacterStance : uint8_t
{
	ECrowAICharacterStance__Stand  = 0,
	ECrowAICharacterStance__Crouch = 1,
	ECrowAICharacterStance__Prone  = 2,
	ECrowAICharacterStance__ECrowAICharacterStance_MAX = 3
};


// Enum CrowFPS.ECrowAICharacterMoveMode
enum class ECrowAICharacterMoveMode : uint8_t
{
	ECrowAICharacterMoveMode__Walk = 0,
	ECrowAICharacterMoveMode__Run  = 1,
	ECrowAICharacterMoveMode__Sprint = 2,
	ECrowAICharacterMoveMode__ECrowAICharacterMoveMode_MAX = 3
};


// Enum CrowFPS.ECrowCharacterGasMaskNotifyType
enum class ECrowCharacterGasMaskNotifyType : uint8_t
{
	ECrowCharacterGasMaskNotifyType__HoldInHand = 0,
	ECrowCharacterGasMaskNotifyType__On = 1,
	ECrowCharacterGasMaskNotifyType__Off = 2,
	ECrowCharacterGasMaskNotifyType__PutInPocket = 3,
	ECrowCharacterGasMaskNotifyType__ECrowCharacterGasMaskNotifyType_MAX = 4
};


// Enum CrowFPS.ECrowCharacterSwimBodyParts
enum class ECrowCharacterSwimBodyParts : uint8_t
{
	ECrowCharacterSwimBodyParts__Head = 0,
	ECrowCharacterSwimBodyParts__Hand = 1,
	ECrowCharacterSwimBodyParts__Hand_L = 2,
	ECrowCharacterSwimBodyParts__Hand_R = 3,
	ECrowCharacterSwimBodyParts__Waist = 4,
	ECrowCharacterSwimBodyParts__Chest = 5,
	ECrowCharacterSwimBodyParts__ECrowCharacterSwimBodyParts_MAX = 6
};


// Enum CrowFPS.ECrowCharacterSwimAction
enum class ECrowCharacterSwimAction : uint8_t
{
	ECrowCharacterSwimAction__Idle = 0,
	ECrowCharacterSwimAction__Forward = 1,
	ECrowCharacterSwimAction__Back = 2,
	ECrowCharacterSwimAction__DivingForward = 3,
	ECrowCharacterSwimAction__ECrowCharacterSwimAction_MAX = 4
};


// Enum CrowFPS.ECrowCrowAnimNotify
enum class ECrowCrowAnimNotify : uint8_t
{
	ECrowCrowAnimNotify__None      = 0,
	ECrowCrowAnimNotify__WeaponFire1P = 1,
	ECrowCrowAnimNotify__WeaponFire3P = 2,
	ECrowCrowAnimNotify__WeaponShellEject1P = 3,
	ECrowCrowAnimNotify__WeaponShellEject3P = 4,
	ECrowCrowAnimNotify__WeaponReloadBegin1P = 5,
	ECrowCrowAnimNotify__WeaponReloadBegin3P = 6,
	ECrowCrowAnimNotify__WeaponReloadEnd1P = 7,
	ECrowCrowAnimNotify__WeaponReloadEnd3P = 8,
	ECrowCrowAnimNotify__WeaponReloadShortBegin1P = 9,
	ECrowCrowAnimNotify__WeaponReloadShortBegin3P = 10,
	ECrowCrowAnimNotify__WeaponReloadShortDetach1P = 11,
	ECrowCrowAnimNotify__WeaponReloadShortDetach3P = 12,
	ECrowCrowAnimNotify__WeaponReloadShortAttach1P = 13,
	ECrowCrowAnimNotify__WeaponReloadShortAttach3P = 14,
	ECrowCrowAnimNotify__WeaponReloadShortEnd1P = 15,
	ECrowCrowAnimNotify__WeaponReloadShortEnd3P = 16,
	ECrowCrowAnimNotify__WeaponDeselected1P = 17,
	ECrowCrowAnimNotify__WeaponDeselected3P = 18,
	ECrowCrowAnimNotify__WeaponAttachLeftHand1P = 19,
	ECrowCrowAnimNotify__WeaponAttachLeftHand3P = 20,
	ECrowCrowAnimNotify__WeaponAttachRightHand1P = 21,
	ECrowCrowAnimNotify__WeaponAttachRightHand3P = 22,
	ECrowCrowAnimNotify__WeaponThrowMagazine1P = 23,
	ECrowCrowAnimNotify__WeaponThrowMagazine3P = 24,
	ECrowCrowAnimNotify__WeaponDetachOldMagazine1P = 25,
	ECrowCrowAnimNotify__WeaponDetachOldMagazine3P = 26,
	ECrowCrowAnimNotify__WeaponAttachNewMagazine1P = 27,
	ECrowCrowAnimNotify__WeaponAttachNewMagazine3P = 28,
	ECrowCrowAnimNotify__WeaponAttachBag3P = 29,
	ECrowCrowAnimNotify__WeaponShow = 30,
	ECrowCrowAnimNotify__WeaponHide = 31,
	ECrowCrowAnimNotify__WeaponMeleeThrow1P = 32,
	ECrowCrowAnimNotify__WeaponMeleeThrow3P = 33,
	ECrowCrowAnimNotify__WeaponThrowPinOut1P = 34,
	ECrowCrowAnimNotify__WeaponThrowPinOut3P = 35,
	ECrowCrowAnimNotify__WeaponShowAllBullet = 36,
	ECrowCrowAnimNotify__ECrowCrowAnimNotify_MAX = 37
};


// Enum CrowFPS.ECrowArmorType
enum class ECrowArmorType : uint8_t
{
	ECrowArmorType__None           = 0,
	ECrowArmorType__Head           = 1,
	ECrowArmorType__Body           = 2,
	ECrowArmorType__ECrowArmorType_MAX = 3
};


// Enum CrowFPS.EActorType
enum class EActorType : uint8_t
{
	EActorType__None               = 0,
	EActorType__Vehicle            = 1,
	EActorType__Water              = 2,
	EActorType__House              = 3,
	EActorType__EActorType_MAX     = 4
};


// Enum CrowFPS.ECrowBackPackListItemType
enum class ECrowBackPackListItemType : uint8_t
{
	ECrowBackPackListItemType__Nomal = 0,
	ECrowBackPackListItemType__LootSlot = 1,
	ECrowBackPackListItemType__PickupInven = 2,
	ECrowBackPackListItemType__ECrowBackPackListItemType_MAX = 3
};


// Enum CrowFPS.ECrowBattlePassRewardProducingType
enum class ECrowBattlePassRewardProducingType : uint8_t
{
	ECrowBattlePassRewardProducingType__None = 0,
	ECrowBattlePassRewardProducingType__ItemSlotScroll = 1,
	ECrowBattlePassRewardProducingType__Effect = 2,
	ECrowBattlePassRewardProducingType__ECrowBattlePassRewardProducingType_MAX = 3
};


// Enum CrowFPS.ECrowBuildingEditorLOD
enum class ECrowBuildingEditorLOD : uint8_t
{
	ECrowBuildingEditorLOD__LODAuto = 0,
	ECrowBuildingEditorLOD__LOD0   = 1,
	ECrowBuildingEditorLOD__LOD1   = 2,
	ECrowBuildingEditorLOD__LOD2   = 3,
	ECrowBuildingEditorLOD__LOD3   = 4,
	ECrowBuildingEditorLOD__ECrowBuildingEditorLOD_MAX = 5
};


// Enum CrowFPS.ECrowBuildingPartsPropertyFlag
enum class ECrowBuildingPartsPropertyFlag : uint8_t
{
	ECrowBuildingPartsPropertyFlag__Destructible = 0,
	ECrowBuildingPartsPropertyFlag__Interaction = 1,
	ECrowBuildingPartsPropertyFlag__ShowOverMergedMesh = 2,
	ECrowBuildingPartsPropertyFlag__LODBodyTarget = 3,
	ECrowBuildingPartsPropertyFlag__LODExtraTarget = 4,
	ECrowBuildingPartsPropertyFlag__AlwaysUseStaticMesh = 5,
	ECrowBuildingPartsPropertyFlag__AlwaysUseISMC = 6,
	ECrowBuildingPartsPropertyFlag__AlwaysHiddenInGame = 7,
	ECrowBuildingPartsPropertyFlag__ECrowBuildingPartsPropertyFlag_MAX = 8
};


// Enum CrowFPS.EBuldingDestructionFlag
enum class EBuldingDestructionFlag : uint8_t
{
	EBuldingDestructionFlag__ThrowingThrough = 0,
	EBuldingDestructionFlag__PistolProjectile = 1,
	EBuldingDestructionFlag__RifleProjectile = 2,
	EBuldingDestructionFlag__SniperRifleProjectile = 3,
	EBuldingDestructionFlag__CannonProjectile = 4,
	EBuldingDestructionFlag__GranadeExplosion = 5,
	EBuldingDestructionFlag__BombExplosion = 6,
	EBuldingDestructionFlag__Parkour = 7,
	EBuldingDestructionFlag__EBuldingDestructionFlag_MAX = 8
};


// Enum CrowFPS.ECrowBuildingPartsAnimType
enum class ECrowBuildingPartsAnimType : uint8_t
{
	ECrowBuildingPartsAnimType__Open = 0,
	ECrowBuildingPartsAnimType__Close = 1,
	ECrowBuildingPartsAnimType__Blocked = 2,
	ECrowBuildingPartsAnimType__ECrowBuildingPartsAnimType_MAX = 3
};


// Enum CrowFPS.ECrowBuildingPartsActionType
enum class ECrowBuildingPartsActionType : uint8_t
{
	ECrowBuildingPartsActionType__Static = 0,
	ECrowBuildingPartsActionType__OpenClose = 1,
	ECrowBuildingPartsActionType__ECrowBuildingPartsActionType_MAX = 2
};


// Enum CrowFPS.ECrowBuildingPartsLODType
enum class ECrowBuildingPartsLODType : uint8_t
{
	ECrowBuildingPartsLODType__LODBody = 0,
	ECrowBuildingPartsLODType__LODExtra = 1,
	ECrowBuildingPartsLODType__ShowOverLOD = 2,
	ECrowBuildingPartsLODType__NoMerge = 3,
	ECrowBuildingPartsLODType__ECrowBuildingPartsLODType_MAX = 4
};


// Enum CrowFPS.EBuildingHISMCGeomType
enum class EBuildingHISMCGeomType : uint8_t
{
	EBuildingHISMCGeomType__Body   = 0,
	EBuildingHISMCGeomType__Trigger1 = 1,
	EBuildingHISMCGeomType__Trigger2 = 2,
	EBuildingHISMCGeomType__Checker1 = 3,
	EBuildingHISMCGeomType__Checker2 = 4,
	EBuildingHISMCGeomType__Trace  = 5,
	EBuildingHISMCGeomType__EBuildingHISMCGeomType_MAX = 6
};


// Enum CrowFPS.ECrowBuildingHISMCDestruction
enum class ECrowBuildingHISMCDestruction : uint8_t
{
	ECrowBuildingHISMCDestruction__Indestructible = 0,
	ECrowBuildingHISMCDestruction__SimplyDetach = 1,
	ECrowBuildingHISMCDestruction__SimplyHide = 2,
	ECrowBuildingHISMCDestruction__DefinedInTable = 3,
	ECrowBuildingHISMCDestruction__ECrowBuildingHISMCDestruction_MAX = 4
};


// Enum CrowFPS.ECrowBuildingLODHideCondition
enum class ECrowBuildingLODHideCondition : uint8_t
{
	ECrowBuildingLODHideCondition__Instantly = 0,
	ECrowBuildingLODHideCondition__WaitForSyncHub = 1,
	ECrowBuildingLODHideCondition__ECrowBuildingLODHideCondition_MAX = 2
};


// Enum CrowFPS.ECrowBuildingLODState
enum class ECrowBuildingLODState : uint8_t
{
	ECrowBuildingLODState__Normal  = 0,
	ECrowBuildingLODState__RequestToHide = 1,
	ECrowBuildingLODState__ReadyToHide = 2,
	ECrowBuildingLODState__ECrowBuildingLODState_MAX = 3
};


// Enum CrowFPS.ECrowBuildingEditorShowLOD
enum class ECrowBuildingEditorShowLOD : uint8_t
{
	ECrowBuildingEditorShowLOD__LOD0 = 0,
	ECrowBuildingEditorShowLOD__LOD1 = 1,
	ECrowBuildingEditorShowLOD__LOD2 = 2,
	ECrowBuildingEditorShowLOD__LOD3 = 3,
	ECrowBuildingEditorShowLOD__ECrowBuildingEditorShowLOD_MAX = 4
};


// Enum CrowFPS.ECrowBuildingEditorShowType
enum class ECrowBuildingEditorShowType : uint8_t
{
	ECrowBuildingEditorShowType__ShowAll = 0,
	ECrowBuildingEditorShowType__NoneLODOnly = 1,
	ECrowBuildingEditorShowType__LODAll = 2,
	ECrowBuildingEditorShowType__LODBodyOnly = 3,
	ECrowBuildingEditorShowType__LODExtraOnly = 4,
	ECrowBuildingEditorShowType__ECrowBuildingEditorShowType_MAX = 5
};


// Enum CrowFPS.ECrowCharacterBehaviourType
enum class ECrowCharacterBehaviourType : uint8_t
{
	ECrowCharacterBehaviourType__MoveForward = 0,
	ECrowCharacterBehaviourType__MoveBackward = 1,
	ECrowCharacterBehaviourType__MoveLeft = 2,
	ECrowCharacterBehaviourType__MoveRight = 3,
	ECrowCharacterBehaviourType__Jump = 4,
	ECrowCharacterBehaviourType__Walk = 5,
	ECrowCharacterBehaviourType__Sprint = 6,
	ECrowCharacterBehaviourType__ToggleCrouch = 7,
	ECrowCharacterBehaviourType__ToggleProne = 8,
	ECrowCharacterBehaviourType__LeanLeft = 9,
	ECrowCharacterBehaviourType__LeanRight = 10,
	ECrowCharacterBehaviourType__Fire = 11,
	ECrowCharacterBehaviourType__Reload = 12,
	ECrowCharacterBehaviourType__Targeting = 13,
	ECrowCharacterBehaviourType__NextWeapon = 14,
	ECrowCharacterBehaviourType__PrevWeapon = 15,
	ECrowCharacterBehaviourType__ThirdPersonToggle = 16,
	ECrowCharacterBehaviourType__Use = 17,
	ECrowCharacterBehaviourType__Use02 = 18,
	ECrowCharacterBehaviourType__ECrowCharacterBehaviourType_MAX = 19
};


// Enum CrowFPS.ECrowCharacterSwimWaterType
enum class ECrowCharacterSwimWaterType : uint8_t
{
	ECrowCharacterSwimWaterType__NotInWater = 0,
	ECrowCharacterSwimWaterType__WaterPlane = 1,
	ECrowCharacterSwimWaterType__WaterBodyOcean = 2,
	ECrowCharacterSwimWaterType__WaterBodyLake = 3,
	ECrowCharacterSwimWaterType__WaterBodyOther = 4,
	ECrowCharacterSwimWaterType__ECrowCharacterSwimWaterType_MAX = 5
};


// Enum CrowFPS.ECrowCharacterFallType
enum class ECrowCharacterFallType : uint8_t
{
	ECrowCharacterFallType__Default = 0,
	ECrowCharacterFallType__Flail  = 1,
	ECrowCharacterFallType__Parachute = 2,
	ECrowCharacterFallType__ECrowCharacterFallType_MAX = 3
};


// Enum CrowFPS.ECrowCustomMovementMode
enum class ECrowCustomMovementMode : uint8_t
{
	ECrowCustomMovementMode__Standard = 0,
	ECrowCustomMovementMode__Ragdoll = 1,
	ECrowCustomMovementMode__Death = 2,
	ECrowCustomMovementMode__OnVehicle = 3,
	ECrowCustomMovementMode__Vault = 4,
	ECrowCustomMovementMode__ECrowCustomMovementMode_MAX = 5
};


// Enum CrowFPS.ECrowCardinalDirection
enum class ECrowCardinalDirection : uint8_t
{
	ECrowCardinalDirection__North  = 0,
	ECrowCardinalDirection__East   = 1,
	ECrowCardinalDirection__West   = 2,
	ECrowCardinalDirection__South  = 3,
	ECrowCardinalDirection___Max   = 4,
	ECrowCardinalDirection__ECrowCardinalDirection_MAX = 5
};


// Enum CrowFPS.ECrowCharacterFireTargetPart
enum class ECrowCharacterFireTargetPart : uint8_t
{
	ECrowCharacterFireTargetPart__Head = 0,
	ECrowCharacterFireTargetPart__UpperBody = 1,
	ECrowCharacterFireTargetPart__LowerBody = 2,
	ECrowCharacterFireTargetPart__CoveringFire = 3,
	ECrowCharacterFireTargetPart__ECrowCharacterFireTargetPart_MAX = 4
};


// Enum CrowFPS.ECrowSoundScriptConditionType
enum class ECrowSoundScriptConditionType : uint8_t
{
	ECrowSoundScriptConditionType__Reload = 0,
	ECrowSoundScriptConditionType__GrenadeThrow = 1,
	ECrowSoundScriptConditionType__SmokeThrow = 2,
	ECrowSoundScriptConditionType__IncendiaryThrow = 3,
	ECrowSoundScriptConditionType__FlashBangThrow = 4,
	ECrowSoundScriptConditionType__KillEnemy = 5,
	ECrowSoundScriptConditionType__Damaged = 6,
	ECrowSoundScriptConditionType__ECrowSoundScriptConditionType_MAX = 7
};


// Enum CrowFPS.ECrowSoundStateType
enum class ECrowSoundStateType : uint8_t
{
	ECrowSoundStateType__Outdoor   = 0,
	ECrowSoundStateType__ShieldingVehicle = 1,
	ECrowSoundStateType__HalfShieldingVehicle = 2,
	ECrowSoundStateType__OpenVehicle = 3,
	ECrowSoundStateType__InWood    = 4,
	ECrowSoundStateType__InConcrete = 5,
	ECrowSoundStateType__InHugeArea = 6,
	ECrowSoundStateType__InContainer = 7,
	ECrowSoundStateType__InWarehouse = 8,
	ECrowSoundStateType__InTunnel  = 9,
	ECrowSoundStateType__InBasement = 10,
	ECrowSoundStateType__OnWater   = 11,
	ECrowSoundStateType__UnderWater = 12,
	ECrowSoundStateType__InHouse   = 13,
	ECrowSoundStateType__None      = 14,
	ECrowSoundStateType__ECrowSoundStateType_MAX = 15
};


// Enum CrowFPS.ECrowConditionFlags
enum class ECrowConditionFlags : uint8_t
{
	ECrowConditionFlags__None      = 0,
	ECrowConditionFlags__Burning   = 1,
	ECrowConditionFlags__Poisoning = 2,
	ECrowConditionFlags__ECrowConditionFlags_MAX = 3
};


// Enum CrowFPS.ECrowCharacterDamageType
enum class ECrowCharacterDamageType : uint8_t
{
	ECrowCharacterDamageType__None = 0,
	ECrowCharacterDamageType__Hit  = 1,
	ECrowCharacterDamageType__AliveToDying = 2,
	ECrowCharacterDamageType__DyingToDeath = 3,
	ECrowCharacterDamageType__Death = 4,
	ECrowCharacterDamageType__ECrowCharacterDamageType_MAX = 5
};


// Enum CrowFPS.ECrowAnimSupplyTablet
enum class ECrowAnimSupplyTablet : uint8_t
{
	ECrowAnimSupplyTablet__None    = 0,
	ECrowAnimSupplyTablet__Equip   = 1,
	ECrowAnimSupplyTablet__Idle    = 2,
	ECrowAnimSupplyTablet__Control = 3,
	ECrowAnimSupplyTablet__UnEquip = 4,
	ECrowAnimSupplyTablet__ECrowAnimSupplyTablet_MAX = 5
};


// Enum CrowFPS.ECrowCharacterHandIKType
enum class ECrowCharacterHandIKType : uint8_t
{
	ECrowCharacterHandIKType__None = 0,
	ECrowCharacterHandIKType__PrivateWeapon = 1,
	ECrowCharacterHandIKType__VehicleDriver = 2,
	ECrowCharacterHandIKType__VehicleWeapon = 3,
	ECrowCharacterHandIKType__ECrowCharacterHandIKType_MAX = 4
};


// Enum CrowFPS.ECrowAnimEndType
enum class ECrowAnimEndType : uint8_t
{
	ECrowAnimEndType__Completed    = 0,
	ECrowAnimEndType__Interrupted  = 1,
	ECrowAnimEndType__ECrowAnimEndType_MAX = 2
};


// Enum CrowFPS.ECrowCharacterHitDirection
enum class ECrowCharacterHitDirection : uint8_t
{
	ECrowCharacterHitDirection__None = 0,
	ECrowCharacterHitDirection__Forward = 1,
	ECrowCharacterHitDirection__Backward = 2,
	ECrowCharacterHitDirection__Left = 3,
	ECrowCharacterHitDirection__Right = 4,
	ECrowCharacterHitDirection__ECrowCharacterHitDirection_MAX = 5
};


// Enum CrowFPS.ECrowCharacterHitParts
enum class ECrowCharacterHitParts : uint8_t
{
	ECrowCharacterHitParts__None   = 0,
	ECrowCharacterHitParts__Head   = 1,
	ECrowCharacterHitParts__Body   = 2,
	ECrowCharacterHitParts__LeftArm = 3,
	ECrowCharacterHitParts__RightArm = 4,
	ECrowCharacterHitParts__LeftLeg = 5,
	ECrowCharacterHitParts__RightLeg = 6,
	ECrowCharacterHitParts__ECrowCharacterHitParts_MAX = 7
};


// Enum CrowFPS.ECrowPrivateWeaponAnimType
enum class ECrowPrivateWeaponAnimType : uint8_t
{
	ECrowPrivateWeaponAnimType__None = 0,
	ECrowPrivateWeaponAnimType__L129A1 = 1,
	ECrowPrivateWeaponAnimType__AEK973 = 2,
	ECrowPrivateWeaponAnimType__L115A3 = 3,
	ECrowPrivateWeaponAnimType__ECrowPrivateWeaponAnimType_MAX = 4
};


// Enum CrowFPS.ECrowCharacterVehicleAnimType
enum class ECrowCharacterVehicleAnimType : uint8_t
{
	ECrowCharacterVehicleAnimType__None = 0,
	ECrowCharacterVehicleAnimType__Abrams = 1,
	ECrowCharacterVehicleAnimType__Mh6 = 2,
	ECrowCharacterVehicleAnimType__Passat = 3,
	ECrowCharacterVehicleAnimType__RoadRover = 4,
	ECrowCharacterVehicleAnimType__Dagor = 5,
	ECrowCharacterVehicleAnimType__ECrowCharacterVehicleAnimType_MAX = 6
};


// Enum CrowFPS.ECrowCharacterSlotAnimType
enum class ECrowCharacterSlotAnimType : uint8_t
{
	ECrowCharacterSlotAnimType__None = 0,
	ECrowCharacterSlotAnimType__FullBody = 1,
	ECrowCharacterSlotAnimType__UpperWithAimOffset = 2,
	ECrowCharacterSlotAnimType__UpperNonAimOffset = 3,
	ECrowCharacterSlotAnimType__TurnStandCrouch = 4,
	ECrowCharacterSlotAnimType__TurnProne = 5,
	ECrowCharacterSlotAnimType__TransitionStandCrouch = 6,
	ECrowCharacterSlotAnimType__TransitionProne = 7,
	ECrowCharacterSlotAnimType__ECrowCharacterSlotAnimType_MAX = 8
};


// Enum CrowFPS.ECrowCharacterGaitMode
enum class ECrowCharacterGaitMode : uint8_t
{
	ECrowCharacterGaitMode__None   = 0,
	ECrowCharacterGaitMode__Walking = 1,
	ECrowCharacterGaitMode__Running = 2,
	ECrowCharacterGaitMode__Sprinting = 3,
	ECrowCharacterGaitMode__ECrowCharacterGaitMode_MAX = 4
};


// Enum CrowFPS.ECrowCharacterAnimActionType
enum class ECrowCharacterAnimActionType : uint8_t
{
	ECrowCharacterAnimActionType__None = 0,
	ECrowCharacterAnimActionType__Shooting = 1,
	ECrowCharacterAnimActionType__Throwing = 2,
	ECrowCharacterAnimActionType__Swing = 3,
	ECrowCharacterAnimActionType__Using = 4,
	ECrowCharacterAnimActionType__ECrowCharacterAnimActionType_MAX = 5
};


// Enum CrowFPS.ECrowCharacterAnimWeapon
enum class ECrowCharacterAnimWeapon : uint8_t
{
	ECrowCharacterAnimWeapon__Idle = 0,
	ECrowCharacterAnimWeapon__Equip = 1,
	ECrowCharacterAnimWeapon__UnEquip = 2,
	ECrowCharacterAnimWeapon__Reload = 3,
	ECrowCharacterAnimWeapon__PreFire = 4,
	ECrowCharacterAnimWeapon__Fire = 5,
	ECrowCharacterAnimWeapon__PostFire = 6,
	ECrowCharacterAnimWeapon__ChangeFire = 7,
	ECrowCharacterAnimWeapon__Aim  = 8,
	ECrowCharacterAnimWeapon__ReloadShort = 9,
	ECrowCharacterAnimWeapon__BoltAction = 10,
	ECrowCharacterAnimWeapon__ECrowCharacterAnimWeapon_MAX = 11
};


// Enum CrowFPS.ECrowCharacterAnimInAir
enum class ECrowCharacterAnimInAir : uint8_t
{
	ECrowCharacterAnimInAir__Ground = 0,
	ECrowCharacterAnimInAir__Jump  = 1,
	ECrowCharacterAnimInAir__Fall  = 2,
	ECrowCharacterAnimInAir__ECrowCharacterAnimInAir_MAX = 3
};


// Enum CrowFPS.ECrowCharacterAnimTurn
enum class ECrowCharacterAnimTurn : uint8_t
{
	ECrowCharacterAnimTurn__None   = 0,
	ECrowCharacterAnimTurn__InPlaceLeft = 1,
	ECrowCharacterAnimTurn__InPlaceRight = 2,
	ECrowCharacterAnimTurn__ECrowCharacterAnimTurn_MAX = 3
};


// Enum CrowFPS.ECrowCharacterAnimStance
enum class ECrowCharacterAnimStance : uint8_t
{
	ECrowCharacterAnimStance__None = 0,
	ECrowCharacterAnimStance__Stand = 1,
	ECrowCharacterAnimStance__Crouch = 2,
	ECrowCharacterAnimStance__Prone = 3,
	ECrowCharacterAnimStance__ECrowCharacterAnimStance_MAX = 4
};


// Enum CrowFPS.ECrowCharacterFootStepType
enum class ECrowCharacterFootStepType : uint8_t
{
	ECrowCharacterFootStepType__LeftFoot = 0,
	ECrowCharacterFootStepType__RightFoot = 1,
	ECrowCharacterFootStepType__Both = 2,
	ECrowCharacterFootStepType__ECrowCharacterFootStepType_MAX = 3
};


// Enum CrowFPS.ECrowCharacterPeekState
enum class ECrowCharacterPeekState : uint8_t
{
	ECrowCharacterPeekState__None  = 0,
	ECrowCharacterPeekState__Left  = 1,
	ECrowCharacterPeekState__Right = 2,
	ECrowCharacterPeekState__ECrowCharacterPeekState_MAX = 3
};


// Enum CrowFPS.ECrowCharacterBattleStance
enum class ECrowCharacterBattleStance : uint8_t
{
	ECrowCharacterBattleStance__None = 0,
	ECrowCharacterBattleStance__Peaceful = 1,
	ECrowCharacterBattleStance__Relaxed = 2,
	ECrowCharacterBattleStance__GunDown = 3,
	ECrowCharacterBattleStance__Directed = 4,
	ECrowCharacterBattleStance__Aimed = 5,
	ECrowCharacterBattleStance___MAX = 6,
	ECrowCharacterBattleStance__ECrowCharacterBattleStance_MAX = 7
};


// Enum CrowFPS.ECrowMovementMode
enum class ECrowMovementMode : uint8_t
{
	ECrowMovementMode__None        = 0,
	ECrowMovementMode__Grounded    = 1,
	ECrowMovementMode__Falling     = 2,
	ECrowMovementMode__Ragdoll     = 3,
	ECrowMovementMode__Death       = 4,
	ECrowMovementMode__OnVehicle   = 5,
	ECrowMovementMode__Vault       = 6,
	ECrowMovementMode__Swimming    = 7,
	ECrowMovementMode__Ladder      = 8,
	ECrowMovementMode___Max        = 9,
	ECrowMovementMode__ECrowMovementMode_MAX = 10
};


// Enum CrowFPS.ECrowRotationMode
enum class ECrowRotationMode : uint8_t
{
	ECrowRotationMode__VelocityDirection = 0,
	ECrowRotationMode__LookingDirection = 1,
	ECrowRotationMode___Max        = 2,
	ECrowRotationMode__ECrowRotationMode_MAX = 3
};


// Enum CrowFPS.ECrowMovementFlags
enum class ECrowMovementFlags : uint8_t
{
	ECrowMovementFlags__None       = 0,
	ECrowMovementFlags__Stand      = 1,
	ECrowMovementFlags__Crouch     = 2,
	ECrowMovementFlags__Prone      = 3,
	ECrowMovementFlags__Jump       = 4,
	ECrowMovementFlags__Stop       = 5,
	ECrowMovementFlags__Walk       = 6,
	ECrowMovementFlags__Run        = 7,
	ECrowMovementFlags__Sprint     = 8,
	ECrowMovementFlags__All        = 9,
	ECrowMovementFlags__ECrowMovementFlags_MAX = 10
};


// Enum CrowFPS.ECrowChatMessaageType
enum class ECrowChatMessaageType : uint8_t
{
	ECrowChatMessaageType__Message_User = 0,
	ECrowChatMessaageType__Message_System = 1,
	ECrowChatMessaageType__Message_MAX = 2
};


// Enum CrowFPS.EClanSlotViewType
enum class EClanSlotViewType : uint8_t
{
	EClanSlotViewType__None        = 0,
	EClanSlotViewType__Join        = 1,
	EClanSlotViewType__JoinAccept  = 2,
	EClanSlotViewType__Reception   = 3,
	EClanSlotViewType__Cancel      = 4,
	EClanSlotViewType__Rank        = 5,
	EClanSlotViewType__Max         = 6
};


// Enum CrowFPS.EClanMemberSort
enum class EClanMemberSort : uint8_t
{
	EClanMemberSort__All           = 0,
	EClanMemberSort__SubMaster     = 1,
	EClanMemberSort__IgnoreSubMaster = 2,
	EClanMemberSort__IgnoreMaster  = 3,
	EClanMemberSort__Max           = 4
};


// Enum CrowFPS.EClanJoinMenuState
enum class EClanJoinMenuState : uint8_t
{
	EClanJoinMenuState__ClanInfo   = 0,
	EClanJoinMenuState__ClanMarkChange = 1,
	EClanJoinMenuState__JoinClanRank = 2,
	EClanJoinMenuState__Max        = 3
};


// Enum CrowFPS.EClanNotJoinMenuState
enum class EClanNotJoinMenuState : uint8_t
{
	EClanNotJoinMenuState__JoinClan = 0,
	EClanNotJoinMenuState__CreateClan = 1,
	EClanNotJoinMenuState__NotJoinClanRank = 2,
	EClanNotJoinMenuState__Max     = 3
};


// Enum CrowFPS.EClanSettingState
enum class EClanSettingState : uint8_t
{
	EClanSettingState__None        = 0,
	EClanSettingState__ChangeHappyTime = 1,
	EClanSettingState__AddCommander = 2,
	EClanSettingState__CommanderSetDel = 3,
	EClanSettingState__ClanInvited = 4,
	EClanSettingState__KickClanUser = 5,
	EClanSettingState__ClanInvitedSet = 6,
	EClanSettingState__CaptainTransfer = 7,
	EClanSettingState__ClanDismantle = 8,
	EClanSettingState__ClanSecession = 9,
	EClanSettingState__Max         = 10
};


// Enum CrowFPS.EClanJoinState
enum class EClanJoinState : uint8_t
{
	EClanJoinState__NotJoinClan    = 0,
	EClanJoinState__JoinClan       = 1,
	EClanJoinState__Max            = 2
};


// Enum CrowFPS.EClanAuthority
enum class EClanAuthority : uint8_t
{
	EClanAuthority__None           = 0,
	EClanAuthority__Crew           = 1,
	EClanAuthority__SubMaster      = 2,
	EClanAuthority__Master         = 3,
	EClanAuthority__Max            = 4
};


// Enum CrowFPS.EClanJoinType
enum class EClanJoinType : uint8_t
{
	EClanJoinType__FreeJoin        = 0,
	EClanJoinType__ComfirmJoin     = 1,
	EClanJoinType__Closed          = 2,
	EClanJoinType__Max             = 3
};


// Enum CrowFPS.EMarkAcquireType
enum class EMarkAcquireType : uint8_t
{
	EMarkAcquireType__Entry        = 0,
	EMarkAcquireType__Bundle       = 1,
	EMarkAcquireType__Expantion    = 2,
	EMarkAcquireType__Max          = 3
};


// Enum CrowFPS.EMarkType
enum class EMarkType : uint8_t
{
	EMarkType__ClanMark            = 0,
	EMarkType__ClanMarkBG          = 1,
	EMarkType__Max                 = 2
};


// Enum CrowFPS.EUserSlotState
enum class EUserSlotState : uint8_t
{
	EUserSlotState__UserList       = 0,
	EUserSlotState__UserInvite     = 1,
	EUserSlotState__UserCancel     = 2,
	EUserSlotState__UserAccept     = 3,
	EUserSlotState__Max            = 4
};


// Enum CrowFPS.ECrowClothExpertSkill
enum class ECrowClothExpertSkill : uint8_t
{
	ECrowClothExpertSkill__None    = 0,
	ECrowClothExpertSkill__AddMagazine = 1,
	ECrowClothExpertSkill__Parachute = 2,
	ECrowClothExpertSkill__ECrowClothExpertSkill_MAX = 3
};


// Enum CrowFPS.ECrowColorTarget
enum class ECrowColorTarget : uint8_t
{
	ECrowColorTarget__None         = 0,
	ECrowColorTarget__Player       = 1,
	ECrowColorTarget__Enemy        = 2,
	ECrowColorTarget__UI           = 3,
	ECrowColorTarget__All          = 4,
	ECrowColorTarget__ECrowColorTarget_MAX = 5
};


// Enum CrowFPS.ECrowConquestSoundState
enum class ECrowConquestSoundState : uint8_t
{
	ECrowConquestSoundState__None  = 0,
	ECrowConquestSoundState__CapturingMyTeam = 1,
	ECrowConquestSoundState__CapturingEnemy = 2,
	ECrowConquestSoundState__CaptureCompleteMyTeam = 3,
	ECrowConquestSoundState__CaptureCompleteEnemy = 4,
	ECrowConquestSoundState__ECrowConquestSoundState_MAX = 5
};


// Enum CrowFPS.ECrowConquestIconState
enum class ECrowConquestIconState : uint8_t
{
	ECrowConquestIconState__None   = 0,
	ECrowConquestIconState__Neutrality_Normal = 1,
	ECrowConquestIconState__MyTeam_Normal = 2,
	ECrowConquestIconState__Enemy_Normal = 3,
	ECrowConquestIconState__Neutrality_Change = 4,
	ECrowConquestIconState__MyTeam_Change = 5,
	ECrowConquestIconState__Enemy_Change = 6,
	ECrowConquestIconState__ECrowConquestIconState_MAX = 7
};


// Enum CrowFPS.ECrowConquestBattleState
enum class ECrowConquestBattleState : uint8_t
{
	ECrowConquestBattleState__None = 0,
	ECrowConquestBattleState__RedOnly = 1,
	ECrowConquestBattleState__BlueOnly = 2,
	ECrowConquestBattleState__RedStronger = 3,
	ECrowConquestBattleState__BlueStronger = 4,
	ECrowConquestBattleState__Same = 5,
	ECrowConquestBattleState__ECrowConquestBattleState_MAX = 6
};


// Enum CrowFPS.ECrowConquestAreaVehicleSpawnerState
enum class ECrowConquestAreaVehicleSpawnerState : uint8_t
{
	ECrowConquestAreaVehicleSpawnerState__None = 0,
	ECrowConquestAreaVehicleSpawnerState__Ready = 1,
	ECrowConquestAreaVehicleSpawnerState__Spawned = 2,
	ECrowConquestAreaVehicleSpawnerState__Cool = 3,
	ECrowConquestAreaVehicleSpawnerState__ECrowConquestAreaVehicleSpawnerState_MAX = 4
};


// Enum CrowFPS.ECrowConquestHeavyBomberState
enum class ECrowConquestHeavyBomberState : uint8_t
{
	ECrowConquestHeavyBomberState__None = 0,
	ECrowConquestHeavyBomberState__StartDelay = 1,
	ECrowConquestHeavyBomberState__Attack = 2,
	ECrowConquestHeavyBomberState__End = 3,
	ECrowConquestHeavyBomberState__ECrowConquestHeavyBomberState_MAX = 4
};


// Enum CrowFPS.ECrowConquestLineType
enum class ECrowConquestLineType : uint8_t
{
	ECrowConquestLineType__None    = 0,
	ECrowConquestLineType__DotLine = 1,
	ECrowConquestLineType__BothArrow = 2,
	ECrowConquestLineType__ArrowMyTeam = 3,
	ECrowConquestLineType__ArrowEnemy = 4,
	ECrowConquestLineType__LineMyTeam = 5,
	ECrowConquestLineType__LineEnemy = 6,
	ECrowConquestLineType__Hidden  = 7,
	ECrowConquestLineType__ECrowConquestLineType_MAX = 8
};


// Enum CrowFPS.ECrowMMeteorPieceState
enum class ECrowMMeteorPieceState : uint8_t
{
	ECrowMMeteorPieceState__None   = 0,
	ECrowMMeteorPieceState__Wait   = 1,
	ECrowMMeteorPieceState__Fire   = 2,
	ECrowMMeteorPieceState__Explosion = 3,
	ECrowMMeteorPieceState__ECrowMMeteorPieceState_MAX = 4
};


// Enum CrowFPS.ECrowConquestSkillResult
enum class ECrowConquestSkillResult : uint8_t
{
	ECrowConquestSkillResult__Unknown = 0,
	ECrowConquestSkillResult__Success = 1,
	ECrowConquestSkillResult__Cool = 2,
	ECrowConquestSkillResult__NotEnoughMoney = 3,
	ECrowConquestSkillResult__NotEnoughItem = 4,
	ECrowConquestSkillResult__ECrowConquestSkillResult_MAX = 5
};


// Enum CrowFPS.ECrowConquestSkill
enum class ECrowConquestSkill : uint8_t
{
	ECrowConquestSkill__None       = 0,
	ECrowConquestSkill__MorphineBox = 1,
	ECrowConquestSkill__UAVSupport = 2,
	ECrowConquestSkill__SquadRespawn = 3,
	ECrowConquestSkill__A10        = 4,
	ECrowConquestSkill__HeavyBombard = 5,
	ECrowConquestSkill__DirectRocketLauncher = 6,
	ECrowConquestSkill__HomingRocketLaunhcer = 7,
	ECrowConquestSkill__Shield     = 8,
	ECrowConquestSkill__ECrowConquestSkill_MAX = 9
};


// Enum CrowFPS.ECrowConquestUAVSupportState
enum class ECrowConquestUAVSupportState : uint8_t
{
	ECrowConquestUAVSupportState__None = 0,
	ECrowConquestUAVSupportState__Start = 1,
	ECrowConquestUAVSupportState__End = 2,
	ECrowConquestUAVSupportState__ECrowConquestUAVSupportState_MAX = 3
};


// Enum CrowFPS.ECrowContaminationAreaType
enum class ECrowContaminationAreaType : uint8_t
{
	ECrowContaminationAreaType__Sphere = 0,
	ECrowContaminationAreaType__Cylinder = 1,
	ECrowContaminationAreaType__ECrowContaminationAreaType_MAX = 2
};


// Enum CrowFPS.ECrowContaminationAreaEventState
enum class ECrowContaminationAreaEventState : uint8_t
{
	ECrowContaminationAreaEventState__None = 0,
	ECrowContaminationAreaEventState__Begine = 1,
	ECrowContaminationAreaEventState__Wait = 2,
	ECrowContaminationAreaEventState__Scaled = 3,
	ECrowContaminationAreaEventState__End = 4,
	ECrowContaminationAreaEventState__ECrowContaminationAreaEventState_MAX = 5
};


// Enum CrowFPS.ECrowCustomizeEmotionDescState
enum class ECrowCustomizeEmotionDescState : uint8_t
{
	ECrowCustomizeEmotionDescState__Emotion = 0,
	ECrowCustomizeEmotionDescState__ResultMVP = 1,
	ECrowCustomizeEmotionDescState__ECrowCustomizeEmotionDescState_MAX = 2
};


// Enum CrowFPS.ECrowCustomizeEmotionRadialState
enum class ECrowCustomizeEmotionRadialState : uint8_t
{
	ECrowCustomizeEmotionRadialState__None = 0,
	ECrowCustomizeEmotionRadialState__Normal = 1,
	ECrowCustomizeEmotionRadialState__ReadyToEquip = 2,
	ECrowCustomizeEmotionRadialState__ECrowCustomizeEmotionRadialState_MAX = 3
};


// Enum CrowFPS.ESprayWidgetState
enum class ESprayWidgetState : uint8_t
{
	ESprayWidgetState__Normal      = 0,
	ESprayWidgetState__RegistListToSlot = 1,
	ESprayWidgetState__RegistAnimation = 2,
	ESprayWidgetState__ESprayWidgetState_MAX = 3
};


// Enum CrowFPS.ECrowWeaponPartsOption
enum class ECrowWeaponPartsOption : uint8_t
{
	ECrowWeaponPartsOption__AimSpreadDefault = 0,
	ECrowWeaponPartsOption__HipFireSpreadDefault = 1,
	ECrowWeaponPartsOption__Recoil = 2,
	ECrowWeaponPartsOption__RecoilHorizontal = 3,
	ECrowWeaponPartsOption__RecoilVertical = 4,
	ECrowWeaponPartsOption__FireSpeed = 5,
	ECrowWeaponPartsOption__RecoilDecrease = 6,
	ECrowWeaponPartsOption__AmmoVelocity = 7,
	ECrowWeaponPartsOption__AmmoDamage = 8,
	ECrowWeaponPartsOption__AmmoDamageMin = 9,
	ECrowWeaponPartsOption__AmmoDamageMax = 10,
	ECrowWeaponPartsOption__AmmoDamageDropDistance = 11,
	ECrowWeaponPartsOption__Reload = 12,
	ECrowWeaponPartsOption__AimShake = 13,
	ECrowWeaponPartsOption__AimTime = 14,
	ECrowWeaponPartsOption__CharacterMoveSpeed = 15,
	ECrowWeaponPartsOption__AttackRange = 16,
	ECrowWeaponPartsOption__MAX    = 17
};


// Enum CrowFPS.ECrowCustomizeCategoryType
enum class ECrowCustomizeCategoryType : uint8_t
{
	ECrowCustomizeCategoryType__OutFit = 0,
	ECrowCustomizeCategoryType__Appearance = 1,
	ECrowCustomizeCategoryType__ECrowCustomizeCategoryType_MAX = 2
};


// Enum CrowFPS.ECrowCustomFilterReaminSlot
enum class ECrowCustomFilterReaminSlot : uint8_t
{
	ECrowCustomFilterReaminSlot__None = 0,
	ECrowCustomFilterReaminSlot__NotExist = 1,
	ECrowCustomFilterReaminSlot__Reamin1 = 2,
	ECrowCustomFilterReaminSlot__Reamin6 = 3,
	ECrowCustomFilterReaminSlot__Reamin11 = 4,
	ECrowCustomFilterReaminSlot__ECrowCustomFilterReaminSlot_MAX = 5
};


// Enum CrowFPS.ECrowCustomFilterMaxUser
enum class ECrowCustomFilterMaxUser : uint8_t
{
	ECrowCustomFilterMaxUser__None = 0,
	ECrowCustomFilterMaxUser__User80 = 1,
	ECrowCustomFilterMaxUser__User60 = 2,
	ECrowCustomFilterMaxUser__User40 = 3,
	ECrowCustomFilterMaxUser__User20 = 4,
	ECrowCustomFilterMaxUser__User19 = 5,
	ECrowCustomFilterMaxUser__ECrowCustomFilterMaxUser_MAX = 6
};


// Enum CrowFPS.ECrowCustomRoomState
enum class ECrowCustomRoomState : uint8_t
{
	ECrowCustomRoomState__None     = 0,
	ECrowCustomRoomState__Ready    = 1,
	ECrowCustomRoomState__Cancel   = 2,
	ECrowCustomRoomState__Play     = 3,
	ECrowCustomRoomState__ECrowCustomRoomState_MAX = 4
};


// Enum CrowFPS.ECrowCustomTeamType
enum class ECrowCustomTeamType : uint8_t
{
	ECrowCustomTeamType__Red       = 0,
	ECrowCustomTeamType__Blue      = 1,
	ECrowCustomTeamType__Misassign = 2,
	ECrowCustomTeamType__Watcher   = 3,
	ECrowCustomTeamType__None      = 4,
	ECrowCustomTeamType__ECrowCustomTeamType_MAX = 5
};


// Enum CrowFPS.ECrowCustomMode
enum class ECrowCustomMode : uint8_t
{
	ECrowCustomMode__None          = 0,
	ECrowCustomMode__WaitingRoom   = 1,
	ECrowCustomMode__TeamGameRoom  = 2,
	ECrowCustomMode__GameRoom      = 3,
	ECrowCustomMode__ECrowCustomMode_MAX = 4
};


// Enum CrowFPS.ECrowDamageCauser
enum class ECrowDamageCauser : uint8_t
{
	ECrowDamageCauser__None        = 0,
	ECrowDamageCauser__Weapon      = 1,
	ECrowDamageCauser__ServerWeapon = 2,
	ECrowDamageCauser__Fall        = 3,
	ECrowDamageCauser__Drown       = 4,
	ECrowDamageCauser__Burn        = 5,
	ECrowDamageCauser__OutOfWorld  = 6,
	ECrowDamageCauser__BlastingVehicle = 7,
	ECrowDamageCauser__Bombing     = 8,
	ECrowDamageCauser__Pressure    = 9,
	ECrowDamageCauser__BombMissionExplode = 10,
	ECrowDamageCauser__CheatConsole = 11,
	ECrowDamageCauser__Impact      = 12,
	ECrowDamageCauser__ZombieExplosion = 13,
	ECrowDamageCauser__A10         = 14,
	ECrowDamageCauser__Meteor      = 15,
	ECrowDamageCauser__HazardGas   = 16,
	ECrowDamageCauser__Environment = 17,
	ECrowDamageCauser__ImpactCar   = 18,
	ECrowDamageCauser__ImpactAPC   = 19,
	ECrowDamageCauser__ImpactHeli  = 20,
	ECrowDamageCauser__ImpactTank  = 21,
	ECrowDamageCauser__ImpactBoat  = 22,
	ECrowDamageCauser__ECrowDamageCauser_MAX = 23
};


// Enum CrowFPS.EDamageSourceType
enum class EDamageSourceType : uint8_t
{
	EDamageSourceType__None        = 0,
	EDamageSourceType__Point       = 1,
	EDamageSourceType__Melee       = 2,
	EDamageSourceType__Explosion   = 3,
	EDamageSourceType__Impulse     = 4,
	EDamageSourceType__Burning     = 5,
	EDamageSourceType__ContaminationArea = 6,
	EDamageSourceType__Falling     = 7,
	EDamageSourceType__EDamageSourceType_MAX = 8
};


// Enum CrowFPS.ECrowDeathCameraState
enum class ECrowDeathCameraState : uint8_t
{
	ECrowDeathCameraState__None    = 0,
	ECrowDeathCameraState__MoveMyBody = 1,
	ECrowDeathCameraState__MoveKiller = 2,
	ECrowDeathCameraState__TraceKiller = 3,
	ECrowDeathCameraState__Free    = 4,
	ECrowDeathCameraState__TopDown = 5,
	ECrowDeathCameraState__ECrowDeathCameraState_MAX = 6
};


// Enum CrowFPS.ECrowDecalType
enum class ECrowDecalType : uint8_t
{
	ECrowDecalType__Unknown        = 0,
	ECrowDecalType__Bullet         = 1,
	ECrowDecalType__Explosion      = 2,
	ECrowDecalType__FootPrint      = 3,
	ECrowDecalType__Blood          = 4,
	ECrowDecalType__WeaponSticker  = 5,
	ECrowDecalType__Max            = 6
};


// Enum CrowFPS.ECrowFoliageAffectorAnimState
enum class ECrowFoliageAffectorAnimState : uint8_t
{
	ECrowFoliageAffectorAnimState__Idle = 0,
	ECrowFoliageAffectorAnimState__Ready = 1,
	ECrowFoliageAffectorAnimState__Animating = 2,
	ECrowFoliageAffectorAnimState__TooClose = 3,
	ECrowFoliageAffectorAnimState__TimeOut = 4,
	ECrowFoliageAffectorAnimState__Finished = 5,
	ECrowFoliageAffectorAnimState__ECrowFoliageAffectorAnimState_MAX = 6
};


// Enum CrowFPS.ECrowFoliageAffectorAnimType
enum class ECrowFoliageAffectorAnimType : uint8_t
{
	ECrowFoliageAffectorAnimType__NoAnimation = 0,
	ECrowFoliageAffectorAnimType__ByVelocity = 1,
	ECrowFoliageAffectorAnimType__ByTime = 2,
	ECrowFoliageAffectorAnimType__ECrowFoliageAffectorAnimType_MAX = 3
};


// Enum CrowFPS.ECrowErrorCode
enum class ECrowErrorCode : uint8_t
{
	ECrowErrorCode__Success        = 0,
	ECrowErrorCode__ServerQuerySericeError = 1,
	ECrowErrorCode__ServerConnectError = 2,
	ECrowErrorCode__ServerDisconnected = 3,
	ECrowErrorCode__DediServerDisconnected = 4,
	ECrowErrorCode__ServerArgEmpty = 5,
	ECrowErrorCode__ECrowErrorCode_MAX = 6
};


// Enum CrowFPS.ECrowEscapePointState
enum class ECrowEscapePointState : uint8_t
{
	ECrowEscapePointState__None    = 0,
	ECrowEscapePointState__Active  = 1,
	ECrowEscapePointState__Called  = 2,
	ECrowEscapePointState__Complete = 3,
	ECrowEscapePointState__Return  = 4,
	ECrowEscapePointState__Deactive = 5,
	ECrowEscapePointState__ECrowEscapePointState_MAX = 6
};


// Enum CrowFPS.ECrowEtcItemType
enum class ECrowEtcItemType : uint8_t
{
	ECrowEtcItemType__None         = 0,
	ECrowEtcItemType__ChangeNickName = 1,
	ECrowEtcItemType__RandomBoxCard = 2,
	ECrowEtcItemType__ClothSlotPass = 3,
	ECrowEtcItemType__WeaponSlotPass = 4,
	ECrowEtcItemType__WeaponLevelJumpItem = 5,
	ECrowEtcItemType__ChangeClanName = 6,
	ECrowEtcItemType__RoyalCrowPoint = 7,
	ECrowEtcItemType__GPoint       = 8,
	ECrowEtcItemType__BattlePassItem = 9,
	ECrowEtcItemType__BattlePassFreePassItem = 10,
	ECrowEtcItemType__ECrowEtcItemType_MAX = 11
};


// Enum CrowFPS.EEventPageType
enum class EEventPageType : uint8_t
{
	EEventPageType__None           = 0,
	EEventPageType__EventPage      = 1,
	EEventPageType__ShopPackagePage = 2,
	EEventPageType__EEventPageType_MAX = 3
};


// Enum CrowFPS.ECrowFallsDamageType
enum class ECrowFallsDamageType : uint8_t
{
	ECrowFallsDamageType__None     = 0,
	ECrowFallsDamageType__NoDamage = 1,
	ECrowFallsDamageType__Damage   = 2,
	ECrowFallsDamageType__BeforeDead = 3,
	ECrowFallsDamageType__Dead     = 4,
	ECrowFallsDamageType__ECrowFallsDamageType_MAX = 5
};


// Enum CrowFPS.ECrowFallsStartType
enum class ECrowFallsStartType : uint8_t
{
	ECrowFallsStartType__None      = 0,
	ECrowFallsStartType__Nomal     = 1,
	ECrowFallsStartType__Vehicle   = 2,
	ECrowFallsStartType__ECrowFallsStartType_MAX = 3
};


// Enum CrowFPS.ECrowFoliageBendingInterpType
enum class ECrowFoliageBendingInterpType : uint8_t
{
	ECrowFoliageBendingInterpType__Lerp = 0,
	ECrowFoliageBendingInterpType__CircularIn = 1,
	ECrowFoliageBendingInterpType__CircularOut = 2,
	ECrowFoliageBendingInterpType__CircularInOut = 3,
	ECrowFoliageBendingInterpType__ExpoIn = 4,
	ECrowFoliageBendingInterpType__ExpoOut = 5,
	ECrowFoliageBendingInterpType__ExpoInOut = 6,
	ECrowFoliageBendingInterpType__Num = 7,
	ECrowFoliageBendingInterpType__ECrowFoliageBendingInterpType_MAX = 8
};


// Enum CrowFPS.EFriendSlotBTNType
enum class EFriendSlotBTNType : uint8_t
{
	EFriendSlotBTNType__PartyInvite = 0,
	EFriendSlotBTNType__CancelInvite = 1,
	EFriendSlotBTNType__JoinParty  = 2,
	EFriendSlotBTNType__PlayWith   = 3,
	EFriendSlotBTNType__RecentUserPartyInvite = 4,
	EFriendSlotBTNType__RecentUserCancelInvite = 5,
	EFriendSlotBTNType__RecentRequestFriend = 6,
	EFriendSlotBTNType__Kick       = 7,
	EFriendSlotBTNType__PromotedUser = 8,
	EFriendSlotBTNType__SearchInviteParty = 9,
	EFriendSlotBTNType__SearchCancelInvite = 10,
	EFriendSlotBTNType__SearchRequestFriend = 11,
	EFriendSlotBTNType__FriendRequestAccept = 12,
	EFriendSlotBTNType__FriendRequestReject = 13,
	EFriendSlotBTNType__FriendCancelRequest = 14,
	EFriendSlotBTNType__SessionInvite = 15,
	EFriendSlotBTNType__EFriendSlotBTNType_MAX = 16
};


// Enum CrowFPS.EFriendSlotType
enum class EFriendSlotType : uint8_t
{
	EFriendSlotType__Friend        = 0,
	EFriendSlotType__FriendRequest = 1,
	EFriendSlotType__FriendSend    = 2,
	EFriendSlotType__Recent        = 3,
	EFriendSlotType__Party         = 4,
	EFriendSlotType__Search        = 5,
	EFriendSlotType__Session       = 6,
	EFriendSlotType__EFriendSlotType_MAX = 7
};


// Enum CrowFPS.EFriendTabType
enum class EFriendTabType : uint8_t
{
	EFriendTabType__Friend         = 0,
	EFriendTabType__Recent         = 1,
	EFriendTabType__Party          = 2,
	EFriendTabType__EFriendTabType_MAX = 3
};


// Enum CrowFPS.ECrowFxType
enum class ECrowFxType : uint8_t
{
	ECrowFxType__SurfaceBullet     = 0,
	ECrowFxType__TracerBullet      = 1,
	ECrowFxType__Footstep          = 2,
	ECrowFxType__CharacterParticle = 3,
	ECrowFxType__Muzzle            = 4,
	ECrowFxType__Backblast         = 5,
	ECrowFxType__Swimming          = 6,
	ECrowFxType__VehicleImpact     = 7,
	ECrowFxType__Explosion         = 8,
	ECrowFxType__None              = 9,
	ECrowFxType__ECrowFxType_MAX   = 10
};


// Enum CrowFPS.ESquadHUDState
enum class ESquadHUDState : uint8_t
{
	ESquadHUDState__Play           = 0,
	ESquadHUDState__WatchMyTeam    = 1,
	ESquadHUDState__Summary        = 2,
	ESquadHUDState__WatchEnemyTeam = 3,
	ESquadHUDState__Max            = 4
};


// Enum CrowFPS.ECrowIconType
enum class ECrowIconType : uint8_t
{
	ECrowIconType__None            = 0,
	ECrowIconType__Player_Local    = 1,
	ECrowIconType__Player_MySquad  = 2,
	ECrowIconType__Player_MyTeam   = 3,
	ECrowIconType__Player_Enemy    = 4,
	ECrowIconType__Player_Death    = 5,
	ECrowIconType__Vehicle_Air_Local = 6,
	ECrowIconType__Vehicle_Air_MySquad = 7,
	ECrowIconType__Vehicle_Air_MyTeam = 8,
	ECrowIconType__Vehicle_Air_Enemy = 9,
	ECrowIconType__Vehicle_Air_Empty = 10,
	ECrowIconType__Vehicle_Ground_Local = 11,
	ECrowIconType__Vehicle_Ground_MySquad = 12,
	ECrowIconType__Vehicle_Ground_MyTeam = 13,
	ECrowIconType__Vehicle_Ground_Enemy = 14,
	ECrowIconType__Vehicle_Ground_Empty = 15,
	ECrowIconType__Mission_Main    = 16,
	ECrowIconType__Mission_Main_MyTeam = 17,
	ECrowIconType__Mission_Main_Enemy = 18,
	ECrowIconType__Mission_Sub     = 19,
	ECrowIconType__Mission_Sub_MyTeam = 20,
	ECrowIconType__Mission_Sub_Enemy = 21,
	ECrowIconType__Area_Main       = 22,
	ECrowIconType__Area_Supply     = 23,
	ECrowIconType__Area_Bombing    = 24,
	ECrowIconType__Area_Other      = 25,
	ECrowIconType__Supply_Position = 26,
	ECrowIconType__Ping_Position   = 27,
	ECrowIconType__Projectile_Throw = 28,
	ECrowIconType__TransportAirPlane = 29,
	ECrowIconType__TransportAirPlaneRoute = 30,
	ECrowIconType__Ranker_SendMineral = 31,
	ECrowIconType__Ranker_OwnedMineral = 32,
	ECrowIconType__Map_ZoneMarker  = 33,
	ECrowIconType__SupplyWeaponBox = 34,
	ECrowIconType__CustomModeObserver = 35,
	ECrowIconType__ECrowIconType_MAX = 36
};


// Enum CrowFPS.ECrowSquadRewardState
enum class ECrowSquadRewardState : uint8_t
{
	ECrowSquadRewardState__None    = 0,
	ECrowSquadRewardState__RecvComplete = 1,
	ECrowSquadRewardState__ECrowSquadRewardState_MAX = 2
};


// Enum CrowFPS.ECrowModPointIndex
enum class ECrowModPointIndex : uint8_t
{
	ECrowModPointIndex__ModPoint_None = 0,
	ECrowModPointIndex__ModPoint_EnemyDyingPoint = 1,
	ECrowModPointIndex__ModPoint_KillPoint = 2,
	ECrowModPointIndex__ModPoint_KillPointWeapon = 3,
	ECrowModPointIndex__ModPoint_MissionPoint = 4,
	ECrowModPointIndex__ModPoint_MedalPoint = 5,
	ECrowModPointIndex__ModPoint_VehicleDestroyPoint = 6,
	ECrowModPointIndex__ModPoint_DyingPlayerPoint = 7,
	ECrowModPointIndex__ModPoint_ReviveMySquadPoint = 8,
	ECrowModPointIndex__ModPoint_UseSquadRespawn = 9,
	ECrowModPointIndex__ModPoint_AssistCharacter = 10,
	ECrowModPointIndex__ModPoint_AssistSquadCharacter = 11,
	ECrowModPointIndex__ModPoint_AssistCar = 12,
	ECrowModPointIndex__ModPoint_AssistSquadCar = 13,
	ECrowModPointIndex__ModPoint_AssistTank = 14,
	ECrowModPointIndex__ModPoint_AssistSquadTank = 15,
	ECrowModPointIndex__ModPoint_AssistHeli = 16,
	ECrowModPointIndex__ModPoint_AssistSquadHeli = 17,
	ECrowModPointIndex__ModPoint_AssistBoat = 18,
	ECrowModPointIndex__ModPoint_AssistSquadBoat = 19,
	ECrowModPointIndex__ModPoint_ObtainQ_ON = 20,
	ECrowModPointIndex__ModPoint_ObtainQ_ON01 = 21,
	ECrowModPointIndex__ModPoint_ObtainQ_ON02 = 22,
	ECrowModPointIndex__ModPoint_ObtainQ_ON03 = 23,
	ECrowModPointIndex__ModPoint_ObtainQ_ON04 = 24,
	ECrowModPointIndex__ModPoint_ObtainQ_ON05 = 25,
	ECrowModPointIndex__ModPoint_CallHeli = 26,
	ECrowModPointIndex__ModPoint_EscapeSuccess = 27,
	ECrowModPointIndex__ModPoint_MAX = 28
};


// Enum CrowFPS.ECrowTakeExpType
enum class ECrowTakeExpType : uint8_t
{
	ECrowTakeExpType__Misc         = 0,
	ECrowTakeExpType__KillPoint    = 1,
	ECrowTakeExpType__DyingPlayerPoint = 2,
	ECrowTakeExpType__VehicleDestoyPoint = 3,
	ECrowTakeExpType__MedalPoint   = 4,
	ECrowTakeExpType__DailyMission = 5,
	ECrowTakeExpType__WeeklyMission = 6,
	ECrowTakeExpType__SquadPoint   = 7,
	ECrowTakeExpType__AssistPoint  = 8,
	ECrowTakeExpType__ModePoint    = 9,
	ECrowTakeExpType__Max          = 10,
	ECrowTakeExpType__All          = 11
};


// Enum CrowFPS.ECrowWeaponEventType
enum class ECrowWeaponEventType : uint8_t
{
	ECrowWeaponEventType__None     = 0,
	ECrowWeaponEventType__LevelUp  = 1,
	ECrowWeaponEventType__WeaponUnLock = 2,
	ECrowWeaponEventType__WeaponParsUnLock = 3,
	ECrowWeaponEventType__ECrowWeaponEventType_MAX = 4
};


// Enum CrowFPS.ECrowSpawnerType
enum class ECrowSpawnerType : uint8_t
{
	ECrowSpawnerType__Match        = 0,
	ECrowSpawnerType__WaitUser     = 1,
	ECrowSpawnerType__None         = 2,
	ECrowSpawnerType__ECrowSpawnerType_MAX = 3
};


// Enum CrowFPS.ECrowTabletScene
enum class ECrowTabletScene : uint8_t
{
	ECrowTabletScene__Scene_MainMenu = 0,
	ECrowTabletScene__Scene_Supply = 1,
	ECrowTabletScene__Scene_Bombard = 2,
	ECrowTabletScene__Scene_Drone  = 3,
	ECrowTabletScene__Scene_MAX    = 4
};


// Enum CrowFPS.ECrowCommunityPartyOption
enum class ECrowCommunityPartyOption : uint8_t
{
	ECrowCommunityPartyOption__None = 0,
	ECrowCommunityPartyOption__All = 1,
	ECrowCommunityPartyOption__Friend = 2,
	ECrowCommunityPartyOption__Refuse = 3,
	ECrowCommunityPartyOption__ECrowCommunityPartyOption_MAX = 4
};


// Enum CrowFPS.ECrowCommunityFollowOption
enum class ECrowCommunityFollowOption : uint8_t
{
	ECrowCommunityFollowOption__Off = 0,
	ECrowCommunityFollowOption__On = 1,
	ECrowCommunityFollowOption__ECrowCommunityFollowOption_MAX = 2
};


// Enum CrowFPS.ECrowGameRoundState
enum class ECrowGameRoundState : uint8_t
{
	ECrowGameRoundState__None      = 0,
	ECrowGameRoundState__PlayCountdown = 1,
	ECrowGameRoundState__Match     = 2,
	ECrowGameRoundState__Finish    = 3,
	ECrowGameRoundState__ECrowGameRoundState_MAX = 4
};


// Enum CrowFPS.ECrowGameState
enum class ECrowGameState : uint8_t
{
	ECrowGameState__None           = 0,
	ECrowGameState__WaitUser       = 1,
	ECrowGameState__PlayCountdown  = 2,
	ECrowGameState__Match          = 3,
	ECrowGameState__Finish         = 4,
	ECrowGameState__Replay         = 5,
	ECrowGameState__ECrowGameState_MAX = 6
};


// Enum CrowFPS.ECrowLobbyPartyUserState
enum class ECrowLobbyPartyUserState : uint8_t
{
	ECrowLobbyPartyUserState__None = 0,
	ECrowLobbyPartyUserState__Online = 1,
	ECrowLobbyPartyUserState__Offline = 2,
	ECrowLobbyPartyUserState__Matching = 3,
	ECrowLobbyPartyUserState__GamePlay = 4,
	ECrowLobbyPartyUserState__ECrowLobbyPartyUserState_MAX = 5
};


// Enum CrowFPS.ECrowLobbyPartyUserScene
enum class ECrowLobbyPartyUserScene : uint8_t
{
	ECrowLobbyPartyUserScene__None = 0,
	ECrowLobbyPartyUserScene__Lobby = 1,
	ECrowLobbyPartyUserScene__Shop = 2,
	ECrowLobbyPartyUserScene__Loadout = 3,
	ECrowLobbyPartyUserScene__Outfit = 4,
	ECrowLobbyPartyUserScene__Apperance = 5,
	ECrowLobbyPartyUserScene__Vehicle = 6,
	ECrowLobbyPartyUserScene__Option = 7,
	ECrowLobbyPartyUserScene__Profile = 8,
	ECrowLobbyPartyUserScene__Game = 9,
	ECrowLobbyPartyUserScene__Spray = 10,
	ECrowLobbyPartyUserScene__Emotion = 11,
	ECrowLobbyPartyUserScene__VehicleSkin = 12,
	ECrowLobbyPartyUserScene__ECrowLobbyPartyUserScene_MAX = 13
};


// Enum CrowFPS.ECrowLobbyFriendState
enum class ECrowLobbyFriendState : uint8_t
{
	ECrowLobbyFriendState__None    = 0,
	ECrowLobbyFriendState__OnLine  = 1,
	ECrowLobbyFriendState__OffLine = 2,
	ECrowLobbyFriendState__Party   = 3,
	ECrowLobbyFriendState__PartyFull = 4,
	ECrowLobbyFriendState__GamePlay = 5,
	ECrowLobbyFriendState__ECrowLobbyFriendState_MAX = 6
};


// Enum CrowFPS.ECrowMatchingState
enum class ECrowMatchingState : uint8_t
{
	ECrowMatchingState__None       = 0,
	ECrowMatchingState__Start      = 1,
	ECrowMatchingState__Matching   = 2,
	ECrowMatchingState__Cancel     = 3,
	ECrowMatchingState__StartGame  = 4,
	ECrowMatchingState__ECrowMatchingState_MAX = 5
};


// Enum CrowFPS.ECrowLobbyPartyState
enum class ECrowLobbyPartyState : uint8_t
{
	ECrowLobbyPartyState__None     = 0,
	ECrowLobbyPartyState__Wait     = 1,
	ECrowLobbyPartyState__MapChanging = 2,
	ECrowLobbyPartyState__Matching = 3,
	ECrowLobbyPartyState__GamePlay = 4,
	ECrowLobbyPartyState__ECrowLobbyPartyState_MAX = 5
};


// Enum CrowFPS.ECrowClothPartHairType
enum class ECrowClothPartHairType : uint8_t
{
	ECrowClothPartHairType__Hair_Short = 0,
	ECrowClothPartHairType__Hair_Long = 1,
	ECrowClothPartHairType__Hair_MAX = 2
};


// Enum CrowFPS.ECrowClothPartMaskType
enum class ECrowClothPartMaskType : uint8_t
{
	ECrowClothPartMaskType__Mask_Gas = 0,
	ECrowClothPartMaskType__Mask_Cotton = 1,
	ECrowClothPartMaskType__Mask_Steel = 2,
	ECrowClothPartMaskType__Mask_Half = 3,
	ECrowClothPartMaskType__Mask_MAX = 4
};


// Enum CrowFPS.ECrowClothPartGlassesType
enum class ECrowClothPartGlassesType : uint8_t
{
	ECrowClothPartGlassesType__Glasses_Goggles = 0,
	ECrowClothPartGlassesType__Glasses_sunglasses = 1,
	ECrowClothPartGlassesType__Glasses_MAX = 2
};


// Enum CrowFPS.ECrowClothPartHeadType
enum class ECrowClothPartHeadType : uint8_t
{
	ECrowClothPartHeadType__Head_Helmet = 0,
	ECrowClothPartHeadType__Head_Beanie = 1,
	ECrowClothPartHeadType__Head_Cap = 2,
	ECrowClothPartHeadType__Head_HeadSet = 3,
	ECrowClothPartHeadType__Head_CapHeadSet = 4,
	ECrowClothPartHeadType__Head_MAX = 5
};


// Enum CrowFPS.ECrowClothPartsMesh
enum class ECrowClothPartsMesh : uint8_t
{
	ECrowClothPartsMesh__Hair      = 0,
	ECrowClothPartsMesh__Head      = 1,
	ECrowClothPartsMesh__Glasses   = 2,
	ECrowClothPartsMesh__Mask      = 3,
	ECrowClothPartsMesh__Top       = 4,
	ECrowClothPartsMesh__Gloves    = 5,
	ECrowClothPartsMesh__Bottoms   = 6,
	ECrowClothPartsMesh__Shoes     = 7,
	ECrowClothPartsMesh__Outer     = 8,
	ECrowClothPartsMesh__Backpack  = 9,
	ECrowClothPartsMesh__costume   = 10,
	ECrowClothPartsMesh__Beard     = 11,
	ECrowClothPartsMesh__Patch     = 12,
	ECrowClothPartsMesh__MAX       = 13
};


// Enum CrowFPS.ECrowClothPartsFitType
enum class ECrowClothPartsFitType : uint8_t
{
	ECrowClothPartsFitType__Fit_Tight = 0,
	ECrowClothPartsFitType__Fit_Loose = 1,
	ECrowClothPartsFitType__Fit_Hide = 2,
	ECrowClothPartsFitType__Fit_UnEquip = 3,
	ECrowClothPartsFitType__Fit_MAX = 4
};


// Enum CrowFPS.ECrowCameraMode
enum class ECrowCameraMode : uint8_t
{
	ECrowCameraMode__FirstPerson   = 0,
	ECrowCameraMode__ThirdPerson   = 1,
	ECrowCameraMode__FirstPersonInVehicle = 2,
	ECrowCameraMode__FirstVehicle  = 3,
	ECrowCameraMode__ThirdVehicle  = 4,
	ECrowCameraMode__Death         = 5,
	ECrowCameraMode__DisableCharacterCamera = 6,
	ECrowCameraMode___Max          = 7,
	ECrowCameraMode__ECrowCameraMode_MAX = 8
};


// Enum CrowFPS.EHittingAreaType
enum class EHittingAreaType : uint8_t
{
	EHittingAreaType__None         = 0,
	EHittingAreaType__HeadArmor    = 1,
	EHittingAreaType__BodyArmor    = 2,
	EHittingAreaType__HeadArmorBroken = 3,
	EHittingAreaType__BodyArmorBroken = 4,
	EHittingAreaType__Vehicle      = 5,
	EHittingAreaType__AliveToDeath = 6,
	EHittingAreaType__TacticalKit  = 7,
	EHittingAreaType__Max          = 8
};


// Enum CrowFPS.EIndicatorType
enum class EIndicatorType : uint8_t
{
	E_Player                       = 0,
	E_Vehicle                      = 1,
	E_MAX                          = 2
};


// Enum CrowFPS.ECrowMatchStartType
enum class ECrowMatchStartType : uint8_t
{
	ECrowMatchStartType__None      = 0,
	ECrowMatchStartType__PlayCameraWork = 1,
	ECrowMatchStartType__Rejoin    = 2,
	ECrowMatchStartType__ECrowMatchStartType_MAX = 3
};


// Enum CrowFPS.ECrowTeam_RedBlue
enum class ECrowTeam_RedBlue : uint8_t
{
	RedTeam                        = 0,
	BlueTeam                       = 1,
	ObserverTeam                   = 2,
	AllTeam                        = 3,
	NoTeam                         = 4,
	TeamNone                       = 5,
	ECrowTeam_RedBlue_MAX          = 6
};


// Enum CrowFPS.ECrowTeamID_Bitflags
enum class ECrowTeamID_Bitflags : uint8_t
{
	ECrowTeamID_Bitflags__Red      = 0,
	ECrowTeamID_Bitflags__Blue     = 1,
	ECrowTeamID_Bitflags__Yellow   = 2,
	ECrowTeamID_Bitflags__Purple   = 3,
	ECrowTeamID_Bitflags__ECrowTeamID_MAX = 4
};


// Enum CrowFPS.ECrowTeamID
enum class ECrowTeamID : uint8_t
{
	ECrowTeamID__Red               = 0,
	ECrowTeamID__Blue              = 1,
	ECrowTeamID__Yellow            = 2,
	ECrowTeamID__Purple            = 3,
	ECrowTeamID__NoTeam            = 4,
	ECrowTeamID__TeamNone          = 5,
	ECrowTeamID__ECrowTeamID_MAX   = 6
};


// Enum CrowFPS.ECrowSquadRole
enum class ECrowSquadRole : uint8_t
{
	ECrowSquadRole__None           = 0,
	ECrowSquadRole__Leader         = 1,
	ECrowSquadRole__Assistant      = 2,
	ECrowSquadRole__Member01       = 3,
	ECrowSquadRole__Member02       = 4,
	ECrowSquadRole__ECrowSquadRole_MAX = 5
};


// Enum CrowFPS.ECrowPlayerState
enum class ECrowPlayerState : uint8_t
{
	ECrowPlayerState__None         = 0,
	ECrowPlayerState__Spectator    = 1,
	ECrowPlayerState__Aliving      = 2,
	ECrowPlayerState__Alive        = 3,
	ECrowPlayerState__Dying        = 4,
	ECrowPlayerState__Dead         = 5,
	ECrowPlayerState__GameMaster   = 6,
	ECrowPlayerState__MatchMaster  = 7,
	ECrowPlayerState__MatchObserver = 8,
	ECrowPlayerState__CustomModeObserver = 9,
	ECrowPlayerState__ECrowPlayerState_MAX = 10
};


// Enum CrowFPS.ECrowGameMode
enum class ECrowGameMode : uint8_t
{
	ECrowGameMode__None            = 0,
	ECrowGameMode__Conquest        = 1,
	ECrowGameMode__TeamDeathMatch  = 2,
	ECrowGameMode__CaptureTheFlag  = 3,
	ECrowGameMode__SquadMatch      = 4,
	ECrowGameMode__DeathMatch      = 5,
	ECrowGameMode__Training        = 6,
	ECrowGameMode__TestFlight      = 7,
	ECrowGameMode__BombMission     = 8,
	ECrowGameMode__BattleRoyal     = 9,
	ECrowGameMode__QuickMatch      = 10,
	ECrowGameMode__CustomMatch     = 11,
	ECrowGameMode__ECrowGameMode_MAX = 12
};


// Enum CrowFPS.ECrowLobbyNoticeType
enum class ECrowLobbyNoticeType : uint8_t
{
	ECrowLobbyNoticeType__None     = 0,
	ECrowLobbyNoticeType__PartyInvitation = 1,
	ECrowLobbyNoticeType__CustomModeInvitation = 2,
	ECrowLobbyNoticeType__FriendRequest = 3,
	ECrowLobbyNoticeType__ECrowLobbyNoticeType_MAX = 4
};


// Enum CrowFPS.ECrowStartCameraWorkState
enum class ECrowStartCameraWorkState : uint8_t
{
	ECrowStartCameraWorkState__None = 0,
	ECrowStartCameraWorkState__MoveCamera = 1,
	ECrowStartCameraWorkState__MoveFade = 2,
	ECrowStartCameraWorkState__DisplayUI = 3,
	ECrowStartCameraWorkState__End = 4,
	ECrowStartCameraWorkState__ECrowStartCameraWorkState_MAX = 5
};


// Enum CrowFPS.ECrowSquadPointRewardType
enum class ECrowSquadPointRewardType : uint8_t
{
	ECrowSquadPointRewardType__None = 0,
	ECrowSquadPointRewardType__ItemBox = 1,
	ECrowSquadPointRewardType__LoadoutBox = 2,
	ECrowSquadPointRewardType__Vehicle = 3,
	ECrowSquadPointRewardType__ECrowSquadPointRewardType_MAX = 4
};


// Enum CrowFPS.ECrowGameStateSquadMatch
enum class ECrowGameStateSquadMatch : uint8_t
{
	ECrowGameStateSquadMatch__None = 0,
	ECrowGameStateSquadMatch__ActiveEscapePoint = 1,
	ECrowGameStateSquadMatch__CalledEscapeVehicle = 2,
	ECrowGameStateSquadMatch__MoveCompleteEscapeVehicle = 3,
	ECrowGameStateSquadMatch__EscapeComplete = 4,
	ECrowGameStateSquadMatch__ECrowGameStateSquadMatch_MAX = 5
};


// Enum CrowFPS.ECrowGasMaskSoundState
enum class ECrowGasMaskSoundState : uint8_t
{
	ECrowGasMaskSoundState__None   = 0,
	ECrowGasMaskSoundState__Idle   = 1,
	ECrowGasMaskSoundState__Moving = 2,
	ECrowGasMaskSoundState__Sprinting = 3,
	ECrowGasMaskSoundState__MovingEnd = 4,
	ECrowGasMaskSoundState__ECrowGasMaskSoundState_MAX = 5
};


// Enum CrowFPS.ECrowEvent
enum class ECrowEvent : uint8_t
{
	ECrowEvent__None               = 0,
	ECrowEvent__Ok                 = 1,
	ECrowEvent__Cancel             = 2,
	ECrowEvent__Yes                = 3,
	ECrowEvent__No                 = 4,
	ECrowEvent__Ignore             = 5,
	ECrowEvent__Close              = 6,
	ECrowEvent__Min                = 7,
	ECrowEvent__Max                = 8,
	ECrowEvent__Add                = 9,
	ECrowEvent__Remove             = 10,
	ECrowEvent__Start              = 11,
	ECrowEvent__End                = 12,
	ECrowEvent__Click              = 13,
	ECrowEvent__Select             = 14,
	ECrowEvent__Deselect           = 15,
	ECrowEvent__DragStart          = 16,
	ECrowEvent__DragEnd            = 17,
	ECrowEvent__DragCancel         = 18,
	ECrowEvent__Equip              = 19,
	ECrowEvent__Ping               = 20,
	ECrowEvent__ItemCreated        = 21,
	ECrowEvent__ItemDestroyed      = 22,
	ECrowEvent__ItemOwnerChanged   = 23,
	ECrowEvent__AuthorizeUser      = 24,
	ECrowEvent__StartGame          = 25,
	ECrowEvent__DisableIntrusion   = 26,
	ECrowEvent__EndGame            = 27,
	ECrowEvent__RemoveSquad        = 28,
	ECrowEvent__ChangeMissionPoint = 29,
	ECrowEvent__Conquest_ChangeTeam = 30,
	ECrowEvent__Conquest_PlayerRespawn = 31,
	ECrowEvent__EnableFirstRespawn = 32,
	ECrowEvent__ChangeGameState    = 33,
	ECrowEvent__SelectRespawn      = 34,
	ECrowEvent__DeselectRespawn    = 35,
	ECrowEvent__SelectVehicleSpawner = 36,
	ECrowEvent__DeselectVehicleSpawner = 37,
	ECrowEvent__ExecRespawn        = 38,
	ECrowEvent__ExecDoubleClickRespawn = 39,
	ECrowEvent__ScanMineral        = 40,
	ECrowEvent__InitWorldMapIcon   = 41,
	ECrowEvent__ChangeIconDisplayInfo = 42,
	ECrowEvent__CallHelp           = 43,
	ECrowEvent__BeginWorldEvent    = 44,
	ECrowEvent__EndWorldEvent      = 45,
	ECrowEvent__AddObjectiveActor  = 46,
	ECrowEvent__RemoveObjectiveActor = 47,
	ECrowEvent__IconPingHovered    = 48,
	ECrowEvent__IconPingTargeted   = 49,
	ECrowEvent__VehicleSkin_ChangeType = 50,
	ECrowEvent__VehicleSkin_ChangeVehicle = 51,
	ECrowEvent__VehicleSkin_SelectItem = 52,
	ECrowEvent__VehicleSkin_HoverItem = 53,
	ECrowEvent__VehicleSkin_UnHoverItem = 54,
	ECrowEvent__LV_SelectItem      = 55,
	ECrowEvent__LV_HoverItem       = 56,
	ECrowEvent__LV_UnHoverItem     = 57,
	ECrowEvent__Hit                = 58,
	ECrowEvent__InitSquadIcon      = 59,
	ECrowEvent__InitObserverIcon   = 60
};


// Enum CrowFPS.EHazardGasState
enum class EHazardGasState : uint8_t
{
	EHazardGasState__OutState      = 0,
	EHazardGasState__InState       = 1,
	EHazardGasState__NearState     = 2,
	EHazardGasState__UIViewState   = 3,
	EHazardGasState__EHazardGasState_MAX = 4
};


// Enum CrowFPS.ECrowHUDWidgetType
enum class ECrowHUDWidgetType : uint8_t
{
	ECrowHUDWidgetType__None       = 0,
	ECrowHUDWidgetType__Default    = 1,
	ECrowHUDWidgetType__Bottom     = 2,
	ECrowHUDWidgetType__Top        = 3,
	ECrowHUDWidgetType__Mode       = 4,
	ECrowHUDWidgetType__ECrowHUDWidgetType_MAX = 5
};


// Enum CrowFPS.ETireState
enum class ETireState : uint8_t
{
	ETireState__eTireNormal        = 0,
	ETireState__eTireFlat          = 1,
	ETireState__eTireDestroyed     = 2,
	ETireState__ETireState_MAX     = 3
};


// Enum CrowFPS.ELoadOutUIMode
enum class ELoadOutUIMode : uint8_t
{
	ELoadOutUIMode__None           = 0,
	ELoadOutUIMode__Hidden         = 1,
	ELoadOutUIMode__LoadOut        = 2,
	ELoadOutUIMode__LoadOutWeaponChange = 3,
	ELoadOutUIMode__LoadOutWeaponCustomize = 4,
	ELoadOutUIMode__LoadOutWeaponSkinCustomize = 5,
	ELoadOutUIMode__LoadOutWeaponStickerCustomize = 6,
	ELoadOutUIMode__LoadOutWeaponAccCustomize = 7,
	ELoadOutUIMode__LoadOutSprayCustomize = 8,
	ELoadOutUIMode__LoadOutWeaponLegendary = 9,
	ELoadOutUIMode__ELoadOutUIMode_MAX = 10
};


// Enum CrowFPS.ECrowCharacterInputMode
enum class ECrowCharacterInputMode : uint8_t
{
	ECrowCharacterInputMode__None  = 0,
	ECrowCharacterInputMode__Block = 1,
	ECrowCharacterInputMode__Skydiving = 2,
	ECrowCharacterInputMode__Default = 3,
	ECrowCharacterInputMode__FindConstructionSite = 4,
	ECrowCharacterInputMode__Construction = 5,
	ECrowCharacterInputMode__GameAndUI = 6,
	ECrowCharacterInputMode__WorldMapUI = 7,
	ECrowCharacterInputMode__OnlyUI = 8,
	ECrowCharacterInputMode__RadialMenu = 9,
	ECrowCharacterInputMode__OnVehicle = 10,
	ECrowCharacterInputMode__DyingCharacter = 11,
	ECrowCharacterInputMode__OnlyRotation = 12,
	ECrowCharacterInputMode__InRespawnAirPlane = 13,
	ECrowCharacterInputMode__OnlyTrigger = 14,
	ECrowCharacterInputMode__Spectator = 15,
	ECrowCharacterInputMode__BombMissionPlayCountdown = 16,
	ECrowCharacterInputMode__FindBombKitTarget = 17,
	ECrowCharacterInputMode__SquadMatchRespawn = 18,
	ECrowCharacterInputMode__Emotion = 19,
	ECrowCharacterInputMode__Replay = 20,
	ECrowCharacterInputMode__Movie = 21,
	ECrowCharacterInputMode__AnyKey = 22,
	ECrowCharacterInputMode__ECrowCharacterInputMode_MAX = 23
};


// Enum CrowFPS.ECrowItemControllerType
enum class ECrowItemControllerType : uint8_t
{
	ECrowItemControllerType__None  = 0,
	ECrowItemControllerType__Rifle = 1,
	ECrowItemControllerType__Grenade = 2,
	ECrowItemControllerType__ECrowItemControllerType_MAX = 3
};


// Enum CrowFPS.ECrowItemOwnType
enum class ECrowItemOwnType : uint8_t
{
	ECrowItemOwnType__OnlyInventory = 0,
	ECrowItemOwnType__OnlyEquipment = 1,
	ECrowItemOwnType__Both         = 2,
	ECrowItemOwnType__ECrowItemOwnType_MAX = 3
};


// Enum CrowFPS.ECrowEquipmentType
enum class ECrowEquipmentType : uint8_t
{
	ECrowEquipmentType__Rifle      = 0,
	ECrowEquipmentType__Pistol     = 1,
	ECrowEquipmentType__Knife      = 2,
	ECrowEquipmentType__Grenade    = 3,
	ECrowEquipmentType__Ammo       = 4,
	ECrowEquipmentType__Scope      = 5,
	ECrowEquipmentType__Mask       = 6,
	ECrowEquipmentType__HeadGear   = 7,
	ECrowEquipmentType__ECrowEquipmentType_MAX = 8
};


// Enum CrowFPS.ECrowEquipmentSlot
enum class ECrowEquipmentSlot : uint8_t
{
	ECrowEquipmentSlot__Slot1      = 0,
	ECrowEquipmentSlot__Slot2      = 1,
	ECrowEquipmentSlot__Slot3      = 2,
	ECrowEquipmentSlot__Slot4      = 3,
	ECrowEquipmentSlot__Slot5      = 4,
	ECrowEquipmentSlot__Slot6      = 5,
	ECrowEquipmentSlot__Slot7      = 6,
	ECrowEquipmentSlot__Slot8      = 7,
	ECrowEquipmentSlot__Slot9      = 8,
	ECrowEquipmentSlot__ECrowEquipmentSlot_MAX = 9
};


// Enum CrowFPS.ECrowItemSlotMiniWSType
enum class ECrowItemSlotMiniWSType : uint8_t
{
	ECrowItemSlotMiniWSType__Color = 0,
	ECrowItemSlotMiniWSType__ECrowItemSlotMiniWSType_MAX = 1
};


// Enum CrowFPS.ECrowItemSlotWSType
enum class ECrowItemSlotWSType : uint8_t
{
	ECrowItemSlotWSType__Weapon    = 0,
	ECrowItemSlotWSType__WeaponParts = 1,
	ECrowItemSlotWSType__OutFit    = 2,
	ECrowItemSlotWSType__Appearance = 3,
	ECrowItemSlotWSType__Color     = 4,
	ECrowItemSlotWSType__UnEquip   = 5,
	ECrowItemSlotWSType__ECrowItemSlotWSType_MAX = 6
};


// Enum CrowFPS.ECrowItemAssetRows
enum class ECrowItemAssetRows : uint8_t
{
	ECrowItemAssetRows__Face       = 0,
	ECrowItemAssetRows__Hair       = 1,
	ECrowItemAssetRows__Beard      = 2,
	ECrowItemAssetRows__Head       = 3,
	ECrowItemAssetRows__Glasses    = 4,
	ECrowItemAssetRows__Mask       = 5,
	ECrowItemAssetRows__Gloves     = 6,
	ECrowItemAssetRows__Top        = 7,
	ECrowItemAssetRows__Bottom     = 8,
	ECrowItemAssetRows__Shoes      = 9,
	ECrowItemAssetRows__Outer      = 10,
	ECrowItemAssetRows__Backpack   = 11,
	ECrowItemAssetRows__Costume    = 12,
	ECrowItemAssetRows__ECrowItemAssetRows_MAX = 13
};


// Enum CrowFPS.ECrowShopItemStateType
enum class ECrowShopItemStateType : uint8_t
{
	ECrowShopItemStateType__None   = 0,
	ECrowShopItemStateType__Hot    = 1,
	ECrowShopItemStateType__New    = 2,
	ECrowShopItemStateType__ECrowShopItemStateType_MAX = 3
};


// Enum CrowFPS.ECrowItemSoundType
enum class ECrowItemSoundType : uint8_t
{
	ECrowItemSoundType__Inven_DragStart = 0,
	ECrowItemSoundType__Inven_DropItem = 1,
	ECrowItemSoundType__Inven_Equip = 2,
	ECrowItemSoundType__Inven_AddInven = 3,
	ECrowItemSoundType__Inven_MAX  = 4
};


// Enum CrowFPS.ECrowItemSpawnType
enum class ECrowItemSpawnType : uint8_t
{
	ECrowItemSpawnType__None       = 0,
	ECrowItemSpawnType__World      = 1,
	ECrowItemSpawnType__PickupInventory = 2,
	ECrowItemSpawnType__ECrowItemSpawnType_MAX = 3
};


// Enum CrowFPS.ECrowEquipmentSlotType
enum class ECrowEquipmentSlotType : uint8_t
{
	ECrowEquipmentSlotType__Primary01 = 0,
	ECrowEquipmentSlotType__Primary02 = 1,
	ECrowEquipmentSlotType__Melee  = 2,
	ECrowEquipmentSlotType__Throw  = 3,
	ECrowEquipmentSlotType__Kit    = 4,
	ECrowEquipmentSlotType__HealKit = 5,
	ECrowEquipmentSlotType__HeadArmor = 6,
	ECrowEquipmentSlotType__BodyArmor = 7,
	ECrowEquipmentSlotType__InvenBag = 8,
	ECrowEquipmentSlotType__MissionKit = 9,
	ECrowEquipmentSlotType__GasCutter = 10,
	ECrowEquipmentSlotType____Max__ = 11,
	ECrowEquipmentSlotType__WeaponParts = 12,
	ECrowEquipmentSlotType__WeaponSlotMax = 13,
	ECrowEquipmentSlotType__ArmorBegin = 14,
	ECrowEquipmentSlotType__ArmorEnd = 15,
	ECrowEquipmentSlotType__ECrowEquipmentSlotType_MAX = 16
};


// Enum CrowFPS.ECrowBuffValueType
enum class ECrowBuffValueType : uint8_t
{
	ECrowBuffValueType__Absolute   = 0,
	ECrowBuffValueType__Percent    = 1,
	ECrowBuffValueType__ECrowBuffValueType_MAX = 2
};


// Enum CrowFPS.ECrowBuffType
enum class ECrowBuffType : uint8_t
{
	ECrowBuffType__None            = 0,
	ECrowBuffType__AccountExp      = 1,
	ECrowBuffType__WeaponExp       = 2,
	ECrowBuffType__WeaponTypeExp   = 3,
	ECrowBuffType__ECrowBuffType_MAX = 4
};


// Enum CrowFPS.ECrowBuffEventType
enum class ECrowBuffEventType : uint8_t
{
	ECrowBuffEventType__Normal     = 0,
	ECrowBuffEventType__Event      = 1,
	ECrowBuffEventType__ECrowBuffEventType_MAX = 2
};


// Enum CrowFPS.ECrowWeaponUIType
enum class ECrowWeaponUIType : uint8_t
{
	ECrowWeaponUIType__None        = 0,
	ECrowWeaponUIType__AR          = 1,
	ECrowWeaponUIType__SR          = 2,
	ECrowWeaponUIType__SG          = 3,
	ECrowWeaponUIType__HG          = 4,
	ECrowWeaponUIType__MG          = 5,
	ECrowWeaponUIType__SMG         = 6,
	ECrowWeaponUIType__DMR         = 7,
	ECrowWeaponUIType__RL          = 8,
	ECrowWeaponUIType__MELEE       = 9,
	ECrowWeaponUIType__THROW       = 10,
	ECrowWeaponUIType__HEALKIT     = 11,
	ECrowWeaponUIType__KIT         = 12,
	ECrowWeaponUIType__ECrowWeaponUIType_MAX = 13
};


// Enum CrowFPS.ECrowWeaponAccType
enum class ECrowWeaponAccType : uint8_t
{
	ECrowWeaponAccType__None       = 0,
	ECrowWeaponAccType__Skin       = 1,
	ECrowWeaponAccType__Sticker    = 2,
	ECrowWeaponAccType__EtcAcc     = 3,
	ECrowWeaponAccType__ECrowWeaponAccType_MAX = 4
};


// Enum CrowFPS.ECrowWeaponThrowableType
enum class ECrowWeaponThrowableType : uint8_t
{
	ECrowWeaponThrowableType__Frag = 0,
	ECrowWeaponThrowableType__Smoke = 1,
	ECrowWeaponThrowableType__FlashBang = 2,
	ECrowWeaponThrowableType__Incendiary = 3,
	ECrowWeaponThrowableType__ECrowWeaponThrowableType_MAX = 4
};


// Enum CrowFPS.ECrowCharacterAppearanceType
enum class ECrowCharacterAppearanceType : uint8_t
{
	ECrowCharacterAppearanceType__Gender = 0,
	ECrowCharacterAppearanceType__Face = 1,
	ECrowCharacterAppearanceType__FaceColor = 2,
	ECrowCharacterAppearanceType__EyeColor = 3,
	ECrowCharacterAppearanceType__Hair = 4,
	ECrowCharacterAppearanceType__Tattoo = 5,
	ECrowCharacterAppearanceType__Beard = 6,
	ECrowCharacterAppearanceType__ECrowCharacterAppearanceType_MAX = 7
};


// Enum CrowFPS.ECrowWeaponPartsType
enum class ECrowWeaponPartsType : uint8_t
{
	ECrowWeaponPartsType__Barrel   = 0,
	ECrowWeaponPartsType__Magazine = 1,
	ECrowWeaponPartsType__Muzzle   = 2,
	ECrowWeaponPartsType__PistolGrip = 3,
	ECrowWeaponPartsType__PrimarySight = 4,
	ECrowWeaponPartsType__SecondarySight = 5,
	ECrowWeaponPartsType__SideBarrel = 6,
	ECrowWeaponPartsType__Stock    = 7,
	ECrowWeaponPartsType__UnderBarrel = 8,
	ECrowWeaponPartsType__MainBody = 9,
	ECrowWeaponPartsType__Min      = 10,
	ECrowWeaponPartsType__Max      = 11,
	ECrowWeaponPartsType__None     = 12
};


// Enum CrowFPS.ECrowItemGrade
enum class ECrowItemGrade : uint8_t
{
	ECrowItemGrade__Common         = 0,
	ECrowItemGrade__Uncommon       = 1,
	ECrowItemGrade__Rare           = 2,
	ECrowItemGrade__Epic           = 3,
	ECrowItemGrade__Legendary      = 4,
	ECrowItemGrade__Custom1        = 5,
	ECrowItemGrade__Custom2        = 6,
	ECrowItemGrade__Custom3        = 7,
	ECrowItemGrade__Custom4        = 8,
	ECrowItemGrade__ECrowItemGrade_MAX = 9
};


// Enum CrowFPS.ECrowItemType
enum class ECrowItemType : uint8_t
{
	ECrowItemType__None            = 0,
	ECrowItemType__Weapon          = 1,
	ECrowItemType__VehicleWeapon   = 2,
	ECrowItemType__WeaponPartsBarrel = 3,
	ECrowItemType__WeaponPartsMagazine = 4,
	ECrowItemType__WeaponPartsMuzzle = 5,
	ECrowItemType__WeaponPartsPistolGrip = 6,
	ECrowItemType__WeaponPartsPrimarySight = 7,
	ECrowItemType__WeaponPartsSideBarrel = 8,
	ECrowItemType__WeaponPartsStock = 9,
	ECrowItemType__WeaponPartsUnderBarrel = 10,
	ECrowItemType__Ammo            = 11,
	ECrowItemType__Character       = 12,
	ECrowItemType__ClothPartsHair  = 13,
	ECrowItemType__ClothPartsHead  = 14,
	ECrowItemType__ClothPartsGlasses = 15,
	ECrowItemType__ClothPartsMask  = 16,
	ECrowItemType__ClothPartsTop   = 17,
	ECrowItemType__ClothPartsGloves = 18,
	ECrowItemType__ClothPartsBottom = 19,
	ECrowItemType__ClothPartsShoes = 20,
	ECrowItemType__ClothPartsOuter = 21,
	ECrowItemType__ClothPartsBackPack = 22,
	ECrowItemType__ClothPartsCostume = 23,
	ECrowItemType__ClothPartsBeard = 24,
	ECrowItemType__Armor           = 25,
	ECrowItemType__InvenBag        = 26,
	ECrowItemType__BattleMoney     = 27,
	ECrowItemType__WeaponPartsSecondarySight = 28,
	ECrowItemType__WeaponPartsAccCharm = 29,
	ECrowItemType__SquadMatchPoint = 30,
	ECrowItemType__ClothPartsPatch = 31,
	ECrowItemType__EtcItem         = 32,
	ECrowItemType__Exp             = 33,
	ECrowItemType__VehicleSkin     = 34,
	ECrowItemType__WeaponSkin      = 35,
	ECrowItemType__WeaponSticker   = 36,
	ECrowItemType__RoyalCrowPoint  = 37,
	ECrowItemType__Buff            = 38,
	ECrowItemType__Tattoo          = 39,
	ECrowItemType__CharacterEyeColor = 40,
	ECrowItemType__Emotion         = 41,
	ECrowItemType__ResultMVP       = 42,
	ECrowItemType__ClanMark        = 43,
	ECrowItemType__ParachuteSkin   = 44,
	ECrowItemType__Spray           = 45,
	ECrowItemType__GPoint          = 46,
	ECrowItemType__RandomBox       = 47,
	ECrowItemType__ECrowItemType_MAX = 48
};


// Enum CrowFPS.ECrowLedgeTraceType
enum class ECrowLedgeTraceType : uint8_t
{
	ECrowLedgeTraceType__AllowAllSides = 0,
	ECrowLedgeTraceType__AllowTwoSides = 1,
	ECrowLedgeTraceType__AllowOneSides = 2,
	ECrowLedgeTraceType__ECrowLedgeTraceType_MAX = 3
};


// Enum CrowFPS.ECrowLedgeVaultType
enum class ECrowLedgeVaultType : uint8_t
{
	ECrowLedgeVaultType__ClimbOn   = 0,
	ECrowLedgeVaultType__ClimbOver = 1,
	ECrowLedgeVaultType__ECrowLedgeVaultType_MAX = 2
};


// Enum CrowFPS.ECrowLevelLayer
enum class ECrowLevelLayer : uint8_t
{
	ECrowLevelLayer__Unknown       = 0,
	ECrowLevelLayer__Persistent    = 1,
	ECrowLevelLayer__GameDesign    = 2,
	ECrowLevelLayer__Environment   = 3,
	ECrowLevelLayer__Terrain       = 4,
	ECrowLevelLayer__Tree          = 5,
	ECrowLevelLayer__SubLevel      = 6,
	ECrowLevelLayer__Effect        = 7,
	ECrowLevelLayer__UnderWater    = 8,
	ECrowLevelLayer__Num           = 9,
	ECrowLevelLayer__ECrowLevelLayer_MAX = 10
};


// Enum CrowFPS.ECrowLevelSequenceResult
enum class ECrowLevelSequenceResult : uint8_t
{
	ECrowLevelSequenceResult__None = 0,
	ECrowLevelSequenceResult__Success = 1,
	ECrowLevelSequenceResult__Fail = 2,
	ECrowLevelSequenceResult__TimeOut = 3,
	ECrowLevelSequenceResult__ECrowLevelSequenceResult_MAX = 4
};


// Enum CrowFPS.ECrowBuildingFindCollision
enum class ECrowBuildingFindCollision : uint8_t
{
	ECrowBuildingFindCollision__Success = 0,
	ECrowBuildingFindCollision__NoCollision = 1,
	ECrowBuildingFindCollision__AlreadyContact = 2,
	ECrowBuildingFindCollision__ECrowBuildingFindCollision_MAX = 3
};


// Enum CrowFPS.ELocalizationCulture
enum class ELocalizationCulture : uint8_t
{
	ELocalizationCulture__EN       = 0,
	ELocalizationCulture__KO       = 1,
	ELocalizationCulture__ZH_CN    = 2,
	ELocalizationCulture__ELocalizationCulture_MAX = 3
};


// Enum CrowFPS.ECrowTimeKind
enum class ECrowTimeKind : uint8_t
{
	ECrowTimeKind__UTC             = 0,
	ECrowTimeKind__Local           = 1,
	ECrowTimeKind__ECrowTimeKind_MAX = 2
};


// Enum CrowFPS.ECrowLoadoutBoxState
enum class ECrowLoadoutBoxState : uint8_t
{
	ECrowLoadoutBoxState__None     = 0,
	ECrowLoadoutBoxState__Falling  = 1,
	ECrowLoadoutBoxState__Landed   = 2,
	ECrowLoadoutBoxState__ECrowLoadoutBoxState_MAX = 3
};


// Enum CrowFPS.ECrowSampleCharacterCount
enum class ECrowSampleCharacterCount : uint8_t
{
	ECrowSampleCharacterCount__One = 0,
	ECrowSampleCharacterCount__Two = 1,
	ECrowSampleCharacterCount__Three = 2,
	ECrowSampleCharacterCount__Four = 3,
	ECrowSampleCharacterCount__ECrowSampleCharacterCount_MAX = 4
};


// Enum CrowFPS.EAnimLobbyIdle
enum class EAnimLobbyIdle : uint8_t
{
	EAnimLobbyIdle__Idle           = 0,
	EAnimLobbyIdle__Idle01         = 1,
	EAnimLobbyIdle__Idle02         = 2,
	EAnimLobbyIdle__Idle03         = 3,
	EAnimLobbyIdle__CharCustom_Idle = 4,
	EAnimLobbyIdle__EAnimLobbyIdle_MAX = 5
};


// Enum CrowFPS.ELobbyUIMode
enum class ELobbyUIMode : uint8_t
{
	ELobbyUIMode__None             = 0,
	ELobbyUIMode__Main             = 1,
	ELobbyUIMode__PlaySetting      = 2,
	ELobbyUIMode__ModSelect        = 3,
	ELobbyUIMode__LoadOut          = 4,
	ELobbyUIMode__LoadOutWeaponChange = 5,
	ELobbyUIMode__LoadOutWeaponCustomize = 6,
	ELobbyUIMode__LoadOutWeaponSkinCustomize = 7,
	ELobbyUIMode__LoadOutWeaponStickerCustomize = 8,
	ELobbyUIMode__LoadOutWeaponAccCustomize = 9,
	ELobbyUIMode__LoadOutWeaponLegendary = 10,
	ELobbyUIMode__OutFitList       = 11,
	ELobbyUIMode__OutFitCustomize  = 12,
	ELobbyUIMode__AppearanceCustomize = 13,
	ELobbyUIMode__Shop             = 14,
	ELobbyUIMode__Mission          = 15,
	ELobbyUIMode__Record           = 16,
	ELobbyUIMode__Spray            = 17,
	ELobbyUIMode__Emotion          = 18,
	ELobbyUIMode__VehicleSkin      = 19,
	ELobbyUIMode__Social           = 20,
	ELobbyUIMode__Clan             = 21,
	ELobbyUIMode__RandomBoxOpen    = 22,
	ELobbyUIMode__WeaponPreview    = 23,
	ELobbyUIMode__CharacterPreview = 24,
	ELobbyUIMode__VehicleSkinPreview = 25,
	ELobbyUIMode__EmotionPreview   = 26,
	ELobbyUIMode__ELobbyUIMode_MAX = 27
};


// Enum CrowFPS.ECrowLobbyProfileRecordType
enum class ECrowLobbyProfileRecordType : uint8_t
{
	ECrowLobbyProfileRecordType__Total = 0,
	ECrowLobbyProfileRecordType__Conquest = 1,
	ECrowLobbyProfileRecordType__SquadMatch = 2,
	ECrowLobbyProfileRecordType__ECrowLobbyProfileRecordType_MAX = 3
};


// Enum CrowFPS.ECrowLobbyRecordScoreTab
enum class ECrowLobbyRecordScoreTab : uint8_t
{
	ECrowLobbyRecordScoreTab__None = 0,
	ECrowLobbyRecordScoreTab__All  = 1,
	ECrowLobbyRecordScoreTab__Grade = 2,
	ECrowLobbyRecordScoreTab__SeasonLevel = 3,
	ECrowLobbyRecordScoreTab__Conquest = 4,
	ECrowLobbyRecordScoreTab__SquadOperation = 5,
	ECrowLobbyRecordScoreTab__ECrowLobbyRecordScoreTab_MAX = 6
};


// Enum CrowFPS.ECrowLobbyRecordTab
enum class ECrowLobbyRecordTab : uint8_t
{
	ECrowLobbyRecordTab__None      = 0,
	ECrowLobbyRecordTab__Score     = 1,
	ECrowLobbyRecordTab__Weapon    = 2,
	ECrowLobbyRecordTab__Replay    = 3,
	ECrowLobbyRecordTab__MainMedal = 4,
	ECrowLobbyRecordTab__ECrowLobbyRecordTab_MAX = 5
};


// Enum CrowFPS.ECrowLobbySlotType
enum class ECrowLobbySlotType : uint8_t
{
	ECrowLobbySlotType__Loadout    = 0,
	ECrowLobbySlotType__OutFit     = 1,
	ECrowLobbySlotType__ECrowLobbySlotType_MAX = 2
};


// Enum CrowFPS.ECrowLobbyVehicleEtcType
enum class ECrowLobbyVehicleEtcType : uint8_t
{
	ECrowLobbyVehicleEtcType__None = 0,
	ECrowLobbyVehicleEtcType__ParachuteSkin = 1,
	ECrowLobbyVehicleEtcType__ECrowLobbyVehicleEtcType_MAX = 2
};


// Enum CrowFPS.ELoadingState
enum class ELoadingState : uint8_t
{
	ELoadingState__None            = 0,
	ELoadingState__Ready           = 1,
	ELoadingState__Start           = 2,
	ELoadingState__Idle            = 3,
	ELoadingState__End             = 4,
	ELoadingState__ELoadingState_MAX = 5
};


// Enum CrowFPS.ECrowMailPopupState
enum class ECrowMailPopupState : uint8_t
{
	ECrowMailPopupState__Personal  = 0,
	ECrowMailPopupState__Account   = 1,
	ECrowMailPopupState__ECrowMailPopupState_MAX = 2
};


// Enum CrowFPS.ECrowMainMedalUIType
enum class ECrowMainMedalUIType : uint8_t
{
	ECrowMainMedalUIType__Killstreak = 0,
	ECrowMainMedalUIType__VehicleBoom = 1,
	ECrowMainMedalUIType__Longshot = 2,
	ECrowMainMedalUIType__Combat   = 3,
	ECrowMainMedalUIType__Bomber   = 4,
	ECrowMainMedalUIType__All      = 5,
	ECrowMainMedalUIType__ECrowMainMedalUIType_MAX = 6
};


// Enum CrowFPS.ECrowMBButtonType
enum class ECrowMBButtonType : uint8_t
{
	ECrowMBButtonType__None        = 0,
	ECrowMBButtonType__Ok          = 1,
	ECrowMBButtonType__Yes         = 2,
	ECrowMBButtonType__No          = 3,
	ECrowMBButtonType__Cancel      = 4,
	ECrowMBButtonType__ECrowMBButtonType_MAX = 5
};


// Enum CrowFPS.ECrowMBType
enum class ECrowMBType : uint8_t
{
	ECrowMBType__None              = 0,
	ECrowMBType__Ok                = 1,
	ECrowMBType__YesNo             = 2,
	ECrowMBType__OkCancel          = 3,
	ECrowMBType__NoBGBlurNone      = 4,
	ECrowMBType__OkError           = 5,
	ECrowMBType__ECrowMBType_MAX   = 6
};


// Enum CrowFPS.ECrowMeteorEventState
enum class ECrowMeteorEventState : uint8_t
{
	ECrowMeteorEventState__None    = 0,
	ECrowMeteorEventState__Wait    = 1,
	ECrowMeteorEventState__FireWait = 2,
	ECrowMeteorEventState__Fire    = 3,
	ECrowMeteorEventState__Landed  = 4,
	ECrowMeteorEventState__MineralDestroyed = 5,
	ECrowMeteorEventState__ECrowMeteorEventState_MAX = 6
};


// Enum CrowFPS.ECrowMiningPointState
enum class ECrowMiningPointState : uint8_t
{
	ECrowMiningPointState__None    = 0,
	ECrowMiningPointState__Active  = 1,
	ECrowMiningPointState__Mining  = 2,
	ECrowMiningPointState__Complete = 3,
	ECrowMiningPointState__Deactive = 4,
	ECrowMiningPointState__ECrowMiningPointState_MAX = 5
};


// Enum CrowFPS.ECrowMissionConditionType
enum class ECrowMissionConditionType : uint8_t
{
	ECrowMissionConditionType__None = 0,
	ECrowMissionConditionType__AllComboKill = 1,
	ECrowMissionConditionType__WeaponTypeKill = 2,
	ECrowMissionConditionType__WeaponKill = 3,
	ECrowMissionConditionType__WeaponTypeHeadShot = 4,
	ECrowMissionConditionType__WeaponHeadShot = 5,
	ECrowMissionConditionType__WeaponTypeComboKill = 6,
	ECrowMissionConditionType__WeaponComboKill = 7,
	ECrowMissionConditionType__MeterKill = 8,
	ECrowMissionConditionType__ModeWin = 9,
	ECrowMissionConditionType__ModeLose = 10,
	ECrowMissionConditionType__PlantCompositionBoomb = 11,
	ECrowMissionConditionType__DefuseCompositionBoomb = 12,
	ECrowMissionConditionType__InVehicleKill = 13,
	ECrowMissionConditionType__ConquestUse = 14,
	ECrowMissionConditionType__CharacterZ = 15,
	ECrowMissionConditionType__CharacterC = 16,
	ECrowMissionConditionType__CharacterShift = 17,
	ECrowMissionConditionType__CharacterSpaceBar = 18,
	ECrowMissionConditionType__WeaponGunZoomin = 19,
	ECrowMissionConditionType__Weapon2Key = 20,
	ECrowMissionConditionType__Weapon3Key = 21,
	ECrowMissionConditionType__Weapon4Key = 22,
	ECrowMissionConditionType__keyboardGKey = 23,
	ECrowMissionConditionType__keyboardTKey = 24,
	ECrowMissionConditionType__ResourceGet = 25,
	ECrowMissionConditionType__DroneSummon = 26,
	ECrowMissionConditionType__BandageUse = 27,
	ECrowMissionConditionType__SyringeUse = 28,
	ECrowMissionConditionType__TankVehicle = 29,
	ECrowMissionConditionType__CarVehicle = 30,
	ECrowMissionConditionType__ECrowMissionConditionType_MAX = 31
};


// Enum CrowFPS.ECrowMissionType
enum class ECrowMissionType : uint8_t
{
	ECrowMissionType__None         = 0,
	ECrowMissionType__DailyMission = 1,
	ECrowMissionType__WeeklyMission = 2,
	ECrowMissionType__Achievements = 3,
	ECrowMissionType__SessionMission = 4,
	ECrowMissionType__FirstUserMission = 5,
	ECrowMissionType__Tutorial     = 6,
	ECrowMissionType___Max         = 7,
	ECrowMissionType__ECrowMissionType_MAX = 8
};


// Enum CrowFPS.EWebNoticeType
enum class EWebNoticeType : uint8_t
{
	EWebNoticeType__Maintenance    = 0,
	EWebNoticeType__Announcement   = 1,
	EWebNoticeType__EWebNoticeType_MAX = 2
};


// Enum CrowFPS.ECrowResultEventState
enum class ECrowResultEventState : uint8_t
{
	ECrowResultEventState__None    = 0,
	ECrowResultEventState__UserLevel = 1,
	ECrowResultEventState__WeaponLevel = 2,
	ECrowResultEventState__Rank    = 3,
	ECrowResultEventState__ECrowResultEventState_MAX = 4
};


// Enum CrowFPS.ECrowResultWidgetState
enum class ECrowResultWidgetState : uint8_t
{
	ECrowResultWidgetState__None   = 0,
	ECrowResultWidgetState__Exp    = 1,
	ECrowResultWidgetState__NotLevelUp = 2,
	ECrowResultWidgetState__LevelUp = 3,
	ECrowResultWidgetState__RankNotUp = 4,
	ECrowResultWidgetState__RankUp = 5,
	ECrowResultWidgetState__ECrowResultWidgetState_MAX = 6
};


// Enum CrowFPS.ECrowPersonalResultItemState
enum class ECrowPersonalResultItemState : uint8_t
{
	ECrowPersonalResultItemState__None = 0,
	ECrowPersonalResultItemState__Update = 1,
	ECrowPersonalResultItemState__End = 2,
	ECrowPersonalResultItemState__ECrowPersonalResultItemState_MAX = 3
};


// Enum CrowFPS.ECrowPickupInventoryState
enum class ECrowPickupInventoryState : uint8_t
{
	ECrowPickupInventoryState__None = 0,
	ECrowPickupInventoryState__Normal = 1,
	ECrowPickupInventoryState__Normal_WorldSpawned = 2,
	ECrowPickupInventoryState__Use = 3,
	ECrowPickupInventoryState__Destroying = 4,
	ECrowPickupInventoryState__Destroyed = 5,
	ECrowPickupInventoryState__ECrowPickupInventoryState_MAX = 6
};


// Enum CrowFPS.EPingWidgetType
enum class EPingWidgetType : uint8_t
{
	EPingWidgetType__FAR_MODE      = 0,
	EPingWidgetType__ROW_MODE      = 1,
	EPingWidgetType__DETAIL_PICKUPINVEN_MODE = 2,
	EPingWidgetType__EPingWidgetType_MAX = 3
};


// Enum CrowFPS.ECrowPingType
enum class ECrowPingType : uint8_t
{
	ECrowPingType__None            = 0,
	ECrowPingType__Item            = 1,
	ECrowPingType__Ally            = 2,
	ECrowPingType__Enemy           = 3,
	ECrowPingType__Neutral         = 4,
	ECrowPingType__Ground          = 5,
	ECrowPingType__ConquestAreaIcon = 6,
	ECrowPingType__MiningPoint     = 7,
	ECrowPingType__MiningPoint_Mining_MySquad = 8,
	ECrowPingType__MiningPoint_Mining_Enemy = 9,
	ECrowPingType__MiningPoint_Complete_MySquad = 10,
	ECrowPingType__MiningPoint_Complete_Enemy = 11,
	ECrowPingType__EscapePoint_Active = 12,
	ECrowPingType__EscapePoint_Called = 13,
	ECrowPingType__EscapePoint_Complete = 14,
	ECrowPingType__EscapeHeli      = 15,
	ECrowPingType__EnemyTrace      = 16,
	ECrowPingType__Move            = 17,
	ECrowPingType__LocateEnemy     = 18,
	ECrowPingType__FoundItem       = 19,
	ECrowPingType__Attack          = 20,
	ECrowPingType__WatchOut        = 21,
	ECrowPingType__HoldPosition    = 22,
	ECrowPingType__Observe         = 23,
	ECrowPingType__Max             = 24
};


// Enum CrowFPS.ECrowPingWidgetState
enum class ECrowPingWidgetState : uint8_t
{
	ECrowPingWidgetState__None     = 0,
	ECrowPingWidgetState__Hovered  = 1,
	ECrowPingWidgetState__Targeted = 2,
	ECrowPingWidgetState__ECrowPingWidgetState_MAX = 3
};


// Enum CrowFPS.ECrowPlayerConstructionState
enum class ECrowPlayerConstructionState : uint8_t
{
	ECrowPlayerConstructionState__None = 0,
	ECrowPlayerConstructionState__FindBuildablePlace = 1,
	ECrowPlayerConstructionState__Build = 2,
	ECrowPlayerConstructionState__ECrowPlayerConstructionState_MAX = 3
};


// Enum CrowFPS.ECrowExitWorldType
enum class ECrowExitWorldType : uint8_t
{
	ECrowExitWorldType__None       = 0,
	ECrowExitWorldType__Lobby      = 1,
	ECrowExitWorldType__Quit       = 2,
	ECrowExitWorldType__ECrowExitWorldType_MAX = 3
};


// Enum CrowFPS.ECrowLogTakeExpType
enum class ECrowLogTakeExpType : uint8_t
{
	ECrowLogTakeExpType__None      = 0,
	ECrowLogTakeExpType__Kill      = 1,
	ECrowLogTakeExpType__VehicleDestoy = 2,
	ECrowLogTakeExpType__DailyMission = 3,
	ECrowLogTakeExpType__WeeklyMission = 4,
	ECrowLogTakeExpType__Medal     = 5,
	ECrowLogTakeExpType__Mode      = 6,
	ECrowLogTakeExpType__UseSquadRespawn = 7,
	ECrowLogTakeExpType__ReviveMySquad = 8,
	ECrowLogTakeExpType__ConquestAreaGauge = 9,
	ECrowLogTakeExpType__DyingPlayerPoint = 10,
	ECrowLogTakeExpType__AssistUAV = 11,
	ECrowLogTakeExpType__AssistCar = 12,
	ECrowLogTakeExpType__AssistTank = 13,
	ECrowLogTakeExpType__AssistHeli = 14,
	ECrowLogTakeExpType__AssistBoat = 15,
	ECrowLogTakeExpType__AssistSquadCar = 16,
	ECrowLogTakeExpType__AssistSquadTank = 17,
	ECrowLogTakeExpType__AssistSquadHeli = 18,
	ECrowLogTakeExpType__AssistSquadBoat = 19,
	ECrowLogTakeExpType__AssistSquadCharacter = 20,
	ECrowLogTakeExpType__AssistCharacter = 21,
	ECrowLogTakeExpType__ECrowLogTakeExpType_MAX = 22
};


// Enum CrowFPS.ECrowBloodAnimType
enum class ECrowBloodAnimType : uint8_t
{
	ECrowBloodAnimType__AppearBlood = 0,
	ECrowBloodAnimType__AppearBloodScreen = 1,
	ECrowBloodAnimType__DisappearBlood = 2,
	ECrowBloodAnimType__DisappearBloodScreen = 3,
	ECrowBloodAnimType__ECrowBloodAnimType_MAX = 4
};


// Enum CrowFPS.ECrowPostProcess
enum class ECrowPostProcess : uint8_t
{
	ECrowPostProcess__None         = 0,
	ECrowPostProcess__ECrowPostProcess_MAX = 1
};


// Enum CrowFPS.ECrowMatchWidgetType
enum class ECrowMatchWidgetType : uint8_t
{
	ECrowMatchWidgetType__WaitUser = 0,
	ECrowMatchWidgetType__TransportAirPlaneUser = 1,
	ECrowMatchWidgetType__ECrowMatchWidgetType_MAX = 2
};


// Enum CrowFPS.ECrowProgressBarFillType
enum class ECrowProgressBarFillType : uint8_t
{
	ECrowProgressBarFillType__LeftToRight = 0,
	ECrowProgressBarFillType__RightToLeft = 1,
	ECrowProgressBarFillType__ECrowProgressBarFillType_MAX = 2
};


// Enum CrowFPS.ECrowProjectileMoveType
enum class ECrowProjectileMoveType : uint8_t
{
	ECrowProjectileMoveType__None  = 0,
	ECrowProjectileMoveType__MovementComponent = 1,
	ECrowProjectileMoveType__TrajectoryComponent = 2,
	ECrowProjectileMoveType__PhysicsSimulation = 3,
	ECrowProjectileMoveType__ECrowProjectileMoveType_MAX = 4
};


// Enum CrowFPS.ECrowProjectileDamageCheck
enum class ECrowProjectileDamageCheck : uint8_t
{
	ECrowProjectileDamageCheck__NoDamage = 0,
	ECrowProjectileDamageCheck__CheckTrajectory = 1,
	ECrowProjectileDamageCheck__AllowHitWithoutTrajectoryCheck = 2,
	ECrowProjectileDamageCheck__ECrowProjectileDamageCheck_MAX = 3
};


// Enum CrowFPS.ECrowClaymoreMineState
enum class ECrowClaymoreMineState : uint8_t
{
	ECrowClaymoreMineState__None   = 0,
	ECrowClaymoreMineState__Wait   = 1,
	ECrowClaymoreMineState__Active = 2,
	ECrowClaymoreMineState__InstallPawnDie = 3,
	ECrowClaymoreMineState__Collect = 4,
	ECrowClaymoreMineState__SelfDestroy = 5,
	ECrowClaymoreMineState__Detection = 6,
	ECrowClaymoreMineState__Bomb   = 7,
	ECrowClaymoreMineState__ECrowClaymoreMineState_MAX = 8
};


// Enum CrowFPS.ERankAlarmWidgetSwitcher
enum class ERankAlarmWidgetSwitcher : uint8_t
{
	ERankAlarmWidgetSwitcher__First = 0,
	ERankAlarmWidgetSwitcher__Second = 1,
	ERankAlarmWidgetSwitcher__Third = 2,
	ERankAlarmWidgetSwitcher__Fourth = 3,
	ERankAlarmWidgetSwitcher__Fifth = 4,
	ERankAlarmWidgetSwitcher__ETCRank = 5,
	ERankAlarmWidgetSwitcher__FirstRecapture = 6,
	ERankAlarmWidgetSwitcher__ERankAlarmWidgetSwitcher_MAX = 7
};


// Enum CrowFPS.ECrowRankingPeriodType
enum class ECrowRankingPeriodType : uint8_t
{
	ECrowRankingPeriodType__Year   = 0,
	ECrowRankingPeriodType__Season = 1,
	ECrowRankingPeriodType__ECrowRankingPeriodType_MAX = 2
};


// Enum CrowFPS.ECrowRankingRecordType
enum class ECrowRankingRecordType : uint8_t
{
	ECrowRankingRecordType__MercenaryLevel = 0,
	ECrowRankingRecordType__SeasonLevel = 1,
	ECrowRankingRecordType__Conquest = 2,
	ECrowRankingRecordType__SquadMatch = 3,
	ECrowRankingRecordType__ECrowRankingRecordType_MAX = 4
};


// Enum CrowFPS.ECrowRecordPawnType
enum class ECrowRecordPawnType : uint8_t
{
	ECrowRecordPawnType__None      = 0,
	ECrowRecordPawnType__Character = 1,
	ECrowRecordPawnType__Tank      = 2,
	ECrowRecordPawnType__Heli      = 3,
	ECrowRecordPawnType__Car       = 4,
	ECrowRecordPawnType__Boat      = 5,
	ECrowRecordPawnType__CombatCar = 6,
	ECrowRecordPawnType__ECrowRecordPawnType_MAX = 7
};


// Enum CrowFPS.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t
{
	EClassRepNodeMapping__NotRouted = 0,
	EClassRepNodeMapping__RelevantAllConnections = 1,
	EClassRepNodeMapping__Pawn     = 2,
	EClassRepNodeMapping__Spatialize_Static = 3,
	EClassRepNodeMapping__Spatialize_Dynamic = 4,
	EClassRepNodeMapping__Spatialize_Dormancy = 5,
	EClassRepNodeMapping__EClassRepNodeMapping_MAX = 6
};


// Enum CrowFPS.ECrowAirPlaneState
enum class ECrowAirPlaneState : uint8_t
{
	ECrowAirPlaneState__AirPlaneStateReady = 0,
	ECrowAirPlaneState__AirPlaneStateCanDrop = 1,
	ECrowAirPlaneState__AirPlaneStateForcedDrop = 2,
	ECrowAirPlaneState__ECrowAirPlaneState_MAX = 3
};


// Enum CrowFPS.ECrowRespawnSelecteInfoWidgetState
enum class ECrowRespawnSelecteInfoWidgetState : uint8_t
{
	ECrowRespawnSelecteInfoWidgetState__None = 0,
	ECrowRespawnSelecteInfoWidgetState__Waiting = 1,
	ECrowRespawnSelecteInfoWidgetState__Ready = 2,
	ECrowRespawnSelecteInfoWidgetState__PossibleRespawn = 3,
	ECrowRespawnSelecteInfoWidgetState__ImpossibleRespawn = 4,
	ECrowRespawnSelecteInfoWidgetState__ECrowRespawnSelecteInfoWidgetState_MAX = 5
};


// Enum CrowFPS.ECrowRotorType
enum class ECrowRotorType : uint8_t
{
	ECrowRotorType__EMainRotor     = 0,
	ECrowRotorType__ESubRotor      = 1,
	ECrowRotorType__EMax           = 2,
	ECrowRotorType__ECrowRotorType_MAX = 3
};


// Enum CrowFPS.ECrowSafeBoxEventState
enum class ECrowSafeBoxEventState : uint8_t
{
	ECrowSafeBoxEventState__None   = 0,
	ECrowSafeBoxEventState__Begin  = 1,
	ECrowSafeBoxEventState__Opening = 2,
	ECrowSafeBoxEventState__Opened = 3,
	ECrowSafeBoxEventState__Completed = 4,
	ECrowSafeBoxEventState__ECrowSafeBoxEventState_MAX = 5
};


// Enum CrowFPS.ECrowSceneCaptureType
enum class ECrowSceneCaptureType : uint8_t
{
	ECrowSceneCaptureType__Bending = 0,
	ECrowSceneCaptureType__Wind    = 1,
	ECrowSceneCaptureType__ECrowSceneCaptureType_MAX = 2
};


// Enum CrowFPS.ELoadOutMode
enum class ELoadOutMode : uint8_t
{
	ELoadOutMode__None             = 0,
	ELoadOutMode__Hidden           = 1,
	ELoadOutMode__WeaponLodOut     = 2,
	ELoadOutMode__WeaponCustom     = 3,
	ELoadOutMode__ELoadOutMode_MAX = 4
};


// Enum CrowFPS.EMainCameraType
enum class EMainCameraType : uint8_t
{
	EMainCameraType__Center        = 0,
	EMainCameraType__Left          = 1,
	EMainCameraType__Right         = 2,
	EMainCameraType__EMainCameraType_MAX = 3
};


// Enum CrowFPS.ECharacterCustomCameraType
enum class ECharacterCustomCameraType : uint8_t
{
	ECharacterCustomCameraType__Default = 0,
	ECharacterCustomCameraType__Upper = 1,
	ECharacterCustomCameraType__Lower = 2,
	ECharacterCustomCameraType__ECharacterCustomCameraType_MAX = 3
};


// Enum CrowFPS.ERotationMode
enum class ERotationMode : uint8_t
{
	ERotationMode__None            = 0,
	ERotationMode__Vertical        = 1,
	ERotationMode__Horizontal      = 2,
	ERotationMode__ERotationMode_MAX = 3
};


// Enum CrowFPS.EMatchingCancelReason
enum class EMatchingCancelReason : uint8_t
{
	EMatchingCancelReason__None    = 0,
	EMatchingCancelReason__ServerError = 1,
	EMatchingCancelReason__ByUser  = 2,
	EMatchingCancelReason__Timeout = 3,
	EMatchingCancelReason__DedicatedServerState = 4,
	EMatchingCancelReason__DoesNotExistDedicatedServer = 5,
	EMatchingCancelReason__EMatchingCancelReason_MAX = 6
};


// Enum CrowFPS.EStartGameType
enum class EStartGameType : uint8_t
{
	EStartGameType__None           = 0,
	EStartGameType__StartGamePlay  = 1,
	EStartGameType__GamePlay       = 2,
	EStartGameType__QuickPlay      = 3,
	EStartGameType__JoinGame       = 4,
	EStartGameType__EStartGameType_MAX = 5
};


// Enum CrowFPS.ESaveAppearanceType
enum class ESaveAppearanceType : uint8_t
{
	ESaveAppearanceType__Face      = 0,
	ESaveAppearanceType__Hair      = 1,
	ESaveAppearanceType__HairColor = 2,
	ESaveAppearanceType__Beard     = 3,
	ESaveAppearanceType__BeardColor = 4,
	ESaveAppearanceType__EyeColor  = 5,
	ESaveAppearanceType__TattooArm = 6,
	ESaveAppearanceType__TattooFace = 7,
	ESaveAppearanceType__AppearanceType_Max = 8,
	ESaveAppearanceType__ESaveAppearanceType_MAX = 9
};


// Enum CrowFPS.ELobbyMainSpawnSlot
enum class ELobbyMainSpawnSlot : uint8_t
{
	ELobbyMainSpawnSlot__SpawnSlot = 0,
	ELobbyMainSpawnSlot__SpawnSlot01 = 1,
	ELobbyMainSpawnSlot__SpawnSlot02 = 2,
	ELobbyMainSpawnSlot__SpawnSlot03 = 3,
	ELobbyMainSpawnSlot__SpawnSlot_Max = 4
};


// Enum CrowFPS.ELobbySceneMode
enum class ELobbySceneMode : uint8_t
{
	ELobbySceneMode__None          = 0,
	ELobbySceneMode__Main          = 1,
	ELobbySceneMode__PlaySetting   = 2,
	ELobbySceneMode__CharacterCustom = 3,
	ELobbySceneMode__CharacterCustomAppearance = 4,
	ELobbySceneMode__WeaponLodOut  = 5,
	ELobbySceneMode__WeaponCustom  = 6,
	ELobbySceneMode__WeaponCustomSticker = 7,
	ELobbySceneMode__Mission       = 8,
	ELobbySceneMode__Shop          = 9,
	ELobbySceneMode__Spray         = 10,
	ELobbySceneMode__Emotion       = 11,
	ELobbySceneMode__VehicleSkin   = 12,
	ELobbySceneMode__Record        = 13,
	ELobbySceneMode__Clan          = 14,
	ELobbySceneMode__WeaponPreview = 15,
	ELobbySceneMode__CharacterPreview = 16,
	ELobbySceneMode__VehicleSkinPreview = 17,
	ELobbySceneMode__EmotionPreview = 18,
	ELobbySceneMode__ELobbySceneMode_MAX = 19
};


// Enum CrowFPS.ECameratBlendFunctionn
enum class ECameratBlendFunctionn : uint8_t
{
	ECameratBlendFunctionn__Blend_Linear = 0,
	ECameratBlendFunctionn__Blend_Cubic = 1,
	ECameratBlendFunctionn__Blend_EaseIn = 2,
	ECameratBlendFunctionn__Blend_EaseOut = 3,
	ECameratBlendFunctionn__Blend_EaseInOut = 4,
	ECameratBlendFunctionn__Blend_MAX = 5
};


// Enum CrowFPS.ECrowSceneType
enum class ECrowSceneType : uint8_t
{
	ECrowSceneType__None           = 0,
	ECrowSceneType__Lobby          = 1,
	ECrowSceneType__Inventory      = 2,
	ECrowSceneType__Shop           = 3,
	ECrowSceneType__Game           = 4,
	ECrowSceneType__Login          = 5,
	ECrowSceneType__PIE_Entry      = 6,
	ECrowSceneType__ECrowSceneType_MAX = 7
};


// Enum CrowFPS.ECrowScorePawnType
enum class ECrowScorePawnType : uint8_t
{
	ECrowScorePawnType__None       = 0,
	ECrowScorePawnType__Character  = 1,
	ECrowScorePawnType__Tank       = 2,
	ECrowScorePawnType__Heli       = 3,
	ECrowScorePawnType__Car        = 4,
	ECrowScorePawnType__Boat       = 5,
	ECrowScorePawnType__ECrowScorePawnType_MAX = 6
};


// Enum CrowFPS.ESettingsSlotIndexedValueFillType
enum class ESettingsSlotIndexedValueFillType : uint8_t
{
	ESettingsSlotIndexedValueFillType__Custom = 0,
	ESettingsSlotIndexedValueFillType__Resolution = 1,
	ESettingsSlotIndexedValueFillType__ESettingsSlotIndexedValueFillType_MAX = 2
};


// Enum CrowFPS.ESettingPopupTitleType
enum class ESettingPopupTitleType : uint8_t
{
	ESettingPopupTitleType__Alert  = 0,
	ESettingPopupTitleType__ESettingPopupTitleType_MAX = 1
};


// Enum CrowFPS.ESettingPopupMessageType
enum class ESettingPopupMessageType : uint8_t
{
	ESettingPopupMessageType__ConfirmMessage = 0,
	ESettingPopupMessageType__HasModifiedSettings = 1,
	ESettingPopupMessageType__SettingDefault = 2,
	ESettingPopupMessageType__ApplyMessage = 3,
	ESettingPopupMessageType__ESettingPopupMessageType_MAX = 4
};


// Enum CrowFPS.ESettingsVoiceChatWay
enum class ESettingsVoiceChatWay : uint8_t
{
	ESettingsVoiceChatWay__Radio   = 0,
	ESettingsVoiceChatWay__Phone   = 1,
	ESettingsVoiceChatWay__NotUsed = 2,
	ESettingsVoiceChatWay__ESettingsVoiceChatWay_MAX = 3
};


// Enum CrowFPS.ESettingsCustomCrossHairColorType
enum class ESettingsCustomCrossHairColorType : uint8_t
{
	ESettingsCustomCrossHairColorType__Common = 0,
	ESettingsCustomCrossHairColorType__GroundVehicle = 1,
	ESettingsCustomCrossHairColorType__AirVehicle = 2,
	ESettingsCustomCrossHairColorType__SeaVehicle = 3,
	ESettingsCustomCrossHairColorType__ESettingsCustomCrossHairColorType_MAX = 4
};


// Enum CrowFPS.ESettingsSlotType
enum class ESettingsSlotType : uint8_t
{
	ESettingsSlotType__KeyBinding  = 0,
	ESettingsSlotType__OnOff       = 1,
	ESettingsSlotType__Slider      = 2,
	ESettingsSlotType__Selection   = 3,
	ESettingsSlotType__Dropdown    = 4,
	ESettingsSlotType__CrossHair   = 5,
	ESettingsSlotType__Button      = 6,
	ESettingsSlotType__Invalid     = 7,
	ESettingsSlotType__ESettingsSlotType_MAX = 8
};


// Enum CrowFPS.ESettingKeySlotType
enum class ESettingKeySlotType : uint8_t
{
	FirstKeySlot                   = 0,
	SecondKeySlot                  = 1,
	GamepadSlot                    = 2,
	MaxSlot                        = 3,
	UnknownSlot                    = 4,
	ESettingKeySlotType_MAX        = 5
};


// Enum CrowFPS.ESettingKeySlotCategory
enum class ESettingKeySlotCategory : uint8_t
{
	CommonBehaviour                = 0,
	SpecificBehaviour              = 1,
	Communication                  = 2,
	Combat                         = 3,
	VehicleCommon                  = 4,
	WheeledVehicle                 = 5,
	RotorVehicle                   = 6,
	WaterVehicle                   = 7,
	HeliVehicle                    = 8,
	InventoryBehaviour             = 9,
	UIBehaviour                    = 10,
	SpectationBehaviour            = 11,
	Max                            = 12,
	UnknownCategory                = 13
};


// Enum CrowFPS.ESettingCategoryType
enum class ESettingCategoryType : uint8_t
{
	ESettingCategoryType__Display  = 0,
	ESettingCategoryType__AdvancedDisplay = 1,
	ESettingCategoryType__Audio    = 2,
	ESettingCategoryType__Input    = 3,
	ESettingCategoryType__Gameplay = 4,
	ESettingCategoryType__Control  = 5,
	ESettingCategoryType__Etc      = 6,
	ESettingCategoryType__Max      = 7,
	ESettingCategoryType__SubItem  = 8
};


// Enum CrowFPS.ESettingRepositoryType
enum class ESettingRepositoryType : uint8_t
{
	ESettingRepositoryType__Default = 0,
	ESettingRepositoryType__User   = 1,
	ESettingRepositoryType__Modified = 2,
	ESettingRepositoryType__ESettingRepositoryType_MAX = 3
};


// Enum CrowFPS.ShopItemSlotType
enum class EShopItemSlotType : uint8_t
{
	ShopItemSlotType__None         = 0,
	ShopItemSlotType__Icon         = 1,
	ShopItemSlotType__Inventory    = 2,
	ShopItemSlotType__ShopItemSlotType_MAX = 3
};


// Enum CrowFPS.ECrowShopSortType
enum class ECrowShopSortType : uint8_t
{
	ECrowShopSortType__None        = 0,
	ECrowShopSortType__New         = 1,
	ECrowShopSortType__Sale        = 2,
	ECrowShopSortType__Recommend   = 3,
	ECrowShopSortType__LowPrice    = 4,
	ECrowShopSortType__HighPrice   = 5,
	ECrowShopSortType__ECrowShopSortType_MAX = 6
};


// Enum CrowFPS.ECrowSpecificPurchaseType
enum class ECrowSpecificPurchaseType : uint8_t
{
	ECrowSpecificPurchaseType__Normal = 0,
	ECrowSpecificPurchaseType__BattlePass = 1,
	ECrowSpecificPurchaseType__BattlePassFreePass = 2,
	ECrowSpecificPurchaseType__ECrowSpecificPurchaseType_MAX = 3
};


// Enum CrowFPS.EItemOwnerType
enum class EItemOwnerType : uint8_t
{
	EItemOwnerType__OwnUser        = 0,
	EItemOwnerType__OwnClan        = 1,
	EItemOwnerType__EItemOwnerType_MAX = 2
};


// Enum CrowFPS.ECrowShopProductSubType
enum class ECrowShopProductSubType : uint8_t
{
	ECrowShopProductSubType__None  = 0,
	ECrowShopProductSubType__KeySubStore = 1,
	ECrowShopProductSubType__BoxSubStore = 2,
	ECrowShopProductSubType__RCPSubStore = 3,
	ECrowShopProductSubType__ETCItemSubStore = 4,
	ECrowShopProductSubType__SkinSubStore = 5,
	ECrowShopProductSubType__StickerSubStore = 6,
	ECrowShopProductSubType__HeadSubStore = 7,
	ECrowShopProductSubType__GlassesSubStore = 8,
	ECrowShopProductSubType__FaceItemSubStore = 9,
	ECrowShopProductSubType__TopSubStore = 10,
	ECrowShopProductSubType__GlovesSubStore = 11,
	ECrowShopProductSubType__OuterSubStore = 12,
	ECrowShopProductSubType__PantsSubStore = 13,
	ECrowShopProductSubType__ShoesSubStore = 14,
	ECrowShopProductSubType__BagSubStore = 15,
	ECrowShopProductSubType__RaceSubStore = 16,
	ECrowShopProductSubType__HairSubStore = 17,
	ECrowShopProductSubType__BeardSubStore = 18,
	ECrowShopProductSubType__EyeColorSubStore = 19,
	ECrowShopProductSubType__TattooSubStore = 20,
	ECrowShopProductSubType__SpraySubStore = 21,
	ECrowShopProductSubType__WeaponChoiceTab = 22,
	ECrowShopProductSubType__AssistantWeaponChoiceTab = 23,
	ECrowShopProductSubType__PartChoiceTab = 24,
	ECrowShopProductSubType__BattlePassTab = 25,
	ECrowShopProductSubType__PackageSubStore = 26,
	ECrowShopProductSubType__EmotionTab = 27,
	ECrowShopProductSubType__WinMotionTab = 28,
	ECrowShopProductSubType__VehicleSkinPulsarTab = 29,
	ECrowShopProductSubType__VehicleSkinBuggyTab = 30,
	ECrowShopProductSubType__VehicleSkinBrawlerTab = 31,
	ECrowShopProductSubType__VehicleSkinGrizzlyTab = 32,
	ECrowShopProductSubType__VehicleSkinRoadRoverTab = 33,
	ECrowShopProductSubType__VehicleSkinRhinoTab = 34,
	ECrowShopProductSubType__VehicleSkinLeonidTab = 35,
	ECrowShopProductSubType__VehicleSkinSparrowRocketTab = 36,
	ECrowShopProductSubType__VehicleSkinSparrowGatilingTab = 37,
	ECrowShopProductSubType__VehicleSkinSeaHorseTab = 38,
	ECrowShopProductSubType__ClothTopPatchTab = 39,
	ECrowShopProductSubType__ClanEmblemMarkTab = 40,
	ECrowShopProductSubType__ClanEmblemBGTab = 41,
	ECrowShopProductSubType__VehicleSkinParachuteTab = 42,
	ECrowShopProductSubType__LegendaryWeapon = 43,
	ECrowShopProductSubType__ECrowShopProductSubType_MAX = 44
};


// Enum CrowFPS.ECrowShopProductType
enum class ECrowShopProductType : uint8_t
{
	ECrowShopProductType__None     = 0,
	ECrowShopProductType__NormalStorePage = 1,
	ECrowShopProductType__PackageStorePage = 2,
	ECrowShopProductType__BattlePassStorePage = 3,
	ECrowShopProductType__ClothStorePage = 4,
	ECrowShopProductType__WeaponStorePage = 5,
	ECrowShopProductType__EmotionStorePage = 6,
	ECrowShopProductType__SprayStorePage = 7,
	ECrowShopProductType__LookChangeStorePage = 8,
	ECrowShopProductType__VehicleStoreNomalCarSkinPage = 9,
	ECrowShopProductType__VehicleStoreCombetCarSkinPage = 10,
	ECrowShopProductType__VehicleStoreTankSkinPage = 11,
	ECrowShopProductType__VehicleStoreHeliSkinPage = 12,
	ECrowShopProductType__VehicleStoreBoatSkinPage = 13,
	ECrowShopProductType__ClanMark = 14,
	ECrowShopProductType__ShopItemDeconstruct = 15,
	ECrowShopProductType__ShopInventoryPage = 16,
	ECrowShopProductType__WeaponLevelJump = 17,
	ECrowShopProductType__ClothSlotPass = 18,
	ECrowShopProductType__WeaponSlotPass = 19,
	ECrowShopProductType__VehicleStoreEtcSkinPage = 20,
	ECrowShopProductType__ECrowShopProductType_MAX = 21
};


// Enum CrowFPS.ECrowSkydivingParachuteState
enum class ECrowSkydivingParachuteState : uint8_t
{
	ECrowSkydivingParachuteState__None = 0,
	ECrowSkydivingParachuteState__Spread = 1,
	ECrowSkydivingParachuteState__Fall = 2,
	ECrowSkydivingParachuteState__Land = 3,
	ECrowSkydivingParachuteState__ECrowSkydivingParachuteState_MAX = 4
};


// Enum CrowFPS.ESocialTabType
enum class ESocialTabType : uint8_t
{
	ESocialTabType__FriendList     = 0,
	ESocialTabType__FriendRequst   = 1,
	ESocialTabType__Recent         = 2,
	ESocialTabType__Search         = 3,
	ESocialTabType__ESocialTabType_MAX = 4
};


// Enum CrowFPS.ESortState
enum class ESortState : uint8_t
{
	ESortState__Normal             = 0,
	ESortState__Ascending          = 1,
	ESortState__Descending         = 2,
	ESortState__ESortState_MAX     = 3
};


// Enum CrowFPS.ECrowSpectatorType
enum class ECrowSpectatorType : uint8_t
{
	ECrowSpectatorType__Default    = 0,
	ECrowSpectatorType__CustomModeObserver = 1,
	ECrowSpectatorType__ECrowSpectatorType_MAX = 2
};


// Enum CrowFPS.ESprayType
enum class ESprayType : uint8_t
{
	ESprayType__Normal             = 0,
	ESprayType__Foil               = 1,
	ESprayType__Holo               = 2,
	ESprayType__Max                = 3
};


// Enum CrowFPS.ECrowSquadMatchReward
enum class ECrowSquadMatchReward : uint8_t
{
	ECrowSquadMatchReward__None    = 0,
	ECrowSquadMatchReward__ItemBox = 1,
	ECrowSquadMatchReward__LoadoutBox = 2,
	ECrowSquadMatchReward__Vehicle = 3,
	ECrowSquadMatchReward__CallHeli = 4,
	ECrowSquadMatchReward__ECrowSquadMatchReward_MAX = 5
};


// Enum CrowFPS.ECrowStatusWidgetFlags
enum class ECrowStatusWidgetFlags : uint8_t
{
	ECrowStatusWidgetFlags__None   = 0,
	ECrowStatusWidgetFlags__Heal   = 1,
	ECrowStatusWidgetFlags__Gadget = 2,
	ECrowStatusWidgetFlags__KeyGuide_T = 3,
	ECrowStatusWidgetFlags__KeyGuide_F = 4,
	ECrowStatusWidgetFlags__Default = 5,
	ECrowStatusWidgetFlags__All    = 6,
	ECrowStatusWidgetFlags__ECrowStatusWidgetFlags_MAX = 7
};


// Enum CrowFPS.ECrowSupplyBoxType
enum class ECrowSupplyBoxType : uint8_t
{
	ECrowSupplyBoxType__None       = 0,
	ECrowSupplyBoxType__BulletBox  = 1,
	ECrowSupplyBoxType__MorphineBox = 2,
	ECrowSupplyBoxType__WeaponBox  = 3,
	ECrowSupplyBoxType__ECrowSupplyBoxType_MAX = 4
};


// Enum CrowFPS.ECrowSupplyEventState
enum class ECrowSupplyEventState : uint8_t
{
	ECrowSupplyEventState__None    = 0,
	ECrowSupplyEventState__Falling = 1,
	ECrowSupplyEventState__Landed  = 2,
	ECrowSupplyEventState__ECrowSupplyEventState_MAX = 3
};


// Enum CrowFPS.ECrowTattooType
enum class ECrowTattooType : uint8_t
{
	ECrowTattooType__Face          = 0,
	ECrowTattooType__Arm           = 1,
	ECrowTattooType__ECrowTattooType_MAX = 2
};


// Enum CrowFPS.ECrowTrajectoryHitCheckResult
enum class ECrowTrajectoryHitCheckResult : uint8_t
{
	ECrowTrajectoryHitCheckResult__Success = 0,
	ECrowTrajectoryHitCheckResult__IgnoreHit = 1,
	ECrowTrajectoryHitCheckResult__YellowFlag = 2,
	ECrowTrajectoryHitCheckResult__RedFlag = 3,
	ECrowTrajectoryHitCheckResult__ECrowTrajectoryHitCheckResult_MAX = 4
};


// Enum CrowFPS.ETriggerInputKeyType
enum class ETriggerInputKeyType : uint8_t
{
	ETriggerInputKeyType__None     = 0,
	ETriggerInputKeyType__Key      = 1,
	ETriggerInputKeyType__Key01    = 2,
	ETriggerInputKeyType__ETriggerInputKeyType_MAX = 3
};


// Enum CrowFPS.ETriggerMessageParamType
enum class ETriggerMessageParamType : uint8_t
{
	ETriggerMessageParamType__BindKeyImage = 0,
	ETriggerMessageParamType__PressKeyHoldTime = 1,
	ETriggerMessageParamType__ETriggerMessageParamType_MAX = 2
};


// Enum CrowFPS.ECrowTutorialInfoColor
enum class ECrowTutorialInfoColor : uint8_t
{
	ECrowTutorialInfoColor__Black  = 0,
	ECrowTutorialInfoColor__Red    = 1,
	ECrowTutorialInfoColor__ECrowTutorialInfoColor_MAX = 2
};


// Enum CrowFPS.EKeyInputType
enum class EKeyInputType : uint8_t
{
	EKeyInputType__None            = 0,
	EKeyInputType__Ctrl_Button     = 1,
	EKeyInputType__Esc_Button      = 2,
	EKeyInputType__EKeyInputType_MAX = 3
};


// Enum CrowFPS.EMouseButtonType
enum class EMouseButtonType : uint8_t
{
	EMouseButtonType__None         = 0,
	EMouseButtonType__Left_click   = 1,
	EMouseButtonType__Right_click  = 2,
	EMouseButtonType__Center_click = 3,
	EMouseButtonType__EMouseButtonType_MAX = 4
};


// Enum CrowFPS.ECrowControlType
enum class ECrowControlType : uint8_t
{
	ECrowControlType__None         = 0,
	ECrowControlType__KeyBoard     = 1,
	ECrowControlType__Pad          = 2,
	ECrowControlType__Hacking      = 3,
	ECrowControlType__ECrowControlType_MAX = 4
};


// Enum CrowFPS.ECrowCameraLimitMode
enum class ECrowCameraLimitMode : uint8_t
{
	ECrowCameraLimitMode__None     = 0,
	ECrowCameraLimitMode__FPOnly   = 1,
	ECrowCameraLimitMode__Both     = 2,
	ECrowCameraLimitMode__TPOnly   = 3,
	ECrowCameraLimitMode__ECrowCameraLimitMode_MAX = 4
};


// Enum CrowFPS.ECrowWinLose
enum class ECrowWinLose : uint8_t
{
	ECrowWinLose__Win              = 0,
	ECrowWinLose__Lose             = 1,
	ECrowWinLose__Draw             = 2,
	ECrowWinLose__Invalidity       = 3,
	ECrowWinLose__MAX              = 4
};


// Enum CrowFPS.ECrowSkydivingAnimState
enum class ECrowSkydivingAnimState : uint8_t
{
	ECrowSkydivingAnimState__None  = 0,
	ECrowSkydivingAnimState__FreeFall = 1,
	ECrowSkydivingAnimState__ParachuteSpread = 2,
	ECrowSkydivingAnimState__Parachute = 3,
	ECrowSkydivingAnimState__ReadyToLand = 4,
	ECrowSkydivingAnimState__Land  = 5,
	ECrowSkydivingAnimState__WalkLand = 6,
	ECrowSkydivingAnimState__RollLand = 7,
	ECrowSkydivingAnimState__Falling = 8,
	ECrowSkydivingAnimState__FallingLand = 9,
	ECrowSkydivingAnimState__Swim  = 10,
	ECrowSkydivingAnimState__ECrowSkydivingAnimState_MAX = 11
};


// Enum CrowFPS.ECrowSkydivingState
enum class ECrowSkydivingState : uint8_t
{
	ECrowSkydivingState__None      = 0,
	ECrowSkydivingState__FreeFall  = 1,
	ECrowSkydivingState__ParachuteSpread = 2,
	ECrowSkydivingState__Parachute = 3,
	ECrowSkydivingState__ReadyToLand = 4,
	ECrowSkydivingState__Land      = 5,
	ECrowSkydivingState__Dying     = 6,
	ECrowSkydivingState__ECrowSkydivingState_MAX = 7
};


// Enum CrowFPS.ECrowChatWidgetStatus
enum class ECrowChatWidgetStatus : uint8_t
{
	ECrowChatWidgetStatus__ChatTyping = 0,
	ECrowChatWidgetStatus__ChatMessageInfo = 1,
	ECrowChatWidgetStatus__ECrowChatWidgetStatus_MAX = 2
};


// Enum CrowFPS.ECrowVoiceAudioFadeModel
enum class ECrowVoiceAudioFadeModel : uint8_t
{
	ECrowVoiceAudioFadeModel__InverseByDistance = 0,
	ECrowVoiceAudioFadeModel__LinearByDistance = 1,
	ECrowVoiceAudioFadeModel__ExponentialByDistance = 2,
	ECrowVoiceAudioFadeModel__ECrowVoiceAudioFadeModel_MAX = 3
};


// Enum CrowFPS.ECrowVoiceChannelType
enum class ECrowVoiceChannelType : uint8_t
{
	ECrowVoiceChannelType__NonPositional = 0,
	ECrowVoiceChannelType__Positional = 1,
	ECrowVoiceChannelType__Echo    = 2,
	ECrowVoiceChannelType__ECrowVoiceChannelType_MAX = 3
};


// Enum CrowFPS.ECrowVoiceInputType
enum class ECrowVoiceInputType : uint8_t
{
	ECrowVoiceInputType__VoicInputType_None = 0,
	ECrowVoiceInputType__VoiceInputType_PressToSpeak = 1,
	ECrowVoiceInputType__VoiceInputType_Disable = 2,
	ECrowVoiceInputType__VoiceInputType_Alaways = 3,
	ECrowVoiceInputType__ECrowVoiceInputType_MAX = 4
};


// Enum CrowFPS.ECrowVoiceChannel
enum class ECrowVoiceChannel : uint8_t
{
	ECrowVoiceChannel__VoiceChannel_None = 0,
	ECrowVoiceChannel__VoiceChannel_Party = 1,
	ECrowVoiceChannel__VoiceChannel_Team = 2,
	ECrowVoiceChannel__VoiceChannel_Squad = 3,
	ECrowVoiceChannel__VoiceChannel_MAX = 4
};


// Enum CrowFPS.ECrowVoiceState
enum class ECrowVoiceState : uint8_t
{
	ECrowVoiceState__VoiceOff      = 0,
	ECrowVoiceState__VoiceOn       = 1,
	ECrowVoiceState__VoiceMute     = 2,
	ECrowVoiceState__ECrowVoiceState_MAX = 3
};


// Enum CrowFPS.ECrowChatType
enum class ECrowChatType : uint8_t
{
	ECrowChatType__Chat_Notice     = 0,
	ECrowChatType__Chat_IngameAll  = 1,
	ECrowChatType__Chat_Party      = 2,
	ECrowChatType__Chat_Team       = 3,
	ECrowChatType__Chat_Team_Ghost = 4,
	ECrowChatType__Chat_Squad      = 5,
	ECrowChatType__Chat_Whisper    = 6,
	ECrowChatType__Chat_Error      = 7,
	ECrowChatType__Chat_MAX        = 8
};


// Enum CrowFPS.ECrowBleedingType
enum class ECrowBleedingType : uint8_t
{
	ECrowBleedingType__Bleeding_None = 0,
	ECrowBleedingType__Bleeding_Fast = 1,
	ECrowBleedingType__Bleeding_Slow = 2,
	ECrowBleedingType__Bleeding_MAX = 3
};


// Enum CrowFPS.ECrowScopeSightRate
enum class ECrowScopeSightRate : uint8_t
{
	ECrowScopeSightRate__ScopeSightRate = 0,
	ECrowScopeSightRate__ScopeSightRate01 = 1,
	ECrowScopeSightRate__ScopeSightRate02 = 2,
	ECrowScopeSightRate__ScopeSightRate03 = 3,
	ECrowScopeSightRate__ScopeSightRate04 = 4,
	ECrowScopeSightRate__ScopeSightRate05 = 5,
	ECrowScopeSightRate__ScopeSightRate06 = 6,
	ECrowScopeSightRate__HighMagnification = 7,
	ECrowScopeSightRate__ECrowScopeSightRate_MAX = 8
};


// Enum CrowFPS.ECrowClothComponentType
enum class ECrowClothComponentType : uint8_t
{
	ECrowClothComponentType__ThirdPersonComponent = 0,
	ECrowClothComponentType__FirstPersonBodyComponent = 1,
	ECrowClothComponentType__FirstPersonArmComponent = 2,
	ECrowClothComponentType__ECrowClothComponentType_MAX = 3
};


// Enum CrowFPS.EVehicleIdentity
enum class EVehicleIdentity : uint8_t
{
	EVehicleIdentity__None         = 0,
	EVehicleIdentity__Tank         = 1,
	EVehicleIdentity__Helicopter   = 2,
	EVehicleIdentity__Car          = 3,
	EVehicleIdentity__APC          = 4,
	EVehicleIdentity__Boat         = 5,
	EVehicleIdentity__EVehicleIdentity_MAX = 6
};


// Enum CrowFPS.EVehicleSeatType
enum class EVehicleSeatType : uint8_t
{
	EVehicleSeatType__None         = 0,
	EVehicleSeatType__Driver       = 1,
	EVehicleSeatType__AssistDriver = 2,
	EVehicleSeatType__Shooter      = 3,
	EVehicleSeatType__ArmedPassenger = 4,
	EVehicleSeatType__ArmedPassengerLowReady = 5,
	EVehicleSeatType__Passenger    = 6,
	EVehicleSeatType__EVehicleSeatType_MAX = 7
};


// Enum CrowFPS.EFireType
enum class EFireType : uint8_t
{
	EFireType__Shooting            = 0,
	EFireType__OverhandThrow       = 1,
	EFireType__UnderhandThrow      = 2,
	EFireType___Max                = 3,
	EFireType__EFireType_MAX       = 4
};


// Enum CrowFPS.EFireStance
enum class EFireStance : uint8_t
{
	EFireStance__Idle              = 0,
	EFireStance__Ready             = 1,
	EFireStance__ReadyToAiming     = 2,
	EFireStance__Aiming            = 3,
	EFireStance__Firing            = 4,
	EFireStance___Max              = 5,
	EFireStance__EFireStance_MAX   = 6
};


// Enum CrowFPS.EStance
enum class EStance : uint8_t
{
	EStance__Standing              = 0,
	EStance__Crouching             = 1,
	EStance__Prone                 = 2,
	EStance__Sprinting             = 3,
	EStance__Dying                 = 4,
	EStance___Max                  = 5,
	EStance__EStance_MAX           = 6
};


// Enum CrowFPS.ECrowMedalShowType
enum class ECrowMedalShowType : uint8_t
{
	ECrowMedalShowType__Icon       = 0,
	ECrowMedalShowType__Text       = 1,
	ECrowMedalShowType__All        = 2,
	ECrowMedalShowType___Max       = 3,
	ECrowMedalShowType__ECrowMedalShowType_MAX = 4
};


// Enum CrowFPS.ECrowMedalType
enum class ECrowMedalType : uint8_t
{
	ECrowMedalType__Medal_Kill_Streak1 = 0,
	ECrowMedalType__Medal_Kill_Streak2 = 1,
	ECrowMedalType__Medal_Kill_Streak4 = 2,
	ECrowMedalType__Medal_Kill_Streak5 = 3,
	ECrowMedalType__Medal_Kill_Streak6 = 4,
	ECrowMedalType__Medal_Kill_Streak8 = 5,
	ECrowMedalType__Medal_Kill_Streak10 = 6,
	ECrowMedalType__Medal_Kill_Streak12 = 7,
	ECrowMedalType__Medal_Kill_Streak14 = 8,
	ECrowMedalType__Medal_Kill_Streak15 = 9,
	ECrowMedalType__Medal_Kill_Streak16 = 10,
	ECrowMedalType__Medal_Kill_Streak18 = 11,
	ECrowMedalType__Medal_Kill_Streak20 = 12,
	ECrowMedalType__Medal_Kill_Streak22 = 13,
	ECrowMedalType__Medal_Kill_Streak24 = 14,
	ECrowMedalType__Medal_Kill_Streak25 = 15,
	ECrowMedalType__Medal_Kill_Streak26 = 16,
	ECrowMedalType__Medal_Kill_Streak28 = 17,
	ECrowMedalType__Medal_Kill_Streak30 = 18,
	ECrowMedalType__Medal_Kill_Streak32 = 19,
	ECrowMedalType__Medal_Kill_CarBoom = 20,
	ECrowMedalType__Medal_Kill_APCBoom = 21,
	ECrowMedalType__Medal_kill_TankBoom = 22,
	ECrowMedalType__Medal_Kill_HeliBoom = 23,
	ECrowMedalType__Medal_Kill_BoatBoom = 24,
	ECrowMedalType__Medal_Kill_HeadHunter = 25,
	ECrowMedalType__Medal_Kill_LongShot50 = 26,
	ECrowMedalType__Medal_Kill_LongShot100 = 27,
	ECrowMedalType__Medal_Kill_LongShot150 = 28,
	ECrowMedalType__Medal_Kill_LongShot200 = 29,
	ECrowMedalType__Medal_Kill_LongShot250 = 30,
	ECrowMedalType__Medal_Kill_LongShot300 = 31,
	ECrowMedalType__Medal_Kill_LongShot350 = 32,
	ECrowMedalType__Medal_Kill_LongShot400 = 33,
	ECrowMedalType__Medal_Kill_LongShot450 = 34,
	ECrowMedalType__Medal_Kill_LongShot500 = 35,
	ECrowMedalType__Medal_Kill_LongShot550 = 36,
	ECrowMedalType__Medal_Kill_LongShot600 = 37,
	ECrowMedalType__Medal_Kill_LongShot650 = 38,
	ECrowMedalType__Medal_Kill_LongShot700 = 39,
	ECrowMedalType__Medal_Kill_LongShot750 = 40,
	ECrowMedalType__Medal_Kill_LongShot800 = 41,
	ECrowMedalType__Medal_Kill_Combat = 42,
	ECrowMedalType__Medal_Kill_BomberGrenade = 43,
	ECrowMedalType__Medal_Kill_BomberGL = 44,
	ECrowMedalType__Medal_Kill_BomberC4 = 45,
	ECrowMedalType__Medal_Kill_Skillful = 46,
	ECrowMedalType__Medal_Kill_HitandRun = 47,
	ECrowMedalType__Medal_Kill_Accident = 48,
	ECrowMedalType__Medal_Kill_Demolisher = 49,
	ECrowMedalType__Medal_Kill_StreakN = 50,
	ECrowMedalType__Medal_BombMission_PlantComposition = 51,
	ECrowMedalType__Medal_BombMission_DefuseComposition = 52,
	ECrowMedalType__Medal_Kill_First = 53,
	ECrowMedalType__Medal_Kill_Twice = 54,
	ECrowMedalType__Medal_Kill_Revenge = 55,
	ECrowMedalType__Medal_Kill_AceKiller = 56,
	ECrowMedalType__Medal_Capture_Complete = 57,
	ECrowMedalType__Medal_Capture_DefenseKill = 58,
	ECrowMedalType__Medal_Capture_OffenseKill = 59,
	ECrowMedalType__Medal_Medic_Ally = 60,
	ECrowMedalType__Medal_ExtractorInstallation = 61,
	ECrowMedalType__Medal_ExtractorQ_ON_Earn = 62,
	ECrowMedalType__Medal_EnemyExtractorQ_ON_Earn = 63,
	ECrowMedalType__Medal_EnemyQ_ON_Earn = 64,
	ECrowMedalType__Medal_ZetaZombieKill = 65,
	ECrowMedalType____Max__        = 66,
	ECrowMedalType__ECrowMedalType_MAX = 67
};


// Enum CrowFPS.EVehicleDamageParameterType
enum class EVehicleDamageParameterType : uint8_t
{
	EVehicleDamageParameterType__EnginePowerPercent = 0,
	EVehicleDamageParameterType__InputFactor = 1,
	EVehicleDamageParameterType__RotorYaw = 2,
	EVehicleDamageParameterType__RotorPitch = 3,
	EVehicleDamageParameterType__RotorRoll = 4,
	EVehicleDamageParameterType__PrarameterTypeMax = 5,
	EVehicleDamageParameterType__EVehicleDamageParameterType_MAX = 6
};


// Enum CrowFPS.EVehicleDamageStatus
enum class EVehicleDamageStatus : uint8_t
{
	EVehicleDamageStatus__Damage_None = 0,
	EVehicleDamageStatus__Damage_Minor = 1,
	EVehicleDamageStatus__Damage_Major = 2,
	EVehicleDamageStatus__Damage_Critical = 3,
	EVehicleDamageStatus__Damage_MAX = 4
};


// Enum CrowFPS.EVehicleEvent
enum class EVehicleEvent : uint8_t
{
	EVehicleEvent__Event_Repose    = 0,
	EVehicleEvent__Event_EngineStart = 1,
	EVehicleEvent__Event_ReadyToDrive = 2,
	EVehicleEvent__Event_ShutDown  = 3,
	EVehicleEvent__Event_PressedHorn = 4,
	EVehicleEvent__Event_ReleasedHorn = 5,
	EVehicleEvent__Event_Immerge   = 6,
	EVehicleEvent__Event_MAX       = 7
};


// Enum CrowFPS.ECrowVehicleBoatState
enum class ECrowVehicleBoatState : uint8_t
{
	ECrowVehicleBoatState__Idle    = 0,
	ECrowVehicleBoatState__Driving = 1,
	ECrowVehicleBoatState__InAir   = 2,
	ECrowVehicleBoatState__ECrowVehicleBoatState_MAX = 3
};


// Enum CrowFPS.ECrowVehicleParachuteState
enum class ECrowVehicleParachuteState : uint8_t
{
	ECrowVehicleParachuteState__None = 0,
	ECrowVehicleParachuteState__Down = 1,
	ECrowVehicleParachuteState__Up = 2,
	ECrowVehicleParachuteState__ECrowVehicleParachuteState_MAX = 3
};


// Enum CrowFPS.EVehicleShieldingType
enum class EVehicleShieldingType : uint8_t
{
	EVehicleShieldingType__Open    = 0,
	EVehicleShieldingType__Shielding = 1,
	EVehicleShieldingType__HalfShielding = 2,
	EVehicleShieldingType__EVehicleShieldingType_MAX = 3
};


// Enum CrowFPS.EVehicleSeat
enum class EVehicleSeat : uint8_t
{
	EVehicleSeat__Driver           = 0,
	EVehicleSeat__Weapon           = 1,
	EVehicleSeat__Other            = 2,
	EVehicleSeat__EVehicleSeat_MAX = 3
};


// Enum CrowFPS.EVehicleLockOnState
enum class EVehicleLockOnState : uint8_t
{
	EVehicleLockOnState__None      = 0,
	EVehicleLockOnState__Targeting = 1,
	EVehicleLockOnState__LockOn    = 2,
	EVehicleLockOnState__EVehicleLockOnState_MAX = 3
};


// Enum CrowFPS.ECrowVehicleInputBlockMask
enum class ECrowVehicleInputBlockMask : uint8_t
{
	ECrowVehicleInputBlockMask__None = 0,
	ECrowVehicleInputBlockMask__MoveForward = 1,
	ECrowVehicleInputBlockMask__MoveRight = 2,
	ECrowVehicleInputBlockMask__Yaw = 3,
	ECrowVehicleInputBlockMask__Pitch = 4,
	ECrowVehicleInputBlockMask__Roll = 5,
	ECrowVehicleInputBlockMask__Collective = 6,
	ECrowVehicleInputBlockMask__All_FR = 7,
	ECrowVehicleInputBlockMask__All_YPRC = 8,
	ECrowVehicleInputBlockMask__All = 9,
	ECrowVehicleInputBlockMask__ECrowVehicleInputBlockMask_MAX = 10
};


// Enum CrowFPS.ECrowVehicleState
enum class ECrowVehicleState : uint8_t
{
	ECrowVehicleState__None        = 0,
	ECrowVehicleState__Repose      = 1,
	ECrowVehicleState__EngineStart = 2,
	ECrowVehicleState__Ready       = 3,
	ECrowVehicleState__AutoHover   = 4,
	ECrowVehicleState__ShutDown    = 5,
	ECrowVehicleState__Crash       = 6,
	ECrowVehicleState__Flooding    = 7,
	ECrowVehicleState__ECrowVehicleState_MAX = 8
};


// Enum CrowFPS.ECrowVehicleType
enum class ECrowVehicleType : uint8_t
{
	ECrowVehicleType__None         = 0,
	ECrowVehicleType__Car          = 1,
	ECrowVehicleType__CombatCar    = 2,
	ECrowVehicleType__Tank         = 3,
	ECrowVehicleType__Heli         = 4,
	ECrowVehicleType__Boat         = 5,
	ECrowVehicleType__ECrowVehicleType_MAX = 6
};


// Enum CrowFPS.ECrowVehicleTask
enum class ECrowVehicleTask : uint8_t
{
	ECrowVehicleTask__None         = 0,
	ECrowVehicleTask__Rotor_GroundFx = 1,
	ECrowVehicleTask__ECrowVehicleTask_MAX = 2
};


// Enum CrowFPS.ECrowStickerType
enum class ECrowStickerType : uint8_t
{
	ECrowStickerType__Normal       = 0,
	ECrowStickerType__Slot         = 1,
	ECrowStickerType__ECrowStickerType_MAX = 2
};


// Enum CrowFPS.ECrowWeaponAnimGatlingState
enum class ECrowWeaponAnimGatlingState : uint8_t
{
	ECrowWeaponAnimGatlingState__Idle = 0,
	ECrowWeaponAnimGatlingState__PreHeating = 1,
	ECrowWeaponAnimGatlingState__Fire = 2,
	ECrowWeaponAnimGatlingState__OverHeating = 3,
	ECrowWeaponAnimGatlingState__Cooling = 4,
	ECrowWeaponAnimGatlingState__ECrowWeaponAnimGatlingState_MAX = 5
};


// Enum CrowFPS.ECrowLockOnLauncherState
enum class ECrowLockOnLauncherState : uint8_t
{
	ECrowLockOnLauncherState__None = 0,
	ECrowLockOnLauncherState__Targeting = 1,
	ECrowLockOnLauncherState__LockOn = 2,
	ECrowLockOnLauncherState__OutOfRange = 3,
	ECrowLockOnLauncherState__ECrowLockOnLauncherState_MAX = 4
};


// Enum CrowFPS.ECrowOffSetType
enum class ECrowOffSetType : uint8_t
{
	ECrowOffSetType__Up            = 0,
	ECrowOffSetType__Bottom        = 1,
	ECrowOffSetType__ECrowOffSetType_MAX = 2
};


// Enum CrowFPS.ECrowWeaponKeyFlags
enum class ECrowWeaponKeyFlags : uint8_t
{
	ECrowWeaponKeyFlags__None      = 0,
	ECrowWeaponKeyFlags__Fire      = 1,
	ECrowWeaponKeyFlags__AimPrimary = 2,
	ECrowWeaponKeyFlags__AimSecondary = 3,
	ECrowWeaponKeyFlags__Light     = 4,
	ECrowWeaponKeyFlags__LaserSight = 5,
	ECrowWeaponKeyFlags__AimThrowableMelee = 6,
	ECrowWeaponKeyFlags__DefaultFlags = 7,
	ECrowWeaponKeyFlags__SpecialFlags = 8,
	ECrowWeaponKeyFlags__Aim       = 9,
	ECrowWeaponKeyFlags__ECrowWeaponKeyFlags_MAX = 10
};


// Enum CrowFPS.ECrowWeaponFireState
enum class ECrowWeaponFireState : uint8_t
{
	ECrowWeaponFireState__None     = 0,
	ECrowWeaponFireState__WaitFire = 1,
	ECrowWeaponFireState__PreFire  = 2,
	ECrowWeaponFireState__Fire     = 3,
	ECrowWeaponFireState__PostFire = 4,
	ECrowWeaponFireState__ECrowWeaponFireState_MAX = 5
};


// Enum CrowFPS.ECrowWeaponSubState
enum class ECrowWeaponSubState : uint8_t
{
	ECrowWeaponSubState__None      = 0,
	ECrowWeaponSubState__Idle      = 1,
	ECrowWeaponSubState__Entering  = 2,
	ECrowWeaponSubState__Active    = 3,
	ECrowWeaponSubState__Exiting   = 4,
	ECrowWeaponSubState__ECrowWeaponSubState_MAX = 5
};


// Enum CrowFPS.ECrowWeaponState
enum class ECrowWeaponState : uint8_t
{
	ECrowWeaponState__Idle         = 0,
	ECrowWeaponState__Select       = 1,
	ECrowWeaponState__Reload       = 2,
	ECrowWeaponState__BoltAction   = 3,
	ECrowWeaponState__ChangeFireMode = 4,
	ECrowWeaponState__Deselect     = 5,
	ECrowWeaponState__DeselectComplete = 6,
	ECrowWeaponState__ECrowWeaponState_MAX = 7
};


// Enum CrowFPS.ECrowWeaponAimMode
enum class ECrowWeaponAimMode : uint8_t
{
	ECrowWeaponAimMode__None       = 0,
	ECrowWeaponAimMode__Only_FP    = 1,
	ECrowWeaponAimMode__Only_TP    = 2,
	ECrowWeaponAimMode__Both       = 3,
	ECrowWeaponAimMode__ECrowWeaponAimMode_MAX = 4
};


// Enum CrowFPS.ECrowWeaponFireMode
enum class ECrowWeaponFireMode : uint8_t
{
	ECrowWeaponFireMode__None      = 0,
	ECrowWeaponFireMode__Single    = 1,
	ECrowWeaponFireMode__Burst     = 2,
	ECrowWeaponFireMode__Normal    = 3,
	ECrowWeaponFireMode__ECrowWeaponFireMode_MAX = 4
};


// Enum CrowFPS.ECrowAmmoFireType
enum class ECrowAmmoFireType : uint8_t
{
	ECrowAmmoFireType__None        = 0,
	ECrowAmmoFireType__ServerHitScan = 1,
	ECrowAmmoFireType__ClientHitScan = 2,
	ECrowAmmoFireType__ServerProjectile = 3,
	ECrowAmmoFireType__ClientProjectile = 4,
	ECrowAmmoFireType__UseKit      = 5,
	ECrowAmmoFireType__UseKitImmediate = 6,
	ECrowAmmoFireType__NoAmmoNeededClientHitScan = 7,
	ECrowAmmoFireType__ECrowAmmoFireType_MAX = 8
};


// Enum CrowFPS.ECrowWeaponSubType
enum class ECrowWeaponSubType : uint8_t
{
	ECrowWeaponSubType__AssultRifle = 0,
	ECrowWeaponSubType__MachineGun = 1,
	ECrowWeaponSubType__SubMachineGun = 2,
	ECrowWeaponSubType__ShotGun    = 3,
	ECrowWeaponSubType__AutoSniper = 4,
	ECrowWeaponSubType__BoltActionSniper = 5,
	ECrowWeaponSubType__HandGun    = 6,
	ECrowWeaponSubType__AutoHandGun = 7,
	ECrowWeaponSubType__Melee      = 8,
	ECrowWeaponSubType__Throw      = 9,
	ECrowWeaponSubType__Vehicle    = 10,
	ECrowWeaponSubType__Kit        = 11,
	ECrowWeaponSubType__HealKit    = 12,
	ECrowWeaponSubType__GasCutter  = 13,
	ECrowWeaponSubType__ECrowWeaponSubType_MAX = 14
};


// Enum CrowFPS.ECrowWeaponType
enum class ECrowWeaponType : uint8_t
{
	ECrowWeaponType__None          = 0,
	ECrowWeaponType__Primary       = 1,
	ECrowWeaponType__Secondary     = 2,
	ECrowWeaponType__Melee         = 3,
	ECrowWeaponType__Throw         = 4,
	ECrowWeaponType__NoConsume     = 5,
	ECrowWeaponType__ECrowWeaponType_MAX = 6
};


// Enum CrowFPS.ECrowAmmoType
enum class ECrowAmmoType : uint8_t
{
	ECrowAmmoType__None            = 0,
	ECrowAmmoType__Bullet_5_56mm   = 1,
	ECrowAmmoType__Bullet_7_62mm   = 2,
	ECrowAmmoType__Bullet_9mm      = 3,
	ECrowAmmoType__Bullet_338_LMag = 4,
	ECrowAmmoType__Bullet_12_7mm   = 5,
	ECrowAmmoType__Bullet_12_7mm_Ground = 6,
	ECrowAmmoType__Bullet_0_44Mag  = 7,
	ECrowAmmoType__Bullet_00BuckShot = 8,
	ECrowAmmoType__Bullet_14_5mm   = 9,
	ECrowAmmoType__Bullet_25mm     = 10,
	ECrowAmmoType__Grenade_M26     = 11,
	ECrowAmmoType__Grenade_M18     = 12,
	ECrowAmmoType__Grenade_AN_M14  = 13,
	ECrowAmmoType__Grenade_M84     = 14,
	ECrowAmmoType__Grenade_40mm    = 15,
	ECrowAmmoType__Cannon_120mmAP  = 16,
	ECrowAmmoType__Cannon_120mmHE  = 17,
	ECrowAmmoType__Smoke_66mm      = 18,
	ECrowAmmoType__Rocket_66mm     = 19,
	ECrowAmmoType__Rocket_70mm     = 20,
	ECrowAmmoType__Rocket_85mm     = 21,
	ECrowAmmoType__Missile_70mm    = 22,
	ECrowAmmoType__Missile_127mm   = 23,
	ECrowAmmoType__Melee_Knife     = 24,
	ECrowAmmoType__Kit_Normal      = 25,
	ECrowAmmoType__Kit_Heal        = 26,
	ECrowAmmoType__C4              = 27,
	ECrowAmmoType__ClaymoreMine    = 28,
	ECrowAmmoType__Heli_Flare      = 29,
	ECrowAmmoType__GasMask_Filters = 30,
	ECrowAmmoType__Zombie_Punch    = 31,
	ECrowAmmoType__ECrowAmmoType_MAX = 32
};


// Enum CrowFPS.ECrowUIEventMethod
enum class ECrowUIEventMethod : uint8_t
{
	ECrowUIEventMethod__None       = 0,
	ECrowUIEventMethod__EVENT_OK   = 1,
	ECrowUIEventMethod__EVENT_CANCEL = 2,
	ECrowUIEventMethod__EVENT_SELECT = 3,
	ECrowUIEventMethod__EVENT_DESELECT = 4,
	ECrowUIEventMethod__EVENT_DRAG_START = 5,
	ECrowUIEventMethod__EVENT_DRAG_CANCEL = 6,
	ECrowUIEventMethod__ECrowUIEventMethod_MAX = 7
};


// Enum CrowFPS.ECrowImageLimitType
enum class ECrowImageLimitType : uint8_t
{
	ECrowImageLimitType__None      = 0,
	ECrowImageLimitType__LimitWidth = 1,
	ECrowImageLimitType__LimitHeight = 2,
	ECrowImageLimitType__ECrowImageLimitType_MAX = 3
};


// Enum CrowFPS.EViewPortRenderOrder
enum class EViewPortRenderOrder : uint8_t
{
	EViewPortRenderOrder__Standalone = 0,
	EViewPortRenderOrder__Popup    = 1,
	EViewPortRenderOrder__EViewPortRenderOrder_MAX = 2
};


// Enum CrowFPS.ETweenInterpolate
enum class ETweenInterpolate : uint8_t
{
	ETweenInterpolate__Linear      = 0,
	ETweenInterpolate__EaseIn      = 1,
	ETweenInterpolate__EaseOut     = 2,
	ETweenInterpolate__EaseInOut   = 3,
	ETweenInterpolate__ETweenInterpolate_MAX = 4
};


// Enum CrowFPS.ECrowWorldEditorTaskResult
enum class ECrowWorldEditorTaskResult : uint8_t
{
	ECrowWorldEditorTaskResult__Working = 0,
	ECrowWorldEditorTaskResult__ResultSuccess = 1,
	ECrowWorldEditorTaskResult__ResultFail = 2,
	ECrowWorldEditorTaskResult__ECrowWorldEditorTaskResult_MAX = 3
};


// Enum CrowFPS.ECrowWorldEventWidgetType
enum class ECrowWorldEventWidgetType : uint8_t
{
	ECrowWorldEventWidgetType__None = 0,
	ECrowWorldEventWidgetType__Alarm = 1,
	ECrowWorldEventWidgetType__Success = 2,
	ECrowWorldEventWidgetType__Fail = 3,
	ECrowWorldEventWidgetType__ECrowWorldEventWidgetType_MAX = 4
};


// Enum CrowFPS.ECrowWorldEventState
enum class ECrowWorldEventState : uint8_t
{
	ECrowWorldEventState__None     = 0,
	ECrowWorldEventState__Wait     = 1,
	ECrowWorldEventState__Begin    = 2,
	ECrowWorldEventState__End      = 3,
	ECrowWorldEventState__ECrowWorldEventState_MAX = 4
};


// Enum CrowFPS.ECrowWorldEventActivationType
enum class ECrowWorldEventActivationType : uint8_t
{
	ECrowWorldEventActivationType__Random = 0,
	ECrowWorldEventActivationType__Sequence = 1,
	ECrowWorldEventActivationType__ECrowWorldEventActivationType_MAX = 2
};


// Enum CrowFPS.ECrowWorldHLODResult
enum class ECrowWorldHLODResult : uint8_t
{
	ECrowWorldHLODResult__Success  = 0,
	ECrowWorldHLODResult__Skip     = 1,
	ECrowWorldHLODResult__Failed   = 2,
	ECrowWorldHLODResult__ECrowWorldHLODResult_MAX = 3
};


// Enum CrowFPS.EMoveState
enum class EMoveState : uint8_t
{
	EMoveState__None               = 0,
	EMoveState__Move               = 1,
	EMoveState__NotMove            = 2,
	EMoveState__EMoveState_MAX     = 3
};


// Enum CrowFPS.EZoomState
enum class EZoomState : uint8_t
{
	EZoomState__None               = 0,
	EZoomState__ZoomIn             = 1,
	EZoomState__ZoomOut            = 2,
	EZoomState__EZoomState_MAX     = 3
};


// Enum CrowFPS.EMapType
enum class EMapType : uint8_t
{
	EMapType__None                 = 0,
	EMapType__WorldMap             = 1,
	EMapType__MiniMap              = 2,
	EMapType__RespawnMap           = 3,
	EMapType__EMapType_MAX         = 4
};


// Enum CrowFPS.ECrowWorldMapIconType
enum class ECrowWorldMapIconType : uint8_t
{
	ECrowWorldMapIconType__None    = 0,
	ECrowWorldMapIconType__Player  = 1,
	ECrowWorldMapIconType__Vehicle = 2,
	ECrowWorldMapIconType__ConquestObject = 3,
	ECrowWorldMapIconType__MainMission = 4,
	ECrowWorldMapIconType__RespawnArea = 5,
	ECrowWorldMapIconType__FirstRespawnArea = 6,
	ECrowWorldMapIconType__SupplySpawnTarget = 7,
	ECrowWorldMapIconType__SupplySpawnArea = 8,
	ECrowWorldMapIconType__BombingTartget = 9,
	ECrowWorldMapIconType__BombingActor = 10,
	ECrowWorldMapIconType__Ping    = 11,
	ECrowWorldMapIconType__EnemyPlayer = 12,
	ECrowWorldMapIconType__EnemyVehicle = 13,
	ECrowWorldMapIconType__TransportAirPlane = 14,
	ECrowWorldMapIconType__TransportAirPlaneRoute = 15,
	ECrowWorldMapIconType__DropItem = 16,
	ECrowWorldMapIconType__DeathPlayer = 17,
	ECrowWorldMapIconType__UAVTarget = 18,
	ECrowWorldMapIconType__KitBomber = 19,
	ECrowWorldMapIconType__MapAreaName = 20,
	ECrowWorldMapIconType__SkyRespawnPoint = 21,
	ECrowWorldMapIconType__AreaMiniMap = 22,
	ECrowWorldMapIconType__All     = 23,
	ECrowWorldMapIconType__ECrowWorldMapIconType_MAX = 24
};


// Enum CrowFPS.ECrowWorldMapType
enum class ECrowWorldMapType : uint8_t
{
	ECrowWorldMapType__None        = 0,
	ECrowWorldMapType__HeavyBombard = 1,
	ECrowWorldMapType__UAV         = 2,
	ECrowWorldMapType__ECrowWorldMapType_MAX = 3
};


// Enum CrowFPS.ESnapToGroundMode
enum class ESnapToGroundMode : uint8_t
{
	ESnapToGroundMode__UseHeightmap = 0,
	ESnapToGroundMode__UseLineTrace = 1,
	ESnapToGroundMode__ESnapToGroundMode_MAX = 2
};


// Enum CrowFPS.ECrowMeshPaintAction
enum class ECrowMeshPaintAction : uint8_t
{
	ECrowMeshPaintAction__Paint    = 0,
	ECrowMeshPaintAction__Erase    = 1,
	ECrowMeshPaintAction__ECrowMeshPaintAction_MAX = 2
};


// Enum CrowFPS.ECrowWorldSplineMode
enum class ECrowWorldSplineMode : uint8_t
{
	ECrowWorldSplineMode__Road     = 0,
	ECrowWorldSplineMode__Fence    = 1,
	ECrowWorldSplineMode__UtilityPole = 2,
	ECrowWorldSplineMode__Havest   = 3,
	ECrowWorldSplineMode__ECrowWorldSplineMode_MAX = 4
};


// Enum CrowFPS.ECrowWorldSplineMeshAxis
enum class ECrowWorldSplineMeshAxis : uint8_t
{
	ECrowWorldSplineMeshAxis__X    = 0,
	ECrowWorldSplineMeshAxis__Y    = 1,
	ECrowWorldSplineMeshAxis__Z    = 2,
	ECrowWorldSplineMeshAxis__Num  = 3,
	ECrowWorldSplineMeshAxis__ECrowWorldSplineMeshAxis_MAX = 4
};


// Enum CrowFPS.ECrowWorldEditorAsyncTask
enum class ECrowWorldEditorAsyncTask : uint8_t
{
	ECrowWorldEditorAsyncTask__None = 0,
	ECrowWorldEditorAsyncTask__Working = 1,
	ECrowWorldEditorAsyncTask__TaskResult_Success = 2,
	ECrowWorldEditorAsyncTask__TaskResult_Fail = 3,
	ECrowWorldEditorAsyncTask__COLLECT_LoadNextLevel = 4,
	ECrowWorldEditorAsyncTask__COLLECT_CopyNextLevel = 5,
	ECrowWorldEditorAsyncTask__COLLECT_CollectGeneratedLevels = 6,
	ECrowWorldEditorAsyncTask__HLOD_LoadNextLevel = 7,
	ECrowWorldEditorAsyncTask__HLOD_UnloadPrevLevel = 8,
	ECrowWorldEditorAsyncTask__HLOD_WaitNextLevel = 9,
	ECrowWorldEditorAsyncTask__HLOD_BuildLODActor = 10,
	ECrowWorldEditorAsyncTask__ECrowWorldEditorAsyncTask_MAX = 11
};


// Enum CrowFPS.ECrowWorldSyncPropFlags
enum class ECrowWorldSyncPropFlags : uint8_t
{
	ECrowWorldSyncPropFlags__None  = 0,
	ECrowWorldSyncPropFlags__Destructible = 1,
	ECrowWorldSyncPropFlags__BigSize = 2,
	ECrowWorldSyncPropFlags__Simulation = 3,
	ECrowWorldSyncPropFlags__ECrowWorldSyncPropFlags_MAX = 4
};


// Enum CrowFPS.ECrowWorldSyncActorType
enum class ECrowWorldSyncActorType : uint8_t
{
	ECrowWorldSyncActorType__Unknown = 0,
	ECrowWorldSyncActorType__Building = 1,
	ECrowWorldSyncActorType__BuildingProp = 2,
	ECrowWorldSyncActorType__WorldProp = 3,
	ECrowWorldSyncActorType__ECrowWorldSyncActorType_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
