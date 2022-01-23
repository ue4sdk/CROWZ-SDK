// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_A10Bombard_Indicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WB_A10Bombard_Indicator.WB_A10Bombard_Indicator_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWB_A10Bombard_Indicator_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_A10Bombard_Indicator.WB_A10Bombard_Indicator_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WB_A10Bombard_Indicator.WB_A10Bombard_Indicator_C.ExecuteUbergraph_WB_A10Bombard_Indicator
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWB_A10Bombard_Indicator_C::ExecuteUbergraph_WB_A10Bombard_Indicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_A10Bombard_Indicator.WB_A10Bombard_Indicator_C.ExecuteUbergraph_WB_A10Bombard_Indicator"));

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
