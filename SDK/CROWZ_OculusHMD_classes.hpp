#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_OculusHMD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OculusHMD.OculusFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OculusHMD.OculusFunctionLibrary"));
		return ptr;
	}


	static void SetReorientHMDOnControllerRecenter(bool recenterMode);
	static void SetPositionScale3D(const struct FVector& PosScale3D);
	static void SetGuardianVisibility(bool GuardianVisible);
	static void SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel Level, bool isDynamic);
	static void SetDisplayFrequency(float RequestedFrequency);
	static void SetCPUAndGPULevels(int CPULevel, int GPULevel);
	static void SetColorScaleAndOffset(const struct FLinearColor& ColorScale, const struct FLinearColor& ColorOffset, bool bApplyToAllLayers);
	static void SetClientColorDesc(EColorSpace ColorSpace);
	static void SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, TEnumAsByte<EOrientPositionSelector> Options);
	static void SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector> Options);
	static bool IsGuardianDisplayed();
	static bool IsGuardianConfigured();
	static bool IsDeviceTracked(ETrackedDeviceType DeviceType);
	static bool HasSystemOverlayPresent();
	static bool HasInputFocus();
	static bool GetUserProfile(struct FHmdUserProfile* Profile);
	static bool GetSystemHmd3DofModeEnabled();
	static void GetRawSensorData(ETrackedDeviceType DeviceType, struct FVector* AngularAcceleration, struct FVector* LinearAcceleration, struct FVector* AngularVelocity, struct FVector* LinearVelocity, float* TimeInSeconds);
	static void GetPose(bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale, struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition);
	static struct FGuardianTestResult GetPointGuardianIntersection(const struct FVector& Point, EBoundaryType BoundaryType);
	static struct FTransform GetPlayAreaTransform();
	static struct FGuardianTestResult GetNodeGuardianIntersection(ETrackedDeviceType DeviceType, EBoundaryType BoundaryType);
	static EColorSpace GetHmdColorDesc();
	static TArray<struct FVector> GetGuardianPoints(EBoundaryType BoundaryType, bool UsePawnSpace);
	static struct FVector GetGuardianDimensions(EBoundaryType BoundaryType);
	static void GetGPUUtilization(bool* IsGPUAvailable, float* GPUUtilization);
	static float GetGPUFrameTime();
	static EFixedFoveatedRenderingLevel GetFixedFoveatedRenderingLevel();
	static EOculusDeviceType GetDeviceType();
	static struct FString GetDeviceName();
	static float GetCurrentDisplayFrequency();
	static void GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset);
	static void GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters);
	static TArray<float> GetAvailableDisplayFrequencies();
	static void EnablePositionTracking(bool bPositionTracking);
	static void EnableOrientationTracking(bool bOrientationTracking);
	static void ClearLoadingSplashScreens();
	static void AddLoadingSplashScreen(class UTexture2D* Texture, const struct FVector& TranslationInMeters, const struct FRotator& Rotation, const struct FVector2D& SizeInMeters, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
};


// Class OculusHMD.OculusHMDRuntimeSettings
// 0x0038 (0x0060 - 0x0028)
class UOculusHMDRuntimeSettings : public UObject
{
public:
	bool                                               bAutoEnabled;                                             // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FOculusSplashDesc>                   SplashDescs;                                              // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableSpecificColorGamut;                                // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EColorSpace                                        ColorSpace;                                               // 0x0041(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSupportsDash;                                            // 0x0042(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCompositesDepth;                                         // 0x0043(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHQDistortion;                                            // 0x0044(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              PixelDensityMin;                                          // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PixelDensityMax;                                          // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CPULevel;                                                 // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GPULevel;                                                 // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EFixedFoveatedRenderingLevel                       FFRLevel;                                                 // 0x0058(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               FFRDynamic;                                               // 0x0059(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bChromaCorrection;                                        // 0x005A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRecenterHMDWithController;                               // 0x005B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bFocusAware;                                              // 0x005C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRequiresSystemKeyboard;                                  // 0x005D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EHandTrackingSupport                               HandTrackingSupport;                                      // 0x005E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x1];                                       // 0x005F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OculusHMD.OculusHMDRuntimeSettings"));
		return ptr;
	}

};


// Class OculusHMD.OculusResourceHolder
// 0x0008 (0x0030 - 0x0028)
class UOculusResourceHolder : public UObject
{
public:
	class UMaterial*                                   PokeAHoleMaterial;                                        // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OculusHMD.OculusResourceHolder"));
		return ptr;
	}

};


// Class OculusHMD.OculusSceneCaptureCubemap
// 0x0068 (0x0090 - 0x0028)
class UOculusSceneCaptureCubemap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<class USceneCaptureComponent2D*>            CaptureComponents;                                        // 0x0038(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OculusHMD.OculusSceneCaptureCubemap"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
