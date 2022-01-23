#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_PatrolActionSystem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PatrolActionSystem.UPSActionCondition
// 0x0008 (0x0030 - 0x0028)
class UUPSActionCondition : public UObject
{
public:
	bool                                               bInverseCondition;                                        // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSActionCondition"));
		return ptr;
	}


	bool InternalCheckCondition(class ACharacter* Character);
};


// Class PatrolActionSystem.UPSAITask_AIRotateToTarget
// 0x0050 (0x00B8 - 0x0068)
class UUPSAITask_AIRotateToTarget : public UGameplayTask
{
public:
	struct FMulticastScriptDelegate                    OnRotationTaskFinished;                                   // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class AAIController*                               AIC;                                                      // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class ACharacter*                                  Character;                                                // 0x0080(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class AActor*                                      TargetActor;                                              // 0x0088(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0090(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSAITask_AIRotateToTarget"));
		return ptr;
	}


	static class UUPSAITask_AIRotateToTarget* RotateAIToTargetRotation(class AAIController* AIController, const struct FRotator& TargetRotation, bool bUseCustomRotationSpeed, float CustomRotationSpeed, float ErrorTolerance);
	static class UUPSAITask_AIRotateToTarget* RotateAIToTargetActor(class AAIController* AIController, class AActor* RotationTarget, bool bUseCustomRotationSpeed, float CustomRotationSpeed, float ErrorTolerance);
};


// Class PatrolActionSystem.UPSAITask_ExecuteEnemyAction
// 0x0020 (0x0088 - 0x0068)
class UUPSAITask_ExecuteEnemyAction : public UGameplayTask
{
public:
	struct FMulticastScriptDelegate                    OnEnemyActionFinishedDelegate;                            // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class UUPSEnemyAction*                             EnemyAction;                                              // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class ACharacter*                                  Character;                                                // 0x0080(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSAITask_ExecuteEnemyAction"));
		return ptr;
	}


	void OnActionFinished(EEnemyActionFinishResult Result);
	static class UUPSAITask_ExecuteEnemyAction* ExecuteEnemyAction(class UUPSEnemyAction* EnemyActionToActivate, class ACharacter* Character);
	void AbortAction();
};


// Class PatrolActionSystem.UPSBasePatrolObject
// 0x0008 (0x0228 - 0x0220)
class AUPSBasePatrolObject : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSBasePatrolObject"));
		return ptr;
	}

};


// Class PatrolActionSystem.UPSBillboardComponent
// 0x0000 (0x0460 - 0x0460)
class UUPSBillboardComponent : public UBillboardComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSBillboardComponent"));
		return ptr;
	}

};


// Class PatrolActionSystem.UPSCheatManager
// 0x0000 (0x0078 - 0x0078)
class UUPSCheatManager : public UCheatManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSCheatManager"));
		return ptr;
	}


	void UPS_EnablePointActionsDebug();
	void UPS_EnablePatrolVisualization();
	void UPS_EnableGroupMovementDebug();
	void UPS_DisablePointActionsDebug();
	void UPS_DisablePatrolVisualization();
	void UPS_DisableGroupMovementDebug();
};


// Class PatrolActionSystem.UPSEditorDrawer
// 0x0060 (0x0088 - 0x0028)
class UUPSEditorDrawer : public UObject
{
public:
	TArray<struct FDrawerItemInfo>                     TextToDraw;                                               // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSEditorDrawer"));
		return ptr;
	}

};


// Class PatrolActionSystem.UPSEnemyAction
// 0x0048 (0x0078 - 0x0030)
class UUPSEnemyAction : public UDataAsset
{
public:
	struct FMulticastScriptDelegate                    OnActionFinishedDelegate;                                 // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class ACharacter*                                  Character;                                                // 0x0040(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	TArray<class UUPSEnemyActionScript*>               EnemyActionScripts;                                       // 0x0050(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class UUPSActionCondition*>                 ActionConditions;                                         // 0x0060(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSEnemyAction"));
		return ptr;
	}


	void StartAction(class ACharacter* Character);
	void InternalStartAction(class ACharacter* InCharacter);
	void InternalFinishAction(class ACharacter* InCharacter);
	void InternalAbortAction(class ACharacter* InCharacter);
	void FinishAction();
	void AbortAction();
};


