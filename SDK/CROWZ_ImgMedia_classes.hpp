#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_ImgMedia_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ImgMedia.ImgMediaSource
// 0x0028 (0x00B0 - 0x0088)
class UImgMediaSource : public UBaseMediaSource
{
public:
	struct FFrameRate                                  FrameRateOverride;                                        // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ProxyOverride;                                            // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDirectoryPath                              SequencePath;                                             // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ImgMedia.ImgMediaSource"));
		return ptr;
	}


	void SetSequencePath(const struct FString& Path);
	struct FString GetSequencePath();
	void GetProxies(TArray<struct FString>* OutProxies);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
