#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Conquest_ExplosionShake_Artillery_3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Conquest_ExplosionShake_Artillery_3.Conquest_ExplosionShake_Artillery_2_C
// 0x0000 (0x0180 - 0x0180)
class UConquest_ExplosionShake_Artillery_2_C : public UMatineeCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Conquest_ExplosionShake_Artillery_3.Conquest_ExplosionShake_Artillery_2_C"));
		return ptr;
	}


	void NewFunction_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
