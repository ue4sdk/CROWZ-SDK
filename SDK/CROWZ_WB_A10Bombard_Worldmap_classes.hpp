#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_A10Bombard_Worldmap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_A10Bombard_Worldmap.WB_A10Bombard_Worldmap_C
// 0x0008 (0x0360 - 0x0358)
class UWB_A10Bombard_Worldmap_C : public UCrowKitBomberIconWidget
{
public:
	class UWidgetAnimation*                            Ani_Striking;                                             // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_A10Bombard_Worldmap.WB_A10Bombard_Worldmap_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
