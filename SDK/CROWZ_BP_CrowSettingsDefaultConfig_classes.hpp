#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowSettingsDefaultConfig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrowSettingsDefaultConfig.BP_CrowSettingsDefaultConfig_C
// 0x0000 (0x00B8 - 0x00B8)
class UBP_CrowSettingsDefaultConfig_C : public UCrowSettingsDefaultConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CrowSettingsDefaultConfig.BP_CrowSettingsDefaultConfig_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
