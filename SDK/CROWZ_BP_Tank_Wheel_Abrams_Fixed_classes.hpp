#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_Tank_Wheel_Abrams_Fixed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Tank_Wheel_Abrams_Fixed.BP_Tank_Wheel_Abrams_Fixed_C
// 0x0000 (0x0138 - 0x0138)
class UBP_Tank_Wheel_Abrams_Fixed_C : public UBP_Tank_Wheel_Abrams_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Tank_Wheel_Abrams_Fixed.BP_Tank_Wheel_Abrams_Fixed_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
