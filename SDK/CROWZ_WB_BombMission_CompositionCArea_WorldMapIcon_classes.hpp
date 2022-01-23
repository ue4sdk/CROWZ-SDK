#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_BombMission_CompositionCArea_WorldMapIcon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_BombMission_CompositionCArea_WorldMapIcon.WB_BombMission_CompositionCArea_WorldMapIcon_C
// 0x0008 (0x0350 - 0x0348)
class UWB_BombMission_CompositionCArea_WorldMapIcon_C : public UCrowWidgetBase
{
public:
	class UCrowWidgetImage*                            IMG_bombC4_2;                                             // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_BombMission_CompositionCArea_WorldMapIcon.WB_BombMission_CompositionCArea_WorldMapIcon_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
