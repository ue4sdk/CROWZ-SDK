#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_PickupTruckDestroyedCameraShake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PickupTruckDestroyedCameraShake.BP_PickupTruckDestroyedCameraShake_C
// 0x0000 (0x0180 - 0x0180)
class UBP_PickupTruckDestroyedCameraShake_C : public UMatineeCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PickupTruckDestroyedCameraShake.BP_PickupTruckDestroyedCameraShake_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
