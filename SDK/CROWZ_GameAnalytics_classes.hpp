#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_GameAnalytics_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameAnalytics.GameAnalytics
// 0x0000 (0x0028 - 0x0028)
class UGameAnalytics : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameAnalytics.GameAnalytics"));
		return ptr;
	}


	static void SetCustomDimension03(const struct FString& CustomDimension);
	static void SetCustomDimension02(const struct FString& CustomDimension);
	static void SetCustomDimension01(const struct FString& CustomDimension);
	static void OnQuit();
	static bool IsRemoteConfigsReady();
	static struct FString GetRemoteConfigsValueAsStringWithDefaultValue(const struct FString& Key, const struct FString& DefaultValue);
	static struct FString GetRemoteConfigsValueAsString(const struct FString& Key);
	static struct FString GetRemoteConfigsContentAsString();
	static struct FString GetABTestingVariantId();
	static struct FString GetABTestingId();
	static void AddResourceEvent(EGAResourceFlowType FlowType, const struct FString& Currency, float Amount, const struct FString& ItemType, const struct FString& ItemId);
	static void AddProgressionEventWithOneTwoThreeAndScore(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, const struct FString& Progression03, int Score);
	static void AddProgressionEventWithOneTwoAndThree(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, const struct FString& Progression03);
	static void AddProgressionEventWithOneTwoAndScore(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, int Score);
	static void AddProgressionEventWithOneAndTwo(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02);
	static void AddProgressionEventWithOneAndScore(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, int Score);
	static void AddProgressionEventWithOne(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01);
	static void AddErrorEvent(EGAErrorSeverity Severity, const struct FString& Message);
	static void AddDesignEventWithValue(const struct FString& EventId, float Value);
	static void AddDesignEvent(const struct FString& EventId);
	static void AddBusinessEventIOS(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType, const struct FString& Receipt);
	static void AddBusinessEventAndroid(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType, const struct FString& Receipt, const struct FString& Signature);
	static void AddBusinessEventAndAutoFetchReceipt(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType);
	static void AddBusinessEvent(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType);
	static void AddAdEventWithNoAdReason(EGAAdAction Action, EGAAdType adType, const struct FString& adSdkName, const struct FString& adPlacement, EGAAdError noAdReason);
	static void AddAdEventWithDuration(EGAAdAction Action, EGAAdType adType, const struct FString& adSdkName, const struct FString& adPlacement, int64_t Duration);
	static void AddAdEvent(EGAAdAction Action, EGAAdType adType, const struct FString& adSdkName, const struct FString& adPlacement);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
