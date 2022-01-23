#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_TabMenuWeaponPartsCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_TabMenuWeaponPartsCategory.WB_TabMenuWeaponPartsCategory_C
// 0x0000 (0x03B0 - 0x03B0)
class UWB_TabMenuWeaponPartsCategory_C : public UCrowCustomizeCategryBigWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_TabMenuWeaponPartsCategory.WB_TabMenuWeaponPartsCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
