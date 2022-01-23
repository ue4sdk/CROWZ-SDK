// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_CrowLocomotionSystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrowLocomotionSystem.CLSCharacter.Walk
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ACLSCharacter::Walk()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Walk"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.VaultUpdate
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// float                          BlendIn                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::VaultUpdate(float BlendIn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.VaultUpdate"));

	struct
	{
		float                          BlendIn;
	} params;

	params.BlendIn = BlendIn;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.VaultStart
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasOutParms)
// Parameters:
// float                          VaultHeight                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          VaultEndHeight                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSComponentTransform  VaultLedgeWS                   (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// ECLSVaultType                  VaultType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::VaultStart(float VaultHeight, float VaultEndHeight, ECLSVaultType VaultType, struct FCLSComponentTransform* VaultLedgeWS)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.VaultStart"));

	struct
	{
		float                          VaultHeight;
		float                          VaultEndHeight;
		struct FCLSComponentTransform  VaultLedgeWS;
		ECLSVaultType                  VaultType;
	} params;

	params.VaultHeight = VaultHeight;
	params.VaultEndHeight = VaultEndHeight;
	params.VaultType = VaultType;

	UObject::ProcessEvent(fn, &params);

	if (VaultLedgeWS != nullptr)
		*VaultLedgeWS = params.VaultLedgeWS;
}


