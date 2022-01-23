#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapImageTracker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
// 0x0070 (0x0270 - 0x0200)
class UMagicLeapImageTrackerComponent : public USceneComponent
{
public:
	struct FString                                     Name;                                                     // 0x0200(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LongerDimension;                                          // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsStationary;                                            // 0x0214(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseUnreliablePose;                                       // 0x0215(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EMagicLeapImageTargetOrientation                   AxisOrientation;                                          // 0x0216(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0217(0x0001) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnSetImageTargetSucceeded;                                // 0x0218(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSetImageTargetFailed;                                   // 0x0228(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnImageTargetFound;                                       // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnImageTargetLost;                                        // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnImageTargetUnreliableTracking;                          // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapImageTracker.MagicLeapImageTrackerComponent"));
		return ptr;
	}


	bool SetTargetAsync(class UTexture2D* ImageTarget);
	bool RemoveTargetAsync();
};


// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary"));
		return ptr;
	}


	static void SetMaxSimultaneousTargets(int MaxSimultaneousTargets);
	static bool IsImageTrackingEnabled();
	static int GetMaxSimultaneousTargets();
	static void EnableImageTracking(bool bEnable);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
