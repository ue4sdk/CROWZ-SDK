// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_AndroidPermission_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 permission                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAndroidPermissionFunctionLibrary::CheckPermission(const struct FString& permission)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission"));

	struct
	{
		struct FString                 permission;
		bool                           ReturnValue;
	} params;

	params.permission = permission;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FString>         Permissions                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UAndroidPermissionCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAndroidPermissionCallbackProxy* UAndroidPermissionFunctionLibrary::AcquirePermissions(TArray<struct FString> Permissions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions"));

	struct
	{
		TArray<struct FString>         Permissions;
		class UAndroidPermissionCallbackProxy* ReturnValue;
	} params;

	params.Permissions = Permissions;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