// Function CrowLocomotionSystem.CLSCharacter.VaultIsCheckJumpOver
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FCLSVaultTraceSettings  TraceSettings                  (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              JumpHitResult                  (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TraceStart                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsWindow                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ACLSCharacter::VaultIsCheckJumpOver(const struct FCLSVaultTraceSettings& TraceSettings, const struct FVector& TraceStart, bool IsWindow, struct FHitResult* JumpHitResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.VaultIsCheckJumpOver"));

	struct
	{
		struct FCLSVaultTraceSettings  TraceSettings;
		struct FHitResult              JumpHitResult;
		struct FVector                 TraceStart;
		bool                           IsWindow;
		bool                           ReturnValue;
	} params;

	params.TraceSettings = TraceSettings;
	params.TraceStart = TraceStart;
	params.IsWindow = IsWindow;

	UObject::ProcessEvent(fn, &params);

	if (JumpHitResult != nullptr)
		*JumpHitResult = params.JumpHitResult;

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacter.VaultEnd
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ACLSCharacter::VaultEnd()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.VaultEnd"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.VaultCheckWall
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FVector                 FeetLocation                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSVaultTraceSettings  TraceSettings                  (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ETraceTypeQuery>   TraceType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ImpectPoint                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ImpectNormal                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TraceNormal                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 WindowFloor                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsWindow                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ACLSCharacter::VaultCheckWall(const struct FVector& FeetLocation, const struct FCLSVaultTraceSettings& TraceSettings, TEnumAsByte<ETraceTypeQuery> TraceType, struct FVector* ImpectPoint, struct FVector* ImpectNormal, struct FVector* TraceNormal, struct FVector* WindowFloor, bool* IsWindow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.VaultCheckWall"));

	struct
	{
		struct FVector                 FeetLocation;
		struct FCLSVaultTraceSettings  TraceSettings;
		TEnumAsByte<ETraceTypeQuery>   TraceType;
		struct FVector                 ImpectPoint;
		struct FVector                 ImpectNormal;
		struct FVector                 TraceNormal;
		struct FVector                 WindowFloor;
		bool                           IsWindow;
		bool                           ReturnValue;
	} params;

	params.FeetLocation = FeetLocation;
	params.TraceSettings = TraceSettings;
	params.TraceType = TraceType;

	UObject::ProcessEvent(fn, &params);

	if (ImpectPoint != nullptr)
		*ImpectPoint = params.ImpectPoint;
	if (ImpectNormal != nullptr)
		*ImpectNormal = params.ImpectNormal;
	if (TraceNormal != nullptr)
		*TraceNormal = params.TraceNormal;
	if (WindowFloor != nullptr)
		*WindowFloor = params.WindowFloor;
	if (IsWindow != nullptr)
		*IsWindow = params.IsWindow;

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacter.VaultCheckGround
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ACLSCharacter::VaultCheckGround()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.VaultCheckGround"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacter.VaultCheckFalling
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ACLSCharacter::VaultCheckFalling()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.VaultCheckFalling"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacter.VaultCheck
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// struct FCLSVaultTraceSettings  TraceSettings                  (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ACLSCharacter::VaultCheck(const struct FCLSVaultTraceSettings& TraceSettings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.VaultCheck"));

	struct
	{
		struct FCLSVaultTraceSettings  TraceSettings;
		bool                           ReturnValue;
	} params;

	params.TraceSettings = TraceSettings;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacter.UnRagdoll
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bUseNetworking                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::UnRagdoll(bool bUseNetworking)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.UnRagdoll"));

	struct
	{
		bool                           bUseNetworking;
	} params;

	params.bUseNetworking = bUseNetworking;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.ToRagdoll
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bUseNetworking                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::ToRagdoll(bool bUseNetworking)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.ToRagdoll"));

	struct
	{
		bool                           bUseNetworking;
	} params;

	params.bUseNetworking = bUseNetworking;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.SwimUp
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ACLSCharacter::SwimUp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.SwimUp"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.SwimDown
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ACLSCharacter::SwimDown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.SwimDown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Stand
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ACLSCharacter::Stand()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Stand"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Sprint
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ACLSCharacter::Sprint()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Sprint"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.SetWeaponObject
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WeaponObject                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::SetWeaponObject(class UObject* WeaponObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.SetWeaponObject"));

	struct
	{
		class UObject*                 WeaponObject;
	} params;

	params.WeaponObject = WeaponObject;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.SetVehicleObject
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 VehicleObject                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::SetVehicleObject(class UObject* VehicleObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.SetVehicleObject"));

	struct
	{
		class UObject*                 VehicleObject;
	} params;

	params.VehicleObject = VehicleObject;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.SetRotationMode
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// ECLSRotationMode               NewRotationMode                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::SetRotationMode(ECLSRotationMode NewRotationMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.SetRotationMode"));

	struct
	{
		ECLSRotationMode               NewRotationMode;
	} params;

	params.NewRotationMode = NewRotationMode;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.SetRightShoulder
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// bool                           NewRightShoulder               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::SetRightShoulder(bool NewRightShoulder)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.SetRightShoulder"));

	struct
	{
		bool                           NewRightShoulder;
	} params;

	params.NewRightShoulder = NewRightShoulder;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.SetPressedSprintState
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           IsPressed                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::SetPressedSprintState(bool IsPressed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.SetPressedSprintState"));

	struct
	{
		bool                           IsPressed;
	} params;

	params.IsPressed = IsPressed;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.SetLadderState
// (FUNC_Native, FUNC_Protected)
// Parameters:
// ECLSLadderState                NewLadderState                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::SetLadderState(ECLSLadderState NewLadderState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.SetLadderState"));

	struct
	{
		ECLSLadderState                NewLadderState;
	} params;

	params.NewLadderState = NewLadderState;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.SetBattleStance
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// ECLSBattleStance               NewBattleStance                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::SetBattleStance(ECLSBattleStance NewBattleStance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.SetBattleStance"));

	struct
	{
		ECLSBattleStance               NewBattleStance;
	} params;

	params.NewBattleStance = NewBattleStance;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_VaultStart
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// float                          VaultHeight                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          VaultEndHeight                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSComponentTransform  VaultLedgeWS                   (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// ECLSVaultType                  VaultType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_VaultStart(float VaultHeight, float VaultEndHeight, const struct FCLSComponentTransform& VaultLedgeWS, ECLSVaultType VaultType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_VaultStart"));

	struct
	{
		float                          VaultHeight;
		float                          VaultEndHeight;
		struct FCLSComponentTransform  VaultLedgeWS;
		ECLSVaultType                  VaultType;
	} params;

	params.VaultHeight = VaultHeight;
	params.VaultEndHeight = VaultEndHeight;
	params.VaultLedgeWS = VaultLedgeWS;
	params.VaultType = VaultType;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_UpdateRagdoll
// (FUNC_Final, FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_HasDefaults, FUNC_NetValidate)
// Parameters:
// struct FVector                 NewVelocity                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 NewRagdollLocation             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 NewActorLocation               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                NewActorRotation               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_UpdateRagdoll(const struct FVector& NewVelocity, const struct FVector& NewRagdollLocation, const struct FVector& NewActorLocation, const struct FRotator& NewActorRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_UpdateRagdoll"));

	struct
	{
		struct FVector                 NewVelocity;
		struct FVector                 NewRagdollLocation;
		struct FVector                 NewActorLocation;
		struct FRotator                NewActorRotation;
	} params;

	params.NewVelocity = NewVelocity;
	params.NewRagdollLocation = NewRagdollLocation;
	params.NewActorLocation = NewActorLocation;
	params.NewActorRotation = NewActorRotation;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_UnRagdoll
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bOnGround                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_UnRagdoll(bool bOnGround)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_UnRagdoll"));

	struct
	{
		bool                           bOnGround;
	} params;

	params.bOnGround = bOnGround;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_ToRagdoll
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)

void ACLSCharacter::Server_ToRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_ToRagdoll"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_StopAnimNetworked
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FCLSAnimation           AnimToStop                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          BlendOut                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_StopAnimNetworked(const struct FCLSAnimation& AnimToStop, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_StopAnimNetworked"));

	struct
	{
		struct FCLSAnimation           AnimToStop;
		float                          BlendOut;
	} params;

	params.AnimToStop = AnimToStop;
	params.BlendOut = BlendOut;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_StopAnimGroupNetworked
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// ECLSAnimationGroup             GroupType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          BlendOut                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_StopAnimGroupNetworked(ECLSAnimationGroup GroupType, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_StopAnimGroupNetworked"));

	struct
	{
		ECLSAnimationGroup             GroupType;
		float                          BlendOut;
	} params;

	params.GroupType = GroupType;
	params.BlendOut = BlendOut;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_SetTurnTargetRotation
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_HasDefaults, FUNC_NetValidate)
// Parameters:
// struct FRotator                NewRotation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_SetTurnTargetRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_SetTurnTargetRotation"));

	struct
	{
		struct FRotator                NewRotation;
	} params;

	params.NewRotation = NewRotation;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_SetSmoothTargetRotation
// (FUNC_Final, FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_HasDefaults, FUNC_NetValidate)
// Parameters:
// struct FRotator                NewRotation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_SetSmoothTargetRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_SetSmoothTargetRotation"));

	struct
	{
		struct FRotator                NewRotation;
	} params;

	params.NewRotation = NewRotation;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_SetRotationMode
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// ECLSRotationMode               NewRotationMode                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_SetRotationMode(ECLSRotationMode NewRotationMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_SetRotationMode"));

	struct
	{
		ECLSRotationMode               NewRotationMode;
	} params;

	params.NewRotationMode = NewRotationMode;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_SetRightShoulder
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           InRightShoulder                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_SetRightShoulder(bool InRightShoulder)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_SetRightShoulder"));

	struct
	{
		bool                           InRightShoulder;
	} params;

	params.InRightShoulder = InRightShoulder;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_SetLookingRotation
// (FUNC_Final, FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_HasDefaults, FUNC_NetValidate)
// Parameters:
// struct FRotator                NewRotation                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_SetLookingRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_SetLookingRotation"));

	struct
	{
		struct FRotator                NewRotation;
	} params;

	params.NewRotation = NewRotation;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_SetLookAroundRotation
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_HasDefaults, FUNC_NetValidate)
// Parameters:
// struct FRotator                NewRotation                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_SetLookAroundRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_SetLookAroundRotation"));

	struct
	{
		struct FRotator                NewRotation;
	} params;

	params.NewRotation = NewRotation;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_SetLookAround
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           InLookAround                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_SetLookAround(bool InLookAround)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_SetLookAround"));

	struct
	{
		bool                           InLookAround;
	} params;

	params.InLookAround = InLookAround;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_SetLadderState
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// ECLSLadderState                NewLadderState                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_SetLadderState(ECLSLadderState NewLadderState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_SetLadderState"));

	struct
	{
		ECLSLadderState                NewLadderState;
	} params;

	params.NewLadderState = NewLadderState;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_SetLadder
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class AActor*                  NewLadder                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_SetLadder(class AActor* NewLadder)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_SetLadder"));

	struct
	{
		class AActor*                  NewLadder;
	} params;

	params.NewLadder = NewLadder;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_SetDesiredPeekState
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// ECLSPeekState                  NewPeekState                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_SetDesiredPeekState(ECLSPeekState NewPeekState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_SetDesiredPeekState"));

	struct
	{
		ECLSPeekState                  NewPeekState;
	} params;

	params.NewPeekState = NewPeekState;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_SetDesiredFiringState
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// bool                           bFiring                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_SetDesiredFiringState(bool bFiring)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_SetDesiredFiringState"));

	struct
	{
		bool                           bFiring;
	} params;

	params.bFiring = bFiring;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_SetBattleStance
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// ECLSBattleStance               NewBattleStance                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_SetBattleStance(ECLSBattleStance NewBattleStance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_SetBattleStance"));

	struct
	{
		ECLSBattleStance               NewBattleStance;
	} params;

	params.NewBattleStance = NewBattleStance;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_ResetRotation
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_HasDefaults, FUNC_NetValidate)
// Parameters:
// struct FRotator                NewRotation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_ResetRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_ResetRotation"));

	struct
	{
		struct FRotator                NewRotation;
	} params;

	params.NewRotation = NewRotation;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_PlayAnimNetworked
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FCLSAnimation           Animation                      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          PlayRate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          StartPosition                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bStopMontages                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_PlayAnimNetworked(const struct FCLSAnimation& Animation, const struct FName& SectionName, float PlayRate, float StartPosition, bool bStopMontages)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_PlayAnimNetworked"));

	struct
	{
		struct FCLSAnimation           Animation;
		struct FName                   SectionName;
		float                          PlayRate;
		float                          StartPosition;
		bool                           bStopMontages;
	} params;

	params.Animation = Animation;
	params.SectionName = SectionName;
	params.PlayRate = PlayRate;
	params.StartPosition = StartPosition;
	params.bStopMontages = bStopMontages;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_MontangeSetNextSection
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FName                   SectionNameToChange            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   NextSection                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSAnimation           Animation                      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_MontangeSetNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, const struct FCLSAnimation& Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_MontangeSetNextSection"));

	struct
	{
		struct FName                   SectionNameToChange;
		struct FName                   NextSection;
		struct FCLSAnimation           Animation;
	} params;

	params.SectionNameToChange = SectionNameToChange;
	params.NextSection = NextSection;
	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_LadderTopEntry
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class AActor*                  NewLader                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Server_LadderTopEntry(class AActor* NewLader)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_LadderTopEntry"));

	struct
	{
		class AActor*                  NewLader;
	} params;

	params.NewLader = NewLader;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Server_ClearLadder
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetServer, FUNC_NetValidate)

void ACLSCharacter::Server_ClearLadder()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Server_ClearLadder"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Run
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ACLSCharacter::Run()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Run"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.RequestLadderTopEntry
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class AActor*                  EntryTarget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::RequestLadderTopEntry(class AActor* EntryTarget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.RequestLadderTopEntry"));

	struct
	{
		class AActor*                  EntryTarget;
	} params;

	params.EntryTarget = EntryTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Prone
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ACLSCharacter::Prone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Prone"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.PeekStop
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ACLSCharacter::PeekStop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.PeekStop"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.PeekRight
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Flag                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::PeekRight(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.PeekRight"));

	struct
	{
		bool                           Flag;
	} params;

	params.Flag = Flag;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.PeekLeft
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Flag                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::PeekLeft(bool Flag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.PeekLeft"));

	struct
	{
		bool                           Flag;
	} params;

	params.Flag = Flag;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.OnRep_SetRotationMode
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ACLSCharacter::OnRep_SetRotationMode()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.OnRep_SetRotationMode"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.OnRep_SetRightShoulder
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ACLSCharacter::OnRep_SetRightShoulder()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.OnRep_SetRightShoulder"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.OnRep_SetLookingRotation
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ACLSCharacter::OnRep_SetLookingRotation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.OnRep_SetLookingRotation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.OnRep_SetBattleStance
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ACLSCharacter::OnRep_SetBattleStance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.OnRep_SetBattleStance"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.OnRep_IsWalk
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ACLSCharacter::OnRep_IsWalk()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.OnRep_IsWalk"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.OnRep_IsSprint
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ACLSCharacter::OnRep_IsSprint()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.OnRep_IsSprint"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.OnRep_IsProned
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ACLSCharacter::OnRep_IsProned()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.OnRep_IsProned"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.OnRep_IsLookFocus
// (FUNC_Native, FUNC_Public)

void ACLSCharacter::OnRep_IsLookFocus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.OnRep_IsLookFocus"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Multicast_VaultStart
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private, FUNC_NetValidate)
// Parameters:
// float                          VaultHeight                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          VaultEndHeight                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSComponentTransform  VaultLedgeWS                   (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// ECLSVaultType                  VaultType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Multicast_VaultStart(float VaultHeight, float VaultEndHeight, const struct FCLSComponentTransform& VaultLedgeWS, ECLSVaultType VaultType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Multicast_VaultStart"));

	struct
	{
		float                          VaultHeight;
		float                          VaultEndHeight;
		struct FCLSComponentTransform  VaultLedgeWS;
		ECLSVaultType                  VaultType;
	} params;

	params.VaultHeight = VaultHeight;
	params.VaultEndHeight = VaultEndHeight;
	params.VaultLedgeWS = VaultLedgeWS;
	params.VaultType = VaultType;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Multicast_UpdateRagdoll
// (FUNC_Final, FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private, FUNC_HasDefaults, FUNC_NetValidate)
// Parameters:
// struct FVector                 NewLocation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                NewRotation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Multicast_UpdateRagdoll(const struct FVector& NewLocation, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Multicast_UpdateRagdoll"));

	struct
	{
		struct FVector                 NewLocation;
		struct FRotator                NewRotation;
	} params;

	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Multicast_UnRagdoll
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private, FUNC_NetValidate)
// Parameters:
// bool                           bOnGround                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Multicast_UnRagdoll(bool bOnGround)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Multicast_UnRagdoll"));

	struct
	{
		bool                           bOnGround;
	} params;

	params.bOnGround = bOnGround;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Multicast_ToRagdoll
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private, FUNC_NetValidate)

void ACLSCharacter::Multicast_ToRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Multicast_ToRagdoll"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Multicast_StopAnimNetworked
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private, FUNC_NetValidate)
// Parameters:
// struct FCLSAnimation           AnimToStop                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          BlendOut                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Multicast_StopAnimNetworked(const struct FCLSAnimation& AnimToStop, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Multicast_StopAnimNetworked"));

	struct
	{
		struct FCLSAnimation           AnimToStop;
		float                          BlendOut;
	} params;

	params.AnimToStop = AnimToStop;
	params.BlendOut = BlendOut;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Multicast_StopAnimGroupNetworked
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private, FUNC_NetValidate)
// Parameters:
// ECLSAnimationGroup             GroupType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          BlendOut                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Multicast_StopAnimGroupNetworked(ECLSAnimationGroup GroupType, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Multicast_StopAnimGroupNetworked"));

	struct
	{
		ECLSAnimationGroup             GroupType;
		float                          BlendOut;
	} params;

	params.GroupType = GroupType;
	params.BlendOut = BlendOut;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Multicast_SetTurnTargetRotation
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private, FUNC_HasDefaults, FUNC_NetValidate)
// Parameters:
// struct FRotator                NewRotation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Multicast_SetTurnTargetRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Multicast_SetTurnTargetRotation"));

	struct
	{
		struct FRotator                NewRotation;
	} params;

	params.NewRotation = NewRotation;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Multicast_SetLadderState
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private, FUNC_NetValidate)
// Parameters:
// ECLSLadderState                NewLadderState                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Multicast_SetLadderState(ECLSLadderState NewLadderState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Multicast_SetLadderState"));

	struct
	{
		ECLSLadderState                NewLadderState;
	} params;

	params.NewLadderState = NewLadderState;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Multicast_SetLadder
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private, FUNC_NetValidate)
// Parameters:
// class AActor*                  NewLadder                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Multicast_SetLadder(class AActor* NewLadder)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Multicast_SetLadder"));

	struct
	{
		class AActor*                  NewLadder;
	} params;

	params.NewLadder = NewLadder;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Multicast_ResetRotation
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private, FUNC_HasDefaults, FUNC_NetValidate)
// Parameters:
// struct FRotator                NewRotation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Multicast_ResetRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Multicast_ResetRotation"));

	struct
	{
		struct FRotator                NewRotation;
	} params;

	params.NewRotation = NewRotation;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Multicast_PlayAnimNetworked
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private, FUNC_NetValidate)
// Parameters:
// struct FCLSAnimation           Animation                      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          PlayRate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          StartPosition                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bStopMontages                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Multicast_PlayAnimNetworked(const struct FCLSAnimation& Animation, const struct FName& SectionName, float PlayRate, float StartPosition, bool bStopMontages)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Multicast_PlayAnimNetworked"));

	struct
	{
		struct FCLSAnimation           Animation;
		struct FName                   SectionName;
		float                          PlayRate;
		float                          StartPosition;
		bool                           bStopMontages;
	} params;

	params.Animation = Animation;
	params.SectionName = SectionName;
	params.PlayRate = PlayRate;
	params.StartPosition = StartPosition;
	params.bStopMontages = bStopMontages;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Multicast_MontageSetNextSection
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private, FUNC_NetValidate)
// Parameters:
// struct FName                   SectionNameToChange            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   NextSection                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSAnimation           Animation                      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Multicast_MontageSetNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, const struct FCLSAnimation& Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Multicast_MontageSetNextSection"));

	struct
	{
		struct FName                   SectionNameToChange;
		struct FName                   NextSection;
		struct FCLSAnimation           Animation;
	} params;

	params.SectionNameToChange = SectionNameToChange;
	params.NextSection = NextSection;
	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Multicast_LadderTopEntry
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private, FUNC_NetValidate)
// Parameters:
// class AActor*                  NewLadder                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::Multicast_LadderTopEntry(class AActor* NewLadder)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Multicast_LadderTopEntry"));

	struct
	{
		class AActor*                  NewLadder;
	} params;

	params.NewLadder = NewLadder;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Multicast_ClearLadder
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Private, FUNC_NetValidate)

