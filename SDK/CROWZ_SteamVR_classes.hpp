#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_SteamVR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SteamVR.SteamVRChaperoneComponent
// 0x0028 (0x00D8 - 0x00B0)
class USteamVRChaperoneComponent : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    OnLeaveBounds;                                            // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnReturnToBounds;                                         // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamVR.SteamVRChaperoneComponent"));
		return ptr;
	}


	void SteamVRChaperoneEvent__DelegateSignature();
	TArray<struct FVector> GetBounds();
};


// Class SteamVR.SteamVRFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USteamVRFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamVR.SteamVRFunctionLibrary"));
		return ptr;
	}


	static void GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int>* OutTrackedDeviceIds);
	static bool GetTrackedDevicePositionAndOrientation(int DeviceID, struct FVector* OutPosition, struct FRotator* OutOrientation);
	static bool GetHandPositionAndOrientation(int ControllerIndex, EControllerHand hand, struct FVector* OutPosition, struct FRotator* OutOrientation);
};


// Class SteamVR.SteamVRHQStereoLayerShape
// 0x0010 (0x0038 - 0x0028)
class USteamVRHQStereoLayerShape : public UStereoLayerShapeQuad
{
public:
	bool                                               bCurved;                                                  // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAntiAlias;                                               // 0x0029(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              AutoCurveMinDistance;                                     // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AutoCurveMaxDistance;                                     // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SteamVR.SteamVRHQStereoLayerShape"));
		return ptr;
	}


	void SetCurved(bool InCurved);
	void SetAutoCurveMinDistance(float InDistance);
	void SetAutoCurveMaxDistance(float InDistance);
	void SetAntiAlias(bool InAntiAlias);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
