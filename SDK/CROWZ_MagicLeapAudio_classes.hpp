#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapAudio.MagicLeapAudioFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapAudioFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapAudio.MagicLeapAudioFunctionLibrary"));
		return ptr;
	}


	static bool SetOnAudioJackUnpluggedDelegate(const struct FScriptDelegate& ResultDelegate);
	static bool SetOnAudioJackPluggedDelegate(const struct FScriptDelegate& ResultDelegate);
	static bool SetMicMute(bool IsMuted);
	static bool IsMicMuted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
