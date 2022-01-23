#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_GeometryCollectionEngine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GeometryCollectionEngine.ChaosDestructionListener
// 0x0220 (0x0420 - 0x0200)
class UChaosDestructionListener : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0200(0x0014) MISSED OFFSET
	struct FChaosBreakingEventRequestSettings          BreakingEventRequestSettings;                             // 0x0214(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FChaosTrailingEventRequestSettings          TrailingEventRequestSettings;                             // 0x022C(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	TSet<class AChaosSolverActor*>                     ChaosSolverActors;                                        // 0x0248(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	TSet<class AGeometryCollectionActor*>              GeometryCollectionActors;                                 // 0x0298(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCollisionEvents;                                        // 0x02E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnBreakingEvents;                                         // 0x02F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTrailingEvents;                                         // 0x0308(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x108];                                     // 0x0318(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GeometryCollectionEngine.ChaosDestructionListener"));
		return ptr;
	}


	void SortTrailingEvents(EChaosTrailingSortMethod SortMethod, TArray<struct FChaosTrailingEventData>* TrailingEvents);
	void SortCollisionEvents(EChaosCollisionSortMethod SortMethod, TArray<struct FChaosCollisionEventData>* CollisionEvents);
	void SortBreakingEvents(EChaosBreakingSortMethod SortMethod, TArray<struct FChaosBreakingEventData>* BreakingEvents);
	void SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings);
	void SetTrailingEventEnabled(bool bIsEnabled);
	void SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings);
	void SetCollisionEventEnabled(bool bIsEnabled);
	void SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings);
	void SetBreakingEventEnabled(bool bIsEnabled);
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
	bool IsEventListening();
	void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
};


// Class GeometryCollectionEngine.GeometryCollectionActor
// 0x0010 (0x0230 - 0x0220)
class AGeometryCollectionActor : public AActor
{
public:
	class UGeometryCollectionComponent*                GeometryCollectionComponent;                              // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UGeometryCollectionDebugDrawComponent*       GeometryCollectionDebugDrawComponent;                     // 0x0228(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GeometryCollectionEngine.GeometryCollectionActor"));
		return ptr;
	}


	bool RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit);
};


