#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Basic.hpp"
#include "CROWZ_CoreUObject_classes.hpp"
#include "CROWZ_Engine_classes.hpp"
#include "CROWZ_MagicLeapARPin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
// 0x0010
struct FMagicLeapSharedWorldSharedData
{
	TArray<struct FGuid>                               PinIDs;                                                   // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
// 0x0010
struct FMagicLeapSharedWorldAlignmentTransforms
{
	TArray<struct FTransform>                          AlignmentTransforms;                                      // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldPinData
// 0x0024
struct FMagicLeapSharedWorldPinData
{
	struct FGuid                                       PinId;                                                    // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMagicLeapARPinState                        PinState;                                                 // 0x0010(0x0014) (CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
// 0x0010
struct FMagicLeapSharedWorldLocalData
{
	TArray<struct FMagicLeapSharedWorldPinData>        LocalPins;                                                // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
