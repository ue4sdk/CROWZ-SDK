#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_BoatEngine_RHIB_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BoatEngine_RHIB.BP_BoatEngine_RHIB_C
// 0x0000 (0x0070 - 0x0070)
class UBP_BoatEngine_RHIB_C : public UCrowBoatsConfigEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BoatEngine_RHIB.BP_BoatEngine_RHIB_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
