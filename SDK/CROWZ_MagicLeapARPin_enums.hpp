#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MagicLeapARPin.EMagicLeapARPinType
enum class EMagicLeapARPinType : uint8_t
{
	EMagicLeapARPinType__SingleUserSingleSession = 0,
	EMagicLeapARPinType__SingleUserMultiSession = 1,
	EMagicLeapARPinType__MultiUserMultiSession = 2,
	EMagicLeapARPinType__EMagicLeapARPinType_MAX = 3
};


// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8_t
{
	EMagicLeapAutoPinType__OnlyOnDataRestoration = 0,
	EMagicLeapAutoPinType__Always  = 1,
	EMagicLeapAutoPinType__Never   = 2,
	EMagicLeapAutoPinType__EMagicLeapAutoPinType_MAX = 3
};


// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class EMagicLeapPassableWorldError : uint8_t
{
	EMagicLeapPassableWorldError__None = 0,
	EMagicLeapPassableWorldError__LowMapQuality = 1,
	EMagicLeapPassableWorldError__UnableToLocalize = 2,
	EMagicLeapPassableWorldError__Unavailable = 3,
	EMagicLeapPassableWorldError__PrivilegeDenied = 4,
	EMagicLeapPassableWorldError__InvalidParam = 5,
	EMagicLeapPassableWorldError__UnspecifiedFailure = 6,
	EMagicLeapPassableWorldError__PrivilegeRequestPending = 7,
	EMagicLeapPassableWorldError__StartupPending = 8,
	EMagicLeapPassableWorldError__SharedWorldNotEnabled = 9,
	EMagicLeapPassableWorldError__NotImplemented = 10,
	EMagicLeapPassableWorldError__PinNotFound = 11,
	EMagicLeapPassableWorldError__EMagicLeapPassableWorldError_MAX = 12
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
