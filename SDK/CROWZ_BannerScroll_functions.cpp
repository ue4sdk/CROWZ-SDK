// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BannerScroll_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BannerScroll.BannerScroll_C.MoveBanner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            BannerIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBannerScroll_C::MoveBanner(int BannerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BannerScroll.BannerScroll_C.MoveBanner"));

	struct
	{
		int                            BannerIndex;
	} params;

	params.BannerIndex = BannerIndex;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
