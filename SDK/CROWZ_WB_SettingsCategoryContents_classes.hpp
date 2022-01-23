#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_SettingsCategoryContents_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_SettingsCategoryContents.WB_SettingsCategoryContents_C
// 0x0000 (0x0390 - 0x0390)
class UWB_SettingsCategoryContents_C : public UCrowSettingsCategoryContentsWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_SettingsCategoryContents.WB_SettingsCategoryContents_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
