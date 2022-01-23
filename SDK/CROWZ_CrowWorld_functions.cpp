// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_CrowWorld_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrowWorld.CrowMeshDestructionActor.OnTimerHide
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ACrowMeshDestructionActor::OnTimerHide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowMeshDestructionActor.OnTimerHide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowMeshDestructionActor.OnTimerDestroy
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ACrowMeshDestructionActor::OnTimerDestroy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowMeshDestructionActor.OnTimerDestroy"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowMeshDestructionActor.OnHitSimulationSKC
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 NormalImpulse                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void ACrowMeshDestructionActor::OnHitSimulationSKC(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowMeshDestructionActor.OnHitSimulationSKC"));

	struct
	{
		class UPrimitiveComponent*     HitComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		struct FVector                 NormalImpulse;
		struct FHitResult              HitResult;
	} params;

	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowMeshDestructionActor.OnHitDestructibleMesh
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 NormalImpulse                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void ACrowMeshDestructionActor::OnHitDestructibleMesh(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowMeshDestructionActor.OnHitDestructibleMesh"));

	struct
	{
		class UPrimitiveComponent*     HitComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		struct FVector                 NormalImpulse;
		struct FHitResult              HitResult;
	} params;

	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowChainExplosionDamageType.ApplyRadialDamageWithFalloff
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          BaseDamage                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MinimumDamage                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Origin                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DamageInnerRadius              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DamageOuterRadius              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DamageFalloff                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /* UDamageType*/ DamageTypeClass                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          IgnoreActors                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AController*             InstigatedByController         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ECollisionChannel> DamagePreventionChannel        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UCrowChainExplosionDamageType::ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* /* UDamageType*/ DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowChainExplosionDamageType.ApplyRadialDamageWithFalloff"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          BaseDamage;
		float                          MinimumDamage;
		struct FVector                 Origin;
		float                          DamageInnerRadius;
		float                          DamageOuterRadius;
		float                          DamageFalloff;
		class UClass* /* UDamageType*/ DamageTypeClass;
		TArray<class AActor*>          IgnoreActors;
		class AActor*                  DamageCauser;
		class AController*             InstigatedByController;
		TEnumAsByte<ECollisionChannel> DamagePreventionChannel;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.BaseDamage = BaseDamage;
	params.MinimumDamage = MinimumDamage;
	params.Origin = Origin;
	params.DamageInnerRadius = DamageInnerRadius;
	params.DamageOuterRadius = DamageOuterRadius;
	params.DamageFalloff = DamageFalloff;
	params.DamageTypeClass = DamageTypeClass;
	params.IgnoreActors = IgnoreActors;
	params.DamageCauser = DamageCauser;
	params.InstigatedByController = InstigatedByController;
	params.DamagePreventionChannel = DamagePreventionChannel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowWorld.CrowWorldBFL.IsPackageEditable
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPackage*                InPackage                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UCrowWorldBFL::IsPackageEditable(class UPackage* InPackage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldBFL.IsPackageEditable"));

	struct
	{
		class UPackage*                InPackage;
		bool                           ReturnValue;
	} params;

	params.InPackage = InPackage;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowWorld.CrowWorldBFL.ChangeStaticMeshToDebrisMesh
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UObject*>         SelectedBlueprints             (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UCrowWorldBFL::ChangeStaticMeshToDebrisMesh(TArray<class UObject*> SelectedBlueprints)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldBFL.ChangeStaticMeshToDebrisMesh"));

	struct
	{
		TArray<class UObject*>         SelectedBlueprints;
	} params;

	params.SelectedBlueprints = SelectedBlueprints;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldDataCollector.OnFinishBuildMergedMesh
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// TArray<class UObject*>         InMergedAssets                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UCrowWorldDataCollector::OnFinishBuildMergedMesh(TArray<class UObject*> InMergedAssets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldDataCollector.OnFinishBuildMergedMesh"));

	struct
	{
		TArray<class UObject*>         InMergedAssets;
	} params;

	params.InMergedAssets = InMergedAssets;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldDataCollector.B_HideLightProbes
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UCrowWorldDataCollector::B_HideLightProbes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldDataCollector.B_HideLightProbes"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldDataCollector.A_ShowSectors
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UCrowWorldDataCollector::A_ShowSectors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldDataCollector.A_ShowSectors"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldDataCollector.A_ShowLightProbes
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UCrowWorldDataCollector::A_ShowLightProbes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldDataCollector.A_ShowLightProbes"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldDataCollector.A_CollectWorldData
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UCrowWorldDataCollector::A_CollectWorldData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldDataCollector.A_CollectWorldData"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldEditorActor.OnFinishBuildMergedMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<class UObject*>         InMergedAssets                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ACrowWorldEditorActor::OnFinishBuildMergedMesh(TArray<class UObject*> InMergedAssets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldEditorActor.OnFinishBuildMergedMesh"));

	struct
	{
		TArray<class UObject*>         InMergedAssets;
	} params;

	params.InMergedAssets = InMergedAssets;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldEditorActor.B_RebuildMergedMesh
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ACrowWorldEditorActor::B_RebuildMergedMesh()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldEditorActor.B_RebuildMergedMesh"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldEditorActor.B_Assemble
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ACrowWorldEditorActor::B_Assemble()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldEditorActor.B_Assemble"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldEditorActor.A_Disassemble
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ACrowWorldEditorActor::A_Disassemble()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldEditorActor.A_Disassemble"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldEditorActor.A_CheckPropAUD
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ACrowWorldEditorActor::A_CheckPropAUD()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldEditorActor.A_CheckPropAUD"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldEditorActor.A_BuildMergedMesh
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ACrowWorldEditorActor::A_BuildMergedMesh()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldEditorActor.A_BuildMergedMesh"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldFoliage.OnSubLevelUnloaded
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UCrowWorldFoliage::OnSubLevelUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldFoliage.OnSubLevelUnloaded"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldFoliage.OnSubLevelLoaded
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UCrowWorldFoliage::OnSubLevelLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldFoliage.OnSubLevelLoaded"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldLightProbe.A_ShowLightPath
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UCrowWorldLightProbe::A_ShowLightPath()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldLightProbe.A_ShowLightPath"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldLightProbeVolumeActor.Z_DuplicateVolume
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ACrowWorldLightProbeVolumeActor::Z_DuplicateVolume()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldLightProbeVolumeActor.Z_DuplicateVolume"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldLightProbeVolumeActor.D_ToggleLightProbes
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ACrowWorldLightProbeVolumeActor::D_ToggleLightProbes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldLightProbeVolumeActor.D_ToggleLightProbes"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldLightProbeVolumeActor.C_ClearLightProbes
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ACrowWorldLightProbeVolumeActor::C_ClearLightProbes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldLightProbeVolumeActor.C_ClearLightProbes"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldLightProbeVolumeActor.B_GenerateLightProbes
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ACrowWorldLightProbeVolumeActor::B_GenerateLightProbes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldLightProbeVolumeActor.B_GenerateLightProbes"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldLightProbeVolumeActor.A_CollectAndGenerateLightProbes
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ACrowWorldLightProbeVolumeActor::A_CollectAndGenerateLightProbes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldLightProbeVolumeActor.A_CollectAndGenerateLightProbes"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldMediatorActor.Event_Sequence
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InEventName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldMediatorActor::Event_Sequence(const struct FName& InEventName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldMediatorActor.Event_Sequence"));

	struct
	{
		struct FName                   InEventName;
	} params;

	params.InEventName = InEventName;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldMediatorActor.A_ShowFoliageActor
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ACrowWorldMediatorActor::A_ShowFoliageActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldMediatorActor.A_ShowFoliageActor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldMediatorActor.A_SetupCrowWorld
// (FUNC_Final, FUNC_Native, FUNC_Public)

void ACrowWorldMediatorActor::A_SetupCrowWorld()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldMediatorActor.A_SetupCrowWorld"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldOcclusion.OnSubLevelUnloaded
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UCrowWorldOcclusion::OnSubLevelUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldOcclusion.OnSubLevelUnloaded"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldOcclusion.OnSubLevelLoaded
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UCrowWorldOcclusion::OnSubLevelLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldOcclusion.OnSubLevelLoaded"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Server_UpdateLocationSyn
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_HasDefaults, FUNC_NetValidate)
// Parameters:
// struct FVector                 InRealWorldLocation            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Server_UpdateLocationSyn(const struct FVector& InRealWorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Server_UpdateLocationSyn"));

	struct
	{
		struct FVector                 InRealWorldLocation;
	} params;

	params.InRealWorldLocation = InRealWorldLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Server_TriggerDoorOpen
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// uint32_t                       InWorldActorIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int16_t                        InLayoutItemIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int8_t                         InTriggerIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  InTriggerActionType            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APawn*                   InstigatorPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Server_TriggerDoorOpen(uint32_t InWorldActorIndex, int16_t InLayoutItemIndex, int8_t InTriggerIndex, unsigned char InTriggerActionType, class APawn* InstigatorPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Server_TriggerDoorOpen"));

	struct
	{
		uint32_t                       InWorldActorIndex;
		int16_t                        InLayoutItemIndex;
		int8_t                         InTriggerIndex;
		unsigned char                  InTriggerActionType;
		class APawn*                   InstigatorPawn;
	} params;

	params.InWorldActorIndex = InWorldActorIndex;
	params.InLayoutItemIndex = InLayoutItemIndex;
	params.InTriggerIndex = InTriggerIndex;
	params.InTriggerActionType = InTriggerActionType;
	params.InstigatorPawn = InstigatorPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Server_TriggerDoorClose
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// uint32_t                       InWorldActorIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int16_t                        InLayoutItemIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  InTriggerActionType            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APawn*                   InstigatorPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Server_TriggerDoorClose(uint32_t InWorldActorIndex, int16_t InLayoutItemIndex, unsigned char InTriggerActionType, class APawn* InstigatorPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Server_TriggerDoorClose"));

	struct
	{
		uint32_t                       InWorldActorIndex;
		int16_t                        InLayoutItemIndex;
		unsigned char                  InTriggerActionType;
		class APawn*                   InstigatorPawn;
	} params;

	params.InWorldActorIndex = InWorldActorIndex;
	params.InLayoutItemIndex = InLayoutItemIndex;
	params.InTriggerActionType = InTriggerActionType;
	params.InstigatorPawn = InstigatorPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Server_InitControllerSyn
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void ACrowWorldReplicationController::Server_InitControllerSyn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Server_InitControllerSyn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_UpdateSyncDataZip
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// struct FVector                 InServerViewLocation           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InUncompressedSize             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<unsigned char>          InCompressedBuffer             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_UpdateSyncDataZip(const struct FVector& InServerViewLocation, int InUncompressedSize, TArray<unsigned char> InCompressedBuffer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_UpdateSyncDataZip"));

	struct
	{
		struct FVector                 InServerViewLocation;
		int                            InUncompressedSize;
		TArray<unsigned char>          InCompressedBuffer;
	} params;

	params.InServerViewLocation = InServerViewLocation;
	params.InUncompressedSize = InUncompressedSize;
	params.InCompressedBuffer = InCompressedBuffer;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_UpdateSyncData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// struct FVector                 InServerViewLocation           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCrowWorldReplicationSyncData InSyncData                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_UpdateSyncData(const struct FVector& InServerViewLocation, const struct FCrowWorldReplicationSyncData& InSyncData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_UpdateSyncData"));

	struct
	{
		struct FVector                 InServerViewLocation;
		struct FCrowWorldReplicationSyncData InSyncData;
	} params;

	params.InServerViewLocation = InServerViewLocation;
	params.InSyncData = InSyncData;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_UpdateLocationAck
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// struct FVector                 InRealWorldLocation            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ResultCode                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_UpdateLocationAck(const struct FVector& InRealWorldLocation, int ResultCode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_UpdateLocationAck"));

	struct
	{
		struct FVector                 InRealWorldLocation;
		int                            ResultCode;
	} params;

	params.InRealWorldLocation = InRealWorldLocation;
	params.ResultCode = ResultCode;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_UpdateGlobalDataZip
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// int                            InUncompressedSize             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<unsigned char>          InCompressedBuffer             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_UpdateGlobalDataZip(int InUncompressedSize, TArray<unsigned char> InCompressedBuffer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_UpdateGlobalDataZip"));

	struct
	{
		int                            InUncompressedSize;
		TArray<unsigned char>          InCompressedBuffer;
	} params;

	params.InUncompressedSize = InUncompressedSize;
	params.InCompressedBuffer = InCompressedBuffer;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_UpdateGlobalData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// struct FCrowWorldReplicationGlobalData InGlobalData                   (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_UpdateGlobalData(const struct FCrowWorldReplicationGlobalData& InGlobalData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_UpdateGlobalData"));

	struct
	{
		struct FCrowWorldReplicationGlobalData InGlobalData;
	} params;

	params.InGlobalData = InGlobalData;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_TriggerDoorOpened
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// uint32_t                       InWorldActorIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int16_t                        InLayoutItemIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int8_t                         InTriggerIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  InTriggerActionType            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_TriggerDoorOpened(uint32_t InWorldActorIndex, int16_t InLayoutItemIndex, int8_t InTriggerIndex, unsigned char InTriggerActionType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_TriggerDoorOpened"));

	struct
	{
		uint32_t                       InWorldActorIndex;
		int16_t                        InLayoutItemIndex;
		int8_t                         InTriggerIndex;
		unsigned char                  InTriggerActionType;
	} params;

	params.InWorldActorIndex = InWorldActorIndex;
	params.InLayoutItemIndex = InLayoutItemIndex;
	params.InTriggerIndex = InTriggerIndex;
	params.InTriggerActionType = InTriggerActionType;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_TriggerDoorClosed
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// uint32_t                       InWorldActorIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int16_t                        InLayoutItemIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  InTriggerActionType            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_TriggerDoorClosed(uint32_t InWorldActorIndex, int16_t InLayoutItemIndex, unsigned char InTriggerActionType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_TriggerDoorClosed"));

	struct
	{
		uint32_t                       InWorldActorIndex;
		int16_t                        InLayoutItemIndex;
		unsigned char                  InTriggerActionType;
	} params;

	params.InWorldActorIndex = InWorldActorIndex;
	params.InLayoutItemIndex = InLayoutItemIndex;
	params.InTriggerActionType = InTriggerActionType;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_SectorDestroyedLayoutItemsZip
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// int                            InUncompressedSize             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<unsigned char>          InCompressedBuffer             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_SectorDestroyedLayoutItemsZip(int InUncompressedSize, TArray<unsigned char> InCompressedBuffer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_SectorDestroyedLayoutItemsZip"));

	struct
	{
		int                            InUncompressedSize;
		TArray<unsigned char>          InCompressedBuffer;
	} params;

	params.InUncompressedSize = InUncompressedSize;
	params.InCompressedBuffer = InCompressedBuffer;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_SectorDestroyedLayoutItems
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// struct FCrowWorldDestructionSyncData InDestructionSyncData          (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_SectorDestroyedLayoutItems(const struct FCrowWorldDestructionSyncData& InDestructionSyncData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_SectorDestroyedLayoutItems"));

	struct
	{
		struct FCrowWorldDestructionSyncData InDestructionSyncData;
	} params;

	params.InDestructionSyncData = InDestructionSyncData;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_RadialImpactForDebris
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// struct FVector_NetQuantize     InOrigin                       (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InMaxRadius                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_RadialImpactForDebris(const struct FVector_NetQuantize& InOrigin, float InMaxRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_RadialImpactForDebris"));

	struct
	{
		struct FVector_NetQuantize     InOrigin;
		float                          InMaxRadius;
	} params;

	params.InOrigin = InOrigin;
	params.InMaxRadius = InMaxRadius;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_InitControllerAck
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// float                          InServerTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 InServerViewLocation           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsServerWorldInitialized       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ResultCode                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_InitControllerAck(float InServerTime, const struct FVector& InServerViewLocation, bool IsServerWorldInitialized, int ResultCode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_InitControllerAck"));

	struct
	{
		float                          InServerTime;
		struct FVector                 InServerViewLocation;
		bool                           IsServerWorldInitialized;
		int                            ResultCode;
	} params;

	params.InServerTime = InServerTime;
	params.InServerViewLocation = InServerViewLocation;
	params.IsServerWorldInitialized = IsServerWorldInitialized;
	params.ResultCode = ResultCode;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_DrawDebugLine
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// struct FVector                 InLocationFrom                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 InLocationTo                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FColor                  Color                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Thickness                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_DrawDebugLine(const struct FVector& InLocationFrom, const struct FVector& InLocationTo, const struct FColor& Color, float Duration, int Priority, float Thickness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_DrawDebugLine"));

	struct
	{
		struct FVector                 InLocationFrom;
		struct FVector                 InLocationTo;
		struct FColor                  Color;
		float                          Duration;
		int                            Priority;
		float                          Thickness;
	} params;

	params.InLocationFrom = InLocationFrom;
	params.InLocationTo = InLocationTo;
	params.Color = Color;
	params.Duration = Duration;
	params.Priority = Priority;
	params.Thickness = Thickness;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_DrawDebugBox
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// struct FVector                 InLocation                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 InExtent                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FColor                  Color                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Priority                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Thickness                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_DrawDebugBox(const struct FVector& InLocation, const struct FVector& InExtent, const struct FColor& Color, float Duration, int Priority, float Thickness)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_DrawDebugBox"));

	struct
	{
		struct FVector                 InLocation;
		struct FVector                 InExtent;
		struct FColor                  Color;
		float                          Duration;
		int                            Priority;
		float                          Thickness;
	} params;

	params.InLocation = InLocation;
	params.InExtent = InExtent;
	params.Color = Color;
	params.Duration = Duration;
	params.Priority = Priority;
	params.Thickness = Thickness;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_DestroyedWorldActor
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// uint32_t                       InWorldActorIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  InCrowWorldDestructionCause    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector_NetQuantize     InImpactPoint                  (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector_NetQuantizeNormal InImpactNormal                 (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_DestroyedWorldActor(uint32_t InWorldActorIndex, unsigned char InCrowWorldDestructionCause, const struct FVector_NetQuantize& InImpactPoint, const struct FVector_NetQuantizeNormal& InImpactNormal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_DestroyedWorldActor"));

	struct
	{
		uint32_t                       InWorldActorIndex;
		unsigned char                  InCrowWorldDestructionCause;
		struct FVector_NetQuantize     InImpactPoint;
		struct FVector_NetQuantizeNormal InImpactNormal;
	} params;

	params.InWorldActorIndex = InWorldActorIndex;
	params.InCrowWorldDestructionCause = InCrowWorldDestructionCause;
	params.InImpactPoint = InImpactPoint;
	params.InImpactNormal = InImpactNormal;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_DestroyedSingleLayoutItem
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// uint32_t                       InWorldActorIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int16_t                        InDestroyedLayoutItemIndex     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  InCrowWorldDestructionCause    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector_NetQuantize     InImpactPoint                  (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector_NetQuantizeNormal InImpactNormal                 (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_DestroyedSingleLayoutItem(uint32_t InWorldActorIndex, int16_t InDestroyedLayoutItemIndex, unsigned char InCrowWorldDestructionCause, const struct FVector_NetQuantize& InImpactPoint, const struct FVector_NetQuantizeNormal& InImpactNormal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_DestroyedSingleLayoutItem"));

	struct
	{
		uint32_t                       InWorldActorIndex;
		int16_t                        InDestroyedLayoutItemIndex;
		unsigned char                  InCrowWorldDestructionCause;
		struct FVector_NetQuantize     InImpactPoint;
		struct FVector_NetQuantizeNormal InImpactNormal;
	} params;

	params.InWorldActorIndex = InWorldActorIndex;
	params.InDestroyedLayoutItemIndex = InDestroyedLayoutItemIndex;
	params.InCrowWorldDestructionCause = InCrowWorldDestructionCause;
	params.InImpactPoint = InImpactPoint;
	params.InImpactNormal = InImpactNormal;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_DestroyedMultipleWorldActors
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// TArray<uint32_t>               InWorldActorIndexArray         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FVector                 InDamageOrigin                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_DestroyedMultipleWorldActors(TArray<uint32_t> InWorldActorIndexArray, const struct FVector& InDamageOrigin)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_DestroyedMultipleWorldActors"));

	struct
	{
		TArray<uint32_t>               InWorldActorIndexArray;
		struct FVector                 InDamageOrigin;
	} params;

	params.InWorldActorIndexArray = InWorldActorIndexArray;
	params.InDamageOrigin = InDamageOrigin;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_DestroyedMultipleLayoutItems
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// uint32_t                       InWorldActorIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int16_t>                InDestroyedLayoutItemIndexArray (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// unsigned char                  InCrowWorldDestructionCause    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector_NetQuantize     InImpactPoint                  (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector_NetQuantizeNormal InImpactNormal                 (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_DestroyedMultipleLayoutItems(uint32_t InWorldActorIndex, TArray<int16_t> InDestroyedLayoutItemIndexArray, unsigned char InCrowWorldDestructionCause, const struct FVector_NetQuantize& InImpactPoint, const struct FVector_NetQuantizeNormal& InImpactNormal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_DestroyedMultipleLayoutItems"));

	struct
	{
		uint32_t                       InWorldActorIndex;
		TArray<int16_t>                InDestroyedLayoutItemIndexArray;
		unsigned char                  InCrowWorldDestructionCause;
		struct FVector_NetQuantize     InImpactPoint;
		struct FVector_NetQuantizeNormal InImpactNormal;
	} params;

	params.InWorldActorIndex = InWorldActorIndex;
	params.InDestroyedLayoutItemIndexArray = InDestroyedLayoutItemIndexArray;
	params.InCrowWorldDestructionCause = InCrowWorldDestructionCause;
	params.InImpactPoint = InImpactPoint;
	params.InImpactNormal = InImpactNormal;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldReplicationController.Client_BeginShakeLayoutItem
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient, FUNC_NetValidate)
// Parameters:
// uint32_t                       InWorldActorIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int16_t                        InLayoutItemIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACrowWorldReplicationController::Client_BeginShakeLayoutItem(uint32_t InWorldActorIndex, int16_t InLayoutItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldReplicationController.Client_BeginShakeLayoutItem"));

	struct
	{
		uint32_t                       InWorldActorIndex;
		int16_t                        InLayoutItemIndex;
	} params;

	params.InWorldActorIndex = InWorldActorIndex;
	params.InLayoutItemIndex = InLayoutItemIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldSettings.Get
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UCrowWorldSettings*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCrowWorldSettings* UCrowWorldSettings::Get()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldSettings.Get"));

	struct
	{
		class UCrowWorldSettings*      ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowWorld.CrowWorldSimulationActor.OnSimulationComponentHit
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 NormalImpulse                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void ACrowWorldSimulationActor::OnSimulationComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldSimulationActor.OnSimulationComponentHit"));

	struct
	{
		class UPrimitiveComponent*     HitComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		struct FVector                 NormalImpulse;
		struct FHitResult              HitResult;
	} params;

	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldTerrainSetup.UpdateActiveStreamingLevels
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UCrowWorldTerrainSetup::UpdateActiveStreamingLevels()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldTerrainSetup.UpdateActiveStreamingLevels"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldTerrainSetup.Tick
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowWorldTerrainSetup::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldTerrainSetup.Tick"));

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldTerrainSetup.OnSubLevelUnloaded
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UCrowWorldTerrainSetup::OnSubLevelUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldTerrainSetup.OnSubLevelUnloaded"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldTerrainSetup.OnSubLevelLoaded
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UCrowWorldTerrainSetup::OnSubLevelLoaded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldTerrainSetup.OnSubLevelLoaded"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldTerrainSetup.OnLevelUnloaded
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class ULevelStreaming*         InLevelStreaming               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowWorldTerrainSetup::OnLevelUnloaded(class ULevelStreaming* InLevelStreaming)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldTerrainSetup.OnLevelUnloaded"));

	struct
	{
		class ULevelStreaming*         InLevelStreaming;
	} params;

	params.InLevelStreaming = InLevelStreaming;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldTerrainSetup.OnLevelLoaded
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class ULevelStreaming*         InLevelStreaming               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowWorldTerrainSetup::OnLevelLoaded(class ULevelStreaming* InLevelStreaming)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldTerrainSetup.OnLevelLoaded"));

	struct
	{
		class ULevelStreaming*         InLevelStreaming;
	} params;

	params.InLevelStreaming = InLevelStreaming;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldTerrainSetup.Initialize
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UWorld*                  InWorld                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowWorldTerrainSetup::Initialize(class UWorld* InWorld)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldTerrainSetup.Initialize"));

	struct
	{
		class UWorld*                  InWorld;
	} params;

	params.InWorld = InWorld;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldTerrainSetup.HideLandscapeSpline
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class ALandscapeProxy*         InLandscapeProxy               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowWorldTerrainSetup::HideLandscapeSpline(class ALandscapeProxy* InLandscapeProxy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldTerrainSetup.HideLandscapeSpline"));

	struct
	{
		class ALandscapeProxy*         InLandscapeProxy;
	} params;

	params.InLandscapeProxy = InLandscapeProxy;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowWorld.CrowWorldTerrainSetup.HideFoliage
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class AInstancedFoliageActor*  InIFA                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowWorldTerrainSetup::HideFoliage(class AInstancedFoliageActor* InIFA)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowWorld.CrowWorldTerrainSetup.HideFoliage"));

	struct
	{
		class AInstancedFoliageActor*  InIFA;
	} params;

	params.InIFA = InIFA;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
