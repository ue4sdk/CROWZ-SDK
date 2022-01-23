#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_Abrams_Destroyed_N_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Abrams_Destroyed_N.BP_Abrams_Destroyed_N_C
// 0x0000 (0x03B0 - 0x03B0)
class ABP_Abrams_Destroyed_N_C : public ACrowVehicleDestroyedBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Abrams_Destroyed_N.BP_Abrams_Destroyed_N_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