// Class GeometryCollectionEngine.GeometryCollectionCache
// 0x0028 (0x0050 - 0x0028)
class UGeometryCollectionCache : public UObject
{
public:
	struct FRecordedTransformTrack                     RecordedData;                                             // 0x0028(0x0010) (CPF_NativeAccessSpecifierPrivate)
	class UGeometryCollection*                         SupportedCollection;                                      // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FGuid                                       CompatibleCollectionState;                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GeometryCollectionEngine.GeometryCollectionCache"));
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionComponent
// 0x0480 (0x08F0 - 0x0470)
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	class AChaosSolverActor*                           ChaosSolverActor;                                         // 0x0470(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0478(0x00E0) MISSED OFFSET
	class UGeometryCollection*                         RestCollection;                                           // 0x0558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoClear, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class AFieldSystemActor*>                   InitializationFields;                                     // 0x0560(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoClear, CPF_NativeAccessSpecifierPublic)
	bool                                               Simulating;                                               // 0x0570(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0571(0x0007) MISSED OFFSET
	EObjectStateTypeEnum                               ObjectType;                                               // 0x0578(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EnableClustering;                                         // 0x0579(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x057A(0x0002) MISSED OFFSET
	int                                                ClusterGroupIndex;                                        // 0x057C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxClusterLevel;                                          // 0x0580(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0584(0x0004) MISSED OFFSET
	TArray<float>                                      DamageThreshold;                                          // 0x0588(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	EClusterConnectionTypeEnum                         ClusterConnectionType;                                    // 0x0598(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0599(0x0003) MISSED OFFSET
	int                                                CollisionGroup;                                           // 0x059C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CollisionSampleFraction;                                  // 0x05A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LinearEtherDrag;                                          // 0x05A4(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AngularEtherDrag;                                         // 0x05A8(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                         // 0x05B0(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EInitialVelocityTypeEnum                           InitialVelocityType;                                      // 0x05B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x3];                                       // 0x05B9(0x0003) MISSED OFFSET
	struct FVector                                     InitialLinearVelocity;                                    // 0x05BC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InitialAngularVelocity;                                   // 0x05C8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x4];                                       // 0x05D4(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           PhysicalMaterialOverride;                                 // 0x05D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGeomComponentCacheParameters               CacheParameters;                                          // 0x05E0(0x0050) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    NotifyGeometryCollectionPhysicsStateChange;               // 0x0630(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    NotifyGeometryCollectionPhysicsLoadingStateChange;        // 0x0640(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x18];                                      // 0x0650(0x0018) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnChaosBreakEvent;                                        // 0x0668(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	float                                              DesiredCacheTime;                                         // 0x0678(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CachePlayback;                                            // 0x067C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x3];                                       // 0x067D(0x0003) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnChaosPhysicsCollision;                                  // 0x0680(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	bool                                               bNotifyBreaks;                                            // 0x0690(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bNotifyCollisions;                                        // 0x0691(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bEnableReplication;                                       // 0x0692(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bEnableAbandonAfterLevel;                                 // 0x0693(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                ReplicationAbandonClusterLevel;                           // 0x0694(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FGeometryCollectionRepData                  RepData;                                                  // 0x0698(0x0018) (CPF_Net, CPF_RepNotify, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData10[0x218];                                     // 0x06B0(0x0218) MISSED OFFSET
	class UBodySetup*                                  DummyBodySetup;                                           // 0x08C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData11[0x20];                                      // 0x08D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GeometryCollectionEngine.GeometryCollectionComponent"));
		return ptr;
	}


	void SetNotifyBreaks(bool bNewNotifyBreaks);
	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
	void OnRep_RepData(const struct FGeometryCollectionRepData& OldData);
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void NetAbandonCluster(int TransformIndex);
	void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void ApplyKinematicField(float Radius, const struct FVector& position);
};


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// 0x00E8 (0x0308 - 0x0220)
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	struct FGeometryCollectionDebugDrawWarningMessage  WarningMessage;                                           // 0x0220(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                        // 0x0228(0x0018) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebugDrawWholeCollection;                                // 0x0240(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebugDrawHierarchy;                                      // 0x0241(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebugDrawClustering;                                     // 0x0242(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EGeometryCollectionDebugDrawActorHideGeometry      HideGeometry;                                             // 0x0243(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowRigidBodyId;                                         // 0x0244(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowRigidBodyCollision;                                  // 0x0245(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCollisionAtOrigin;                                       // 0x0246(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowRigidBodyTransform;                                  // 0x0247(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowRigidBodyInertia;                                    // 0x0248(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowRigidBodyVelocity;                                   // 0x0249(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowRigidBodyForce;                                      // 0x024A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowRigidBodyInfos;                                      // 0x024B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowTransformIndex;                                      // 0x024C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowTransform;                                           // 0x024D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowParent;                                              // 0x024E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowLevel;                                               // 0x024F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowConnectivityEdges;                                   // 0x0250(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowGeometryIndex;                                       // 0x0251(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowGeometryTransform;                                   // 0x0252(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowBoundingBox;                                         // 0x0253(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowFaces;                                               // 0x0254(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowFaceIndices;                                         // 0x0255(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowFaceNormals;                                         // 0x0256(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowSingleFace;                                          // 0x0257(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SingleFaceIndex;                                          // 0x0258(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowVertices;                                            // 0x025C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowVertexIndices;                                       // 0x025D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowVertexNormals;                                       // 0x025E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseActiveVisualization;                                  // 0x025F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PointThickness;                                           // 0x0260(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LineThickness;                                            // 0x0264(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bTextShadow;                                              // 0x0268(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	float                                              TextScale;                                                // 0x026C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              NormalScale;                                              // 0x0270(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AxisScale;                                                // 0x0274(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ArrowScale;                                               // 0x0278(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      RigidBodyIdColor;                                         // 0x027C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RigidBodyTransformScale;                                  // 0x0280(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      RigidBodyCollisionColor;                                  // 0x0284(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      RigidBodyInertiaColor;                                    // 0x0288(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      RigidBodyVelocityColor;                                   // 0x028C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      RigidBodyForceColor;                                      // 0x0290(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      RigidBodyInfoColor;                                       // 0x0294(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      TransformIndexColor;                                      // 0x0298(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TransformScale;                                           // 0x029C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      LevelColor;                                               // 0x02A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      ParentColor;                                              // 0x02A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ConnectivityEdgeThickness;                                // 0x02A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      GeometryIndexColor;                                       // 0x02AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              GeometryTransformScale;                                   // 0x02B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      BoundingBoxColor;                                         // 0x02B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      FaceColor;                                                // 0x02B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      FaceIndexColor;                                           // 0x02BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      FaceNormalColor;                                          // 0x02C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      SingleFaceColor;                                          // 0x02C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      VertexColor;                                              // 0x02C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      VertexIndexColor;                                         // 0x02CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      VertexNormalColor;                                        // 0x02D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class UBillboardComponent*                         SpriteComponent;                                          // 0x02D8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x28];                                      // 0x02E0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor"));
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// 0x0018 (0x00C8 - 0x00B0)
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	class AGeometryCollectionDebugDrawActor*           GeometryCollectionDebugDrawActor;                         // 0x00B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AGeometryCollectionRenderLevelSetActor*      GeometryCollectionRenderLevelSetActor;                    // 0x00B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent"));
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollection
// 0x00B8 (0x00E0 - 0x0028)
class UGeometryCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FGeometryCollectionSource>           GeometrySource;                                           // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	ECollisionTypeEnum                                 CollisionType;                                            // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EImplicitTypeEnum                                  ImplicitType;                                             // 0x0051(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	int                                                MinLevelSetResolution;                                    // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxLevelSetResolution;                                    // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinClusterLevelSetResolution;                             // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxClusterLevelSetResolution;                             // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CollisionObjectReductionPercentage;                       // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bMassAsDensity;                                           // 0x0068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              Mass;                                                     // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinimumMassClamp;                                         // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CollisionParticlesFraction;                               // 0x0074(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaximumCollisionParticles;                                // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;                                         // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               EnableRemovePiecesOnFracture;                             // 0x0090(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  RemoveOnFractureMaterials;                                // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       PersistentGuid;                                           // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FGuid                                       StateGuid;                                                // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                BoneSelectedMaterialIndex;                                // 0x00C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData05[0x14];                                      // 0x00CC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GeometryCollectionEngine.GeometryCollection"));
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// 0x00A0 (0x02C0 - 0x0220)
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                              TargetVolumeTexture;                                      // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterial*                                   RayMarchMaterial;                                         // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SurfaceTolerance;                                         // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Isovalue;                                                 // 0x0234(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Enabled;                                                  // 0x0238(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               RenderVolumeBoundingBox;                                  // 0x0239(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x86];                                      // 0x023A(0x0086) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor"));
		return ptr;
	}

};


// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// 0x0088 (0x0138 - 0x00B0)
class USkeletalMeshSimulationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                         // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AChaosSolverActor*                           ChaosSolverActor;                                         // 0x00C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x00C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSimulating;                                              // 0x00D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bNotifyCollisions;                                        // 0x00D1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EObjectStateTypeEnum                               ObjectType;                                               // 0x00D2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00D3(0x0001) MISSED OFFSET
	float                                              Density;                                                  // 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinMass;                                                  // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxMass;                                                  // 0x00DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECollisionTypeEnum                                 CollisionType;                                            // 0x00E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              ImplicitShapeParticlesPerUnitArea;                        // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ImplicitShapeMinNumParticles;                             // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ImplicitShapeMaxNumParticles;                             // 0x00EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinLevelSetResolution;                                    // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxLevelSetResolution;                                    // 0x00F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CollisionGroup;                                           // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EInitialVelocityTypeEnum                           InitialVelocityType;                                      // 0x00FC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	struct FVector                                     InitialLinearVelocity;                                    // 0x0100(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InitialAngularVelocity;                                   // 0x010C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnChaosPhysicsCollision;                                  // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0128(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GeometryCollectionEngine.SkeletalMeshSimulationComponent"));
		return ptr;
	}


	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
};


// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// 0x0088 (0x0138 - 0x00B0)
class UStaticMeshSimulationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	bool                                               Simulating;                                               // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bNotifyCollisions;                                        // 0x00B9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EObjectStateTypeEnum                               ObjectType;                                               // 0x00BA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00BB(0x0001) MISSED OFFSET
	float                                              Mass;                                                     // 0x00BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECollisionTypeEnum                                 CollisionType;                                            // 0x00C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EImplicitTypeEnum                                  ImplicitType;                                             // 0x00C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	int                                                MinLevelSetResolution;                                    // 0x00C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxLevelSetResolution;                                    // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EInitialVelocityTypeEnum                           InitialVelocityType;                                      // 0x00CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FVector                                     InitialLinearVelocity;                                    // 0x00D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     InitialAngularVelocity;                                   // 0x00DC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamageThreshold;                                          // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                         // 0x00F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AChaosSolverActor*                           ChaosSolverActor;                                         // 0x00F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnChaosPhysicsCollision;                                  // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0110(0x0010) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 SimulatedComponents;                                      // 0x0120(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GeometryCollectionEngine.StaticMeshSimulationComponent"));
		return ptr;
	}


	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
	void ForceRecreatePhysicsState();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
