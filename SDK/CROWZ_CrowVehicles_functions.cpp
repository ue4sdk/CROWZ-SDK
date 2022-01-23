// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_CrowVehicles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrowVehicles.CrowVehicleFloodingComponent.UpdateWaterLinearDamping
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleFloodingComponent::UpdateWaterLinearDamping(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.UpdateWaterLinearDamping"));

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.UpdateFlooding
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleFloodingComponent::UpdateFlooding(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.UpdateFlooding"));

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.UpdateDrivingParticle
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasOutParms)
// Parameters:
// class UParticleSystemComponent* InParticle                     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   InSocketName                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InSpeedForwardRatio            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InSpeedRightRatio              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InReverse                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleFloodingComponent::UpdateDrivingParticle(class UParticleSystemComponent* InParticle, const struct FName& InSocketName, float InSpeedForwardRatio, float InSpeedRightRatio, bool InReverse)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.UpdateDrivingParticle"));

	struct
	{
		class UParticleSystemComponent* InParticle;
		struct FName                   InSocketName;
		float                          InSpeedForwardRatio;
		float                          InSpeedRightRatio;
		bool                           InReverse;
	} params;

	params.InParticle = InParticle;
	params.InSocketName = InSocketName;
	params.InSpeedForwardRatio = InSpeedForwardRatio;
	params.InSpeedRightRatio = InSpeedRightRatio;
	params.InReverse = InReverse;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.SetupFx
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCrowVehicleFloodingComponent::SetupFx()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.SetupFx"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.SetupBodyComponent
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCrowVehicleFloodingComponent::SetupBodyComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.SetupBodyComponent"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.Reset
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCrowVehicleFloodingComponent::Reset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.Reset"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.RequestChangeState
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// ECrowVehicleFloodingState      NewState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleFloodingComponent::RequestChangeState(ECrowVehicleFloodingState NewState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.RequestChangeState"));

	struct
	{
		ECrowVehicleFloodingState      NewState;
	} params;

	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.OnWaterPlaneOverlapEnd
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class AActor*                  InWaterPlaneActor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleFloodingComponent::OnWaterPlaneOverlapEnd(class AActor* InWaterPlaneActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.OnWaterPlaneOverlapEnd"));

	struct
	{
		class AActor*                  InWaterPlaneActor;
	} params;

	params.InWaterPlaneActor = InWaterPlaneActor;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.OnWaterPlaneOverlapBegin
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class AActor*                  InWaterPlaneActor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleFloodingComponent::OnWaterPlaneOverlapBegin(class AActor* InWaterPlaneActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.OnWaterPlaneOverlapBegin"));

	struct
	{
		class AActor*                  InWaterPlaneActor;
	} params;

	params.InWaterPlaneActor = InWaterPlaneActor;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.OnWaterBodyOverlapEnd
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class AWaterBody*              InWaterBodyActor               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleFloodingComponent::OnWaterBodyOverlapEnd(class AWaterBody* InWaterBodyActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.OnWaterBodyOverlapEnd"));

	struct
	{
		class AWaterBody*              InWaterBodyActor;
	} params;

	params.InWaterBodyActor = InWaterBodyActor;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.OnWaterBodyOverlapBegin
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class AWaterBody*              InWaterBodyActor               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleFloodingComponent::OnWaterBodyOverlapBegin(class AWaterBody* InWaterBodyActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.OnWaterBodyOverlapBegin"));

	struct
	{
		class AWaterBody*              InWaterBodyActor;
	} params;

	params.InWaterBodyActor = InWaterBodyActor;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.OnImmerge
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasDefaults)
// Parameters:
// struct FVector                 InWaterLocation                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 InWaterNormal                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleFloodingComponent::OnImmerge(const struct FVector& InWaterLocation, const struct FVector& InWaterNormal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.OnImmerge"));

	struct
	{
		struct FVector                 InWaterLocation;
		struct FVector                 InWaterNormal;
	} params;

	params.InWaterLocation = InWaterLocation;
	params.InWaterNormal = InWaterNormal;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.OnFloodingExit
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCrowVehicleFloodingComponent::OnFloodingExit()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.OnFloodingExit"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.OnFloodingEnter
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCrowVehicleFloodingComponent::OnFloodingEnter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.OnFloodingEnter"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.OnFloodingDepthAndElapsedTime
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// float                          InDepth                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleFloodingComponent::OnFloodingDepthAndElapsedTime(float InDepth, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.OnFloodingDepthAndElapsedTime"));

	struct
	{
		float                          InDepth;
		float                          InDeltaTime;
	} params;

	params.InDepth = InDepth;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.OnDamage
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// float                          InDamage                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleFloodingComponent::OnDamage(float InDamage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.OnDamage"));

	struct
	{
		float                          InDamage;
	} params;

	params.InDamage = InDamage;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.GetBodyVelocity
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UCrowVehicleFloodingComponent::GetBodyVelocity()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.GetBodyVelocity"));

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowVehicles.CrowVehicleFloodingComponent.FadeOutParticle
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UParticleSystemComponent* InParticle                     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleFloodingComponent::FadeOutParticle(float DeltaTime, class UParticleSystemComponent* InParticle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.FadeOutParticle"));

	struct
	{
		float                          DeltaTime;
		class UParticleSystemComponent* InParticle;
	} params;

	params.DeltaTime = DeltaTime;
	params.InParticle = InParticle;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.FadeOutDrivingParticles
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleFloodingComponent::FadeOutDrivingParticles(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.FadeOutDrivingParticles"));

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.DeactivateDrivingParticles
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCrowVehicleFloodingComponent::DeactivateDrivingParticles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.DeactivateDrivingParticles"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.DeactivateBubbleParticle
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCrowVehicleFloodingComponent::DeactivateBubbleParticle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.DeactivateBubbleParticle"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.CreateParticleSystem
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UParticleSystem*         InFxAsset                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   InAttachSocketName             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UParticleSystemComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UParticleSystemComponent* UCrowVehicleFloodingComponent::CreateParticleSystem(class UParticleSystem* InFxAsset, const struct FName& InAttachSocketName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.CreateParticleSystem"));

	struct
	{
		class UParticleSystem*         InFxAsset;
		struct FName                   InAttachSocketName;
		class UParticleSystemComponent* ReturnValue;
	} params;

	params.InFxAsset = InFxAsset;
	params.InAttachSocketName = InAttachSocketName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowVehicles.CrowVehicleFloodingComponent.ClientUpdateParticles
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleFloodingComponent::ClientUpdateParticles(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.ClientUpdateParticles"));

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.ActivateDrivingParticles
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCrowVehicleFloodingComponent::ActivateDrivingParticles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.ActivateDrivingParticles"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleFloodingComponent.ActivateBubbleParticle
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCrowVehicleFloodingComponent::ActivateBubbleParticle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleFloodingComponent.ActivateBubbleParticle"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementBase.SetThrottle
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ThrottleInput                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleMovementBase::SetThrottle(float ThrottleInput)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBase.SetThrottle"));

	struct
	{
		float                          ThrottleInput;
	} params;

	params.ThrottleInput = ThrottleInput;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementBase.SetSteering
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          SteeringInput                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleMovementBase::SetSteering(float SteeringInput)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBase.SetSteering"));

	struct
	{
		float                          SteeringInput;
	} params;

	params.SteeringInput = SteeringInput;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementBase.SetSpringArm
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USpringArmComponent*     InSpringArm                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleMovementBase::SetSpringArm(class USpringArmComponent* InSpringArm)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBase.SetSpringArm"));

	struct
	{
		class USpringArmComponent*     InSpringArm;
	} params;

	params.InSpringArm = InSpringArm;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementBase.SetReadyForDriving
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Ready                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleMovementBase::SetReadyForDriving(bool Ready)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBase.SetReadyForDriving"));

	struct
	{
		bool                           Ready;
	} params;

	params.Ready = Ready;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementBase.SetBlockPhysicsCalculation
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           IsBlocked                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleMovementBase::SetBlockPhysicsCalculation(bool IsBlocked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBase.SetBlockPhysicsCalculation"));

	struct
	{
		bool                           IsBlocked;
	} params;

	params.IsBlocked = IsBlocked;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementBase.ServerShutDown
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCrowVehicleMovementBase::ServerShutDown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBase.ServerShutDown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementBase.ServerFlooding
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCrowVehicleMovementBase::ServerFlooding()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBase.ServerFlooding"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementBase.ServerEngineStart
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCrowVehicleMovementBase::ServerEngineStart()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBase.ServerEngineStart"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementBase.RequestUpdateInput
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// float                          ThrottleInput                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          SteeringInput                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleMovementBase::RequestUpdateInput(float ThrottleInput, float SteeringInput)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBase.RequestUpdateInput"));

	struct
	{
		float                          ThrottleInput;
		float                          SteeringInput;
	} params;

	params.ThrottleInput = ThrottleInput;
	params.SteeringInput = SteeringInput;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementBase.MulticastResetInput
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public, FUNC_NetValidate)

void UCrowVehicleMovementBase::MulticastResetInput()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBase.MulticastResetInput"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementBase.MulticastInput
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public, FUNC_NetValidate)
// Parameters:
// float                          ThrottleInput                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          SteeringInput                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleMovementBase::MulticastInput(float ThrottleInput, float SteeringInput)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBase.MulticastInput"));

	struct
	{
		float                          ThrottleInput;
		float                          SteeringInput;
	} params;

	params.ThrottleInput = ThrottleInput;
	params.SteeringInput = SteeringInput;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementBase.GetStatusText
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UCrowVehicleMovementBase::GetStatusText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBase.GetStatusText"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowVehicles.CrowVehicleMovementBase.BreakBoneConstraint
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Impulse                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleMovementBase::BreakBoneConstraint(const struct FName& BoneName, const struct FVector& Impulse)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBase.BreakBoneConstraint"));

	struct
	{
		struct FName                   BoneName;
		struct FVector                 Impulse;
	} params;

	params.BoneName = BoneName;
	params.Impulse = Impulse;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementBoats.IsInAir
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UCrowVehicleMovementBoats::IsInAir()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBoats.IsInAir"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowVehicles.CrowVehicleMovementBoats.IsIdleSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UCrowVehicleMovementBoats::IsIdleSpeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBoats.IsIdleSpeed"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowVehicles.CrowVehicleMovementBoats.GetLocationOnSurface
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UCrowVehicleMovementBoats::GetLocationOnSurface()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBoats.GetLocationOnSurface"));

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowVehicles.CrowVehicleMovementBoats.GetForwardSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UCrowVehicleMovementBoats::GetForwardSpeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBoats.GetForwardSpeed"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowVehicles.CrowVehicleMovementBoats.GetBodyVelocity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UCrowVehicleMovementBoats::GetBodyVelocity()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBoats.GetBodyVelocity"));

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowVehicles.CrowVehicleMovementBoats.GetBodySpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UCrowVehicleMovementBoats::GetBodySpeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementBoats.GetBodySpeed"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowVehicles.CrowVehicleMovementLandWheels.TestDestroyOneWheel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleMovementLandWheels::TestDestroyOneWheel(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementLandWheels.TestDestroyOneWheel"));

	struct
	{
		int                            WheelIndex;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementLandWheels.SetDrivingForceUpdateEnable
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Enabled                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleMovementLandWheels::SetDrivingForceUpdateEnable(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementLandWheels.SetDrivingForceUpdateEnable"));

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementLandWheels.GetForwardSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UCrowVehicleMovementLandWheels::GetForwardSpeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementLandWheels.GetForwardSpeed"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowVehicles.CrowVehicleMovementLandWheels.GetEngineRotationSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UCrowVehicleMovementLandWheels::GetEngineRotationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementLandWheels.GetEngineRotationSpeed"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowVehicles.CrowVehicleMovementLandWheels.GetCurrentGear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UCrowVehicleMovementLandWheels::GetCurrentGear()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementLandWheels.GetCurrentGear"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowVehicles.CrowVehicleMovementLandWheels.GetBrakeOutput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UCrowVehicleMovementLandWheels::GetBrakeOutput()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementLandWheels.GetBrakeOutput"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowVehicles.CrowVehicleMovementRotor.RequestClientInputRotor
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FCrowRotorInputNetValue InputValues                    (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleMovementRotor::RequestClientInputRotor(const struct FCrowRotorInputNetValue& InputValues)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementRotor.RequestClientInputRotor"));

	struct
	{
		struct FCrowRotorInputNetValue InputValues;
	} params;

	params.InputValues = InputValues;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementRotor.MulticastInputRotor
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected, FUNC_NetValidate)
// Parameters:
// struct FCrowRotorInputNetValue InputValues                    (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleMovementRotor::MulticastInputRotor(const struct FCrowRotorInputNetValue& InputValues)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementRotor.MulticastInputRotor"));

	struct
	{
		struct FCrowRotorInputNetValue InputValues;
	} params;

	params.InputValues = InputValues;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleMovementRotor.MulticastEngineChanged
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Protected, FUNC_NetValidate)
// Parameters:
// bool                           IsStart                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCrowVehicleMovementRotor::MulticastEngineChanged(bool IsStart)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleMovementRotor.MulticastEngineChanged"));

	struct
	{
		bool                           IsStart;
	} params;

	params.IsStart = IsStart;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowVehicles.CrowVehicleSettings.Get
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UCrowVehicleSettings*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCrowVehicleSettings* UCrowVehicleSettings::Get()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowVehicles.CrowVehicleSettings.Get"));

	struct
	{
		class UCrowVehicleSettings*    ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
