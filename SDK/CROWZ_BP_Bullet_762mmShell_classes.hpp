#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_Bullet_762mmShell_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Bullet_762mmShell.BP_Bullet_762mmShell_C
// 0x0000 (0x17E0 - 0x17E0)
class ABP_Bullet_762mmShell_C : public ACrowProjectileShell
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Bullet_762mmShell.BP_Bullet_762mmShell_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
