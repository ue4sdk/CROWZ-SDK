#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WebBrowserWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WebBrowserWidget.WebBrowser
// 0x0048 (0x0150 - 0x0108)
class UWebBrowser : public UWidget
{
public:
	struct FMulticastScriptDelegate                    OnUrlChanged;                                             // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnBeforePopup;                                            // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FString                                     InitialURL;                                               // 0x0128(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bSupportsTransparency;                                    // 0x0138(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0139(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WebBrowserWidget.WebBrowser"));
		return ptr;
	}


	void OnUrlChanged__DelegateSignature(const struct FText& Text);
	void OnBeforePopup__DelegateSignature(const struct FString& URL, const struct FString& Frame);
	void LoadURL(const struct FString& NewURL);
	void LoadString(const struct FString& Contents, const struct FString& DummyURL);
	struct FString GetUrl();
	struct FText GetTitleText();
	void ExecuteJavascript(const struct FString& ScriptText);
};


// Class WebBrowserWidget.WebBrowserAssetManager
// 0x0050 (0x0078 - 0x0028)
class UWebBrowserAssetManager : public UObject
{
public:
	TSoftObjectPtr<class UMaterial>                    DefaultMaterial;                                          // 0x0028(0x0028) (CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WebBrowserWidget.WebBrowserAssetManager"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
