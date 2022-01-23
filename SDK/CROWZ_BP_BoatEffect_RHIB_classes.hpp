#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_BoatEffect_RHIB_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BoatEffect_RHIB.BP_BoatEffect_RHIB_C
// 0x0000 (0x0080 - 0x0080)
class UBP_BoatEffect_RHIB_C : public UCrowVehicleBoatEffectSetting
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BoatEffect_RHIB.BP_BoatEffect_RHIB_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
