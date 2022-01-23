#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Contamination_Camerashake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Contamination_Camerashake.Contamination_Camerashake_C
// 0x0000 (0x0180 - 0x0180)
class UContamination_Camerashake_C : public UMatineeCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Contamination_Camerashake.Contamination_Camerashake_C"));
		return ptr;
	}


	void NewFunction_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
