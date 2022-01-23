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

// Enum PatrolActionSystem.EEnemyActionFinishResult
enum class EEnemyActionFinishResult : uint8_t
{
	EEnemyActionFinishResult__Success = 0,
	EEnemyActionFinishResult__Aborted = 1,
	EEnemyActionFinishResult__ConditionFailed = 2,
	EEnemyActionFinishResult__EEnemyActionFinishResult_MAX = 3
};


// Enum PatrolActionSystem.EEnemyActionState
enum class EEnemyActionState : uint8_t
{
	EEnemyActionState__ReadyForActivation = 0,
	EEnemyActionState__Active      = 1,
	EEnemyActionState__Aborting    = 2,
	EEnemyActionState__EEnemyActionState_MAX = 3
};


// Enum PatrolActionSystem.EPatrolMovementType
enum class EPatrolMovementType : uint8_t
{
	EPatrolMovementType__Clockwise = 0,
	EPatrolMovementType__CounterClockwise = 1,
	EPatrolMovementType__EPatrolMovementType_MAX = 2
};


// Enum PatrolActionSystem.EEnemyActionsExecutionType
enum class EEnemyActionsExecutionType : uint8_t
{
	EEnemyActionsExecutionType__RandomAction = 0,
	EEnemyActionsExecutionType__AllInTurn = 1,
	EEnemyActionsExecutionType__EEnemyActionsExecutionType_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
