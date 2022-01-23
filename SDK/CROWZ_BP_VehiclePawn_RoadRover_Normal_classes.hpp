#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_VehiclePawn_RoadRover_Normal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehiclePawn_RoadRover_Normal.BP_VehiclePawn_RoadRover_Normal_C
// 0x0000 (0x0970 - 0x0970)
class ABP_VehiclePawn_RoadRover_Normal_C : public ABP_VehiclePawn_RoadRover_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VehiclePawn_RoadRover_Normal.BP_VehiclePawn_RoadRover_Normal_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
