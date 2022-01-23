// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapPrivileges_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EMagicLeapPrivilege            Privilege                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         ResultDelegate                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapPrivilegesFunctionLibrary::RequestPrivilegeAsync(EMagicLeapPrivilege Privilege, const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync"));

	struct
	{
		EMagicLeapPrivilege            Privilege;
		struct FScriptDelegate         ResultDelegate;
		bool                           ReturnValue;
	} params;

	params.Privilege = Privilege;
	params.ResultDelegate = ResultDelegate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMagicLeapPrivilege            Privilege                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapPrivilegesFunctionLibrary::RequestPrivilege(EMagicLeapPrivilege Privilege)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege"));

	struct
	{
		EMagicLeapPrivilege            Privilege;
		bool                           ReturnValue;
	} params;

	params.Privilege = Privilege;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMagicLeapPrivilege            Privilege                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapPrivilegesFunctionLibrary::CheckPrivilege(EMagicLeapPrivilege Privilege)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege"));

	struct
	{
		EMagicLeapPrivilege            Privilege;
		bool                           ReturnValue;
	} params;

	params.Privilege = Privilege;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
