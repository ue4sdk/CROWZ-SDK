#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_CrowWorld_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CrowWorld.CrowFoliageISMC
// 0x00A0 (0x0740 - 0x06A0)
class UCrowFoliageISMC : public UFoliageInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x06A0(0x0048) MISSED OFFSET
	TMap<int, struct FCrowWorldSMCShakingState>        ShakingStates;                                            // 0x06E8(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0738(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowFoliageISMC"));
		return ptr;
	}

};


// Class CrowWorld.CrowFoliageReplicationActor
// 0x0020 (0x0240 - 0x0220)
class ACrowFoliageReplicationActor : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0220(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FBitFlagArray                               BitFlagArray;                                             // 0x0228(0x0018) (CPF_Net, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowFoliageReplicationActor"));
		return ptr;
	}

};


// Class CrowWorld.CrowMeshDestructionActor
// 0x0098 (0x02B8 - 0x0220)
class ACrowMeshDestructionActor : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0220(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldDestructionAUD*                    DestructionAUD;                                           // 0x0228(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /* UCrowChainExplosionDamageType*/   ChainExplosionDamageType;                                 // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	ECrowWorldDestructionCause                         DestructionCause;                                         // 0x0240(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               IsDedicatedServer;                                        // 0x0241(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0242(0x0006) MISSED OFFSET
	class USkeletalMeshComponent*                      SimulationSKC;                                            // 0x0248(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class ADestructibleActor*                          DestructibleActor;                                        // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UDestructibleComponent*                      DestructibleComponent;                                    // 0x0258(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DestroyTime;                                              // 0x0260(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	struct FTimerHandle                                DestroyTimerHandle;                                       // 0x0268(0x0008) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosionDamage;                                          // 0x0270(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosionDamageRadius;                                    // 0x0274(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosionDamageTime;                                      // 0x0278(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HitGroundTime;                                            // 0x027C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                HitGroundCount;                                           // 0x0280(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	TArray<class UFXSystemComponent*>                  FxComponents;                                             // 0x0288(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class UFXSystemComponent*>                  FxComponentsAttached;                                     // 0x0298(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class UPrimitiveComponent*>                 TemporalMeshes;                                           // 0x02A8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowMeshDestructionActor"));
		return ptr;
	}


	void OnTimerHide();
	void OnTimerDestroy();
	void OnHitSimulationSKC(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& HitResult);
	void OnHitDestructibleMesh(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& HitResult);
};


// Class CrowWorld.CrowChainExplosionDamageType
// 0x0000 (0x0028 - 0x0028)
class UCrowChainExplosionDamageType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowChainExplosionDamageType"));
		return ptr;
	}


	bool ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* /* UDamageType*/ DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
};


