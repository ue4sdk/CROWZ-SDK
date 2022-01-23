// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_ReplayListItem_Renewal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplayListItem_Renewal.ReplayListItem_Renewal_C.BP_OnEntryReleased
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UReplayListItem_Renewal_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem_Renewal.ReplayListItem_Renewal_C.BP_OnEntryReleased"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayListItem_Renewal.ReplayListItem_Renewal_C.BP_OnItemExpansionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UReplayListItem_Renewal_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem_Renewal.ReplayListItem_Renewal_C.BP_OnItemExpansionChanged"));

	struct
	{
		bool                           bIsExpanded;
	} params;

	params.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(fn, &params);
}


// Function ReplayListItem_Renewal.ReplayListItem_Renewal_C.BP_OnItemSelectionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UReplayListItem_Renewal_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem_Renewal.ReplayListItem_Renewal_C.BP_OnItemSelectionChanged"));

	struct
	{
		bool                           bIsSelected;
	} params;

	params.bIsSelected = bIsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function ReplayListItem_Renewal.ReplayListItem_Renewal_C.ExecuteUbergraph_ReplayListItem_Renewal
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReplayListItem_Renewal_C::ExecuteUbergraph_ReplayListItem_Renewal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem_Renewal.ReplayListItem_Renewal_C.ExecuteUbergraph_ReplayListItem_Renewal"));

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
