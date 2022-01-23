#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_LuminRuntimeSettings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LuminRuntimeSettings.LuminRuntimeSettings
// 0x0120 (0x0148 - 0x0028)
class ULuminRuntimeSettings : public UObject
{
public:
	struct FString                                     PackageName;                                              // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ApplicationDisplayName;                                   // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ELuminFrameTimingHint                              FrameTimingHint;                                          // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bProtectedContent;                                        // 0x0049(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bManualCallToAppReady;                                    // 0x004A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseMobileRendering;                                      // 0x004B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseVulkan;                                               // 0x004C(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FFilePath                                   Certificate;                                              // 0x0050(0x0010) (CPF_Edit, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	struct FDirectoryPath                              IconModelPath;                                            // 0x0060(0x0010) (CPF_Edit, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	struct FDirectoryPath                              IconPortalPath;                                           // 0x0070(0x0010) (CPF_Edit, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	struct FLocalizedIconInfos                         LocalizedIconInfos;                                       // 0x0080(0x0010) (CPF_Edit, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	int                                                VersionCode;                                              // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinimumAPILevel;                                          // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<ELuminPrivilege>                            AppPrivileges;                                            // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	TArray<struct FLuminComponentSubElement>           ExtraComponentSubElements;                                // 0x00A8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	TArray<struct FLuminComponentElement>              ExtraComponentElements;                                   // 0x00B8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SpatializationPlugin;                                     // 0x00C8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ReverbPlugin;                                             // 0x00D8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OcclusionPlugin;                                          // 0x00E8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SoundCueCookQualityIndex;                                 // 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRemoveDebugInfo;                                         // 0x00FC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	struct FDirectoryPath                              VulkanValidationLayerLibs;                                // 0x0100(0x0010) (CPF_Edit, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	bool                                               bFrameVignette;                                           // 0x0110(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	TArray<struct FLocalizedAppName>                   LocalizedAppNames;                                        // 0x0118(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LuminRuntimeSettings.LuminRuntimeSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
