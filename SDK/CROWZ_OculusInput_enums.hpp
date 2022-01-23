#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OculusInput.ESystemGestureBehavior
enum class ESystemGestureBehavior : uint8_t
{
	ESystemGestureBehavior__None   = 0,
	ESystemGestureBehavior__SwapMaterial = 1,
	ESystemGestureBehavior__ESystemGestureBehavior_MAX = 2
};


// Enum OculusInput.EConfidenceBehavior
enum class EConfidenceBehavior : uint8_t
{
	EConfidenceBehavior__None      = 0,
	EConfidenceBehavior__HideActor = 1,
	EConfidenceBehavior__EConfidenceBehavior_MAX = 2
};


// Enum OculusInput.EBone
enum class EBone : uint8_t
{
	EBone__Wrist_Root              = 0,
	EBone__Hand_Start              = 1,
	EBone__Forearm_Stub            = 2,
	EBone__Thumb                   = 3,
	EBone__Thumb01                 = 4,
	EBone__Thumb02                 = 5,
	EBone__Thumb03                 = 6,
	EBone__Index                   = 7,
	EBone__Index01                 = 8,
	EBone__Index02                 = 9,
	EBone__Middle                  = 10,
	EBone__Middle01                = 11,
	EBone__Middle02                = 12,
	EBone__Ring                    = 13,
	EBone__Ring01                  = 14,
	EBone__Ring02                  = 15,
	EBone__Pinky                   = 16,
	EBone__Pinky01                 = 17,
	EBone__Pinky02                 = 18,
	EBone__Pinky03                 = 19,
	EBone__Thumb_Tip               = 20,
	EBone__Max_Skinnable           = 21,
	EBone__Index_Tip               = 22,
	EBone__Middle_Tip              = 23,
	EBone__Ring_Tip                = 24,
	EBone__Pinky_Tip               = 25,
	EBone__Hand_End                = 26,
	EBone__Bone_Max                = 27,
	EBone__Invalid                 = 28,
	EBone__EBone_MAX               = 29
};


// Enum OculusInput.ETrackingConfidence
enum class ETrackingConfidence : uint8_t
{
	ETrackingConfidence__Low       = 0,
	ETrackingConfidence__High      = 1,
	ETrackingConfidence__ETrackingConfidence_MAX = 2
};


// Enum OculusInput.EOculusHandType
enum class EOculusHandType : uint8_t
{
	EOculusHandType__None          = 0,
	EOculusHandType__HandLeft      = 1,
	EOculusHandType__HandRight     = 2,
	EOculusHandType__EOculusHandType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
