// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_RecordScoreRank_Grade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WB_RecordScoreRank_Grade.WB_RecordScoreRank_Grade_C.BndEvt__WB_RecordScoreRank_Grade_LV_Rank_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UUserWidget*             Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWB_RecordScoreRank_Grade_C::BndEvt__WB_RecordScoreRank_Grade_LV_Rank_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_RecordScoreRank_Grade.WB_RecordScoreRank_Grade_C.BndEvt__WB_RecordScoreRank_Grade_LV_Rank_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature"));

	struct
	{
		class UObject*                 Item;
		class UUserWidget*             Widget;
	} params;

	params.Item = Item;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WB_RecordScoreRank_Grade.WB_RecordScoreRank_Grade_C.ExecuteUbergraph_WB_RecordScoreRank_Grade
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWB_RecordScoreRank_Grade_C::ExecuteUbergraph_WB_RecordScoreRank_Grade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_RecordScoreRank_Grade.WB_RecordScoreRank_Grade_C.ExecuteUbergraph_WB_RecordScoreRank_Grade"));

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
