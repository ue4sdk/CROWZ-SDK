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

// Enum GameAnalytics.EGAAdError
enum class EGAAdError : uint8_t
{
	EGAAdError__undefined          = 0,
	EGAAdError__unknown            = 1,
	EGAAdError__offline            = 2,
	EGAAdError__nofill             = 3,
	EGAAdError__internalerror      = 4,
	EGAAdError__invalidrequest     = 5,
	EGAAdError__unabletoprecache   = 6,
	EGAAdError__EGAAdError_MAX     = 7
};


// Enum GameAnalytics.EGAAdType
enum class EGAAdType : uint8_t
{
	EGAAdType__undefined           = 0,
	EGAAdType__video               = 1,
	EGAAdType__rewardedvideo       = 2,
	EGAAdType__playable            = 3,
	EGAAdType__interstitial        = 4,
	EGAAdType__offerwall           = 5,
	EGAAdType__banner              = 6,
	EGAAdType__EGAAdType_MAX       = 7
};


// Enum GameAnalytics.EGAAdAction
enum class EGAAdAction : uint8_t
{
	EGAAdAction__undefined         = 0,
	EGAAdAction__clicked           = 1,
	EGAAdAction__show              = 2,
	EGAAdAction__failedshow        = 3,
	EGAAdAction__rewardreceived    = 4,
	EGAAdAction__request           = 5,
	EGAAdAction__loaded            = 6,
	EGAAdAction__EGAAdAction_MAX   = 7
};


// Enum GameAnalytics.EGAErrorSeverity
enum class EGAErrorSeverity : uint8_t
{
	EGAErrorSeverity__undefined    = 0,
	EGAErrorSeverity__debug        = 1,
	EGAErrorSeverity__info         = 2,
	EGAErrorSeverity__warning      = 3,
	EGAErrorSeverity__error        = 4,
	EGAErrorSeverity__critical     = 5,
	EGAErrorSeverity__EGAErrorSeverity_MAX = 6
};


// Enum GameAnalytics.EGAProgressionStatus
enum class EGAProgressionStatus : uint8_t
{
	EGAProgressionStatus__undefined = 0,
	EGAProgressionStatus__start    = 1,
	EGAProgressionStatus__complete = 2,
	EGAProgressionStatus__fail     = 3,
	EGAProgressionStatus__EGAProgressionStatus_MAX = 4
};


// Enum GameAnalytics.EGAResourceFlowType
enum class EGAResourceFlowType : uint8_t
{
	EGAResourceFlowType__undefined = 0,
	EGAResourceFlowType__source    = 1,
	EGAResourceFlowType__sink      = 2,
	EGAResourceFlowType__EGAResourceFlowType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
