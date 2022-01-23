#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_AppleImageUtils_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// 0x0060 (0x0088 - 0x0028)
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFailure;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
	struct FAppleImageUtilsImageConversionResult       ConversionResult;                                         // 0x0060(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy"));
		return ptr;
	}


	static class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
	static class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
	static class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(class UTexture* SourceImage, int Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
	static class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(class UTexture* SourceImage, int Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
};


// Class AppleImageUtils.AppleImageInterface
// 0x0000 (0x0028 - 0x0028)
class UAppleImageInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AppleImageUtils.AppleImageInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
