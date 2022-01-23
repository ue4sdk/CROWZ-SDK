#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_CrowHUD_FPS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_CrowHUD_FPS.WB_CrowHUD_FPS_C
// 0x0000 (0x0380 - 0x0380)
class UWB_CrowHUD_FPS_C : public UCrowFPSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_CrowHUD_FPS.WB_CrowHUD_FPS_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
