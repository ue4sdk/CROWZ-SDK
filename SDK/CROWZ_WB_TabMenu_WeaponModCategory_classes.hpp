#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_TabMenu_WeaponModCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_TabMenu_WeaponModCategory.WB_TabMenu_WeaponModCategory_C
// 0x0000 (0x0368 - 0x0368)
class UWB_TabMenu_WeaponModCategory_C : public UCrowLobbyShopMenuTabWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_TabMenu_WeaponModCategory.WB_TabMenu_WeaponModCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
