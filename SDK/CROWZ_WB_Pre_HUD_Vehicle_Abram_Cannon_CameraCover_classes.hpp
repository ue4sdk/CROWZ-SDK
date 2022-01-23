#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_Pre_HUD_Vehicle_Abram_Cannon_CameraCover_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_Pre_HUD_Vehicle_Abram_Cannon_CameraCover.WB_Pre_HUD_Vehicle_Abram_Cannon_CameraCover_C
// 0x0008 (0x0358 - 0x0350)
class UWB_Pre_HUD_Vehicle_Abram_Cannon_CameraCover_C : public UCrowVehiclePreHUDCameraCover
{
public:
	class UImage*                                      IMG_CameraCover;                                          // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_Pre_HUD_Vehicle_Abram_Cannon_CameraCover.WB_Pre_HUD_Vehicle_Abram_Cannon_CameraCover_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
