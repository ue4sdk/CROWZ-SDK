#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_RecordScoreButton_Tab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_RecordScoreButton_Tab.WB_RecordScoreButton_Tab_C
// 0x0020 (0x05C8 - 0x05A8)
class UWB_RecordScoreButton_Tab_C : public UCrowWidgetToggleButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            Ani_End;                                                  // 0x05B0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            Ani_Hover_DeSelect;                                       // 0x05B8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      IMG_New;                                                  // 0x05C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_RecordScoreButton_Tab.WB_RecordScoreButton_Tab_C"));
		return ptr;
	}


	void BndEvt__WB_RecordScoreButton_Tab_BTN_Main_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_RecordScoreButton_Tab_BTN_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WB_RecordScoreButton_Tab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
