#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_Customize_Category_ToggleButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_Customize_Category_ToggleButton.WB_Customize_Category_ToggleButton_C
// 0x0008 (0x05B0 - 0x05A8)
class UWB_Customize_Category_ToggleButton_C : public UCrowWidgetToggleButton
{
public:
	class UImage*                                      IMG_New;                                                  // 0x05A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_Customize_Category_ToggleButton.WB_Customize_Category_ToggleButton_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
