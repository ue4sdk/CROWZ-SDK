#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_PickupTruckWheel_Front_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PickupTruckWheel_Front.BP_PickupTruckWheel_Front_C
// 0x0000 (0x0138 - 0x0138)
class UBP_PickupTruckWheel_Front_C : public UBP_PickupTruckWheel_Back_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PickupTruckWheel_Front.BP_PickupTruckWheel_Front_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