// Class PatrolActionSystem.UPSEnemyActionScript
// 0x0000 (0x0028 - 0x0028)
class UUPSEnemyActionScript : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSEnemyActionScript"));
		return ptr;
	}


	void OnActionStarted(class ACharacter* Character);
	void OnActionFinished(class ACharacter* Character);
	void OnActionAborted(class ACharacter* Character);
};


// Class PatrolActionSystem.UPSEnemyActionsPreset
// 0x0010 (0x0040 - 0x0030)
class UUPSEnemyActionsPreset : public UDataAsset
{
public:
	TArray<struct FEnemyActionSelector>                EnemyActions;                                             // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSEnemyActionsPreset"));
		return ptr;
	}

};


// Class PatrolActionSystem.UPSEnemyPointAction
// 0x0180 (0x03A0 - 0x0220)
class AUPSEnemyPointAction : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	class UUPSEnemyPointActionComponent*               DefaultEnemyPointActionComponent;                         // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USceneComponent*                             RootSceneComponent;                                       // 0x0230(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UUPSEnemyPointActionComponent*>       EnemyActionPointComponents;                               // 0x0238(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TSet<class ACharacter*>                            CharactersReachedPoint;                                   // 0x0248(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<class ACharacter*, class AUPSPointActionMovementHandler*> CharacterMovementHandlers;                                // 0x0298(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<TWeakObjectPtr<class ACharacter>, struct FScriptDelegate> ActionFinishedCallbacks;                                  // 0x02E8(0x0050) (CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TSet<class ACharacter*>                            CharactersStartedPointAction;                             // 0x0338(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UClass* /* AUPSPointActionMovementHandler*/  MovementHandlerClass;                                     // 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FGameplayTag                                PointTag;                                                 // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bFinishActionAfterCharacterAbort;                         // 0x0398(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0399(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSEnemyPointAction"));
		return ptr;
	}


	bool StartEnemyPointAction(const struct FScriptDelegate& OnPointActionFinishedCallback, class ACharacter* Character);
	void OnCharacterReachPoint(class ACharacter* Character, bool bSuccess);
	void OnCharacterDestroyed(class AActor* DestroyedActor);
	void K2_StartEnemyPointAction(class ACharacter* Character);
	void K2_OnCharacterReachPoint(class ACharacter* Character, bool bSuccess);
	void K2_FinishPointAction();
	void K2_ClearPointActionForCharacter(class ACharacter* Character);
	bool K2_CanStartPointAction(class ACharacter* Character);
	void K2_AllCharactersReachPoints();
	bool HasFreePointComponent();
	class UUPSEnemyPointActionComponent* GetFreeEnemyActionPointComponent(class ACharacter* Character);
	TArray<class UUPSEnemyPointActionComponent*> GetEnemyActionPointComponents();
	TArray<class ACharacter*> GetCharactersStartedPointAction();
	TArray<class ACharacter*> GetCharactersReachedPoints();
	TArray<class ACharacter*> GetCharactersGoingToPoint();
	class UUPSEnemyPointActionComponent* GetCharacterPoint(class ACharacter* Character);
	void FinishPointAction();
	void EnableVisualization(bool bEnable);
	void ClearPointActionForCharacter(class ACharacter* Character);
	bool CanStartPointAction(class ACharacter* Character);
	void AllCharactersReachPoints();
	void AbortEnemyPointAction(class ACharacter* Character);
};


// Class PatrolActionSystem.UPSEnemyPointActionComponent
// 0x0070 (0x0270 - 0x0200)
class UUPSEnemyPointActionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0200(0x0018) MISSED OFFSET
	struct FGameplayTag                                PointTag;                                                 // 0x0218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           PreviewAnim;                                              // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PreviewAnimStartTime;                                     // 0x0228(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ArrowSize;                                                // 0x022C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ArrowOffset;                                              // 0x0230(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BillboardSize;                                            // 0x0234(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    MeshRotationOffset;                                       // 0x0238(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bOverrideProjectSettingsMesh;                             // 0x0244(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bOverrideProjectSettingsMaterial;                         // 0x0245(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bOverrideProjectSettingsSprite;                           // 0x0246(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0247(0x0001) MISSED OFFSET
	class USkeletalMesh*                               OverrideEnemyActionPointComponentMesh;                    // 0x0248(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OverrideEnemyActionPointComponentMeshMaterial;            // 0x0250(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UTexture2D*                                  OverrideEnemyActionPointComponentBillboardSprite;         // 0x0258(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0260(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSEnemyPointActionComponent"));
		return ptr;
	}


	void SetPreviewAnim(class UAnimationAsset* Anim, float InitTime);
	void SetCharacterOnPoint(class ACharacter* Character);
	bool K2_CanUsePointComponent(class ACharacter* Character);
	class ACharacter* GetCharacterOnPoint();
};


