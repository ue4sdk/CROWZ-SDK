#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_VehicleSkinActorRotator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_VehicleSkinActorRotator.WB_VehicleSkinActorRotator_C
// 0x0000 (0x0370 - 0x0370)
class UWB_VehicleSkinActorRotator_C : public UCrowActorRotatorWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_VehicleSkinActorRotator.WB_VehicleSkinActorRotator_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
