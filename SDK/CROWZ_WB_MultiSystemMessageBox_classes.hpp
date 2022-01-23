#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_MultiSystemMessageBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_MultiSystemMessageBox.WB_MultiSystemMessageBox_C
// 0x0000 (0x0378 - 0x0378)
class UWB_MultiSystemMessageBox_C : public UCrowMultiSystemMessageBoxWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WB_MultiSystemMessageBox.WB_MultiSystemMessageBox_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