// Class PatrolActionSystem.UPSGroupMovementFormation
// 0x0060 (0x0280 - 0x0220)
class AUPSGroupMovementFormation : public AActor
{
public:
	class UArrowComponent*                             RootArrowComponent;                                       // 0x0220(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TSet<class ACharacter*>                            CharactersInFormation;                                    // 0x0228(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class ACharacter*                                  LeaderCharacter;                                          // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSGroupMovementFormation"));
		return ptr;
	}

};


// Class PatrolActionSystem.UPSFormation_BlueprintBase
// 0x0000 (0x0280 - 0x0280)
class AUPSFormation_BlueprintBase : public AUPSGroupMovementFormation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSFormation_BlueprintBase"));
		return ptr;
	}


	void K2_OnRemoveCharacterFromGroup(class ACharacter* Character);
	void K2_OnLeaderStartMovementToNewLocation(const struct FVector& NewLocation);
	void K2_OnLeaderStartMovementToNewActor(class AActor* NewActor);
	void K2_OnLeaderCompleteMovement(TEnumAsByte<EPathFollowingResult> Result);
	void K2_OnAddCharacterInGroup(class ACharacter* Character);
	void K2_InitFormation(class ACharacter* InLeaderCharacter);
	struct FVector K2_GetLocationInFormationForCharacter(class ACharacter* Character);
};


// Class PatrolActionSystem.UPSFormation_FromFormationPoints
// 0x0010 (0x0290 - 0x0280)
class AUPSFormation_FromFormationPoints : public AUPSGroupMovementFormation
{
public:
	TArray<class UUPSFormationPointComponent*>         FormationPointComponents;                                 // 0x0280(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSFormation_FromFormationPoints"));
		return ptr;
	}

};


// Class PatrolActionSystem.UPSFormation_FromGeneratedPoints
// 0x0030 (0x02B0 - 0x0280)
class AUPSFormation_FromGeneratedPoints : public AUPSGroupMovementFormation
{
public:
	struct FFormationPointsGenerationSettings          PointsGenerationSettings;                                 // 0x0280(0x000C) (CPF_Edit, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x24];                                      // 0x028C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSFormation_FromGeneratedPoints"));
		return ptr;
	}

};


// Class PatrolActionSystem.UPSFormation_FromOriginLocations
// 0x0000 (0x0280 - 0x0280)
class AUPSFormation_FromOriginLocations : public AUPSGroupMovementFormation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSFormation_FromOriginLocations"));
		return ptr;
	}

};


// Class PatrolActionSystem.UPSFormationPointComponent
// 0x0010 (0x0470 - 0x0460)
class UUPSFormationPointComponent : public UBillboardComponent
{
public:
	class ACharacter*                                  CharacterOnPoint;                                         // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSFormationPointComponent"));
		return ptr;
	}

};


// Class PatrolActionSystem.UPSFunctionLIbrary
// 0x0000 (0x0028 - 0x0028)
class UUPSFunctionLIbrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSFunctionLIbrary"));
		return ptr;
	}


	static class AUPSPatrolPoint* K2_CreatePatrolPoint(class UObject* WorldContext, const struct FVector& WorldLocation, const struct FRotator& WorldRotation, class AUPSPatrolPoint* PreviousPoint, const struct FGameplayTag& LinkTagFromPreviousPoint, class UClass* /* AUPSPatrolPoint*/ PointClass);
	static void JumpToMontageSectionByIndex(class ACharacter* Character, class UAnimMontage* Montage, int SectionIndex);
	static float GetMontageSectionLength(class UAnimMontage* Montage, const struct FName& SectionName);
	static float GetMontageSectionIndexLength(class UAnimMontage* Montage, int Index);
	static class UUPSEnemyAction* GetEnemyActionFromSelector(const struct FEnemyActionSelector& EnemyActionSelector);
	static class UUPSEnemyAction* GetDynamicEnemyActionFromSelector(const struct FEnemyActionSelector& EnemyActionSelector);
	static class UUPSPatrolPointScript* CreatePatrolScriptIntance(const struct FPatrolPointScript& Script);
};


