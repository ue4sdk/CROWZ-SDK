#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_HUD_M1Abrams_Crosshair_Cannon_Third_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_HUD_M1Abrams_Crosshair_Cannon_Third.WB_HUD_M1Abrams_Crosshair_Cannon_Third_C
// 0x0018 (0x0468 - 0x0450)
class UWB_HUD_M1Abrams_Crosshair_Cannon_Third_C : public UCrowVehicleCrosshairAbramCannon
{
public:
	class UImage*                                      IMG_Crosshair_Moving;                                     // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      IMG_Crosshair_Moving_2;                                   // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      IMG_Crosshair_Point_2;                                    // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_HUD_M1Abrams_Crosshair_Cannon_Third.WB_HUD_M1Abrams_Crosshair_Cannon_Third_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
