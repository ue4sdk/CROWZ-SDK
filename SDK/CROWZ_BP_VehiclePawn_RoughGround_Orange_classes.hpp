#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_VehiclePawn_RoughGround_Orange_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehiclePawn_RoughGround_Orange.BP_VehiclePawn_RoughGround_Orange_C
// 0x0000 (0x0918 - 0x0918)
class ABP_VehiclePawn_RoughGround_Orange_C : public ABP_VehiclePawn_RoughGround_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VehiclePawn_RoughGround_Orange.BP_VehiclePawn_RoughGround_Orange_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
