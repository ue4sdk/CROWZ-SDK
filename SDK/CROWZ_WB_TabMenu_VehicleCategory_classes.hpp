#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_TabMenu_VehicleCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_TabMenu_VehicleCategory.WB_TabMenu_VehicleCategory_C
// 0x0000 (0x0398 - 0x0398)
class UWB_TabMenu_VehicleCategory_C : public UCrowVehicleSkinLeftWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_TabMenu_VehicleCategory.WB_TabMenu_VehicleCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
