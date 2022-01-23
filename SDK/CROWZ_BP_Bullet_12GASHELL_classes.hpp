#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_Bullet_12GASHELL_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Bullet_12GASHELL.BP_Bullet_12GASHELL_C
// 0x0000 (0x1840 - 0x1840)
class ABP_Bullet_12GASHELL_C : public ACrowProjectileBullet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Bullet_12GASHELL.BP_Bullet_12GASHELL_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
