// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapARPinInfoActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMagicLeapARPinInfoActor_C::UpdatePinState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMagicLeapARPinInfoActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMagicLeapARPinInfoActor_C::OnUpdateARPinState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMagicLeapARPinInfoActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMagicLeapARPinInfoActor_C::ExecuteUbergraph_MagicLeapARPinInfoActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
