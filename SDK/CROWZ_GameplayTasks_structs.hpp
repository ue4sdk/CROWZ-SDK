#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Basic.hpp"
#include "CROWZ_GameplayTasks_enums.hpp"
#include "CROWZ_Engine_classes.hpp"
#include "CROWZ_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTasks.GameplayResourceSet
// 0x0002
struct FGameplayResourceSet
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
