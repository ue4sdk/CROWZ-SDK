#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_Vehicle_SeatVisual_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_Vehicle_SeatVisual.WB_Vehicle_SeatVisual_C
// 0x0010 (0x03C8 - 0x03B8)
class UWB_Vehicle_SeatVisual_C : public UCrowVehicleWidgetSeatMh6
{
public:
	class UImage*                                      IMG_Roter_Main;                                           // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      IMG_Roter_Tail;                                           // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_Vehicle_SeatVisual.WB_Vehicle_SeatVisual_C"));
		return ptr;
	}


	void UpdatePassengerInfo(TArray<struct FPassengerSeat>* ArrSeat);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
