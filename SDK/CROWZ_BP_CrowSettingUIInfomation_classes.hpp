#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowSettingUIInfomation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrowSettingUIInfomation.BP_CrowSettingUIInfomation_C
// 0x0000 (0x0058 - 0x0058)
class UBP_CrowSettingUIInfomation_C : public UCrowSettingUIInfomation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CrowSettingUIInfomation.BP_CrowSettingUIInfomation_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
