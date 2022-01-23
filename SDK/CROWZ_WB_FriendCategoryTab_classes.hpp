#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_FriendCategoryTab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_FriendCategoryTab.WB_FriendCategoryTab_C
// 0x0000 (0x06C8 - 0x06C8)
class UWB_FriendCategoryTab_C : public UCrowWidgetIconToggleButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_FriendCategoryTab.WB_FriendCategoryTab_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
