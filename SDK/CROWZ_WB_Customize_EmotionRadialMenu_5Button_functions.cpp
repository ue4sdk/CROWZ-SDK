// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_Customize_EmotionRadialMenu_5Button_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WB_Customize_EmotionRadialMenu_5Button.WB_Customize_EmotionRadialMenu_5Button_C.BndEvt__Radial_BTN_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWB_Customize_EmotionRadialMenu_5Button_C::BndEvt__Radial_BTN_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_Customize_EmotionRadialMenu_5Button.WB_Customize_EmotionRadialMenu_5Button_C.BndEvt__Radial_BTN_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WB_Customize_EmotionRadialMenu_5Button.WB_Customize_EmotionRadialMenu_5Button_C.BndEvt__Radial_BTN_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWB_Customize_EmotionRadialMenu_5Button_C::BndEvt__Radial_BTN_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_Customize_EmotionRadialMenu_5Button.WB_Customize_EmotionRadialMenu_5Button_C.BndEvt__Radial_BTN_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WB_Customize_EmotionRadialMenu_5Button.WB_Customize_EmotionRadialMenu_5Button_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWB_Customize_EmotionRadialMenu_5Button_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_Customize_EmotionRadialMenu_5Button.WB_Customize_EmotionRadialMenu_5Button_C.OnMouseEnter"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function WB_Customize_EmotionRadialMenu_5Button.WB_Customize_EmotionRadialMenu_5Button_C.ExecuteUbergraph_WB_Customize_EmotionRadialMenu_5Button
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWB_Customize_EmotionRadialMenu_5Button_C::ExecuteUbergraph_WB_Customize_EmotionRadialMenu_5Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_Customize_EmotionRadialMenu_5Button.WB_Customize_EmotionRadialMenu_5Button_C.ExecuteUbergraph_WB_Customize_EmotionRadialMenu_5Button"));

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
