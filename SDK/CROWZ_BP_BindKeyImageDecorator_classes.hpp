#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_BindKeyImageDecorator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BindKeyImageDecorator.BP_BindKeyImageDecorator_C
// 0x0000 (0x0030 - 0x0030)
class UBP_BindKeyImageDecorator_C : public UCrowRichTextBlockImageDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BindKeyImageDecorator.BP_BindKeyImageDecorator_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
