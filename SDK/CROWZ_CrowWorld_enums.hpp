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

// Enum CrowWorld.ECrowWorldDamageType
enum class ECrowWorldDamageType : uint8_t
{
	ECrowWorldDamageType__Point    = 0,
	ECrowWorldDamageType__Melee    = 1,
	ECrowWorldDamageType__Explosion = 2,
	ECrowWorldDamageType__Impact   = 3,
	ECrowWorldDamageType__Burning  = 4,
	ECrowWorldDamageType__Radiation = 5,
	ECrowWorldDamageType__ECrowWorldDamageType_MAX = 6
};


// Enum CrowWorld.ECrowWorldDestructionCause
enum class ECrowWorldDestructionCause : uint8_t
{
	ECrowWorldDestructionCause__ByDamage = 0,
	ECrowWorldDestructionCause__ByImpact = 1,
	ECrowWorldDestructionCause__ECrowWorldDestructionCause_MAX = 2
};


// Enum CrowWorld.ECrowWorldEditorActorLOD
enum class ECrowWorldEditorActorLOD : uint8_t
{
	ECrowWorldEditorActorLOD__LOD0 = 0,
	ECrowWorldEditorActorLOD__LOD1 = 1,
	ECrowWorldEditorActorLOD__LOD2 = 2,
	ECrowWorldEditorActorLOD__LOD3 = 3,
	ECrowWorldEditorActorLOD__ECrowWorldEditorActorLOD_MAX = 4
};


// Enum CrowWorld.ECrowWorldLODGroup
enum class ECrowWorldLODGroup : uint8_t
{
	ECrowWorldLODGroup__Misc_LOD0  = 0,
	ECrowWorldLODGroup__Misc_LOD1  = 1,
	ECrowWorldLODGroup__Misc_LOD2  = 2,
	ECrowWorldLODGroup__Misc_LOD3  = 3,
	ECrowWorldLODGroup__Misc_SelfScreenSize = 4,
	ECrowWorldLODGroup__Merge_Extra = 5,
	ECrowWorldLODGroup__Merge_Crucial = 6,
	ECrowWorldLODGroup__ECrowWorldLODGroup_MAX = 7
};


// Enum CrowWorld.ECrowWorldLODStateDirtyFlag
enum class ECrowWorldLODStateDirtyFlag : uint8_t
{
	ECrowWorldLODStateDirtyFlag__LODLevel = 0,
	ECrowWorldLODStateDirtyFlag__Trigger = 1,
	ECrowWorldLODStateDirtyFlag__ECrowWorldLODStateDirtyFlag_MAX = 2
};


// Enum CrowWorld.ECrowWorldActorLayoutItemDestroyReason
enum class ECrowWorldActorLayoutItemDestroyReason : uint8_t
{
	ECrowWorldActorLayoutItemDestroyReason__HiddenByVisibility = 0,
	ECrowWorldActorLayoutItemDestroyReason__DestroyedByImpact = 1,
	ECrowWorldActorLayoutItemDestroyReason__DestroyedByDamage = 2,
	ECrowWorldActorLayoutItemDestroyReason__ECrowWorldActorLayoutItemDestroyReason_MAX = 3
};


// Enum CrowWorld.ECrowWorldTriggerActionType
enum class ECrowWorldTriggerActionType : uint8_t
{
	ECrowWorldTriggerActionType__Normal = 0,
	ECrowWorldTriggerActionType__QuickAction = 1,
	ECrowWorldTriggerActionType__ECrowWorldTriggerActionType_MAX = 2
};


// Enum CrowWorld.ECrowWorldTriggerType
enum class ECrowWorldTriggerType : uint8_t
{
	ECrowWorldTriggerType__Door    = 0,
	ECrowWorldTriggerType__LightSwitch = 1,
	ECrowWorldTriggerType__ECrowWorldTriggerType_MAX = 2
};


// Enum CrowWorld.ECrowWorldGeomType
enum class ECrowWorldGeomType : uint8_t
{
	ECrowWorldGeomType__Body       = 0,
	ECrowWorldGeomType__Trigger1   = 1,
	ECrowWorldGeomType__Trigger2   = 2,
	ECrowWorldGeomType__Checker1   = 3,
	ECrowWorldGeomType__Checker2   = 4,
	ECrowWorldGeomType__Trace      = 5,
	ECrowWorldGeomType__ECrowWorldGeomType_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
