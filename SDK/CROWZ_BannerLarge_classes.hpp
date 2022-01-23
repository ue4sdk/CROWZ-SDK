#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BannerLarge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BannerLarge.BannerLarge_C
// 0x0010 (0x03A0 - 0x0390)
class UBannerLarge_C : public UCrowBannerWidget
{
public:
	class UBannerIndicatorBtn_C*                       BannerIndicatorBtn;                                       // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UBannerItemLarge_C*                          BannerItem;                                               // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass BannerLarge.BannerLarge_C"));
		return ptr;
	}


	void MoveBanner(int BannerIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
