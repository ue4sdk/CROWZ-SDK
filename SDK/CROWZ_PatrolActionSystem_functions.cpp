// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_PatrolActionSystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PatrolActionSystem.UPSActionCondition.InternalCheckCondition
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUPSActionCondition::InternalCheckCondition(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSActionCondition.InternalCheckCondition"));

	struct
	{
		class ACharacter*              Character;
		bool                           ReturnValue;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSAITask_AIRotateToTarget.RotateAIToTargetRotation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AAIController*           AIController                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                TargetRotation                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           bUseCustomRotationSpeed        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          CustomRotationSpeed            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ErrorTolerance                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUPSAITask_AIRotateToTarget* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUPSAITask_AIRotateToTarget* UUPSAITask_AIRotateToTarget::RotateAIToTargetRotation(class AAIController* AIController, const struct FRotator& TargetRotation, bool bUseCustomRotationSpeed, float CustomRotationSpeed, float ErrorTolerance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSAITask_AIRotateToTarget.RotateAIToTargetRotation"));

	struct
	{
		class AAIController*           AIController;
		struct FRotator                TargetRotation;
		bool                           bUseCustomRotationSpeed;
		float                          CustomRotationSpeed;
		float                          ErrorTolerance;
		class UUPSAITask_AIRotateToTarget* ReturnValue;
	} params;

	params.AIController = AIController;
	params.TargetRotation = TargetRotation;
	params.bUseCustomRotationSpeed = bUseCustomRotationSpeed;
	params.CustomRotationSpeed = CustomRotationSpeed;
	params.ErrorTolerance = ErrorTolerance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSAITask_AIRotateToTarget.RotateAIToTargetActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AAIController*           AIController                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  RotationTarget                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseCustomRotationSpeed        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          CustomRotationSpeed            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ErrorTolerance                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUPSAITask_AIRotateToTarget* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUPSAITask_AIRotateToTarget* UUPSAITask_AIRotateToTarget::RotateAIToTargetActor(class AAIController* AIController, class AActor* RotationTarget, bool bUseCustomRotationSpeed, float CustomRotationSpeed, float ErrorTolerance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSAITask_AIRotateToTarget.RotateAIToTargetActor"));

	struct
	{
		class AAIController*           AIController;
		class AActor*                  RotationTarget;
		bool                           bUseCustomRotationSpeed;
		float                          CustomRotationSpeed;
		float                          ErrorTolerance;
		class UUPSAITask_AIRotateToTarget* ReturnValue;
	} params;

	params.AIController = AIController;
	params.RotationTarget = RotationTarget;
	params.bUseCustomRotationSpeed = bUseCustomRotationSpeed;
	params.CustomRotationSpeed = CustomRotationSpeed;
	params.ErrorTolerance = ErrorTolerance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSAITask_ExecuteEnemyAction.OnActionFinished
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// EEnemyActionFinishResult       Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSAITask_ExecuteEnemyAction::OnActionFinished(EEnemyActionFinishResult Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSAITask_ExecuteEnemyAction.OnActionFinished"));

	struct
	{
		EEnemyActionFinishResult       Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSAITask_ExecuteEnemyAction.ExecuteEnemyAction
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UUPSEnemyAction*         EnemyActionToActivate          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUPSAITask_ExecuteEnemyAction* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUPSAITask_ExecuteEnemyAction* UUPSAITask_ExecuteEnemyAction::ExecuteEnemyAction(class UUPSEnemyAction* EnemyActionToActivate, class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSAITask_ExecuteEnemyAction.ExecuteEnemyAction"));

	struct
	{
		class UUPSEnemyAction*         EnemyActionToActivate;
		class ACharacter*              Character;
		class UUPSAITask_ExecuteEnemyAction* ReturnValue;
	} params;

	params.EnemyActionToActivate = EnemyActionToActivate;
	params.Character = Character;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSAITask_ExecuteEnemyAction.AbortAction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UUPSAITask_ExecuteEnemyAction::AbortAction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSAITask_ExecuteEnemyAction.AbortAction"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSCheatManager.UPS_EnablePointActionsDebug
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UUPSCheatManager::UPS_EnablePointActionsDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSCheatManager.UPS_EnablePointActionsDebug"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSCheatManager.UPS_EnablePatrolVisualization
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UUPSCheatManager::UPS_EnablePatrolVisualization()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSCheatManager.UPS_EnablePatrolVisualization"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSCheatManager.UPS_EnableGroupMovementDebug
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UUPSCheatManager::UPS_EnableGroupMovementDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSCheatManager.UPS_EnableGroupMovementDebug"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSCheatManager.UPS_DisablePointActionsDebug
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UUPSCheatManager::UPS_DisablePointActionsDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSCheatManager.UPS_DisablePointActionsDebug"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSCheatManager.UPS_DisablePatrolVisualization
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UUPSCheatManager::UPS_DisablePatrolVisualization()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSCheatManager.UPS_DisablePatrolVisualization"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSCheatManager.UPS_DisableGroupMovementDebug
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UUPSCheatManager::UPS_DisableGroupMovementDebug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSCheatManager.UPS_DisableGroupMovementDebug"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyAction.StartAction
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSEnemyAction::StartAction(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyAction.StartAction"));

	struct
	{
		class ACharacter*              Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyAction.InternalStartAction
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              InCharacter                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSEnemyAction::InternalStartAction(class ACharacter* InCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyAction.InternalStartAction"));

	struct
	{
		class ACharacter*              InCharacter;
	} params;

	params.InCharacter = InCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyAction.InternalFinishAction
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              InCharacter                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSEnemyAction::InternalFinishAction(class ACharacter* InCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyAction.InternalFinishAction"));

	struct
	{
		class ACharacter*              InCharacter;
	} params;

	params.InCharacter = InCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyAction.InternalAbortAction
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              InCharacter                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSEnemyAction::InternalAbortAction(class ACharacter* InCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyAction.InternalAbortAction"));

	struct
	{
		class ACharacter*              InCharacter;
	} params;

	params.InCharacter = InCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyAction.FinishAction
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UUPSEnemyAction::FinishAction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyAction.FinishAction"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyAction.AbortAction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UUPSEnemyAction::AbortAction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyAction.AbortAction"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyActionScript.OnActionStarted
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSEnemyActionScript::OnActionStarted(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyActionScript.OnActionStarted"));

	struct
	{
		class ACharacter*              Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyActionScript.OnActionFinished
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSEnemyActionScript::OnActionFinished(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyActionScript.OnActionFinished"));

	struct
	{
		class ACharacter*              Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyActionScript.OnActionAborted
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSEnemyActionScript::OnActionAborted(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyActionScript.OnActionAborted"));

	struct
	{
		class ACharacter*              Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyPointAction.StartEnemyPointAction
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnPointActionFinishedCallback  (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AUPSEnemyPointAction::StartEnemyPointAction(const struct FScriptDelegate& OnPointActionFinishedCallback, class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.StartEnemyPointAction"));

	struct
	{
		struct FScriptDelegate         OnPointActionFinishedCallback;
		class ACharacter*              Character;
		bool                           ReturnValue;
	} params;

	params.OnPointActionFinishedCallback = OnPointActionFinishedCallback;
	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSEnemyPointAction.OnCharacterReachPoint
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSuccess                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSEnemyPointAction::OnCharacterReachPoint(class ACharacter* Character, bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.OnCharacterReachPoint"));

	struct
	{
		class ACharacter*              Character;
		bool                           bSuccess;
	} params;

	params.Character = Character;
	params.bSuccess = bSuccess;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyPointAction.OnCharacterDestroyed
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSEnemyPointAction::OnCharacterDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.OnCharacterDestroyed"));

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyPointAction.K2_StartEnemyPointAction
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSEnemyPointAction::K2_StartEnemyPointAction(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.K2_StartEnemyPointAction"));

	struct
	{
		class ACharacter*              Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyPointAction.K2_OnCharacterReachPoint
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSuccess                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSEnemyPointAction::K2_OnCharacterReachPoint(class ACharacter* Character, bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.K2_OnCharacterReachPoint"));

	struct
	{
		class ACharacter*              Character;
		bool                           bSuccess;
	} params;

	params.Character = Character;
	params.bSuccess = bSuccess;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyPointAction.K2_FinishPointAction
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AUPSEnemyPointAction::K2_FinishPointAction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.K2_FinishPointAction"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyPointAction.K2_ClearPointActionForCharacter
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSEnemyPointAction::K2_ClearPointActionForCharacter(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.K2_ClearPointActionForCharacter"));

	struct
	{
		class ACharacter*              Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyPointAction.K2_CanStartPointAction
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AUPSEnemyPointAction::K2_CanStartPointAction(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.K2_CanStartPointAction"));

	struct
	{
		class ACharacter*              Character;
		bool                           ReturnValue;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSEnemyPointAction.K2_AllCharactersReachPoints
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AUPSEnemyPointAction::K2_AllCharactersReachPoints()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.K2_AllCharactersReachPoints"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyPointAction.HasFreePointComponent
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AUPSEnemyPointAction::HasFreePointComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.HasFreePointComponent"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSEnemyPointAction.GetFreeEnemyActionPointComponent
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUPSEnemyPointActionComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUPSEnemyPointActionComponent* AUPSEnemyPointAction::GetFreeEnemyActionPointComponent(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.GetFreeEnemyActionPointComponent"));

	struct
	{
		class ACharacter*              Character;
		class UUPSEnemyPointActionComponent* ReturnValue;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSEnemyPointAction.GetEnemyActionPointComponents
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UUPSEnemyPointActionComponent*> ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

TArray<class UUPSEnemyPointActionComponent*> AUPSEnemyPointAction::GetEnemyActionPointComponents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.GetEnemyActionPointComponents"));

	struct
	{
		TArray<class UUPSEnemyPointActionComponent*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSEnemyPointAction.GetCharactersStartedPointAction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class ACharacter*>      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<class ACharacter*> AUPSEnemyPointAction::GetCharactersStartedPointAction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.GetCharactersStartedPointAction"));

	struct
	{
		TArray<class ACharacter*>      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSEnemyPointAction.GetCharactersReachedPoints
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class ACharacter*>      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<class ACharacter*> AUPSEnemyPointAction::GetCharactersReachedPoints()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.GetCharactersReachedPoints"));

	struct
	{
		TArray<class ACharacter*>      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSEnemyPointAction.GetCharactersGoingToPoint
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class ACharacter*>      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<class ACharacter*> AUPSEnemyPointAction::GetCharactersGoingToPoint()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.GetCharactersGoingToPoint"));

	struct
	{
		TArray<class ACharacter*>      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSEnemyPointAction.GetCharacterPoint
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUPSEnemyPointActionComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUPSEnemyPointActionComponent* AUPSEnemyPointAction::GetCharacterPoint(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.GetCharacterPoint"));

	struct
	{
		class ACharacter*              Character;
		class UUPSEnemyPointActionComponent* ReturnValue;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSEnemyPointAction.FinishPointAction
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void AUPSEnemyPointAction::FinishPointAction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.FinishPointAction"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyPointAction.EnableVisualization
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSEnemyPointAction::EnableVisualization(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.EnableVisualization"));

	struct
	{
		bool                           bEnable;
	} params;

	params.bEnable = bEnable;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyPointAction.ClearPointActionForCharacter
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSEnemyPointAction::ClearPointActionForCharacter(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.ClearPointActionForCharacter"));

	struct
	{
		class ACharacter*              Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyPointAction.CanStartPointAction
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AUPSEnemyPointAction::CanStartPointAction(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.CanStartPointAction"));

	struct
	{
		class ACharacter*              Character;
		bool                           ReturnValue;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSEnemyPointAction.AllCharactersReachPoints
// (FUNC_Native, FUNC_Protected)

void AUPSEnemyPointAction::AllCharactersReachPoints()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.AllCharactersReachPoints"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyPointAction.AbortEnemyPointAction
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSEnemyPointAction::AbortEnemyPointAction(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointAction.AbortEnemyPointAction"));

	struct
	{
		class ACharacter*              Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyPointActionComponent.SetPreviewAnim
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAnimationAsset*         Anim                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InitTime                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSEnemyPointActionComponent::SetPreviewAnim(class UAnimationAsset* Anim, float InitTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointActionComponent.SetPreviewAnim"));

	struct
	{
		class UAnimationAsset*         Anim;
		float                          InitTime;
	} params;

	params.Anim = Anim;
	params.InitTime = InitTime;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyPointActionComponent.SetCharacterOnPoint
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSEnemyPointActionComponent::SetCharacterOnPoint(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointActionComponent.SetCharacterOnPoint"));

	struct
	{
		class ACharacter*              Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSEnemyPointActionComponent.K2_CanUsePointComponent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UUPSEnemyPointActionComponent::K2_CanUsePointComponent(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointActionComponent.K2_CanUsePointComponent"));

	struct
	{
		class ACharacter*              Character;
		bool                           ReturnValue;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSEnemyPointActionComponent.GetCharacterOnPoint
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ACharacter*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ACharacter* UUPSEnemyPointActionComponent::GetCharacterOnPoint()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSEnemyPointActionComponent.GetCharacterOnPoint"));

	struct
	{
		class ACharacter*              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_OnRemoveCharacterFromGroup
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSFormation_BlueprintBase::K2_OnRemoveCharacterFromGroup(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_OnRemoveCharacterFromGroup"));

	struct
	{
		class ACharacter*              Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_OnLeaderStartMovementToNewLocation
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 NewLocation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSFormation_BlueprintBase::K2_OnLeaderStartMovementToNewLocation(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_OnLeaderStartMovementToNewLocation"));

	struct
	{
		struct FVector                 NewLocation;
	} params;

	params.NewLocation = NewLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_OnLeaderStartMovementToNewActor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  NewActor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSFormation_BlueprintBase::K2_OnLeaderStartMovementToNewActor(class AActor* NewActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_OnLeaderStartMovementToNewActor"));

	struct
	{
		class AActor*                  NewActor;
	} params;

	params.NewActor = NewActor;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_OnLeaderCompleteMovement
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSFormation_BlueprintBase::K2_OnLeaderCompleteMovement(TEnumAsByte<EPathFollowingResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_OnLeaderCompleteMovement"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_OnAddCharacterInGroup
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSFormation_BlueprintBase::K2_OnAddCharacterInGroup(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_OnAddCharacterInGroup"));

	struct
	{
		class ACharacter*              Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_InitFormation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              InLeaderCharacter              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSFormation_BlueprintBase::K2_InitFormation(class ACharacter* InLeaderCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_InitFormation"));

	struct
	{
		class ACharacter*              InLeaderCharacter;
	} params;

	params.InLeaderCharacter = InLeaderCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_GetLocationInFormationForCharacter
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector AUPSFormation_BlueprintBase::K2_GetLocationInFormationForCharacter(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_GetLocationInFormationForCharacter"));

	struct
	{
		class ACharacter*              Character;
		struct FVector                 ReturnValue;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSFunctionLIbrary.K2_CreatePatrolPoint
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 WorldLocation                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                WorldRotation                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class AUPSPatrolPoint*         PreviousPoint                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            LinkTagFromPreviousPoint       (CPF_Parm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /* AUPSPatrolPoint*/ PointClass                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AUPSPatrolPoint*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AUPSPatrolPoint* UUPSFunctionLIbrary::K2_CreatePatrolPoint(class UObject* WorldContext, const struct FVector& WorldLocation, const struct FRotator& WorldRotation, class AUPSPatrolPoint* PreviousPoint, const struct FGameplayTag& LinkTagFromPreviousPoint, class UClass* /* AUPSPatrolPoint*/ PointClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSFunctionLIbrary.K2_CreatePatrolPoint"));

	struct
	{
		class UObject*                 WorldContext;
		struct FVector                 WorldLocation;
		struct FRotator                WorldRotation;
		class AUPSPatrolPoint*         PreviousPoint;
		struct FGameplayTag            LinkTagFromPreviousPoint;
		class UClass* /* AUPSPatrolPoint*/ PointClass;
		class AUPSPatrolPoint*         ReturnValue;
	} params;

	params.WorldContext = WorldContext;
	params.WorldLocation = WorldLocation;
	params.WorldRotation = WorldRotation;
	params.PreviousPoint = PreviousPoint;
	params.LinkTagFromPreviousPoint = LinkTagFromPreviousPoint;
	params.PointClass = PointClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSFunctionLIbrary.JumpToMontageSectionByIndex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            SectionIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSFunctionLIbrary::JumpToMontageSectionByIndex(class ACharacter* Character, class UAnimMontage* Montage, int SectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSFunctionLIbrary.JumpToMontageSectionByIndex"));

	struct
	{
		class ACharacter*              Character;
		class UAnimMontage*            Montage;
		int                            SectionIndex;
	} params;

	params.Character = Character;
	params.Montage = Montage;
	params.SectionIndex = SectionIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSFunctionLIbrary.GetMontageSectionLength
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UUPSFunctionLIbrary::GetMontageSectionLength(class UAnimMontage* Montage, const struct FName& SectionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSFunctionLIbrary.GetMontageSectionLength"));

	struct
	{
		class UAnimMontage*            Montage;
		struct FName                   SectionName;
		float                          ReturnValue;
	} params;

	params.Montage = Montage;
	params.SectionName = SectionName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSFunctionLIbrary.GetMontageSectionIndexLength
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UUPSFunctionLIbrary::GetMontageSectionIndexLength(class UAnimMontage* Montage, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSFunctionLIbrary.GetMontageSectionIndexLength"));

	struct
	{
		class UAnimMontage*            Montage;
		int                            Index;
		float                          ReturnValue;
	} params;

	params.Montage = Montage;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSFunctionLIbrary.GetEnemyActionFromSelector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FEnemyActionSelector    EnemyActionSelector            (CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UUPSEnemyAction*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUPSEnemyAction* UUPSFunctionLIbrary::GetEnemyActionFromSelector(const struct FEnemyActionSelector& EnemyActionSelector)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSFunctionLIbrary.GetEnemyActionFromSelector"));

	struct
	{
		struct FEnemyActionSelector    EnemyActionSelector;
		class UUPSEnemyAction*         ReturnValue;
	} params;

	params.EnemyActionSelector = EnemyActionSelector;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSFunctionLIbrary.GetDynamicEnemyActionFromSelector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FEnemyActionSelector    EnemyActionSelector            (CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UUPSEnemyAction*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUPSEnemyAction* UUPSFunctionLIbrary::GetDynamicEnemyActionFromSelector(const struct FEnemyActionSelector& EnemyActionSelector)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSFunctionLIbrary.GetDynamicEnemyActionFromSelector"));

	struct
	{
		struct FEnemyActionSelector    EnemyActionSelector;
		class UUPSEnemyAction*         ReturnValue;
	} params;

	params.EnemyActionSelector = EnemyActionSelector;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSFunctionLIbrary.CreatePatrolScriptIntance
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPatrolPointScript      Script                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UUPSPatrolPointScript*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUPSPatrolPointScript* UUPSFunctionLIbrary::CreatePatrolScriptIntance(const struct FPatrolPointScript& Script)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSFunctionLIbrary.CreatePatrolScriptIntance"));

	struct
	{
		struct FPatrolPointScript      Script;
		class UUPSPatrolPointScript*   ReturnValue;
	} params;

	params.Script = Script;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSGroupMovementManager.GetMovementGroups
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class AUPSMovementGroup*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<class AUPSMovementGroup*> UUPSGroupMovementManager::GetMovementGroups()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSGroupMovementManager.GetMovementGroups"));

	struct
	{
		TArray<class AUPSMovementGroup*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSGroupMovementManager.GetMovementGroupLeaderFromMember
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class ACharacter*              GroupMember                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ACharacter*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class ACharacter* UUPSGroupMovementManager::GetMovementGroupLeaderFromMember(class ACharacter* GroupMember)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSGroupMovementManager.GetMovementGroupLeaderFromMember"));

	struct
	{
		class ACharacter*              GroupMember;
		class ACharacter*              ReturnValue;
	} params;

	params.GroupMember = GroupMember;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSGroupMovementManager.GetMovementGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class ACharacter*              MovementGroupLeaderCharacter   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AUPSMovementGroup*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AUPSMovementGroup* UUPSGroupMovementManager::GetMovementGroup(class ACharacter* MovementGroupLeaderCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSGroupMovementManager.GetMovementGroup"));

	struct
	{
		class ACharacter*              MovementGroupLeaderCharacter;
		class AUPSMovementGroup*       ReturnValue;
	} params;

	params.MovementGroupLeaderCharacter = MovementGroupLeaderCharacter;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSGroupMovementManager.GetGroupMovementManager
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UUPSGroupMovementManager* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUPSGroupMovementManager* UUPSGroupMovementManager::GetGroupMovementManager()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSGroupMovementManager.GetGroupMovementManager"));

	struct
	{
		class UUPSGroupMovementManager* ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSMovementGroup.UpdateLocationInFormationForCharacter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSMovementGroup::UpdateLocationInFormationForCharacter(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMovementGroup.UpdateLocationInFormationForCharacter"));

	struct
	{
		class ACharacter*              Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSMovementGroup.SetGroupLeader
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              NewLeader                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSMovementGroup::SetGroupLeader(class ACharacter* NewLeader)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMovementGroup.SetGroupLeader"));

	struct
	{
		class ACharacter*              NewLeader;
	} params;

	params.NewLeader = NewLeader;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSMovementGroup.RemoveGroupMember
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              MemberToRemove                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSMovementGroup::RemoveGroupMember(class ACharacter* MemberToRemove)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMovementGroup.RemoveGroupMember"));

	struct
	{
		class ACharacter*              MemberToRemove;
	} params;

	params.MemberToRemove = MemberToRemove;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSMovementGroup.OnLeaderStartMovementToLocation
// (FUNC_Native, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// struct FVector                 NewLocation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSMovementGroup::OnLeaderStartMovementToLocation(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMovementGroup.OnLeaderStartMovementToLocation"));

	struct
	{
		struct FVector                 NewLocation;
	} params;

	params.NewLocation = NewLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSMovementGroup.OnLeaderStartMovementToActor
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class AActor*                  NewActor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSMovementGroup::OnLeaderStartMovementToActor(class AActor* NewActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMovementGroup.OnLeaderStartMovementToActor"));

	struct
	{
		class AActor*                  NewActor;
	} params;

	params.NewActor = NewActor;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSMovementGroup.OnLeaderCompleteMovement
// (FUNC_Native, FUNC_Protected)
// Parameters:
// struct FAIRequestID            RequestID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EPathFollowingResult> Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSMovementGroup::OnLeaderCompleteMovement(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMovementGroup.OnLeaderCompleteMovement"));

	struct
	{
		struct FAIRequestID            RequestID;
		TEnumAsByte<EPathFollowingResult> Result;
	} params;

	params.RequestID = RequestID;
	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSMovementGroup.OnCharacterDestroyed
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSMovementGroup::OnCharacterDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMovementGroup.OnCharacterDestroyed"));

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSMovementGroup.K2_OnLeaderStartMovementToLocation
// (FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 NewLocation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSMovementGroup::K2_OnLeaderStartMovementToLocation(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMovementGroup.K2_OnLeaderStartMovementToLocation"));

	struct
	{
		struct FVector                 NewLocation;
	} params;

	params.NewLocation = NewLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSMovementGroup.K2_OnLeaderStartMovementToActor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  NewActor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSMovementGroup::K2_OnLeaderStartMovementToActor(class AActor* NewActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMovementGroup.K2_OnLeaderStartMovementToActor"));

	struct
	{
		class AActor*                  NewActor;
	} params;

	params.NewActor = NewActor;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSMovementGroup.InitializeGroupMembers
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void AUPSMovementGroup::InitializeGroupMembers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMovementGroup.InitializeGroupMembers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSMovementGroup.AddGroupMember
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              NewMember                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSMovementGroup::AddGroupMember(class ACharacter* NewMember)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMovementGroup.AddGroupMember"));

	struct
	{
		class ACharacter*              NewMember;
	} params;

	params.NewMember = NewMember;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPointActionMovementHandler.K2_FinishMovement
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSPointActionMovementHandler::K2_FinishMovement(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPointActionMovementHandler.K2_FinishMovement"));

	struct
	{
		bool                           bSuccess;
	} params;

	params.bSuccess = bSuccess;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPointActionMovementHandler.K2_CharacterStartMovement
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUPSEnemyPointActionComponent* Point                          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSPointActionMovementHandler::K2_CharacterStartMovement(class ACharacter* Character, class UUPSEnemyPointActionComponent* Point)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPointActionMovementHandler.K2_CharacterStartMovement"));

	struct
	{
		class ACharacter*              Character;
		class UUPSEnemyPointActionComponent* Point;
	} params;

	params.Character = Character;
	params.Point = Point;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPointActionMovementHandler.K2_CharacterAbortMovement
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUPSEnemyPointActionComponent* Point                          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSPointActionMovementHandler::K2_CharacterAbortMovement(class ACharacter* Character, class UUPSEnemyPointActionComponent* Point)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPointActionMovementHandler.K2_CharacterAbortMovement"));

	struct
	{
		class ACharacter*              Character;
		class UUPSEnemyPointActionComponent* Point;
	} params;

	params.Character = Character;
	params.Point = Point;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPointActionMovementHandler.FinishMovement
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// bool                           bSuccess                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSPointActionMovementHandler::FinishMovement(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPointActionMovementHandler.FinishMovement"));

	struct
	{
		bool                           bSuccess;
	} params;

	params.bSuccess = bSuccess;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSMovementHandlerDefault.OnCharacterRotatedToPoint
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class AAIController*           AIC                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUPSAITask_AIRotateToTarget* FinishedTask                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSMovementHandlerDefault::OnCharacterRotatedToPoint(class AAIController* AIC, class UUPSAITask_AIRotateToTarget* FinishedTask)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMovementHandlerDefault.OnCharacterRotatedToPoint"));

	struct
	{
		class AAIController*           AIC;
		class UUPSAITask_AIRotateToTarget* FinishedTask;
	} params;

	params.AIC = AIC;
	params.FinishedTask = FinishedTask;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSMovementHandlerDefault.OnCharacterReachPoint
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUPSMoveToEnemyPointAction* MoveTask                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EPathFollowingResult> Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AUPSMovementHandlerDefault::OnCharacterReachPoint(class ACharacter* Character, class UUPSMoveToEnemyPointAction* MoveTask, TEnumAsByte<EPathFollowingResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMovementHandlerDefault.OnCharacterReachPoint"));

	struct
	{
		class ACharacter*              Character;
		class UUPSMoveToEnemyPointAction* MoveTask;
		TEnumAsByte<EPathFollowingResult> Result;
	} params;

	params.Character = Character;
	params.MoveTask = MoveTask;
	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSMoveToEnemyPointAction.UPSMoveToLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FUPSMoveParams          MoveParams                     (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UUPSMoveToEnemyPointAction* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUPSMoveToEnemyPointAction* UUPSMoveToEnemyPointAction::UPSMoveToLocation(class ACharacter* Character, const struct FVector& Location, struct FUPSMoveParams* MoveParams)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMoveToEnemyPointAction.UPSMoveToLocation"));

	struct
	{
		class ACharacter*              Character;
		struct FVector                 Location;
		struct FUPSMoveParams          MoveParams;
		class UUPSMoveToEnemyPointAction* ReturnValue;
	} params;

	params.Character = Character;
	params.Location = Location;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (MoveParams != nullptr)
		*MoveParams = params.MoveParams;

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSMoveToEnemyPointAction.StopMovement
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEndTask                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSMoveToEnemyPointAction::StopMovement(bool bEndTask)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMoveToEnemyPointAction.StopMovement"));

	struct
	{
		bool                           bEndTask;
	} params;

	params.bEndTask = bEndTask;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSMoveToEnemyPointAction.OnMoveCompleted
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FAIRequestID            RequestID                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EPathFollowingResult> Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSMoveToEnemyPointAction::OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSMoveToEnemyPointAction.OnMoveCompleted"));

	struct
	{
		struct FAIRequestID            RequestID;
		TEnumAsByte<EPathFollowingResult> Result;
	} params;

	params.RequestID = RequestID;
	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPatrolComponent.UpdateMovementPatrolPoint
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AUPSPatrolPoint*         PatrolPoint                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSPatrolComponent::UpdateMovementPatrolPoint(class AUPSPatrolPoint* PatrolPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolComponent.UpdateMovementPatrolPoint"));

	struct
	{
		class AUPSPatrolPoint*         PatrolPoint;
	} params;

	params.PatrolPoint = PatrolPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPatrolComponent.SetPatrolMovementType
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EPatrolMovementType            MovementType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSPatrolComponent::SetPatrolMovementType(EPatrolMovementType MovementType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolComponent.SetPatrolMovementType"));

	struct
	{
		EPatrolMovementType            MovementType;
	} params;

	params.MovementType = MovementType;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPatrolComponent.GetCurrentPatrolPoint
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AUPSPatrolPoint*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AUPSPatrolPoint* UUPSPatrolComponent::GetCurrentPatrolPoint()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolComponent.GetCurrentPatrolPoint"));

	struct
	{
		class AUPSPatrolPoint*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSPatrolPoint.UpdatePatrolPointSettings
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPatrolPointSettings    NewSettings                    (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void AUPSPatrolPoint::UpdatePatrolPointSettings(struct FPatrolPointSettings* NewSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolPoint.UpdatePatrolPointSettings"));

	struct
	{
		struct FPatrolPointSettings    NewSettings;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewSettings != nullptr)
		*NewSettings = params.NewSettings;
}


// Function PatrolActionSystem.UPSPatrolPoint.GetPatrolPointSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FPatrolPointSettings    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FPatrolPointSettings AUPSPatrolPoint::GetPatrolPointSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolPoint.GetPatrolPointSettings"));

	struct
	{
		struct FPatrolPointSettings    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSPatrolPoint.GetNextPatrolPointLinks
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FPatrolPointLink> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FPatrolPointLink> AUPSPatrolPoint::GetNextPatrolPointLinks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolPoint.GetNextPatrolPointLinks"));

	struct
	{
		TArray<struct FPatrolPointLink> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSPatrolPoint.GetNextPatrolPoint
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AUPSPatrolPoint*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AUPSPatrolPoint* AUPSPatrolPoint::GetNextPatrolPoint(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolPoint.GetNextPatrolPoint"));

	struct
	{
		class ACharacter*              Character;
		class AUPSPatrolPoint*         ReturnValue;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSPatrolPoint.GetBackwardPatrolPointLinks
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FPatrolPointLink> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FPatrolPointLink> AUPSPatrolPoint::GetBackwardPatrolPointLinks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolPoint.GetBackwardPatrolPointLinks"));

	struct
	{
		TArray<struct FPatrolPointLink> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSPatrolPoint.AddNextLink
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPatrolPointLink        Link                           (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void AUPSPatrolPoint::AddNextLink(const struct FPatrolPointLink& Link)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolPoint.AddNextLink"));

	struct
	{
		struct FPatrolPointLink        Link;
	} params;

	params.Link = Link;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPatrolPointScript.StartMovementToPoint
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AUPSPatrolPoint*         Point                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSPatrolPointScript::StartMovementToPoint(class ACharacter* Character, class AUPSPatrolPoint* Point)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolPointScript.StartMovementToPoint"));

	struct
	{
		class ACharacter*              Character;
		class AUPSPatrolPoint*         Point;
	} params;

	params.Character = Character;
	params.Point = Point;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPatrolPointScript.ReachPoint
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AUPSPatrolPoint*         Point                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSPatrolPointScript::ReachPoint(class ACharacter* Character, class AUPSPatrolPoint* Point)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolPointScript.ReachPoint"));

	struct
	{
		class ACharacter*              Character;
		class AUPSPatrolPoint*         Point;
	} params;

	params.Character = Character;
	params.Point = Point;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPatrolPointScript.K2_StartMovementToPoint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AUPSPatrolPoint*         Point                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSPatrolPointScript::K2_StartMovementToPoint(class ACharacter* Character, class AUPSPatrolPoint* Point)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolPointScript.K2_StartMovementToPoint"));

	struct
	{
		class ACharacter*              Character;
		class AUPSPatrolPoint*         Point;
	} params;

	params.Character = Character;
	params.Point = Point;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPatrolPointScript.K2_ReachPoint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AUPSPatrolPoint*         Point                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSPatrolPointScript::K2_ReachPoint(class ACharacter* Character, class AUPSPatrolPoint* Point)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolPointScript.K2_ReachPoint"));

	struct
	{
		class ACharacter*              Character;
		class AUPSPatrolPoint*         Point;
	} params;

	params.Character = Character;
	params.Point = Point;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPatrolPointScript.K2_AbortMovementToPoint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AUPSPatrolPoint*         Point                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSPatrolPointScript::K2_AbortMovementToPoint(class ACharacter* Character, class AUPSPatrolPoint* Point)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolPointScript.K2_AbortMovementToPoint"));

	struct
	{
		class ACharacter*              Character;
		class AUPSPatrolPoint*         Point;
	} params;

	params.Character = Character;
	params.Point = Point;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPatrolPointScript.AbortMovementToPoint
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AUPSPatrolPoint*         Point                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSPatrolPointScript::AbortMovementToPoint(class ACharacter* Character, class AUPSPatrolPoint* Point)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolPointScript.AbortMovementToPoint"));

	struct
	{
		class ACharacter*              Character;
		class AUPSPatrolPoint*         Point;
	} params;

	params.Character = Character;
	params.Point = Point;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPatrolPointSolver.SelectPatrolPoint
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FPatrolPointLink> PatrolPointLinks               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class AUPSPatrolPoint*         ThisPatrolPoint                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AUPSPatrolPoint*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AUPSPatrolPoint* UUPSPatrolPointSolver::SelectPatrolPoint(class AUPSPatrolPoint* ThisPatrolPoint, class ACharacter* Character, TArray<struct FPatrolPointLink>* PatrolPointLinks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolPointSolver.SelectPatrolPoint"));

	struct
	{
		TArray<struct FPatrolPointLink> PatrolPointLinks;
		class AUPSPatrolPoint*         ThisPatrolPoint;
		class ACharacter*              Character;
		class AUPSPatrolPoint*         ReturnValue;
	} params;

	params.ThisPatrolPoint = ThisPatrolPoint;
	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	if (PatrolPointLinks != nullptr)
		*PatrolPointLinks = params.PatrolPointLinks;

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSPatrolVisualizer.Get
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UUPSPatrolVisualizer*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUPSPatrolVisualizer* UUPSPatrolVisualizer::Get()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolVisualizer.Get"));

	struct
	{
		class UUPSPatrolVisualizer*    ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PatrolActionSystem.UPSPatrolVisualizer.EnablePointActionVisualization
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSPatrolVisualizer::EnablePointActionVisualization(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolVisualizer.EnablePointActionVisualization"));

	struct
	{
		bool                           bEnable;
	} params;

	params.bEnable = bEnable;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPatrolVisualizer.EnablePathVisualizationInGame
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSPatrolVisualizer::EnablePathVisualizationInGame(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPatrolVisualizer.EnablePathVisualizationInGame"));

	struct
	{
		bool                           bEnable;
	} params;

	params.bEnable = bEnable;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSPreviewSkeletalMeshComponent.SetPreviewAnim
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAnimationAsset*         Anim                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InitTime                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UUPSPreviewSkeletalMeshComponent::SetPreviewAnim(class UAnimationAsset* Anim, float InitTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSPreviewSkeletalMeshComponent.SetPreviewAnim"));

	struct
	{
		class UAnimationAsset*         Anim;
		float                          InitTime;
	} params;

	params.Anim = Anim;
	params.InitTime = InitTime;

	UObject::ProcessEvent(fn, &params);
}


// Function PatrolActionSystem.UPSSettings.Get
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UUPSSettings*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUPSSettings* UUPSSettings::Get()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PatrolActionSystem.UPSSettings.Get"));

	struct
	{
		class UUPSSettings*            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
