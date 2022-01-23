#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_Customize_Vehicle_Itemlist_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_Customize_Vehicle_Itemlist.WB_Customize_Vehicle_Itemlist_C
// 0x0008 (0x0380 - 0x0378)
class UWB_Customize_Vehicle_Itemlist_C : public UCrowListViewVehicleSkin
{
public:
	class UImage*                                      Image_159;                                                // 0x0378(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_Customize_Vehicle_Itemlist.WB_Customize_Vehicle_Itemlist_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
