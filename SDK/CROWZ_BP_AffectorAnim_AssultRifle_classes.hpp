#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_AffectorAnim_AssultRifle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AffectorAnim_AssultRifle.BP_AffectorAnim_AssultRifle_C
// 0x0000 (0x0040 - 0x0040)
class UBP_AffectorAnim_AssultRifle_C : public UCrowFoliageAffectorAnimData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AffectorAnim_AssultRifle.BP_AffectorAnim_AssultRifle_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
