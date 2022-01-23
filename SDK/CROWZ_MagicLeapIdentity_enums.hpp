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

// Enum MagicLeapIdentity.EMagicLeapIdentityKey
enum class EMagicLeapIdentityKey : uint8_t
{
	EMagicLeapIdentityKey__GivenName = 0,
	EMagicLeapIdentityKey__FamilyName = 1,
	EMagicLeapIdentityKey__Email   = 2,
	EMagicLeapIdentityKey__Bio     = 3,
	EMagicLeapIdentityKey__PhoneNumber = 4,
	EMagicLeapIdentityKey__Avatar2D = 5,
	EMagicLeapIdentityKey__Avatar3D = 6,
	EMagicLeapIdentityKey__Unknown = 7,
	EMagicLeapIdentityKey__EMagicLeapIdentityKey_MAX = 8
};


// Enum MagicLeapIdentity.EMagicLeapIdentityError
enum class EMagicLeapIdentityError : uint8_t
{
	EMagicLeapIdentityError__Ok    = 0,
	EMagicLeapIdentityError__InvalidParam = 1,
	EMagicLeapIdentityError__AllocFailed = 2,
	EMagicLeapIdentityError__PrivilegeDenied = 3,
	EMagicLeapIdentityError__FailedToConnectToLocalService = 4,
	EMagicLeapIdentityError__FailedToConnectToCloudService = 5,
	EMagicLeapIdentityError__CloudAuthentication = 6,
	EMagicLeapIdentityError__InvalidInformationFromCloud = 7,
	EMagicLeapIdentityError__NotLoggedIn = 8,
	EMagicLeapIdentityError__ExpiredCredentials = 9,
	EMagicLeapIdentityError__FailedToGetUserProfile = 10,
	EMagicLeapIdentityError__Unauthorized = 11,
	EMagicLeapIdentityError__CertificateError = 12,
	EMagicLeapIdentityError__RejectedByCloud = 13,
	EMagicLeapIdentityError__AlreadyLoggedIn = 14,
	EMagicLeapIdentityError__ModifyIsNotSupported = 15,
	EMagicLeapIdentityError__NetworkError = 16,
	EMagicLeapIdentityError__UnspecifiedFailure = 17,
	EMagicLeapIdentityError__EMagicLeapIdentityError_MAX = 18
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
