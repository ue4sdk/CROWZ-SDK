// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_RewardPopup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WB_RewardPopup.WB_RewardPopup_C.SequenceEvent__ENTRYPOINTWB_RewardPopup_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWB_RewardPopup_C::SequenceEvent__ENTRYPOINTWB_RewardPopup_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_RewardPopup.WB_RewardPopup_C.SequenceEvent__ENTRYPOINTWB_RewardPopup_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WB_RewardPopup.WB_RewardPopup_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWB_RewardPopup_C::SequenceEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_RewardPopup.WB_RewardPopup_C.SequenceEvent_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WB_RewardPopup.WB_RewardPopup_C.ExecuteUbergraph_WB_RewardPopup
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWB_RewardPopup_C::ExecuteUbergraph_WB_RewardPopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_RewardPopup.WB_RewardPopup_C.ExecuteUbergraph_WB_RewardPopup"));

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
