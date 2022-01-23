#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_ExplosionShake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplosionShake.ExplosionShake_C
// 0x0000 (0x0180 - 0x0180)
class UExplosionShake_C : public UMatineeCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ExplosionShake.ExplosionShake_C"));
		return ptr;
	}


	void NewFunction_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
