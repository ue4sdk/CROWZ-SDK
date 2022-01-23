#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Basic.hpp"
#include "CROWZ_SteamVRInputDevice_enums.hpp"
#include "CROWZ_CoreUObject_classes.hpp"
#include "CROWZ_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SteamVRInputDevice.SteamVRAction
// 0x0028
struct FSteamVRAction
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Path;                                                     // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct SteamVRInputDevice.SteamVRActionSet
// 0x0018
struct FSteamVRActionSet
{
	struct FString                                     Path;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct SteamVRInputDevice.SteamVRInputOriginInfo
// 0x0028
struct FSteamVRInputOriginInfo
{
	int                                                TrackedDeviceIndex;                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     RenderModelComponentName;                                 // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     TrackedDeviceModel;                                       // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SteamVRInputDevice.SteamVRInputBindingInfo
// 0x0020
struct FSteamVRInputBindingInfo
{
	struct FName                                       DevicePathName;                                           // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       InputPathName;                                            // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       ModeName;                                                 // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SlotName;                                                 // 0x0018(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SteamVRInputDevice.SteamVRSkeletonTransform
// 0x05D0
struct FSteamVRSkeletonTransform
{
	struct FTransform                                  Root;                                                     // 0x0000(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  wrist;                                                    // 0x0030(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Thumb_1;                                                  // 0x0060(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Thumb_2;                                                  // 0x0090(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Thumb_3;                                                  // 0x00C0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Thumb_4;                                                  // 0x00F0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Index_1;                                                  // 0x0120(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Index_2;                                                  // 0x0150(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Index_3;                                                  // 0x0180(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Index_4;                                                  // 0x01B0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Index_5;                                                  // 0x01E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Middle_1;                                                 // 0x0210(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Middle_2;                                                 // 0x0240(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Middle_3;                                                 // 0x0270(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Middle_4;                                                 // 0x02A0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Middle_5;                                                 // 0x02D0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Ring_1;                                                   // 0x0300(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Ring_2;                                                   // 0x0330(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Ring_3;                                                   // 0x0360(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Ring_4;                                                   // 0x0390(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Ring_5;                                                   // 0x03C0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Pinky_1;                                                  // 0x03F0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Pinky_2;                                                  // 0x0420(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Pinky_3;                                                  // 0x0450(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Pinky_4;                                                  // 0x0480(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Pinky_5;                                                  // 0x04B0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Aux_Thumb;                                                // 0x04E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Aux_Index;                                                // 0x0510(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Aux_Middle;                                               // 0x0540(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Aux_Ring;                                                 // 0x0570(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Aux_Pinky;                                                // 0x05A0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SteamVRInputDevice.SteamVRFingerCurls
// 0x0014
struct FSteamVRFingerCurls
{
	float                                              Thumb;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Index;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Middle;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Ring;                                                     // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Pinky;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SteamVRInputDevice.SteamVRFingerSplays
// 0x0010
struct FSteamVRFingerSplays
{
	float                                              Thumb_Index;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Index_Middle;                                             // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Middle_Ring;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Ring_Pinky;                                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SteamVRInputDevice.UE4RetargettingRefs
// 0x0028
struct FUE4RetargettingRefs
{
	bool                                               bIsInitialized;                                           // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsRightHanded;                                           // 0x0001(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector                                     KnuckleAverageMS_UE4;                                     // 0x0004(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     WristSideDirectionLS_UE4;                                 // 0x0010(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     WristForwardLS_UE4;                                       // 0x001C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SteamVRInputDevice.AnimNode_SteamVRInputAnimPose
// 0x0610 (0x0620 - 0x0010)
struct FAnimNode_SteamVRInputAnimPose : public FAnimNode_Base
{
	EMotionRange                                       MotionRange;                                              // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EHand                                              hand;                                                     // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EHandSkeleton                                      HandSkeleton;                                             // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Mirror;                                                   // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FSteamVRSkeletonTransform                   SteamVRSkeletalTransform;                                 // 0x0020(0x05D0) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FUE4RetargettingRefs                        UE4RetargettingRefs;                                      // 0x05F0(0x0028) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0618(0x0008) MISSED OFFSET
};

// ScriptStruct SteamVRInputDevice.AnimNode_SteamVRSetWristTransform
// 0x0030 (0x0040 - 0x0010)
struct FAnimNode_SteamVRSetWristTransform : public FAnimNode_Base
{
	struct FPoseLink                                   ReferencePose;                                            // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	EHandSkeleton                                      HandSkeleton;                                             // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FPoseLink                                   TargetPose;                                               // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
