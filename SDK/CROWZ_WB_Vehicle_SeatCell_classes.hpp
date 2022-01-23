#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_Vehicle_SeatCell_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_Vehicle_SeatCell.WB_Vehicle_SeatCell_C
// 0x0000 (0x0360 - 0x0360)
class UWB_Vehicle_SeatCell_C : public UCrowVehicleWidgetSeatCell
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_Vehicle_SeatCell.WB_Vehicle_SeatCell_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
