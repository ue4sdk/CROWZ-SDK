#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Engine_ver3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Engine_ver3.Engine_ver3_C
// 0x0000 (0x0100 - 0x0100)
class UEngine_ver3_C : public UCrowLandWheelsConfigEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Engine_ver3.Engine_ver3_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
