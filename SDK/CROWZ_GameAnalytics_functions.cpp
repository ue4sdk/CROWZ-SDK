// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_GameAnalytics_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameAnalytics.GameAnalytics.SetCustomDimension03
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 CustomDimension                (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::SetCustomDimension03(const struct FString& CustomDimension)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.SetCustomDimension03"));

	struct
	{
		struct FString                 CustomDimension;
	} params;

	params.CustomDimension = CustomDimension;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.SetCustomDimension02
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 CustomDimension                (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::SetCustomDimension02(const struct FString& CustomDimension)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.SetCustomDimension02"));

	struct
	{
		struct FString                 CustomDimension;
	} params;

	params.CustomDimension = CustomDimension;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.SetCustomDimension01
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 CustomDimension                (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::SetCustomDimension01(const struct FString& CustomDimension)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.SetCustomDimension01"));

	struct
	{
		struct FString                 CustomDimension;
	} params;

	params.CustomDimension = CustomDimension;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.OnQuit
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UGameAnalytics::OnQuit()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.OnQuit"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.IsRemoteConfigsReady
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameAnalytics::IsRemoteConfigsReady()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.IsRemoteConfigsReady"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameAnalytics.GameAnalytics.GetRemoteConfigsValueAsStringWithDefaultValue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DefaultValue                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UGameAnalytics::GetRemoteConfigsValueAsStringWithDefaultValue(const struct FString& Key, const struct FString& DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.GetRemoteConfigsValueAsStringWithDefaultValue"));

	struct
	{
		struct FString                 Key;
		struct FString                 DefaultValue;
		struct FString                 ReturnValue;
	} params;

	params.Key = Key;
	params.DefaultValue = DefaultValue;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameAnalytics.GameAnalytics.GetRemoteConfigsValueAsString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UGameAnalytics::GetRemoteConfigsValueAsString(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.GetRemoteConfigsValueAsString"));

	struct
	{
		struct FString                 Key;
		struct FString                 ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameAnalytics.GameAnalytics.GetRemoteConfigsContentAsString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UGameAnalytics::GetRemoteConfigsContentAsString()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.GetRemoteConfigsContentAsString"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameAnalytics.GameAnalytics.GetABTestingVariantId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UGameAnalytics::GetABTestingVariantId()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.GetABTestingVariantId"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameAnalytics.GameAnalytics.GetABTestingId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UGameAnalytics::GetABTestingId()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.GetABTestingId"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameAnalytics.GameAnalytics.AddResourceEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAResourceFlowType            FlowType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Currency                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Amount                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ItemType                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ItemId                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddResourceEvent(EGAResourceFlowType FlowType, const struct FString& Currency, float Amount, const struct FString& ItemType, const struct FString& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddResourceEvent"));

	struct
	{
		EGAResourceFlowType            FlowType;
		struct FString                 Currency;
		float                          Amount;
		struct FString                 ItemType;
		struct FString                 ItemId;
	} params;

	params.FlowType = FlowType;
	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoThreeAndScore
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAProgressionStatus           ProgressionStatus              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Progression01                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Progression02                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Progression03                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Score                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddProgressionEventWithOneTwoThreeAndScore(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, const struct FString& Progression03, int Score)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoThreeAndScore"));

	struct
	{
		EGAProgressionStatus           ProgressionStatus;
		struct FString                 Progression01;
		struct FString                 Progression02;
		struct FString                 Progression03;
		int                            Score;
	} params;

	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;
	params.Progression03 = Progression03;
	params.Score = Score;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndThree
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAProgressionStatus           ProgressionStatus              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Progression01                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Progression02                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Progression03                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddProgressionEventWithOneTwoAndThree(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, const struct FString& Progression03)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndThree"));

	struct
	{
		EGAProgressionStatus           ProgressionStatus;
		struct FString                 Progression01;
		struct FString                 Progression02;
		struct FString                 Progression03;
	} params;

	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;
	params.Progression03 = Progression03;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndScore
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAProgressionStatus           ProgressionStatus              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Progression01                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Progression02                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Score                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddProgressionEventWithOneTwoAndScore(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, int Score)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndScore"));

	struct
	{
		EGAProgressionStatus           ProgressionStatus;
		struct FString                 Progression01;
		struct FString                 Progression02;
		int                            Score;
	} params;

	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;
	params.Score = Score;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndTwo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAProgressionStatus           ProgressionStatus              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Progression01                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Progression02                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddProgressionEventWithOneAndTwo(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndTwo"));

	struct
	{
		EGAProgressionStatus           ProgressionStatus;
		struct FString                 Progression01;
		struct FString                 Progression02;
	} params;

	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndScore
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAProgressionStatus           ProgressionStatus              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Progression01                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Score                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddProgressionEventWithOneAndScore(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, int Score)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndScore"));

	struct
	{
		EGAProgressionStatus           ProgressionStatus;
		struct FString                 Progression01;
		int                            Score;
	} params;

	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Score = Score;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOne
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAProgressionStatus           ProgressionStatus              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Progression01                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddProgressionEventWithOne(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOne"));

	struct
	{
		EGAProgressionStatus           ProgressionStatus;
		struct FString                 Progression01;
	} params;

	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddErrorEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAErrorSeverity               Severity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddErrorEvent(EGAErrorSeverity Severity, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddErrorEvent"));

	struct
	{
		EGAErrorSeverity               Severity;
		struct FString                 Message;
	} params;

	params.Severity = Severity;
	params.Message = Message;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddDesignEventWithValue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 EventId                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddDesignEventWithValue(const struct FString& EventId, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddDesignEventWithValue"));

	struct
	{
		struct FString                 EventId;
		float                          Value;
	} params;

	params.EventId = EventId;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddDesignEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 EventId                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddDesignEvent(const struct FString& EventId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddDesignEvent"));

	struct
	{
		struct FString                 EventId;
	} params;

	params.EventId = EventId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddBusinessEventIOS
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Currency                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Amount                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ItemType                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ItemId                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 CartType                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Receipt                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddBusinessEventIOS(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType, const struct FString& Receipt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddBusinessEventIOS"));

	struct
	{
		struct FString                 Currency;
		int                            Amount;
		struct FString                 ItemType;
		struct FString                 ItemId;
		struct FString                 CartType;
		struct FString                 Receipt;
	} params;

	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;
	params.CartType = CartType;
	params.Receipt = Receipt;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddBusinessEventAndroid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Currency                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Amount                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ItemType                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ItemId                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 CartType                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Receipt                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Signature                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddBusinessEventAndroid(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType, const struct FString& Receipt, const struct FString& Signature)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddBusinessEventAndroid"));

	struct
	{
		struct FString                 Currency;
		int                            Amount;
		struct FString                 ItemType;
		struct FString                 ItemId;
		struct FString                 CartType;
		struct FString                 Receipt;
		struct FString                 Signature;
	} params;

	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;
	params.CartType = CartType;
	params.Receipt = Receipt;
	params.Signature = Signature;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddBusinessEventAndAutoFetchReceipt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Currency                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Amount                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ItemType                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ItemId                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 CartType                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddBusinessEventAndAutoFetchReceipt(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddBusinessEventAndAutoFetchReceipt"));

	struct
	{
		struct FString                 Currency;
		int                            Amount;
		struct FString                 ItemType;
		struct FString                 ItemId;
		struct FString                 CartType;
	} params;

	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;
	params.CartType = CartType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddBusinessEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Currency                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Amount                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ItemType                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ItemId                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 CartType                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddBusinessEvent(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemId, const struct FString& CartType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddBusinessEvent"));

	struct
	{
		struct FString                 Currency;
		int                            Amount;
		struct FString                 ItemType;
		struct FString                 ItemId;
		struct FString                 CartType;
	} params;

	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemId = ItemId;
	params.CartType = CartType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddAdEventWithNoAdReason
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAAdAction                    Action                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EGAAdType                      adType                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 adSdkName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 adPlacement                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EGAAdError                     noAdReason                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddAdEventWithNoAdReason(EGAAdAction Action, EGAAdType adType, const struct FString& adSdkName, const struct FString& adPlacement, EGAAdError noAdReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddAdEventWithNoAdReason"));

	struct
	{
		EGAAdAction                    Action;
		EGAAdType                      adType;
		struct FString                 adSdkName;
		struct FString                 adPlacement;
		EGAAdError                     noAdReason;
	} params;

	params.Action = Action;
	params.adType = adType;
	params.adSdkName = adSdkName;
	params.adPlacement = adPlacement;
	params.noAdReason = noAdReason;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddAdEventWithDuration
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAAdAction                    Action                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EGAAdType                      adType                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 adSdkName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 adPlacement                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int64_t                        Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddAdEventWithDuration(EGAAdAction Action, EGAAdType adType, const struct FString& adSdkName, const struct FString& adPlacement, int64_t Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddAdEventWithDuration"));

	struct
	{
		EGAAdAction                    Action;
		EGAAdType                      adType;
		struct FString                 adSdkName;
		struct FString                 adPlacement;
		int64_t                        Duration;
	} params;

	params.Action = Action;
	params.adType = adType;
	params.adSdkName = adSdkName;
	params.adPlacement = adPlacement;
	params.Duration = Duration;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddAdEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAAdAction                    Action                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EGAAdType                      adType                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 adSdkName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 adPlacement                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameAnalytics::AddAdEvent(EGAAdAction Action, EGAAdType adType, const struct FString& adSdkName, const struct FString& adPlacement)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameAnalytics.GameAnalytics.AddAdEvent"));

	struct
	{
		EGAAdAction                    Action;
		EGAAdType                      adType;
		struct FString                 adSdkName;
		struct FString                 adPlacement;
	} params;

	params.Action = Action;
	params.adType = adType;
	params.adSdkName = adSdkName;
	params.adPlacement = adPlacement;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
