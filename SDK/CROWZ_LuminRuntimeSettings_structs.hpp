#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Basic.hpp"
#include "CROWZ_LuminRuntimeSettings_enums.hpp"
#include "CROWZ_Engine_classes.hpp"
#include "CROWZ_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LuminRuntimeSettings.LocalizedIconInfo
// 0x0030
struct FLocalizedIconInfo
{
	struct FString                                     LanguageCode;                                             // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDirectoryPath                              IconModelPath;                                            // 0x0010(0x0010) (CPF_Edit, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	struct FDirectoryPath                              IconPortalPath;                                           // 0x0020(0x0010) (CPF_Edit, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct LuminRuntimeSettings.LocalizedIconInfos
// 0x0010
struct FLocalizedIconInfos
{
	TArray<struct FLocalizedIconInfo>                  IconData;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
// 0x0018
struct FLuminComponentSubElement
{
	ELuminComponentSubElementType                      ElementType;                                              // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct LuminRuntimeSettings.LuminComponentElement
// 0x0048
struct FLuminComponentElement
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     VisibleName;                                              // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ExecutableName;                                           // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ELuminComponentType                                ComponentType;                                            // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<struct FLuminComponentSubElement>           ExtraComponentSubElements;                                // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct LuminRuntimeSettings.LocalizedAppName
// 0x0020
struct FLocalizedAppName
{
	struct FString                                     LanguageCode;                                             // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     AppName;                                                  // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