void ACLSCharacter::Multicast_ClearLadder()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Multicast_ClearLadder"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.MoveUp
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          AxisValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::MoveUp(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.MoveUp"));

	struct
	{
		float                          AxisValue;
	} params;

	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.MoveRight
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          AxisValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::MoveRight(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.MoveRight"));

	struct
	{
		float                          AxisValue;
	} params;

	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.MoveForward
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          AxisValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::MoveForward(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.MoveForward"));

	struct
	{
		float                          AxisValue;
	} params;

	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.LookUp
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          AxisValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::LookUp(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.LookUp"));

	struct
	{
		float                          AxisValue;
	} params;

	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.LookRight
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          AxisValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::LookRight(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.LookRight"));

	struct
	{
		float                          AxisValue;
	} params;

	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.LookFocus
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::LookFocus(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.LookFocus"));

	struct
	{
		bool                           Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Latent_SmoothRotateOnProne
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ACLSCharacter::Latent_SmoothRotateOnProne()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Latent_SmoothRotateOnProne"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Latent_SetKeepWalking
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ACLSCharacter::Latent_SetKeepWalking()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Latent_SetKeepWalking"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Latent_SetBattleStanceRelaxed
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ACLSCharacter::Latent_SetBattleStanceRelaxed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Latent_SetBattleStanceRelaxed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Latent_SetBattleStanceReady
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ACLSCharacter::Latent_SetBattleStanceReady()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Latent_SetBattleStanceReady"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Latent_PendingGroundRotate
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ACLSCharacter::Latent_PendingGroundRotate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Latent_PendingGroundRotate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.Latent_OnLanded
// (FUNC_Final, FUNC_Native, FUNC_Private)

void ACLSCharacter::Latent_OnLanded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.Latent_OnLanded"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.K2_OnWeaponActionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ECLSWeaponAction               PrevWeaponAction               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::K2_OnWeaponActionChanged(ECLSWeaponAction PrevWeaponAction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.K2_OnWeaponActionChanged"));

	struct
	{
		ECLSWeaponAction               PrevWeaponAction;
	} params;

	params.PrevWeaponAction = PrevWeaponAction;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.K2_OnMovementActionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ECLSMovementAction             PrevMovementAction             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::K2_OnMovementActionChanged(ECLSMovementAction PrevMovementAction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.K2_OnMovementActionChanged"));

	struct
	{
		ECLSMovementAction             PrevMovementAction;
	} params;

	params.PrevMovementAction = PrevMovementAction;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.K2_OnCommonActionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ECLSCommonAction               PrevCommonAction               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::K2_OnCommonActionChanged(ECLSCommonAction PrevCommonAction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.K2_OnCommonActionChanged"));

	struct
	{
		ECLSCommonAction               PrevCommonAction;
	} params;

	params.PrevCommonAction = PrevCommonAction;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacter.K2_IsHoldingBreath
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool ACLSCharacter::K2_IsHoldingBreath()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.K2_IsHoldingBreath"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacter.K2_GetVehiclePoseHandle
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 TargetObject                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FDataTableRowHandle     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FDataTableRowHandle ACLSCharacter::K2_GetVehiclePoseHandle(class UObject* TargetObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.K2_GetVehiclePoseHandle"));

	struct
	{
		class UObject*                 TargetObject;
		struct FDataTableRowHandle     ReturnValue;
	} params;

	params.TargetObject = TargetObject;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacter.K2_GetGroundPoseHandle
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 TargetObject                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FDataTableRowHandle     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FDataTableRowHandle ACLSCharacter::K2_GetGroundPoseHandle(class UObject* TargetObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.K2_GetGroundPoseHandle"));

	struct
	{
		class UObject*                 TargetObject;
		struct FDataTableRowHandle     ReturnValue;
	} params;

	params.TargetObject = TargetObject;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacter.K2_GetGripPoseHandle
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 TargetObject                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FDataTableRowHandle     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FDataTableRowHandle ACLSCharacter::K2_GetGripPoseHandle(class UObject* TargetObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.K2_GetGripPoseHandle"));

	struct
	{
		class UObject*                 TargetObject;
		struct FDataTableRowHandle     ReturnValue;
	} params;

	params.TargetObject = TargetObject;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacter.K2_GetCommonAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FName                   MainName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   SubName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseRandom                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSAnimation           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FCLSAnimation ACLSCharacter::K2_GetCommonAnimation(const struct FName& MainName, const struct FName& SubName, bool bUseRandom, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.K2_GetCommonAnimation"));

	struct
	{
		struct FName                   MainName;
		struct FName                   SubName;
		bool                           bUseRandom;
		int                            Index;
		struct FCLSAnimation           ReturnValue;
	} params;

	params.MainName = MainName;
	params.SubName = SubName;
	params.bUseRandom = bUseRandom;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacter.K2_GetCameraFP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UCameraComponent*        ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCameraComponent* ACLSCharacter::K2_GetCameraFP()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.K2_GetCameraFP"));

	struct
	{
		class UCameraComponent*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacter.K2_GetAdditionalStates
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FCLSCharacterAdditional ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FCLSCharacterAdditional ACLSCharacter::K2_GetAdditionalStates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.K2_GetAdditionalStates"));

	struct
	{
		struct FCLSCharacterAdditional ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacter.GetVaultFeetLoaction
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// struct FVector                 FeetLocation                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector ACLSCharacter::GetVaultFeetLoaction(const struct FVector& FeetLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.GetVaultFeetLoaction"));

	struct
	{
		struct FVector                 FeetLocation;
		struct FVector                 ReturnValue;
	} params;

	params.FeetLocation = FeetLocation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacter.FiringState
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bFiring                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ACLSCharacter::FiringState(bool bFiring)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacter.FiringState"));

	struct
	{
		bool                           bFiring;
	} params;

	params.bFiring = bFiring;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.TraceVerticalOffset
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   SocketName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 InOutOffset                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OutNormal                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          OriginalHeight                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCLSCharacterAnimInstance::TraceVerticalOffset(const struct FName& SocketName, float OriginalHeight, struct FVector* InOutOffset, struct FVector* OutNormal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.TraceVerticalOffset"));

	struct
	{
		struct FName                   SocketName;
		struct FVector                 InOutOffset;
		struct FVector                 OutNormal;
		float                          OriginalHeight;
	} params;

	params.SocketName = SocketName;
	params.OriginalHeight = OriginalHeight;

	UObject::ProcessEvent(fn, &params);

	if (InOutOffset != nullptr)
		*InOutOffset = params.InOutOffset;
	if (OutNormal != nullptr)
		*OutNormal = params.OutNormal;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.Latent_StopLookAndIK
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::Latent_StopLookAndIK()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.Latent_StopLookAndIK"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.Latent_StopFootLock
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::Latent_StopFootLock()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.Latent_StopFootLock"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.Latent_OnPlayDynamicTransition
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::Latent_OnPlayDynamicTransition()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.Latent_OnPlayDynamicTransition"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.Latent_OnJumped
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::Latent_OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.Latent_OnJumped"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.Latent_OnAnimNotifyPivot
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::Latent_OnAnimNotifyPivot()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.Latent_OnAnimNotifyPivot"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsSwimMoving
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          MinOnSurface                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MinOnUnderWater                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UCLSCharacterAnimInstance::IsSwimMoving(float MinOnSurface, float MinOnUnderWater)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsSwimMoving"));

	struct
	{
		float                          MinOnSurface;
		float                          MinOnUnderWater;
		bool                           ReturnValue;
	} params;

	params.MinOnSurface = MinOnSurface;
	params.MinOnUnderWater = MinOnUnderWater;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsOwnFPCamActive
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UCLSCharacterAnimInstance::IsOwnFPCamActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsOwnFPCamActive"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsEqualOrMoreBattleStance
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// ECLSBattleStance               CheckStance                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UCLSCharacterAnimInstance::IsEqualOrMoreBattleStance(ECLSBattleStance CheckStance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsEqualOrMoreBattleStance"));

	struct
	{
		ECLSBattleStance               CheckStance;
		bool                           ReturnValue;
	} params;

	params.CheckStance = CheckStance;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsEqualOrLessBattleStance
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// ECLSBattleStance               CheckStance                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UCLSCharacterAnimInstance::IsEqualOrLessBattleStance(ECLSBattleStance CheckStance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsEqualOrLessBattleStance"));

	struct
	{
		ECLSBattleStance               CheckStance;
		bool                           ReturnValue;
	} params;

	params.CheckStance = CheckStance;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsEqualBattleStance
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// ECLSBattleStance               CheckStance                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UCLSCharacterAnimInstance::IsEqualBattleStance(ECLSBattleStance CheckStance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsEqualBattleStance"));

	struct
	{
		ECLSBattleStance               CheckStance;
		bool                           ReturnValue;
	} params;

	params.CheckStance = CheckStance;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsAimThrowableMelee
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UCLSCharacterAnimInstance::IsAimThrowableMelee()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsAimThrowableMelee"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsAimSecondarySight
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UCLSCharacterAnimInstance::IsAimSecondarySight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsAimSecondarySight"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.InterpOffset
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 InCurrent                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 InTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InterpSpeed                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UCLSCharacterAnimInstance::InterpOffset(const struct FVector& InCurrent, const struct FVector& InTarget, float DeltaSeconds, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.InterpOffset"));

	struct
	{
		struct FVector                 InCurrent;
		struct FVector                 InTarget;
		float                          DeltaSeconds;
		float                          InterpSpeed;
		struct FVector                 ReturnValue;
	} params;

	params.InCurrent = InCurrent;
	params.InTarget = InTarget;
	params.DeltaSeconds = DeltaSeconds;
	params.InterpSpeed = InterpSpeed;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetSwimDirection
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          MinOnSurface                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MinOnUnderWater                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UCLSCharacterAnimInstance::GetSwimDirection(float MinOnSurface, float MinOnUnderWater)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetSwimDirection"));

	struct
	{
		float                          MinOnSurface;
		float                          MinOnUnderWater;
		float                          ReturnValue;
	} params;

	params.MinOnSurface = MinOnSurface;
	params.MinOnUnderWater = MinOnUnderWater;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetSecondaryMotionAlpha
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          InAlpha                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UCLSCharacterAnimInstance::GetSecondaryMotionAlpha(float InAlpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetSecondaryMotionAlpha"));

	struct
	{
		float                          InAlpha;
		float                          ReturnValue;
	} params;

	params.InAlpha = InAlpha;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetLadderAnimSet
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FCLSLadderAnimSet       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FCLSLadderAnimSet UCLSCharacterAnimInstance::GetLadderAnimSet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetLadderAnimSet"));

	struct
	{
		struct FCLSLadderAnimSet       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetExplicitVehicle
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bIsBattle                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSPoseExplicit        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FCLSPoseExplicit UCLSCharacterAnimInstance::GetExplicitVehicle(bool bIsBattle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetExplicitVehicle"));

	struct
	{
		bool                           bIsBattle;
		struct FCLSPoseExplicit        ReturnValue;
	} params;

	params.bIsBattle = bIsBattle;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetExplicitGround
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// ECLSBasePoseType               PoseType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSPoseExplicit        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FCLSPoseExplicit UCLSCharacterAnimInstance::GetExplicitGround(ECLSBasePoseType PoseType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetExplicitGround"));

	struct
	{
		ECLSBasePoseType               PoseType;
		struct FCLSPoseExplicit        ReturnValue;
	} params;

	params.PoseType = PoseType;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetDriverAO
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UBlendSpaceBase*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UBlendSpaceBase* UCLSCharacterAnimInstance::GetDriverAO()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetDriverAO"));

	struct
	{
		class UBlendSpaceBase*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetAimOffsetVehicle
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bIsBattle                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UBlendSpaceBase*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UBlendSpaceBase* UCLSCharacterAnimInstance::GetAimOffsetVehicle(bool bIsBattle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetAimOffsetVehicle"));

	struct
	{
		bool                           bIsBattle;
		class UBlendSpaceBase*         ReturnValue;
	} params;

	params.bIsBattle = bIsBattle;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetAimOffsetStand
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UBlendSpaceBase*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UBlendSpaceBase* UCLSCharacterAnimInstance::GetAimOffsetStand()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetAimOffsetStand"));

	struct
	{
		class UBlendSpaceBase*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetAimOffsetProne
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UBlendSpaceBase*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UBlendSpaceBase* UCLSCharacterAnimInstance::GetAimOffsetProne()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetAimOffsetProne"));

	struct
	{
		class UBlendSpaceBase*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetAimOffsetAngle
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D UCLSCharacterAnimInstance::GetAimOffsetAngle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetAimOffsetAngle"));

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_StopTransition
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_StopTransition()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_StopTransition"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_StandStopR
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_StandStopR()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_StandStopR"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_StandStopL
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_StandStopL()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_StandStopL"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_StandQuickStop
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_StandQuickStop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_StandQuickStop"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_RollToIdle
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_RollToIdle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_RollToIdle"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_ResetGroundedEntryState
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_ResetGroundedEntryState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_ResetGroundedEntryState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_RelaxedToReady
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_RelaxedToReady()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_RelaxedToReady"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_Pivot
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_Pivot()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_Pivot"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_Pistol2HRelaxedToReady
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_Pistol2HRelaxedToReady()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_Pistol2HRelaxedToReady"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_Pistol2HReadyToRelaxed
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_Pistol2HReadyToRelaxed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_Pistol2HReadyToRelaxed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_Pistol1HRelaxedToReady
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_Pistol1HRelaxedToReady()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_Pistol1HRelaxedToReady"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_Pistol1HReadyToRelaxed
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_Pistol1HReadyToRelaxed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_Pistol1HReadyToRelaxed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_M4A1RelaxedToReady
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_M4A1RelaxedToReady()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_M4A1RelaxedToReady"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_M4A1ReadyToRelaxed
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_M4A1ReadyToRelaxed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_M4A1ReadyToRelaxed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_LandToIdle
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_LandToIdle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_LandToIdle"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsRF
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_HipsRF()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsRF"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsRB
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_HipsRB()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsRB"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsLF
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_HipsLF()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsLF"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsLB
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_HipsLB()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsLB"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsF
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_HipsF()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsF"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsB
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_HipsB()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsB"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_CrouchStop
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_CrouchStop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_CrouchStop"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_BowRelaxedToReady
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_BowRelaxedToReady()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_BowRelaxedToReady"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_BowReadyToRelaxed
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_BowReadyToRelaxed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_BowReadyToRelaxed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_BlendOutNoOffset
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_BlendOutNoOffset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_BlendOutNoOffset"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_BlendInNoOffset
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNotify_BlendInNoOffset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_BlendInNoOffset"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNoitfy_ReadyToRelaxed
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UCLSCharacterAnimInstance::AnimNoitfy_ReadyToRelaxed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNoitfy_ReadyToRelaxed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterMovement.OnWaterPlaneOverlapEnd
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AActor*                  InWaterPlaneActor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCLSCharacterMovement::OnWaterPlaneOverlapEnd(class AActor* InWaterPlaneActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterMovement.OnWaterPlaneOverlapEnd"));

	struct
	{
		class AActor*                  InWaterPlaneActor;
	} params;

	params.InWaterPlaneActor = InWaterPlaneActor;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterMovement.OnWaterPlaneOverlapBegin
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AActor*                  InWaterPlaneActor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCLSCharacterMovement::OnWaterPlaneOverlapBegin(class AActor* InWaterPlaneActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterMovement.OnWaterPlaneOverlapBegin"));

	struct
	{
		class AActor*                  InWaterPlaneActor;
	} params;

	params.InWaterPlaneActor = InWaterPlaneActor;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterMovement.OnWaterBodyOverlapEnd
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AWaterBody*              InWaterBodyActor               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCLSCharacterMovement::OnWaterBodyOverlapEnd(class AWaterBody* InWaterBodyActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterMovement.OnWaterBodyOverlapEnd"));

	struct
	{
		class AWaterBody*              InWaterBodyActor;
	} params;

	params.InWaterBodyActor = InWaterBodyActor;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterMovement.OnWaterBodyOverlapBegin
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AWaterBody*              InWaterBodyActor               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InIsAlight                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCLSCharacterMovement::OnWaterBodyOverlapBegin(class AWaterBody* InWaterBodyActor, bool InIsAlight)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterMovement.OnWaterBodyOverlapBegin"));

	struct
	{
		class AWaterBody*              InWaterBodyActor;
		bool                           InIsAlight;
	} params;

	params.InWaterBodyActor = InWaterBodyActor;
	params.InIsAlight = InIsAlight;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterMovement.OnCapsuleOverlapEnd
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCLSCharacterMovement::OnCapsuleOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterMovement.OnCapsuleOverlapEnd"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterMovement.OnCapsuleOverlapBegin
// (FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UCLSCharacterMovement::OnCapsuleOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterMovement.OnCapsuleOverlapBegin"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterMovement.CheckWaterAndCallOverlapBegin
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UCLSCharacterMovement::CheckWaterAndCallOverlapBegin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterMovement.CheckWaterAndCallOverlapBegin"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterInterface.K2_StopAnimNetworked
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCLSAnimation           Animation                      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          BlendOut                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCLSCharacterInterface::K2_StopAnimNetworked(const struct FCLSAnimation& Animation, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterInterface.K2_StopAnimNetworked"));

	struct
	{
		struct FCLSAnimation           Animation;
		float                          BlendOut;
	} params;

	params.Animation = Animation;
	params.BlendOut = BlendOut;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterInterface.K2_StopAnimGroupNetworked
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECLSAnimationGroup             GroupType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          BlendOut                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCLSCharacterInterface::K2_StopAnimGroupNetworked(ECLSAnimationGroup GroupType, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterInterface.K2_StopAnimGroupNetworked"));

	struct
	{
		ECLSAnimationGroup             GroupType;
		float                          BlendOut;
	} params;

	params.GroupType = GroupType;
	params.BlendOut = BlendOut;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterInterface.K2_StopAnimationGroup
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECLSAnimationGroup             GroupType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          BlendOut                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCLSCharacterInterface::K2_StopAnimationGroup(ECLSAnimationGroup GroupType, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterInterface.K2_StopAnimationGroup"));

	struct
	{
		ECLSAnimationGroup             GroupType;
		float                          BlendOut;
	} params;

	params.GroupType = GroupType;
	params.BlendOut = BlendOut;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterInterface.K2_StopAnimation
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCLSAnimation           Animation                      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          BlendOut                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCLSCharacterInterface::K2_StopAnimation(const struct FCLSAnimation& Animation, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterInterface.K2_StopAnimation"));

	struct
	{
		struct FCLSAnimation           Animation;
		float                          BlendOut;
	} params;

	params.Animation = Animation;
	params.BlendOut = BlendOut;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterInterface.K2_PlayAnimNetworkedFromTable
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   MainName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   SubName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          PlayRate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          StartPosition                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bStopMontages                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UCLSCharacterInterface::K2_PlayAnimNetworkedFromTable(const struct FName& MainName, const struct FName& SubName, const struct FName& SectionName, float PlayRate, float StartPosition, bool bStopMontages)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterInterface.K2_PlayAnimNetworkedFromTable"));

	struct
	{
		struct FName                   MainName;
		struct FName                   SubName;
		struct FName                   SectionName;
		float                          PlayRate;
		float                          StartPosition;
		bool                           bStopMontages;
		float                          ReturnValue;
	} params;

	params.MainName = MainName;
	params.SubName = SubName;
	params.SectionName = SectionName;
	params.PlayRate = PlayRate;
	params.StartPosition = StartPosition;
	params.bStopMontages = bStopMontages;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterInterface.K2_PlayAnimNetworked
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCLSAnimation           Animation                      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          PlayRate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          StartPosition                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bStopMontages                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UCLSCharacterInterface::K2_PlayAnimNetworked(const struct FCLSAnimation& Animation, const struct FName& SectionName, float PlayRate, float StartPosition, bool bStopMontages)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterInterface.K2_PlayAnimNetworked"));

	struct
	{
		struct FCLSAnimation           Animation;
		struct FName                   SectionName;
		float                          PlayRate;
		float                          StartPosition;
		bool                           bStopMontages;
		float                          ReturnValue;
	} params;

	params.Animation = Animation;
	params.SectionName = SectionName;
	params.PlayRate = PlayRate;
	params.StartPosition = StartPosition;
	params.bStopMontages = bStopMontages;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterInterface.K2_PlayAnimation
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCLSAnimation           Animation                      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           bIsLoop                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          PlayRate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          StartPosition                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bStopMontages                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UCLSCharacterInterface::K2_PlayAnimation(const struct FCLSAnimation& Animation, bool bIsLoop, const struct FName& SectionName, float PlayRate, float StartPosition, bool bStopMontages)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterInterface.K2_PlayAnimation"));

	struct
	{
		struct FCLSAnimation           Animation;
		bool                           bIsLoop;
		struct FName                   SectionName;
		float                          PlayRate;
		float                          StartPosition;
		bool                           bStopMontages;
		float                          ReturnValue;
	} params;

	params.Animation = Animation;
	params.bIsLoop = bIsLoop;
	params.SectionName = SectionName;
	params.PlayRate = PlayRate;
	params.StartPosition = StartPosition;
	params.bStopMontages = bStopMontages;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSCharacterInterface.K2_OnWeaponChanged
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 WeaponObject                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCLSCharacterInterface::K2_OnWeaponChanged(class UObject* WeaponObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterInterface.K2_OnWeaponChanged"));

	struct
	{
		class UObject*                 WeaponObject;
	} params;

	params.WeaponObject = WeaponObject;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSCharacterInterface.K2_OnVehicleChanged
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 VehicleObject                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCLSCharacterInterface::K2_OnVehicleChanged(class UObject* VehicleObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSCharacterInterface.K2_OnVehicleChanged"));

	struct
	{
		class UObject*                 VehicleObject;
	} params;

	params.VehicleObject = VehicleObject;

	UObject::ProcessEvent(fn, &params);
}


// Function CrowLocomotionSystem.CLSHandIKInterface.K2_GetHandIKTargetByPawn
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   InPawn                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsFPModel                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            FindPriorityIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSCharacterHandIK     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FCLSCharacterHandIK UCLSHandIKInterface::K2_GetHandIKTargetByPawn(class APawn* InPawn, bool bIsFPModel, int FindPriorityIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSHandIKInterface.K2_GetHandIKTargetByPawn"));

	struct
	{
		class APawn*                   InPawn;
		bool                           bIsFPModel;
		int                            FindPriorityIndex;
		struct FCLSCharacterHandIK     ReturnValue;
	} params;

	params.InPawn = InPawn;
	params.bIsFPModel = bIsFPModel;
	params.FindPriorityIndex = FindPriorityIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSHandIKInterface.K2_GetHandIKTarget
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsFPModel                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            FindPriorityIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSCharacterHandIK     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FCLSCharacterHandIK UCLSHandIKInterface::K2_GetHandIKTarget(bool bIsFPModel, int FindPriorityIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSHandIKInterface.K2_GetHandIKTarget"));

	struct
	{
		bool                           bIsFPModel;
		int                            FindPriorityIndex;
		struct FCLSCharacterHandIK     ReturnValue;
	} params;

	params.bIsFPModel = bIsFPModel;
	params.FindPriorityIndex = FindPriorityIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSLibrary.IsExistLatentAction
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 InActionObject                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InUUID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UCLSLibrary::IsExistLatentAction(class UObject* WorldContextObject, class UObject* InActionObject, int InUUID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSLibrary.IsExistLatentAction"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UObject*                 InActionObject;
		int                            InUUID;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InActionObject = InActionObject;
	params.InUUID = InUUID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSLibrary.GetVehiclePoseSet
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UDataTable*              DataTable                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSVehiclePoseSet      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FCLSVehiclePoseSet UCLSLibrary::GetVehiclePoseSet(class UDataTable* DataTable, const struct FName& RowName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSLibrary.GetVehiclePoseSet"));

	struct
	{
		class UDataTable*              DataTable;
		struct FName                   RowName;
		struct FCLSVehiclePoseSet      ReturnValue;
	} params;

	params.DataTable = DataTable;
	params.RowName = RowName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSLibrary.GetVehiclePose
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FCLSVehiclePoseSet      PoseSet                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            SeatIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSVehiclePose         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FCLSVehiclePose UCLSLibrary::GetVehiclePose(const struct FCLSVehiclePoseSet& PoseSet, int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSLibrary.GetVehiclePose"));

	struct
	{
		struct FCLSVehiclePoseSet      PoseSet;
		int                            SeatIndex;
		struct FCLSVehiclePose         ReturnValue;
	} params;

	params.PoseSet = PoseSet;
	params.SeatIndex = SeatIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSLibrary.GetRebasedWorldLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 InLocation                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UCLSLibrary::GetRebasedWorldLocation(class UObject* WorldContextObject, const struct FVector& InLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSLibrary.GetRebasedWorldLocation"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 InLocation;
		struct FVector                 ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InLocation = InLocation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSLibrary.GetRealWorldLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 InLocation                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UCLSLibrary::GetRealWorldLocation(class UObject* WorldContextObject, const struct FVector& InLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSLibrary.GetRealWorldLocation"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 InLocation;
		struct FVector                 ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InLocation = InLocation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSLibrary.GetGroundPoseSet
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UDataTable*              DataTable                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSGroundPoseSet       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FCLSGroundPoseSet UCLSLibrary::GetGroundPoseSet(class UDataTable* DataTable, const struct FName& RowName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSLibrary.GetGroundPoseSet"));

	struct
	{
		class UDataTable*              DataTable;
		struct FName                   RowName;
		struct FCLSGroundPoseSet       ReturnValue;
	} params;

	params.DataTable = DataTable;
	params.RowName = RowName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSLibrary.GetGroundPose
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FCLSGroundPoseSet       PoseSet                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FName                   GripParts                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSGroundPose          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FCLSGroundPose UCLSLibrary::GetGroundPose(const struct FCLSGroundPoseSet& PoseSet, const struct FName& GripParts)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSLibrary.GetGroundPose"));

	struct
	{
		struct FCLSGroundPoseSet       PoseSet;
		struct FName                   GripParts;
		struct FCLSGroundPose          ReturnValue;
	} params;

	params.PoseSet = PoseSet;
	params.GripParts = GripParts;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSLibrary.GetGripPose
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UDataTable*              DataTable                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   WeaponTextIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSGripPose            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FCLSGripPose UCLSLibrary::GetGripPose(class UDataTable* DataTable, const struct FName& RowName, const struct FName& WeaponTextIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSLibrary.GetGripPose"));

	struct
	{
		class UDataTable*              DataTable;
		struct FName                   RowName;
		struct FName                   WeaponTextIndex;
		struct FCLSGripPose            ReturnValue;
	} params;

	params.DataTable = DataTable;
	params.RowName = RowName;
	params.WeaponTextIndex = WeaponTextIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSLibrary.GetCommonAnimation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UDataTable*              DataTable                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   MainName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   SubName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseRandom                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCLSAnimation           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FCLSAnimation UCLSLibrary::GetCommonAnimation(class UDataTable* DataTable, const struct FName& MainName, const struct FName& SubName, bool bUseRandom, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSLibrary.GetCommonAnimation"));

	struct
	{
		class UDataTable*              DataTable;
		struct FName                   MainName;
		struct FName                   SubName;
		bool                           bUseRandom;
		int                            Index;
		struct FCLSAnimation           ReturnValue;
	} params;

	params.DataTable = DataTable;
	params.MainName = MainName;
	params.SubName = SubName;
	params.bUseRandom = bUseRandom;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CrowLocomotionSystem.CLSLibrary.FindActiveMontageByAnimSequence
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAnimInstance*           AnimInstance                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimSequenceBase*       Animation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAnimMontage* UCLSLibrary::FindActiveMontageByAnimSequence(class UAnimInstance* AnimInstance, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CrowLocomotionSystem.CLSLibrary.FindActiveMontageByAnimSequence"));

	struct
	{
		class UAnimInstance*           AnimInstance;
		class UAnimSequenceBase*       Animation;
		class UAnimMontage*            ReturnValue;
	} params;

	params.AnimInstance = AnimInstance;
	params.Animation = Animation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
