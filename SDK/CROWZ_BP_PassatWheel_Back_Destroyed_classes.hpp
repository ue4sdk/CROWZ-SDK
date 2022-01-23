#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_PassatWheel_Back_Destroyed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PassatWheel_Back_Destroyed.BP_PassatWheel_Back_Destroyed_C
// 0x0000 (0x0138 - 0x0138)
class UBP_PassatWheel_Back_Destroyed_C : public UCrowLandWheelsConfigTireAndWheel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PassatWheel_Back_Destroyed.BP_PassatWheel_Back_Destroyed_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