// Class CrowWorld.CrowWorldActor
// 0x00C8 (0x02E8 - 0x0220)
class ACrowWorldActor : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0220(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldAnimator*                          WorldAnimator;                                            // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class ACrowWorldReplicationActor*                  ReplicationActor;                                         // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldLODUpdater*                        LODUpdater;                                               // 0x0238(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UseActorDestruction : 1;                                  // 0x0240(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UseWorldActorLOD : 1;                                     // 0x0240(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      DestroyedFlagInCluster : 1;                               // 0x0240(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      DestroyedFlagInLandmark : 1;                              // 0x0240(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      SkipItemDestroyedFlag : 1;                                // 0x0240(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      InitializedLayoutItems : 1;                               // 0x0240(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      InitializedLOD : 1;                                       // 0x0240(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      FullyDestroyed : 1;                                       // 0x0240(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0241(0x0001) MISSED OFFSET
	int16_t                                            ActorLayoutIndex;                                         // 0x0242(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	uint32_t                                           WorldActorIndex;                                          // 0x0244(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	uint32_t                                           SectorIndex;                                              // 0x0248(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	uint32_t                                           ClusterIndex;                                             // 0x024C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            ActorDestructibleFlagLookupInSector;                      // 0x0250(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            ActorDestructibleFlagLookupInCluster;                     // 0x0252(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            ActorDestructibleFlagLookupInLandmark;                    // 0x0254(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            LayoutItemDestructibleFlagOrigin;                         // 0x0256(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            LayoutItemDynamicStateOrigin;                             // 0x0258(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x6];                                       // 0x025A(0x0006) MISSED OFFSET
	struct FCrowWorldActorLayoutItemLookups            LayoutItemLookups;                                        // 0x0260(0x0040) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldActorLayoutItemInstance>   LayoutItemInstances;                                      // 0x02A0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldActorDestructionState             ActorDestructionState;                                    // 0x02B0(0x0028) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldActorLODState>             ActorLODStates;                                           // 0x02D8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldActor"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldAnimator
// 0x0078 (0x00A0 - 0x0028)
class UCrowWorldAnimator : public UObject
{
public:
	unsigned char                                      IsInitialized : 1;                                        // 0x0028(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      TriggersEnabled : 1;                                      // 0x0028(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UCrowWorldMapConfig*                         MapConfig;                                                // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class ACrowWorldActor*                             WorldActor;                                               // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               IsAnimationBlocked;                                       // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<struct FCrowWorldLayoutItemAnimation>       AnimationDatas;                                           // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldAnimationInstance>         AnimationInstances;                                       // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldAnimationState>            ActiveAnimationStates;                                    // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class UCrowWorldSMC*>                       ShakingSMCArray;                                          // 0x0078(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0088(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldAnimator"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldAsset
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldAsset"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldAssetDecal
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldAssetDecal : public UCrowWorldAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldAssetDecal"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldAssetLightProbe
// 0x0048 (0x0070 - 0x0028)
class UCrowWorldAssetLightProbe : public UCrowWorldAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  LightPathTransform;                                       // 0x0030(0x0030) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SeperationNormalFromSurface;                              // 0x0060(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              OpenRatio;                                                // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldAssetLightProbe"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldAssetPointLight
// 0x0008 (0x0030 - 0x0028)
class UCrowWorldAssetPointLight : public UCrowWorldAsset
{
public:
	class UPointLightComponent*                        PointLightData;                                           // 0x0028(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldAssetPointLight"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldAssetSpotLight
// 0x0008 (0x0030 - 0x0028)
class UCrowWorldAssetSpotLight : public UCrowWorldAsset
{
public:
	class USpotLightComponent*                         SpotLightData;                                            // 0x0028(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldAssetSpotLight"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldAssetStaticMesh
// 0x0050 (0x0078 - 0x0028)
class UCrowWorldAssetStaticMesh : public UCrowWorldAsset
{
public:
	TSoftObjectPtr<class UStaticMesh>                  StaticMesh;                                               // 0x0028(0x0028) (CPF_Edit, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class UMaterialInterface>>   MaterialOverrides;                                        // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	class UStaticMesh*                                 LoadedMesh;                                               // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UMaterialInterface*>                  LoadedMaterials;                                          // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldAssetStaticMesh"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldBFL
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldBFL : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldBFL"));
		return ptr;
	}


	static bool IsPackageEditable(class UPackage* InPackage);
	static void ChangeStaticMeshToDebrisMesh(TArray<class UObject*> SelectedBlueprints);
};


// Class CrowWorld.CrowWorldBreakableAUD
// 0x0038 (0x0060 - 0x0028)
class UCrowWorldBreakableAUD : public UAssetUserData
{
public:
	class UClass* /* UCrowWorldDamageCheckerBase*/     DamageChecker;                                            // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      Unbreakable : 1;                                          // 0x0030(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      TreatAsTerrain : 1;                                       // 0x0030(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DestroyParent : 1;                                        // 0x0030(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      AutoDetectParent : 1;                                     // 0x0030(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DestroyOnVehicleOverlap : 1;                              // 0x0030(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DestroyOnThrowWeaponHit : 1;                              // 0x0030(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DestroyOnCharacterAnimation : 1;                          // 0x0030(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      SlideOnBeginVaultAction : 1;                              // 0x0030(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DestroyByShockwave : 1;                                   // 0x0031(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      NeedDecalReceiver : 1;                                    // 0x0031(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      NetworkSyncToLargeArea : 1;                               // 0x0031(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      VehicleWheelCrushDamage : 1;                              // 0x0031(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      ShakeOnDamage : 1;                                        // 0x0031(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      PreventAttachChild : 1;                                   // 0x0031(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              AttachChildDistance;                                      // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DestroyAttachChildOnImpactCollapse : 1;                   // 0x0038(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DestroyAttachChildOnExplosion : 1;                        // 0x0038(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              ShakeDuration;                                            // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShakeOffset;                                              // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      ClientOnlyDestroy : 1;                                    // 0x0044(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              RelayDamageRatioToParent;                                 // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxHP;                                                    // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OverlapImpactResistRatio;                                 // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OverlapImpactResistMax;                                   // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DecalScaleMultiply;                                       // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldBreakableAUD"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldClusterActor
// 0x0010 (0x0230 - 0x0220)
class ACrowWorldClusterActor : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0220(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                Value;                                                    // 0x0228(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldClusterActor"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldDamageCheckerBase
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldDamageCheckerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldDamageCheckerBase"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldOnlyPointDamage
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldOnlyPointDamage : public UCrowWorldDamageCheckerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldOnlyPointDamage"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldOnlyRadialDamage
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldOnlyRadialDamage : public UCrowWorldDamageCheckerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldOnlyRadialDamage"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldOnlyVehicleImpactDamage
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldOnlyVehicleImpactDamage : public UCrowWorldDamageCheckerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldOnlyVehicleImpactDamage"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldIgnorePointDamage
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldIgnorePointDamage : public UCrowWorldDamageCheckerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldIgnorePointDamage"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldIgnoreRadialDamage
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldIgnoreRadialDamage : public UCrowWorldDamageCheckerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldIgnoreRadialDamage"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldIgnoreVehicleImpactDamage
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldIgnoreVehicleImpactDamage : public UCrowWorldDamageCheckerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldIgnoreVehicleImpactDamage"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldIgnoreAllDamage
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldIgnoreAllDamage : public UCrowWorldDamageCheckerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldIgnoreAllDamage"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldAllowAllDamage
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldAllowAllDamage : public UCrowWorldDamageCheckerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldAllowAllDamage"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldDamageType
// 0x0008 (0x0048 - 0x0040)
class UCrowWorldDamageType : public UDamageType
{
public:
	ECrowWorldDamageType                               DamageSourceType;                                         // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldDamageType"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldDataActorCheckerBase
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldDataActorCheckerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldDataActorCheckerBase"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldDataActorCheckerDefault
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldDataActorCheckerDefault : public UCrowWorldDataActorCheckerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldDataActorCheckerDefault"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldDataActorCheckerNetActor
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldDataActorCheckerNetActor : public UCrowWorldDataActorCheckerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldDataActorCheckerNetActor"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldDataActorCheckerStaticMesh
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldDataActorCheckerStaticMesh : public UCrowWorldDataActorCheckerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldDataActorCheckerStaticMesh"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldDataActorCheckerEditorActor
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldDataActorCheckerEditorActor : public UCrowWorldDataActorCheckerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldDataActorCheckerEditorActor"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldDataCollector
// 0x0048 (0x00F8 - 0x00B0)
class UCrowWorldDataCollector : public UActorComponent
{
public:
	class UCrowWorldMapConfig*                         MapConfig;                                                // 0x00B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class AActor*                                      SingleTargetActor;                                        // 0x00B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FString                                     ActorNameFilter;                                          // 0x00C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UCrowWorldLightProbe*>                TemporalLightProbes;                                      // 0x00D0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldEditorActorBuildCache             EditorActorBuildCache;                                    // 0x00E0(0x0018) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldDataCollector"));
		return ptr;
	}


	void OnFinishBuildMergedMesh(TArray<class UObject*> InMergedAssets);
	void B_HideLightProbes();
	void A_ShowSectors();
	void A_ShowLightProbes();
	void A_CollectWorldData();
};


// Class CrowWorld.CrowWorldDataCollectionAsset
// 0x0060 (0x0090 - 0x0030)
class UCrowWorldDataCollectionAsset : public UDataAsset
{
public:
	TArray<class UBodySetup*>                          BodySetupArray;                                           // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowWorldActorLayout>               LayoutArray;                                              // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowWorldSectorData>                SectorArray;                                              // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowWorldClusterData>               ClusterArray;                                             // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldLandmarkData                      LandmarkData;                                             // 0x0070(0x0010) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowWorldLinkedActorData>           LinkedActorsArray;                                        // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldDataCollectionAsset"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldDebrisSMC
// 0x0010 (0x04E0 - 0x04D0)
class UCrowWorldDebrisSMC : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldDebrisSMC"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldDestructionAUD
// 0x02D8 (0x0300 - 0x0028)
class UCrowWorldDestructionAUD : public UAssetUserData
{
public:
	class UStaticMesh*                                 RemainMesh;                                               // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  RemainMeshMaterialOverrides;                              // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowWorldDestructionMeshData>       AdditionalRemainMesh;                                     // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       RemainMeshCollisionProfileName;                           // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMesh*                                 TemporalMesh;                                             // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  TemporalMeshMaterialOverrides;                            // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       TemporalMeshCollisionProfileName;                         // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseCollapseByImpact;                                      // 0x0078(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseExplosionByDamage;                                     // 0x0079(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET
	struct FCrowWorldDestructionSetting                CollapseSetting;                                          // 0x0080(0x0140) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldDestructionSetting                ExplosionSetting;                                         // 0x01C0(0x0140) (CPF_Edit, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldDestructionAUD"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldDestructionCache
// 0x00A0 (0x0150 - 0x00B0)
class UCrowWorldDestructionCache : public UActorComponent
{
public:
	TMap<uint32_t, struct FCrowWorldDestructionCacheItem> DestructionActors;                                        // 0x00B0(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	TMap<uint32_t, struct FCrowWorldDestructionCacheItem> ClientOnlyDestructionActors;                              // 0x0100(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldDestructionCache"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldEditorActor
// 0x0060 (0x0280 - 0x0220)
class ACrowWorldEditorActor : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0220(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               SmallActor;                                               // 0x0228(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               StaticLargeActor;                                         // 0x0229(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               LandmarkActor;                                            // 0x022A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x1];                                       // 0x022B(0x0001) MISSED OFFSET
	float                                              LightProbeRatioMultiplier;                                // 0x022C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldActorDestruction                  ActorDestruction;                                         // 0x0230(0x0018) (CPF_Edit, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UClass* /* UCrowWorldLODSetting*/            LODSettingOverride;                                       // 0x0248(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldActorMeshLOD>              MeshLODArray;                                             // 0x0250(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	ECrowWorldEditorActorLOD                           PreviewLOD;                                               // 0x0260(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0260(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	class UCrowWorldMapConfig*                         CachedMapConfig;                                          // 0x0268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UStaticMeshComponent*>                DebugMeshLODArray;                                        // 0x0270(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldEditorActor"));
		return ptr;
	}


	void OnFinishBuildMergedMesh(TArray<class UObject*> InMergedAssets);
	void B_RebuildMergedMesh();
	void B_Assemble();
	void A_Disassemble();
	void A_CheckPropAUD();
	void A_BuildMergedMesh();
};


// Class CrowWorld.CrowWorldFoliage
// 0x0080 (0x00A8 - 0x0028)
class UCrowWorldFoliage : public UObject
{
public:
	unsigned char                                      IsWorldFoliageEnabled : 1;                                // 0x0028(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldMapConfig*                         MapConfig;                                                // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class APlayerController*                           PlayerController;                                         // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TSet<class ULevelStreaming*>                       ActiveStreamingLevels;                                    // 0x0048(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class ULevelStreaming*>                     LoadedLevelsCached;                                       // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldFoliage"));
		return ptr;
	}


	void OnSubLevelUnloaded();
	void OnSubLevelLoaded();
};


// Class CrowWorld.CrowWorldHLODSettingAUD
// 0x0008 (0x0030 - 0x0028)
class UCrowWorldHLODSettingAUD : public UAssetUserData
{
public:
	int                                                LODLevel;                                                 // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldHLODSettingAUD"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldInteractionAUD
// 0x00C0 (0x00E8 - 0x0028)
class UCrowWorldInteractionAUD : public UAssetUserData
{
public:
	bool                                               IsAnimationStateHolder;                                   // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UStaticMesh*                                 TriggerDataMesh;                                          // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     LocalTextKey_Open;                                        // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     LocalTextKey_Close;                                       // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldLayoutItemAnim                    AnimOpen;                                                 // 0x0058(0x0030) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldLayoutItemAnim                    AnimClose;                                                // 0x0088(0x0030) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldLayoutItemAnim                    AnimBlocked;                                              // 0x00B8(0x0030) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldInteractionAUD"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldLevelOfDetailAUD
// 0x0010 (0x0038 - 0x0028)
class UCrowWorldLevelOfDetailAUD : public UAssetUserData
{
public:
	ECrowWorldLODGroup                                 CrowWorldLOD;                                             // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              OverrideCameraDistanceMax;                                // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      IgnoreCrowLightProbe : 1;                                 // 0x0030(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      ClientDecorationOnly : 1;                                 // 0x0030(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      AlwaysDisableCollision : 1;                               // 0x0030(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      StaticWorldMesh : 1;                                      // 0x0030(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      WorldHLOD : 1;                                            // 0x0030(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldLevelOfDetailAUD"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldLightProbe
// 0x0070 (0x03D0 - 0x0360)
class UCrowWorldLightProbe : public UPointLightComponent
{
public:
	struct FTransform                                  LightHitTransform;                                        // 0x0360(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FTransform                                  LightPathTransform;                                       // 0x0390(0x0030) (CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FVector>                             OpenLocations;                                            // 0x03C0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldLightProbe"));
		return ptr;
	}


	void A_ShowLightPath();
};


// Class CrowWorld.CrowWorldLightProbeVolume
// 0x00B0 (0x0510 - 0x0460)
class UCrowWorldLightProbeVolume : public UCapsuleComponent
{
public:
	struct FVector                                     LightForward;                                             // 0x0460(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    LightRotation;                                            // 0x046C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldLightProbeSetting                 LightProbeSetting;                                        // 0x0478(0x004C) (CPF_Edit, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldLightProbeVolumeSetting           LightProbeVolumeSetting;                                  // 0x04C4(0x0020) (CPF_Edit, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	TArray<struct FCrowWorldLightGroup>                LightGroups;                                              // 0x04E8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class UCrowWorldLightProbe*>                LightProbes;                                              // 0x04F8(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0508(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldLightProbeVolume"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldLightProbeVolumeActor
// 0x0078 (0x0298 - 0x0220)
class ACrowWorldLightProbeVolumeActor : public AActor
{
public:
	class UCrowWorldLightProbeVolume*                  RootVolume;                                               // 0x0220(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               ShowDebug;                                                // 0x0228(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0229(0x0003) MISSED OFFSET
	struct FCrowWorldLightProbeSetting                 LightProbeSetting;                                        // 0x022C(0x004C) (CPF_Edit, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldLightProbeVolumeSetting           LightProbeVolumeSetting;                                  // 0x0278(0x0020) (CPF_Edit, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldLightProbeVolumeActor"));
		return ptr;
	}


	void Z_DuplicateVolume();
	void D_ToggleLightProbes();
	void C_ClearLightProbes();
	void B_GenerateLightProbes();
	void A_CollectAndGenerateLightProbes();
};


// Class CrowWorld.CrowWorldLODUpdater
// 0x0148 (0x0170 - 0x0028)
class UCrowWorldLODUpdater : public UObject
{
public:
	int                                                CoreCountAvailable;                                       // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                MinNumberOfCores;                                         // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                MinCountPerThread;                                        // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<float>                                      LODLevelCameraDistance;                                   // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x98];                                      // 0x0048(0x0098) MISSED OFFSET
	class APlayerController*                           PlayerController;                                         // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldLODState>                  WorldActorLODStates;                                      // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldLODData>                   WorldActorLODDatas;                                       // 0x00F8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<uint32_t, int>                                WorldActorLODStateIndexes;                                // 0x0108(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<int16_t>                                    StateIndexPool;                                           // 0x0158(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0168(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldLODUpdater"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldMapConfig
// 0x0118 (0x0148 - 0x0030)
class UCrowWorldMapConfig : public UDataAsset
{
public:
	bool                                               DoNotUseCrowWorld;                                        // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UCrowWorldMapVisualConfig*                   MapVisualConfig;                                          // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseLightProbe;                                            // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FCrowWorldLightProbeSetting                 LightProbeSetting;                                        // 0x0044(0x004C) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               UseWorldOriginRebase;                                     // 0x0090(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              RebaseOriginDistance;                                     // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ClusterSize;                                              // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ClusterSyncDistance;                                      // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ClusterHeightMax;                                         // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SectorSize;                                               // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SectorSyncDistance;                                       // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SectorHeightMax;                                          // 0x00AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ClientUpdateVehicleDistance;                              // 0x00B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ClientUpdateVehicleMargin;                                // 0x00B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseOcclusionGrid;                                         // 0x00B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              OcclusionSize;                                            // 0x00BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OcclusionDistance;                                        // 0x00C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OcclusionHeightMax;                                       // 0x00C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SyncUpdateDelayMin;                                       // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SyncUpdateDelayMax;                                       // 0x00CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   WorldOrigin2D;                                            // 0x00D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AutoDetectParentMeshDistance;                             // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldSoundSetting                      SoundSetting;                                             // 0x00DC(0x0004) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldActorLODSetting                   LODSetting;                                               // 0x00E0(0x0020) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	class UCrowWorldDataCollectionAsset*               WorldDataAsset;                                           // 0x0100(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldTriggerCollisionSetting           TriggerCollisionSetting;                                  // 0x0108(0x0020) (CPF_Edit, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldDataHandlerActorItem>      ActorItems;                                               // 0x0128(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldDataHandlerComponentItem>  ComponentItems;                                           // 0x0138(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldMapConfig"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldMapVisualConfig
// 0x0038 (0x0068 - 0x0030)
class UCrowWorldMapVisualConfig : public UDataAsset
{
public:
	TArray<struct FCrowWorldCameraAttachedFX>          CameraAttachedFxAssets;                                   // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FCrowWorldMapLightSetting                   MapLightSettings;                                         // 0x0040(0x0018) (CPF_Edit, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCrowWorldMaterialParameterOverride> MPCOverrides;                                             // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldMapVisualConfig"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldMediatorActor
// 0x0078 (0x0298 - 0x0220)
class ACrowWorldMediatorActor : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0220(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UClass* /* AActor*/>                  WorldSetupActorTypes;                                     // 0x0228(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	TArray<class UClass* /* UActorComponent*/>         WorldSetupComponentTypes;                                 // 0x0238(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	TArray<class UClass* /* UActorComponent*/>         WorldSetupComponentTypesBeginPlay;                        // 0x0248(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                        SphereMesh;                                               // 0x0258(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class ACrowWorldReplicationActor*                  WorldReplicationActor;                                    // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UActorComponent*>                     WorldSetupComponents;                                     // 0x0268(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class AActor*>                              WorldSetupActorReferences;                                // 0x0278(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class UActorComponent*>                     WorldSetupComponentReferences;                            // 0x0288(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldMediatorActor"));
		return ptr;
	}


	void Event_Sequence(const struct FName& InEventName);
	void A_ShowFoliageActor();
	void A_SetupCrowWorld();
};


// Class CrowWorld.CrowWorldMeshMerge
// 0x0000 (0x0028 - 0x0028)
class UCrowWorldMeshMerge : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldMeshMerge"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldOcclusion
// 0x0118 (0x0140 - 0x0028)
class UCrowWorldOcclusion : public UObject
{
public:
	unsigned char                                      IsGridOcclusionEnabled : 1;                               // 0x0028(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      IsVisibleGridInitialized : 1;                             // 0x0028(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      IsPersistentLevelInitialized : 1;                         // 0x0028(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldMapConfig*                         MapConfig;                                                // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class APlayerController*                           PlayerController;                                         // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              UpdateDelay;                                              // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     ControllerLocation;                                       // 0x004C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TMap<class ULevelStreaming*, struct FCrowWorldLevelStreamData> ActiveStreamingLevels;                                    // 0x0058(0x0050) (CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldGrid                              GridOcclusion;                                            // 0x00A8(0x0018) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	uint32_t                                           CurrentGridIndex;                                         // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FBox                                        CurrentGridBox;                                           // 0x00C4(0x001C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TSet<uint32_t>                                     VisibleGridIndexes;                                       // 0x00E0(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class ULevelStreaming*>                     LoadedLevelsCached;                                       // 0x0130(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldOcclusion"));
		return ptr;
	}


	void OnSubLevelUnloaded();
	void OnSubLevelLoaded();
};


// Class CrowWorld.CrowWorldPingAliveActor
// 0x0058 (0x0278 - 0x0220)
class ACrowWorldPingAliveActor : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0220(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0228(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldPingAliveActor"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldPointLight
// 0x0000 (0x0360 - 0x0360)
class UCrowWorldPointLight : public UPointLightComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldPointLight"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldRemainSMC
// 0x0010 (0x04E0 - 0x04D0)
class UCrowWorldRemainSMC : public UStaticMeshComponent
{
public:
	int16_t                                            RemainMeshIndex;                                          // 0x04D0(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            LayoutItemIndex;                                          // 0x04D2(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0xC];                                       // 0x04D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldRemainSMC"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldReplicationActor
// 0x00A8 (0x02C8 - 0x0220)
class ACrowWorldReplicationActor : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0220(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldMapConfig*                         MapConfig;                                                // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldGrid>                      WorldGridArray;                                           // 0x0230(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldSyncServerWorker*                  ServerWorker;                                             // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldSyncClientWorker*                  FirstClientWorker;                                        // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldClientObjects                     ClientObjects;                                            // 0x0250(0x0020) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<class APlayerController*, struct FCrowWorldPlayerControllerInfo> ControllerInfos;                                          // 0x0270(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               IsWaitingACK;                                             // 0x02C0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               ReceivedUpdateLocationACK;                                // 0x02C1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02C2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldReplicationActor"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldReplicationController
// 0x0018 (0x0238 - 0x0220)
class ACrowWorldReplicationController : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0220(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class APlayerController*                           PlayerController;                                         // 0x0228(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class ACrowWorldReplicationActor*                  ReplicationActor;                                         // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldReplicationController"));
		return ptr;
	}


	void Server_UpdateLocationSyn(const struct FVector& InRealWorldLocation);
	void Server_TriggerDoorOpen(uint32_t InWorldActorIndex, int16_t InLayoutItemIndex, int8_t InTriggerIndex, unsigned char InTriggerActionType, class APawn* InstigatorPawn);
	void Server_TriggerDoorClose(uint32_t InWorldActorIndex, int16_t InLayoutItemIndex, unsigned char InTriggerActionType, class APawn* InstigatorPawn);
	void Server_InitControllerSyn();
	void Client_UpdateSyncDataZip(const struct FVector& InServerViewLocation, int InUncompressedSize, TArray<unsigned char> InCompressedBuffer);
	void Client_UpdateSyncData(const struct FVector& InServerViewLocation, const struct FCrowWorldReplicationSyncData& InSyncData);
	void Client_UpdateLocationAck(const struct FVector& InRealWorldLocation, int ResultCode);
	void Client_UpdateGlobalDataZip(int InUncompressedSize, TArray<unsigned char> InCompressedBuffer);
	void Client_UpdateGlobalData(const struct FCrowWorldReplicationGlobalData& InGlobalData);
	void Client_TriggerDoorOpened(uint32_t InWorldActorIndex, int16_t InLayoutItemIndex, int8_t InTriggerIndex, unsigned char InTriggerActionType);
	void Client_TriggerDoorClosed(uint32_t InWorldActorIndex, int16_t InLayoutItemIndex, unsigned char InTriggerActionType);
	void Client_SectorDestroyedLayoutItemsZip(int InUncompressedSize, TArray<unsigned char> InCompressedBuffer);
	void Client_SectorDestroyedLayoutItems(const struct FCrowWorldDestructionSyncData& InDestructionSyncData);
	void Client_RadialImpactForDebris(const struct FVector_NetQuantize& InOrigin, float InMaxRadius);
	void Client_InitControllerAck(float InServerTime, const struct FVector& InServerViewLocation, bool IsServerWorldInitialized, int ResultCode);
	void Client_DrawDebugLine(const struct FVector& InLocationFrom, const struct FVector& InLocationTo, const struct FColor& Color, float Duration, int Priority, float Thickness);
	void Client_DrawDebugBox(const struct FVector& InLocation, const struct FVector& InExtent, const struct FColor& Color, float Duration, int Priority, float Thickness);
	void Client_DestroyedWorldActor(uint32_t InWorldActorIndex, unsigned char InCrowWorldDestructionCause, const struct FVector_NetQuantize& InImpactPoint, const struct FVector_NetQuantizeNormal& InImpactNormal);
	void Client_DestroyedSingleLayoutItem(uint32_t InWorldActorIndex, int16_t InDestroyedLayoutItemIndex, unsigned char InCrowWorldDestructionCause, const struct FVector_NetQuantize& InImpactPoint, const struct FVector_NetQuantizeNormal& InImpactNormal);
	void Client_DestroyedMultipleWorldActors(TArray<uint32_t> InWorldActorIndexArray, const struct FVector& InDamageOrigin);
	void Client_DestroyedMultipleLayoutItems(uint32_t InWorldActorIndex, TArray<int16_t> InDestroyedLayoutItemIndexArray, unsigned char InCrowWorldDestructionCause, const struct FVector_NetQuantize& InImpactPoint, const struct FVector_NetQuantizeNormal& InImpactNormal);
	void Client_BeginShakeLayoutItem(uint32_t InWorldActorIndex, int16_t InLayoutItemIndex);
};


// Class CrowWorld.CrowWorldSequenceUtilBase
// 0x0000 (0x00B0 - 0x00B0)
class UCrowWorldSequenceUtilBase : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldSequenceUtilBase"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldSequenceLandscape
// 0x0000 (0x00B0 - 0x00B0)
class UCrowWorldSequenceLandscape : public UCrowWorldSequenceUtilBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldSequenceLandscape"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldLODSetting
// 0x00C0 (0x00E8 - 0x0028)
class UCrowWorldLODSetting : public UObject
{
public:
	struct FMeshProxySettings                          ActorLODMeshSetting;                                      // 0x0028(0x00A8) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       MeshLODGroupName;                                         // 0x00D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      MeshLODScreenSizeArray;                                   // 0x00D8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldLODSetting"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldSettings
// 0x0008 (0x0040 - 0x0038)
class UCrowWorldSettings : public UDeveloperSettings
{
public:
	class UClass* /* UCrowWorldLODSetting*/            CrowWorldLODSetting;                                      // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldSettings"));
		return ptr;
	}


	static class UCrowWorldSettings* Get();
};


// Class CrowWorld.CrowWorldSimulationActor
// 0x00A8 (0x02C8 - 0x0220)
class ACrowWorldSimulationActor : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0220(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USceneComponent*                             ImpactPoint;                                              // 0x0228(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UseMassMultiply : 1;                                      // 0x0230(0x0001) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0231(0x0003) MISSED OFFSET
	float                                              MassMultiply;                                             // 0x0234(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldDestructionFxHitGround            FxHitGroundSetting;                                       // 0x0238(0x0030) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class UFXSystemComponent*>                  FxComponents;                                             // 0x0268(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FName                                       CollisionProfileName;                                     // 0x0278(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     ImpactLocation;                                           // 0x0280(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     ImpactNormal;                                             // 0x028C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ImpulseMagnitude;                                         // 0x0298(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PendingTime;                                              // 0x029C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DestroyTime;                                              // 0x02A0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ElapsedTime;                                              // 0x02A4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CountHiddenSMC;                                           // 0x02A8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                SMCList;                                                  // 0x02B0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FTimerHandle                                DestroyTimerHandle;                                       // 0x02C0(0x0008) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldSimulationActor"));
		return ptr;
	}


	void OnSimulationComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& HitResult);
};


// Class CrowWorld.CrowWorldSMC
// 0x0100 (0x05D0 - 0x04D0)
class UCrowWorldSMC : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04D0(0x0018) MISSED OFFSET
	int16_t                                            LayoutItemIndex;                                          // 0x04E8(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bDestroyByShockwave : 1;                                  // 0x04EA(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bDestroyOnThrowWeaponHit : 1;                             // 0x04EA(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bDestroyOnCharacterAnimation : 1;                         // 0x04EA(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bSlideOnBeginVaultAction : 1;                             // 0x04EA(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bIgnoreCharacterInteraction : 1;                          // 0x04EA(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bBlockCharacterMoveThrough : 1;                           // 0x04EA(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bPreventAttachChild : 1;                                  // 0x04EA(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bDestroyAttachChildOnExplosion : 1;                       // 0x04EA(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bDestroyAttachChildOnImpactCollapse : 1;                  // 0x04EB(0x0001) (CPF_Edit, CPF_Transient, CPF_EditConst, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DecalScaleMultiply;                                       // 0x04EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldSMCShakingState                   ShakingState;                                             // 0x04F0(0x0090) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<class USceneComponent*, struct FTransform>    VirtualChildren;                                          // 0x0580(0x0050) (CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldSMC"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldSoundAUD
// 0x0000 (0x0030 - 0x0030)
class UCrowWorldSoundAUD : public UAkSoundAUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldSoundAUD"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldSpotLight
// 0x0000 (0x0360 - 0x0360)
class UCrowWorldSpotLight : public USpotLightComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldSpotLight"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldSyncClientWorker
// 0x03E8 (0x0410 - 0x0028)
class UCrowWorldSyncClientWorker : public UObject
{
public:
	unsigned char                                      bInitControllerRequested : 1;                             // 0x0028(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bEnabledVisualConfig : 1;                                 // 0x0028(0x0001) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                ClientFrameKey;                                           // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UWorld*                                      World;                                                    // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class APlayerController*                           PlayerController;                                         // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldMapConfig*                         MapConfig;                                                // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldDataCollectionAsset*               WorldDataAsset;                                           // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class ACrowWorldReplicationActor*                  ReplicationActor;                                         // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class ACrowWorldReplicationController*             ReplicationController;                                    // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldGrid                              SectorGrid;                                               // 0x0060(0x0018) (CPF_Transient, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldLODUpdater*                        LODUpdater;                                               // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldOcclusion*                         WorldOcclusion;                                           // 0x0080(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldFoliage*                           WorldFoliage;                                             // 0x0088(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldTerrainSetup*                      WorldTerrainSetup;                                        // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UFXSystemComponent*>                  FollowingFxComponents;                                    // 0x0098(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldMaterialParameterOverride> MPCBackups;                                               // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldMaterialParameterOverride> MPCRestores;                                              // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<uint32_t, struct FCrowWorldSectorData>        SectorDataAssets;                                         // 0x00C8(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<uint32_t, struct FCrowWorldClusterData>       ClusterDataAssets;                                        // 0x0118(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldLandmarkData                      LandmarkDataAsset;                                        // 0x0168(0x0010) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<class UObject*, int>                          AssetReferenceCounts;                                     // 0x0178(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldReplicationLandmark               ActiveLandmarkData;                                       // 0x01C8(0x0018) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<uint32_t, struct FCrowWorldClientCluster>     ActiveClusters;                                           // 0x01E0(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<uint32_t, struct FCrowWorldClientSector>      ActiveSectors;                                            // 0x0230(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<uint32_t, class ACrowWorldActor*>             ActiveActors;                                             // 0x0280(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	int                                                DebugFrameCount;                                          // 0x02D0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	TArray<struct FCrowWorldReplicationCluster>        ReceivedClusters;                                         // 0x02D8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldReplicationSector>         ReceivedSectors;                                          // 0x02E8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldClientDropClusterIndex>    ReceivedDropClusters;                                     // 0x02F8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldClientDropSectorIndex>     ReceivedDropSectors;                                      // 0x0308(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class ACrowWorldActor*>                     DropClusterActorQueue;                                    // 0x0318(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class ACrowWorldActor*>                     DropSectorActorQueue;                                     // 0x0328(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	uint32_t                                           GeneratingSectorIndex;                                    // 0x0338(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	TArray<struct FCrowWorldClientClusterActorKey>     ClusterActorKeyArray;                                     // 0x0340(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	int16_t                                            GeneratingClusterActorKeyCursor;                          // 0x0350(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            GeneratingSectorActorCursor;                              // 0x0352(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            CollectAssetLayoutCursor;                                 // 0x0354(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0356(0x0002) MISSED OFFSET
	struct FCrowWorldDestructionLink                   DestructionLink;                                          // 0x0358(0x00B8) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldSyncClientWorker"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldSyncServerWorker
// 0x0370 (0x0398 - 0x0028)
class UCrowWorldSyncServerWorker : public UObject
{
public:
	class UWorld*                                      World;                                                    // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldMapConfig*                         MapConfig;                                                // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldDataCollectionAsset*               WorldDataAsset;                                           // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class ACrowWorldReplicationActor*                  ReplicationActor;                                         // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldFoliage*                           WorldFoliage;                                             // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FCrowWorldGrid>                      WorldGridArray;                                           // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldReplicationLandmark               LandmarkData;                                             // 0x0060(0x0018) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<uint32_t, struct FCrowWorldReplicationCluster> Clusters;                                                 // 0x0078(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<uint32_t, struct FCrowWorldReplicationSector> Sectors;                                                  // 0x00C8(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<uint32_t, class ACrowWorldActor*>             ActorInstances;                                           // 0x0118(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<class ACrowWorldReplicationController*, struct FCrowWorldSyncServerPlayerState> SyncPlayerStates;                                         // 0x0168(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<uint32_t, struct FCrowWorldSyncServerControllerContainer> SectorStates;                                             // 0x01B8(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<uint32_t, struct FCrowWorldSyncServerControllerContainer> ClusterStates;                                            // 0x0208(0x0050) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<uint32_t>                                   TempGridIndexes;                                          // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class ACrowWorldReplicationController*>     TempArrayControllers;                                     // 0x0268(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldDestructionSyncCache              DestructionSyncCache;                                     // 0x0278(0x0068) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FCrowWorldDestructionLink                   DestructionLink;                                          // 0x02E0(0x00B8) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldSyncServerWorker"));
		return ptr;
	}

};


// Class CrowWorld.CrowWorldTerrainSetup
// 0x0078 (0x00A0 - 0x0028)
class UCrowWorldTerrainSetup : public UObject
{
public:
	struct FName                                       TAG_HIDE_SPLINE;                                          // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FName                                       TAG_HIDE_FOLIAGE;                                         // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UWorld*                                      World;                                                    // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TSet<class ULevelStreaming*>                       ActiveStreamingLevels;                                    // 0x0040(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPrivate)
	TArray<class ULevelStreaming*>                     LoadedLevelsCached;                                       // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldTerrainSetup"));
		return ptr;
	}


	void UpdateActiveStreamingLevels();
	void Tick(float DeltaTime);
	void OnSubLevelUnloaded();
	void OnSubLevelLoaded();
	void OnLevelUnloaded(class ULevelStreaming* InLevelStreaming);
	void OnLevelLoaded(class ULevelStreaming* InLevelStreaming);
	void Initialize(class UWorld* InWorld);
	void HideLandscapeSpline(class ALandscapeProxy* InLandscapeProxy);
	void HideFoliage(class AInstancedFoliageActor* InIFA);
};


// Class CrowWorld.CrowWorldTrigger
// 0x0040 (0x0480 - 0x0440)
class UCrowWorldTrigger : public UPrimitiveComponent
{
public:
	class ACrowWorldActor*                             WorldActor;                                               // 0x0440(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCrowWorldAnimator*                          WorldAnimator;                                            // 0x0448(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int16_t                                            LayoutItemIndex;                                          // 0x0450(0x0002) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECrowWorldGeomType                                 GeometryType;                                             // 0x0452(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ECrowWorldTriggerType                              TriggerType;                                              // 0x0453(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int8_t                                             TriggerState;                                             // 0x0454(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	class UBodySetup*                                  TriggerBodySetup;                                         // 0x0458(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FString                                     LocalTextKey_Open;                                        // 0x0460(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FString                                     LocalTextKey_Close;                                       // 0x0470(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrowWorld.CrowWorldTrigger"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
