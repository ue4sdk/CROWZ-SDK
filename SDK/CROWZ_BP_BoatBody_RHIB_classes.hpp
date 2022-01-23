#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_BoatBody_RHIB_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BoatBody_RHIB.BP_BoatBody_RHIB_C
// 0x0000 (0x00C0 - 0x00C0)
class UBP_BoatBody_RHIB_C : public UCrowBoatsConfigBody
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BoatBody_RHIB.BP_BoatBody_RHIB_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
