#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_PassatWheel_FrontChild_Flat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PassatWheel_FrontChild_Flat.BP_PassatWheel_FrontChild_Flat_C
// 0x0000 (0x0138 - 0x0138)
class UBP_PassatWheel_FrontChild_Flat_C : public UBP_PassatWheel_Back_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PassatWheel_FrontChild_Flat.BP_PassatWheel_FrontChild_Flat_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
