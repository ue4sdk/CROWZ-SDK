#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_PropertyAccess_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PropertyAccess.PropertyAccess
// 0x0000 (0x0028 - 0x0028)
class UPropertyAccess : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PropertyAccess.PropertyAccess"));
		return ptr;
	}

};


// Class PropertyAccess.PropertyEventBroadcaster
// 0x0000 (0x0028 - 0x0028)
class UPropertyEventBroadcaster : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PropertyAccess.PropertyEventBroadcaster"));
		return ptr;
	}

};


// Class PropertyAccess.PropertyEventSubscriber
// 0x0000 (0x0028 - 0x0028)
class UPropertyEventSubscriber : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PropertyAccess.PropertyEventSubscriber"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
