#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_OculusMR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OculusMR.OculusMR_CastingCameraActor
// 0x00E8 (0x0320 - 0x0238)
class AOculusMR_CastingCameraActor : public ASceneCapture2D
{
public:
	class UVRNotificationsComponent*                   VRNotificationComponent;                                  // 0x0238(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  CameraColorTexture;                                       // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  CameraDepthTexture;                                       // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UOculusMR_PlaneMeshComponent*                PlaneMeshComponent;                                       // 0x0250(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterial*                                   ChromaKeyMaterial;                                        // 0x0258(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterial*                                   OpaqueColoredMaterial;                                    // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    ChromaKeyMaterialInstance;                                // 0x0268(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    CameraFrameMaterialInstance;                              // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    BackdropMaterialInstance;                                 // 0x0278(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  DefaultTexture_White;                                     // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0288(0x0050) MISSED OFFSET
	TArray<class UTextureRenderTarget2D*>              BackgroundRenderTargets;                                  // 0x02D8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	class ASceneCapture2D*                             ForegroundCaptureActor;                                   // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<class UTextureRenderTarget2D*>              ForegroundRenderTargets;                                  // 0x02F0(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	TArray<double>                                     PoseTimes;                                                // 0x0300(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	class UOculusMR_Settings*                          MRSettings;                                               // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UOculusMR_State*                             MRState;                                                  // 0x0318(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OculusMR.OculusMR_CastingCameraActor"));
		return ptr;
	}

};


// Class OculusMR.OculusMR_PlaneMeshComponent
// 0x0010 (0x0480 - 0x0470)
class UOculusMR_PlaneMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OculusMR.OculusMR_PlaneMeshComponent"));
		return ptr;
	}


	bool SetCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles);
};


// Class OculusMR.OculusMR_Settings
// 0x0070 (0x0098 - 0x0028)
class UOculusMR_Settings : public UObject
{
public:
	EOculusMR_ClippingReference                        ClippingReference;                                        // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseTrackedCameraResolution;                              // 0x0029(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                WidthPerView;                                             // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                HeightPerView;                                            // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CastingLatency;                                           // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      BackdropColor;                                            // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HandPoseStateLatency;                                     // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FColor                                      ChromaKeyColor;                                           // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ChromaKeySimilarity;                                      // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ChromaKeySmoothRange;                                     // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ChromaKeySpillRange;                                      // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EOculusMR_PostProcessEffects                       ExternalCompositionPostProcessEffects;                    // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsCasting;                                               // 0x0051(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	EOculusMR_CompositionMethod                        CompositionMethod;                                        // 0x0052(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	EOculusMR_CameraDeviceEnum                         CapturingCamera;                                          // 0x0053(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x44];                                      // 0x0054(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OculusMR.OculusMR_Settings"));
		return ptr;
	}


	void SetIsCasting(bool Val);
	void SetCompositionMethod(EOculusMR_CompositionMethod Val);
	void SetCapturingCamera(EOculusMR_CameraDeviceEnum Val);
	void SaveToIni();
	void LoadFromIni();
	bool GetIsCasting();
	EOculusMR_CompositionMethod GetCompositionMethod();
	EOculusMR_CameraDeviceEnum GetCapturingCamera();
	int GetBindToTrackedCameraIndex();
	void BindToTrackedCameraIndexIfAvailable(int InTrackedCameraIndex);
};


// Class OculusMR.OculusMR_State
// 0x0090 (0x00B8 - 0x0028)
class UOculusMR_State : public UObject
{
public:
	struct FTrackedCamera                              TrackedCamera;                                            // 0x0028(0x0078) (CPF_NativeAccessSpecifierPublic)
	class USceneComponent*                             TrackingReferenceComponent;                               // 0x00A0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	double                                             ScalingFactor;                                            // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET
	bool                                               ChangeCameraStateRequested;                               // 0x00B4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               BindToTrackedCameraIndexRequested;                        // 0x00B5(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00B6(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OculusMR.OculusMR_State"));
		return ptr;
	}

};


// Class OculusMR.OculusMRFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UOculusMRFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OculusMR.OculusMRFunctionLibrary"));
		return ptr;
	}


	static bool SetTrackingReferenceComponent(class USceneComponent* Component);
	static bool SetMrcScalingFactor(float ScalingFactor);
	static bool IsMrcEnabled();
	static bool IsMrcActive();
	static class USceneComponent* GetTrackingReferenceComponent();
	static class UOculusMR_Settings* GetOculusMRSettings();
	static float GetMrcScalingFactor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
