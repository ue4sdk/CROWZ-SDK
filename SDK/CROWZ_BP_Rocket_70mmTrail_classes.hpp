#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_Rocket_70mmTrail_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rocket_70mmTrail.BP_Rocket_70mmTrail_C
// 0x0000 (0x0230 - 0x0230)
class ABP_Rocket_70mmTrail_C : public ACrowRocketLauncherTrail
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Rocket_70mmTrail.BP_Rocket_70mmTrail_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
