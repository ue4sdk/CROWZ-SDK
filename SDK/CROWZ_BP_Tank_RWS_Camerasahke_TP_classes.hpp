#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_Tank_RWS_Camerasahke_TP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Tank_RWS_Camerasahke_TP.BP_Tank_RWS_Camerasahke_TP_C
// 0x0000 (0x0180 - 0x0180)
class UBP_Tank_RWS_Camerasahke_TP_C : public UMatineeCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Tank_RWS_Camerasahke_TP.BP_Tank_RWS_Camerasahke_TP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