// Class PatrolActionSystem.UPSGroupMemberMovementPoint
// 0x0008 (0x0228 - 0x0220)
class AUPSGroupMemberMovementPoint : public AActor
{
public:
	class UBillboardComponent*                         BillboardComponent;                                       // 0x0220(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSGroupMemberMovementPoint"));
		return ptr;
	}

};


// Class PatrolActionSystem.UPSGroupMovementAIController
// 0x0020 (0x0348 - 0x0328)
class AUPSGroupMovementAIController : public AAIController
{
public:
	struct FMulticastScriptDelegate                    OnAIStartMovementToLocationDelegate;                      // 0x0328(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnAIStartMovementToActorDelegate;                         // 0x0338(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSGroupMovementAIController"));
		return ptr;
	}

};


// Class PatrolActionSystem.UPSGroupMovementAIC_Crowd
// 0x0000 (0x0348 - 0x0348)
class AUPSGroupMovementAIC_Crowd : public AUPSGroupMovementAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSGroupMovementAIC_Crowd"));
		return ptr;
	}

};


// Class PatrolActionSystem.UPSGroupMovementManager
// 0x0050 (0x0078 - 0x0028)
class UUPSGroupMovementManager : public UObject
{
public:
	TSet<TWeakObjectPtr<class AUPSMovementGroup>>      MovementGroups;                                           // 0x0028(0x0050) (CPF_Transient, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSGroupMovementManager"));
		return ptr;
	}


	TArray<class AUPSMovementGroup*> GetMovementGroups();
	class ACharacter* GetMovementGroupLeaderFromMember(class ACharacter* GroupMember);
	class AUPSMovementGroup* GetMovementGroup(class ACharacter* MovementGroupLeaderCharacter);
	static class UUPSGroupMovementManager* GetGroupMovementManager();
};


// Class PatrolActionSystem.UPSGroupMovementVisualizer
// 0x0060 (0x0088 - 0x0028)
class UUPSGroupMovementVisualizer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TMap<TWeakObjectPtr<class AUPSMovementGroup>, bool> MovementGroups;                                           // 0x0038(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSGroupMovementVisualizer"));
		return ptr;
	}

};


// Class PatrolActionSystem.UPSMovementGroup
// 0x0108 (0x0330 - 0x0228)
class AUPSMovementGroup : public AUPSBasePatrolObject
{
public:
	class ACharacter*                                  GroupLeader;                                              // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TMap<class ACharacter*, struct FMovementGroupMemberInfo> MovementGroupMembers;                                     // 0x0230(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bRotateMovementPointsAroundLeader;                        // 0x0280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class UClass* /* AUPSGroupMovementFormation*/      Formation;                                                // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MembersMovementReactionTime;                              // 0x0290(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MembersMovementReactionTimeRandomDiviation;               // 0x0294(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class AUPSGroupMovementAIController*               GroupMovementLeaderAIC;                                   // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UBillboardComponent*                         BillboardComponent;                                       // 0x02A0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class AUPSGroupMovementFormation*                  SpawnedFormation;                                         // 0x02A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x30];                                      // 0x02B0(0x0030) MISSED OFFSET
	TMap<class ACharacter*, struct FDelayedGroupMovement> DelayedMovement;                                          // 0x02E0(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSMovementGroup"));
		return ptr;
	}


	void UpdateLocationInFormationForCharacter(class ACharacter* Character);
	void SetGroupLeader(class ACharacter* NewLeader);
	void RemoveGroupMember(class ACharacter* MemberToRemove);
	void OnLeaderStartMovementToLocation(const struct FVector& NewLocation);
	void OnLeaderStartMovementToActor(class AActor* NewActor);
	void OnLeaderCompleteMovement(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result);
	void OnCharacterDestroyed(class AActor* DestroyedActor);
	void K2_OnLeaderStartMovementToLocation(const struct FVector& NewLocation);
	void K2_OnLeaderStartMovementToActor(class AActor* NewActor);
	void InitializeGroupMembers();
	void AddGroupMember(class ACharacter* NewMember);
};


// Class PatrolActionSystem.UPSMovementGroupsSettings
// 0x0018 (0x0050 - 0x0038)
class UUPSMovementGroupsSettings : public UDeveloperSettings
{
public:
	struct FColor                                      LineBetweenGroupLeaderAndGroupActorColor;                 // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      LineBetweenGroupMemberAndLeaderColor;                     // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LineBetweenGroupLeaderAndGroupActorThickness;             // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LineBetweenGroupMemberAndLeaderThickness;                 // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       GroupMovementPointBBName;                                 // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSMovementGroupsSettings"));
		return ptr;
	}

};


