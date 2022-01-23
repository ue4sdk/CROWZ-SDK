#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowTankFloodingEffectSetting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrowTankFloodingEffectSetting.BP_CrowTankFloodingEffectSetting_C
// 0x0000 (0x0078 - 0x0078)
class UBP_CrowTankFloodingEffectSetting_C : public UCrowVehicleFloodingEffectSetting
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CrowTankFloodingEffectSetting.BP_CrowTankFloodingEffectSetting_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
