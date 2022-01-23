// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapIdentity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// EMagicLeapIdentityError        ResultCode                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FMagicLeapIdentityAttribute> AttributeValue                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UMagicLeapIdentity::RequestIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<struct FMagicLeapIdentityAttribute> AttributeValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature"));

	struct
	{
		EMagicLeapIdentityError        ResultCode;
		TArray<struct FMagicLeapIdentityAttribute> AttributeValue;
	} params;

	params.ResultCode = ResultCode;
	params.AttributeValue = AttributeValue;

	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<EMagicLeapIdentityKey>  RequestedAttributeList         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         ResultDelegate                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// EMagicLeapIdentityError        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValueAsync(TArray<EMagicLeapIdentityKey> RequestedAttributeList, const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync"));

	struct
	{
		TArray<EMagicLeapIdentityKey>  RequestedAttributeList;
		struct FScriptDelegate         ResultDelegate;
		EMagicLeapIdentityError        ReturnValue;
	} params;

	params.RequestedAttributeList = RequestedAttributeList;
	params.ResultDelegate = ResultDelegate;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<EMagicLeapIdentityKey>  RequestedAttributeList         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FMagicLeapIdentityAttribute> RequestedAttributeValues       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EMagicLeapIdentityError        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValue(TArray<EMagicLeapIdentityKey> RequestedAttributeList, TArray<struct FMagicLeapIdentityAttribute>* RequestedAttributeValues)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue"));

	struct
	{
		TArray<EMagicLeapIdentityKey>  RequestedAttributeList;
		TArray<struct FMagicLeapIdentityAttribute> RequestedAttributeValues;
		EMagicLeapIdentityError        ReturnValue;
	} params;

	params.RequestedAttributeList = RequestedAttributeList;

	UObject::ProcessEvent(fn, &params);

	if (RequestedAttributeValues != nullptr)
		*RequestedAttributeValues = params.RequestedAttributeValues;

	return params.ReturnValue;
}


// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// EMagicLeapIdentityError        ResultCode                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<EMagicLeapIdentityKey>  AttributesUpdatedSuccessfully  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UMagicLeapIdentity::ModifyIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey> AttributesUpdatedSuccessfully)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature"));

	struct
	{
		EMagicLeapIdentityError        ResultCode;
		TArray<EMagicLeapIdentityKey>  AttributesUpdatedSuccessfully;
	} params;

	params.ResultCode = ResultCode;
	params.AttributesUpdatedSuccessfully = AttributesUpdatedSuccessfully;

	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         ResultDelegate                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMagicLeapIdentity::GetAllAvailableAttributesAsync(const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync"));

	struct
	{
		struct FScriptDelegate         ResultDelegate;
	} params;

	params.ResultDelegate = ResultDelegate;

	UObject::ProcessEvent(fn, &params);
}


// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<EMagicLeapIdentityKey>  AvailableAttributes            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EMagicLeapIdentityError        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapIdentityError UMagicLeapIdentity::GetAllAvailableAttributes(TArray<EMagicLeapIdentityKey>* AvailableAttributes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes"));

	struct
	{
		TArray<EMagicLeapIdentityKey>  AvailableAttributes;
		EMagicLeapIdentityError        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AvailableAttributes != nullptr)
		*AvailableAttributes = params.AvailableAttributes;

	return params.ReturnValue;
}


// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// EMagicLeapIdentityError        ResultCode                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<EMagicLeapIdentityKey>  AvailableAttributes            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UMagicLeapIdentity::AvailableIdentityAttributesDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey> AvailableAttributes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature"));

	struct
	{
		EMagicLeapIdentityError        ResultCode;
		TArray<EMagicLeapIdentityKey>  AvailableAttributes;
	} params;

	params.ResultCode = ResultCode;
	params.AvailableAttributes = AvailableAttributes;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
