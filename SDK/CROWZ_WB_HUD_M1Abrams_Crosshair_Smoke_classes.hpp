#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_HUD_M1Abrams_Crosshair_Smoke_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_HUD_M1Abrams_Crosshair_Smoke.WB_HUD_M1Abrams_Crosshair_Smoke_C
// 0x0010 (0x0470 - 0x0460)
class UWB_HUD_M1Abrams_Crosshair_Smoke_C : public UCrowVehicleCrosshairTankSmoke
{
public:
	class UImage*                                      IMG_ZoomIn;                                               // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      IMG_ZoomIn_5;                                             // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_HUD_M1Abrams_Crosshair_Smoke.WB_HUD_M1Abrams_Crosshair_Smoke_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
