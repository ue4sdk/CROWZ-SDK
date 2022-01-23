#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapAR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapAR.LuminARSessionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapAR.LuminARSessionFunctionLibrary"));
		return ptr;
	}


	static void StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration);
};


// Class MagicLeapAR.LuminARFrameFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapAR.LuminARFrameFunctionLibrary"));
		return ptr;
	}


	static bool LuminARLineTrace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, TSet<ELuminARLineTraceChannel> TraceChannels, TArray<struct FARTraceResult>* OutHitResults);
	static ELuminARTrackingState GetTrackingState();
};


// Class MagicLeapAR.LuminARImageTrackingFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULuminARImageTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapAR.LuminARImageTrackingFunctionLibrary"));
		return ptr;
	}


	static class ULuminARCandidateImage* AddLuminRuntimeCandidateImageEx(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, EMagicLeapImageTargetOrientation InAxisOrientation);
	static class ULuminARCandidateImage* AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary);
};


// Class MagicLeapAR.LuminAROrigin
// 0x00C0 (0x02E0 - 0x0220)
class ALuminAROrigin : public AAROriginActor
{
public:
	class UMRMeshComponent*                            MRMeshComponent;                                          // 0x0220(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          PlaneSurfaceMaterial;                                     // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          WireframeMaterial;                                        // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0238(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapAR.LuminAROrigin"));
		return ptr;
	}

};


// Class MagicLeapAR.LuminARSessionConfig
// 0x0090 (0x01A0 - 0x0110)
class ULuminARSessionConfig : public UARSessionConfig
{
public:
	struct FMagicLeapPlanesQuery                       PlanesQuery;                                              // 0x0110(0x0060) (CPF_Edit, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	int                                                MaxPlaneQueryResults;                                     // 0x0170(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinPlaneArea;                                             // 0x0174(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bArbitraryOrientationPlaneDetection;                      // 0x0178(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0179(0x0003) MISSED OFFSET
	struct FVector                                     PlaneSearchExtents;                                       // 0x017C(0x000C) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<EMagicLeapPlaneQueryFlags>                  PlaneQueryFlags;                                          // 0x0188(0x0010) (CPF_ZeroConstructor, CPF_Deprecated, CPF_NativeAccessSpecifierPublic)
	bool                                               bDiscardZeroExtentPlanes;                                 // 0x0198(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDefaultUseUnreliablePose;                                // 0x0199(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x019A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapAR.LuminARSessionConfig"));
		return ptr;
	}

};


// Class MagicLeapAR.LuminARLightEstimate
// 0x0010 (0x0050 - 0x0040)
class ULuminARLightEstimate : public UARBasicLightEstimate
{
public:
	TArray<float>                                      AmbientIntensityNits;                                     // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapAR.LuminARLightEstimate"));
		return ptr;
	}


	TArray<float> GetAmbientIntensityNits();
};


// Class MagicLeapAR.LuminARCandidateImage
// 0x0008 (0x0060 - 0x0058)
class ULuminARCandidateImage : public UARCandidateImage
{
public:
	bool                                               bUseUnreliablePose;                                       // 0x0058(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bImageIsStationary;                                       // 0x0059(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	EMagicLeapImageTargetOrientation                   AxisOrientation;                                          // 0x005A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x5];                                       // 0x005B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapAR.LuminARCandidateImage"));
		return ptr;
	}


	bool GetUseUnreliablePose();
	bool GetImageIsStationary();
	EMagicLeapImageTargetOrientation GetAxisOrientation();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
