#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapEyeTracker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary"));
		return ptr;
	}


	static bool GetEyeBlinkState(struct FMagicLeapEyeBlinkState* BlinkState);
	static EMagicLeapEyeTrackingCalibrationStatus GetCalibrationStatus();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
