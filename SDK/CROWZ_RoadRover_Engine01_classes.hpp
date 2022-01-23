#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_RoadRover_Engine01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RoadRover_Engine01.RoadRover_Engine01_C
// 0x0000 (0x0100 - 0x0100)
class URoadRover_Engine01_C : public UCrowLandWheelsConfigEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass RoadRover_Engine01.RoadRover_Engine01_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
