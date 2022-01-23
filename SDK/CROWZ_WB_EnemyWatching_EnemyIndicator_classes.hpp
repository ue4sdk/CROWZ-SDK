#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_EnemyWatching_EnemyIndicator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_EnemyWatching_EnemyIndicator.WB_EnemyWatching_EnemyIndicator_C
// 0x0008 (0x0378 - 0x0370)
class UWB_EnemyWatching_EnemyIndicator_C : public UCrowKillerIconWidget
{
public:
	class UImage*                                      IMG_LocateArrow;                                          // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_EnemyWatching_EnemyIndicator.WB_EnemyWatching_EnemyIndicator_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