// Class PatrolActionSystem.UPSPointActionMovementHandler
// 0x0028 (0x0248 - 0x0220)
class AUPSPointActionMovementHandler : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0220(0x0018) MISSED OFFSET
	class ACharacter*                                  MovementCharacter;                                        // 0x0238(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UUPSEnemyPointActionComponent*               PointActionComponent;                                     // 0x0240(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSPointActionMovementHandler"));
		return ptr;
	}


	void K2_FinishMovement(bool bSuccess);
	void K2_CharacterStartMovement(class ACharacter* Character, class UUPSEnemyPointActionComponent* Point);
	void K2_CharacterAbortMovement(class ACharacter* Character, class UUPSEnemyPointActionComponent* Point);
	void FinishMovement(bool bSuccess);
};


// Class PatrolActionSystem.UPSMovementHandlerDefault
// 0x0028 (0x0270 - 0x0248)
class AUPSMovementHandlerDefault : public AUPSPointActionMovementHandler
{
public:
	struct FUPSMoveParams                              MoveParams;                                               // 0x0248(0x0018) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bRotateOnPoint;                                           // 0x0260(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	class UGameplayTask*                               ActiveGameplayTask;                                       // 0x0268(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSMovementHandlerDefault"));
		return ptr;
	}


	void OnCharacterRotatedToPoint(class AAIController* AIC, class UUPSAITask_AIRotateToTarget* FinishedTask);
	void OnCharacterReachPoint(class ACharacter* Character, class UUPSMoveToEnemyPointAction* MoveTask, TEnumAsByte<EPathFollowingResult> Result);
};


// Class PatrolActionSystem.UPSMoveToEnemyPointAction
// 0x0048 (0x00B8 - 0x0070)
class UUPSMoveToEnemyPointAction : public UAITask
{
public:
	struct FMulticastScriptDelegate                    OnMoveToEnemyPointActionFinishedDelegate;                 // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class ACharacter*                                  MoveChracter;                                             // 0x0080(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0088(0x0018) MISSED OFFSET
	struct FUPSMoveParams                              MoveParams;                                               // 0x00A0(0x0018) (CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSMoveToEnemyPointAction"));
		return ptr;
	}


	static class UUPSMoveToEnemyPointAction* UPSMoveToLocation(class ACharacter* Character, const struct FVector& Location, struct FUPSMoveParams* MoveParams);
	void StopMovement(bool bEndTask);
	void OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result);
};


// Class PatrolActionSystem.UPSPatrolComponent
// 0x0018 (0x00C8 - 0x00B0)
class UUPSPatrolComponent : public UActorComponent
{
public:
	class AUPSPatrolPoint*                             InitialMovementPatrolPoint;                               // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EPatrolMovementType                                PatrolMovementDirection;                                  // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDisableVisualization;                                    // 0x00B9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
	class AUPSPatrolPoint*                             CurrentPatrolPoint;                                       // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSPatrolComponent"));
		return ptr;
	}


	void UpdateMovementPatrolPoint(class AUPSPatrolPoint* PatrolPoint);
	void SetPatrolMovementType(EPatrolMovementType MovementType);
	class AUPSPatrolPoint* GetCurrentPatrolPoint();
};


// Class PatrolActionSystem.UPSPatrolPoint
// 0x0080 (0x02A8 - 0x0228)
class AUPSPatrolPoint : public AUPSBasePatrolObject
{
public:
	class UBillboardComponent*                         BillboardComponent;                                       // 0x0228(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FPatrolPointSettings                        PatrolPointSettings;                                      // 0x0230(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UArrowComponent*                             ArrowComponent;                                           // 0x0270(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FPatrolPointLink>                    PatrolPointLinks;                                         // 0x0278(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FPatrolPointLink>                    BackwardPatrolPointLinks;                                 // 0x0288(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FPatrolPointLink>                    CachedPatrolPointLinks;                                   // 0x0298(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSPatrolPoint"));
		return ptr;
	}


	void UpdatePatrolPointSettings(struct FPatrolPointSettings* NewSettings);
	struct FPatrolPointSettings GetPatrolPointSettings();
	TArray<struct FPatrolPointLink> GetNextPatrolPointLinks();
	class AUPSPatrolPoint* GetNextPatrolPoint(class ACharacter* Character);
	TArray<struct FPatrolPointLink> GetBackwardPatrolPointLinks();
	void AddNextLink(const struct FPatrolPointLink& Link);
};


