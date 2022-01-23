#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowPhysicalMatSound_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrowPhysicalMatSound.BP_CrowPhysicalMatSound_C
// 0x0000 (0x0230 - 0x0230)
class UBP_CrowPhysicalMatSound_C : public UCrowPhysicalMatSound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CrowPhysicalMatSound.BP_CrowPhysicalMatSound_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
