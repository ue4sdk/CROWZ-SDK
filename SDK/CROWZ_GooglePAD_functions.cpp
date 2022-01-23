// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_GooglePAD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGooglePADErrorCode            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::ShowCellularDataConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation"));

	struct
	{
		EGooglePADErrorCode            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EGooglePADErrorCode            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::RequestRemoval(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval"));

	struct
	{
		struct FString                 Name;
		EGooglePADErrorCode            ReturnValue;
	} params;

	params.Name = Name;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FString>         AssetPacks                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EGooglePADErrorCode            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::RequestInfo(TArray<struct FString> AssetPacks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.RequestInfo"));

	struct
	{
		TArray<struct FString>         AssetPacks;
		EGooglePADErrorCode            ReturnValue;
	} params;

	params.AssetPacks = AssetPacks;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FString>         AssetPacks                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EGooglePADErrorCode            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::RequestDownload(TArray<struct FString> AssetPacks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.RequestDownload"));

	struct
	{
		TArray<struct FString>         AssetPacks;
		EGooglePADErrorCode            ReturnValue;
	} params;

	params.AssetPacks = AssetPacks;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            State                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGooglePADFunctionLibrary::ReleaseDownloadState(int State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState"));

	struct
	{
		int                            State;
	} params;

	params.State = State;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Location                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGooglePADFunctionLibrary::ReleaseAssetPackLocation(int Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation"));

	struct
	{
		int                            Location;
	} params;

	params.Location = Location;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            State                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UGooglePADFunctionLibrary::GetTotalBytesToDownload(int State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload"));

	struct
	{
		int                            State;
		int                            ReturnValue;
	} params;

	params.State = State;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Location                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EGooglePADStorageMethod        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EGooglePADStorageMethod UGooglePADFunctionLibrary::GetStorageMethod(int Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod"));

	struct
	{
		int                            Location;
		EGooglePADStorageMethod        ReturnValue;
	} params;

	params.Location = Location;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EGooglePADCellularDataConfirmStatus Status                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EGooglePADErrorCode            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus* Status)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus"));

	struct
	{
		EGooglePADCellularDataConfirmStatus Status;
		EGooglePADErrorCode            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Status != nullptr)
		*Status = params.Status;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            State                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EGooglePADDownloadStatus       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EGooglePADDownloadStatus UGooglePADFunctionLibrary::GetDownloadStatus(int State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus"));

	struct
	{
		int                            State;
		EGooglePADDownloadStatus       ReturnValue;
	} params;

	params.State = State;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            State                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EGooglePADErrorCode            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::GetDownloadState(const struct FString& Name, int* State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState"));

	struct
	{
		struct FString                 Name;
		int                            State;
		EGooglePADErrorCode            ReturnValue;
	} params;

	params.Name = Name;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (State != nullptr)
		*State = params.State;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            State                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UGooglePADFunctionLibrary::GetBytesDownloaded(int State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded"));

	struct
	{
		int                            State;
		int                            ReturnValue;
	} params;

	params.State = State;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Location                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UGooglePADFunctionLibrary::GetAssetsPath(int Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath"));

	struct
	{
		int                            Location;
		struct FString                 ReturnValue;
	} params;

	params.Location = Location;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EGooglePADErrorCode            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::GetAssetPackLocation(const struct FString& Name, int* Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation"));

	struct
	{
		struct FString                 Name;
		int                            Location;
		EGooglePADErrorCode            ReturnValue;
	} params;

	params.Name = Name;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Location != nullptr)
		*Location = params.Location;

	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FString>         AssetPacks                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// EGooglePADErrorCode            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EGooglePADErrorCode UGooglePADFunctionLibrary::CancelDownload(TArray<struct FString> AssetPacks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GooglePAD.GooglePADFunctionLibrary.CancelDownload"));

	struct
	{
		TArray<struct FString>         AssetPacks;
		EGooglePADErrorCode            ReturnValue;
	} params;

	params.AssetPacks = AssetPacks;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
