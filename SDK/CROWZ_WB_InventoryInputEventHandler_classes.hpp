#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_InventoryInputEventHandler_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_InventoryInputEventHandler.WB_InventoryInputEventHandler_C
// 0x0000 (0x03F8 - 0x03F8)
class UWB_InventoryInputEventHandler_C : public UCrowInventoryInputEventHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_InventoryInputEventHandler.WB_InventoryInputEventHandler_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
