// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_MissionQuickList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WB_MissionQuickList.WB_MissionQuickList_C.BndEvt__Button_128_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWB_MissionQuickList_C::BndEvt__Button_128_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_MissionQuickList.WB_MissionQuickList_C.BndEvt__Button_128_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WB_MissionQuickList.WB_MissionQuickList_C.ExecuteUbergraph_WB_MissionQuickList
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWB_MissionQuickList_C::ExecuteUbergraph_WB_MissionQuickList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_MissionQuickList.WB_MissionQuickList_C.ExecuteUbergraph_WB_MissionQuickList"));

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
