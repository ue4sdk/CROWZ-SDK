// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MobilePatchingUtils_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MobilePatchingUtils.MobileInstalledContent.Mount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            PakOrder                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 MountPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMobileInstalledContent::Mount(int PakOrder, const struct FString& MountPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobileInstalledContent.Mount"));

	struct
	{
		int                            PakOrder;
		struct FString                 MountPoint;
		bool                           ReturnValue;
	} params;

	params.PakOrder = PakOrder;
	params.MountPoint = MountPoint;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UMobileInstalledContent::GetInstalledContentSize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UMobileInstalledContent::GetDiskFreeSpace()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.StartInstall
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnSucceeded                    (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnFailed                       (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMobilePendingContent::StartInstall(const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.StartInstall"));

	struct
	{
		struct FScriptDelegate         OnSucceeded;
		struct FScriptDelegate         OnFailed;
	} params;

	params.OnSucceeded = OnSucceeded;
	params.OnFailed = OnFailed;

	UObject::ProcessEvent(fn, &params);
}


// Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UMobilePendingContent::GetTotalDownloadedSize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UMobilePendingContent::GetRequiredDiskSpace()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UMobilePendingContent::GetInstallProgress()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UMobilePendingContent::GetDownloadStatusText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UMobilePendingContent::GetDownloadSpeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UMobilePendingContent::GetDownloadSize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 RemoteManifestURL              (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 CloudURL                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InstallDirectory               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnSucceeded                    (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnFailed                       (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMobilePatchingLibrary::RequestContent(const struct FString& RemoteManifestURL, const struct FString& CloudURL, const struct FString& InstallDirectory, const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent"));

	struct
	{
		struct FString                 RemoteManifestURL;
		struct FString                 CloudURL;
		struct FString                 InstallDirectory;
		struct FScriptDelegate         OnSucceeded;
		struct FScriptDelegate         OnFailed;
	} params;

	params.RemoteManifestURL = RemoteManifestURL;
	params.CloudURL = CloudURL;
	params.InstallDirectory = InstallDirectory;
	params.OnSucceeded = OnSucceeded;
	params.OnFailed = OnFailed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMobilePatchingLibrary::HasActiveWiFiConnection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection"));

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FString> UMobilePatchingLibrary::GetSupportedPlatformNames()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames"));

	struct
	{
		TArray<struct FString>         ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 InstallDirectory               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMobileInstalledContent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMobileInstalledContent* UMobilePatchingLibrary::GetInstalledContent(const struct FString& InstallDirectory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent"));

	struct
	{
		struct FString                 InstallDirectory;
		class UMobileInstalledContent* ReturnValue;
	} params;

	params.InstallDirectory = InstallDirectory;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UMobilePatchingLibrary::GetActiveDeviceProfileName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
