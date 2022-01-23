#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_RoadRover_Engine03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RoadRover_Engine03.RoadRover_Engine03_C
// 0x0000 (0x0100 - 0x0100)
class URoadRover_Engine03_C : public UCrowLandWheelsConfigEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass RoadRover_Engine03.RoadRover_Engine03_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
