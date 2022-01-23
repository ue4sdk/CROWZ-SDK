// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_AnimationSharing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<class AActor*>          Actors                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UAnimSharingStateInstance::GetInstancedActors(TArray<class AActor*>* Actors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors"));

	struct
	{
		TArray<class AActor*>          Actors;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USkeleton*               SharingSkeleton                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnimationSharingManager::RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP"));

	struct
	{
		class AActor*                  InActor;
		class USkeleton*               SharingSkeleton;
	} params;

	params.InActor = InActor;
	params.SharingSkeleton = SharingSkeleton;

	UObject::ProcessEvent(fn, &params);
}


// Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimationSharingManager* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAnimationSharingManager* UAnimationSharingManager::GetAnimationSharingManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UAnimationSharingManager* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimationSharingSetup*  Setup                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAnimationSharingManager::CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UAnimationSharingSetup*  Setup;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Setup = Setup;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAnimationSharingManager::AnimationSharingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// int                            OutState                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  InActor                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  CurrentState                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  OnDemandState                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bShouldProcess                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnimationSharingStateProcessor::ProcessActorState(class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, int* OutState, bool* bShouldProcess)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState"));

	struct
	{
		int                            OutState;
		class AActor*                  InActor;
		unsigned char                  CurrentState;
		unsigned char                  OnDemandState;
		bool                           bShouldProcess;
	} params;

	params.InActor = InActor;
	params.CurrentState = CurrentState;
	params.OnDemandState = OnDemandState;

	UObject::ProcessEvent(fn, &params);

	if (OutState != nullptr)
		*OutState = params.OutState;
	if (bShouldProcess != nullptr)
		*bShouldProcess = params.bShouldProcess;
}


// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UEnum*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum"));

	struct
	{
		class UEnum*                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
