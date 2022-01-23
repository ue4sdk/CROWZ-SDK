#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_FireArm_Combine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_FireArm_Combine.WB_FireArm_Combine_C
// 0x0000 (0x03A8 - 0x03A8)
class UWB_FireArm_Combine_C : public UCrowWeaponCombinedIconWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_FireArm_Combine.WB_FireArm_Combine_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