// Class PatrolActionSystem.UPSPatrolPointScript
// 0x0000 (0x0028 - 0x0028)
class UUPSPatrolPointScript : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSPatrolPointScript"));
		return ptr;
	}


	void StartMovementToPoint(class ACharacter* Character, class AUPSPatrolPoint* Point);
	void ReachPoint(class ACharacter* Character, class AUPSPatrolPoint* Point);
	void K2_StartMovementToPoint(class ACharacter* Character, class AUPSPatrolPoint* Point);
	void K2_ReachPoint(class ACharacter* Character, class AUPSPatrolPoint* Point);
	void K2_AbortMovementToPoint(class ACharacter* Character, class AUPSPatrolPoint* Point);
	void AbortMovementToPoint(class ACharacter* Character, class AUPSPatrolPoint* Point);
};


// Class PatrolActionSystem.UPSPatrolPointSolver
// 0x0000 (0x0028 - 0x0028)
class UUPSPatrolPointSolver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSPatrolPointSolver"));
		return ptr;
	}


	class AUPSPatrolPoint* SelectPatrolPoint(class AUPSPatrolPoint* ThisPatrolPoint, class ACharacter* Character, TArray<struct FPatrolPointLink>* PatrolPointLinks);
};


// Class PatrolActionSystem.UPSPatrolPointSolver_RandomPoint
// 0x0000 (0x0028 - 0x0028)
class UUPSPatrolPointSolver_RandomPoint : public UUPSPatrolPointSolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSPatrolPointSolver_RandomPoint"));
		return ptr;
	}

};


// Class PatrolActionSystem.UPSPatrolVisualizer
// 0x0078 (0x00A0 - 0x0028)
class UUPSPatrolVisualizer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET
	TArray<struct FUPSPatrolPointPathData>             PatrolPointsPathData;                                     // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FUPSPatrolComponentPathData>         PatrolComponentsPathData;                                 // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FVisitedPoint>                       VisitedPoints;                                            // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSPatrolVisualizer"));
		return ptr;
	}


	static class UUPSPatrolVisualizer* Get();
	void EnablePointActionVisualization(bool bEnable);
	void EnablePathVisualizationInGame(bool bEnable);
};


// Class PatrolActionSystem.UPSPreviewSkeletalMeshComponent
// 0x0000 (0x0ED0 - 0x0ED0)
class UUPSPreviewSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSPreviewSkeletalMeshComponent"));
		return ptr;
	}


	void SetPreviewAnim(class UAnimationAsset* Anim, float InitTime);
};


// Class PatrolActionSystem.UPSSettings
// 0x00F0 (0x0128 - 0x0038)
class UUPSSettings : public UDeveloperSettings
{
public:
	struct FColor                                      PathLinesColor;                                           // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      LinesBetweenPointsColor;                                  // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      LineFromPatrolComponentOwnerColor;                        // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      ErrorLineColor;                                           // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DefaultLinesThickness;                                    // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ErrorLinesThickness;                                      // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PatrolPointArrowOffset;                                   // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PatrolPointArrowSize;                                     // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PatrolPointSmallArrowSize;                                // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ArrowMovementSpeed;                                       // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DistanceBetweenArrows;                                    // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      ReachRadiusColor;                                         // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ReachRadiusThickness;                                     // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FKey                                        KeyToAddNewPoint;                                         // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionChannel>                     PatrolBuilderTraceChannel;                                // 0x0088(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              CheckDistanceBetweenPoints;                               // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                EnemyActionPointComponentMesh;                            // 0x0090(0x0028) (CPF_Edit, CPF_Config, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>           EnemyActionPointComponentMeshMaterial;                    // 0x00B8(0x0028) (CPF_Edit, CPF_Config, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>                   EnemyActionPointComponentBillboardSprite;                 // 0x00E0(0x0028) (CPF_Edit, CPF_Config, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DebugPointActionOffset;                                   // 0x0108(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      DebugPointActionColor;                                    // 0x0114(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DebugPointActionArrowSize;                                // 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DebugPointActionLineThickness;                            // 0x011C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       CurrentPatrolPointBBName;                                 // 0x0120(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PatrolActionSystem.UPSSettings"));
		return ptr;
	}


	static class UUPSSettings* Get();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
