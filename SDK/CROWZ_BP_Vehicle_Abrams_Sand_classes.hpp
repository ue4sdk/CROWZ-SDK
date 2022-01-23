#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_Vehicle_Abrams_Sand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Vehicle_Abrams_Sand.BP_Vehicle_Abrams_Sand_C
// 0x0000 (0x0981 - 0x0981)
class ABP_Vehicle_Abrams_Sand_C : public ABP_Vehicle_Abrams_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Vehicle_Abrams_Sand.BP_Vehicle_Abrams_Sand_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
