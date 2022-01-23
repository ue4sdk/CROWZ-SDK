#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_SteamSockets_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SteamSockets.SteamSocketsNetConnection
// 0x0010 (0x1B00 - 0x1AF0)
class USteamSocketsNetConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x1AF0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamSockets.SteamSocketsNetConnection"));
		return ptr;
	}

};


// Class SteamSockets.SteamSocketsNetDriver
// 0x0010 (0x0758 - 0x0748)
class USteamSocketsNetDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0748(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamSockets.SteamSocketsNetDriver"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
