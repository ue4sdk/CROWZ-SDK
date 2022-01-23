#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_SkyCreatorPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SkyCreatorPlugin.SkyCreator
// 0x0CA0 (0x0EC0 - 0x0220)
class ASkyCreator : public AActor
{
public:
	class USceneComponent*                             Root;                                                     // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UBillboardComponent*                         Billboard;                                                // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        Compass;                                                  // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkyAtmosphereComponent*                     SkyAtmosphere;                                            // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UVolumetricCloudComponent*                   VolumetricCloud;                                          // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkyLightComponent*                          SkyLight;                                                 // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UDirectionalLightComponent*                  SunLight;                                                 // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UDirectionalLightComponent*                  MoonLight;                                                // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UExponentialHeightFogComponent*              ExponentialHeightFog;                                     // 0x0260(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPostProcessComponent*                       Exposure;                                                 // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        StarMap;                                                  // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        SunSphere;                                                // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        MoonSphere;                                               // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UNiagaraComponent*                           WeatherFX;                                                // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        SkySphere;                                                // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInterface*                          SkySphereMaterial;                                        // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    SkySphereMID;                                             // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EditorTimeOfDay;                                          // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ESkyCreatorEditorWeatherType>          EditorWeatherType;                                        // 0x02AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
	class USkyCreatorWeatherPreset*                    EditorWeatherPreset;                                      // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSkyCreatorWeatherSettings                  EditorWeatherSettings;                                    // 0x02B8(0x0248) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsEditorTickEnabled;                                     // 0x0500(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0501(0x0003) MISSED OFFSET
	float                                              SkySphereRadius;                                          // 0x0504(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bLightOptimization;                                       // 0x0508(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EComponentMobility>                    SkyAtmosphereMobility;                                    // 0x0509(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ESkyAtmosphereTransformMode                        TransformMode;                                            // 0x050A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x1];                                       // 0x050B(0x0001) MISSED OFFSET
	float                                              PlanetRadius;                                             // 0x050C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AtmosphereHeight;                                         // 0x0510(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TraceSampleCountScale;                                    // 0x0514(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LayerBottomAttitude;                                      // 0x0518(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LayerHeight;                                              // 0x051C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TracingStartMaxDistance;                                  // 0x0520(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TracingMaxDistance;                                       // 0x0524(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPerSampleAtmosphericLightTransmittance;                  // 0x0528(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bGroundContribution;                                      // 0x0529(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x2];                                       // 0x052A(0x0002) MISSED OFFSET
	int                                                MultiScatteringApproximationOctaveCount;                  // 0x052C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ViewSampleCountScale;                                     // 0x0530(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ReflectionSampleCountScale;                               // 0x0534(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShadowViewSampleCountScale;                               // 0x0538(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShadowReflectionSampleCountScale;                         // 0x053C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShadowTracingDistance;                                    // 0x0540(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LowCloudMapScale;                                         // 0x0544(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   LowCloudMapOffset;                                        // 0x0548(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HighCloudMapScale;                                        // 0x0550(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   HighCloudMapOffset;                                       // 0x0554(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HighCloudHorizonFadeHardness;                             // 0x055C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAutoScale;                                               // 0x0560(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0561(0x0003) MISSED OFFSET
	float                                              ShapeNoiseScale;                                          // 0x0564(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DetailNoiseScale;                                         // 0x0568(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EComponentMobility>                    SkyLightMobility;                                         // 0x056C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRealTimeCapture;                                         // 0x056D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EComponentMobility>                    SunLightMobility;                                         // 0x056E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bControlSunDirection;                                     // 0x056F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSunUseTemperature;                                       // 0x0570(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0571(0x0003) MISSED OFFSET
	float                                              SunAngularDiameter;                                       // 0x0574(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSunConstantAtmosphereDiskColorScale;                     // 0x0578(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0579(0x0003) MISSED OFFSET
	struct FLinearColor                                SunAtmosphereDiskColorScale;                              // 0x057C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ESkyCreatorSunOrbitType>               SunOrbitType;                                             // 0x058C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	float                                              SunriseTime;                                              // 0x0590(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SunsetTime;                                               // 0x0594(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SunDawnOffsetTime;                                        // 0x0598(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SunDuskOffsetTime;                                        // 0x059C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SunDawnTime;                                              // 0x05A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SunDuskTime;                                              // 0x05A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SunElevation;                                             // 0x05A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SunAzimuth;                                               // 0x05AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SunMinAngleAtDawnDusk;                                    // 0x05B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SunFadeInOutTime;                                         // 0x05B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EComponentMobility>                    MoonLightMobility;                                        // 0x05B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bControlMoonDirection;                                    // 0x05B9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bMoonUseTemperature;                                      // 0x05BA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x1];                                       // 0x05BB(0x0001) MISSED OFFSET
	float                                              MoonAngularDiameter;                                      // 0x05BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bMoonConstantAtmosphereDiskColorScale;                    // 0x05C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x3];                                       // 0x05C1(0x0003) MISSED OFFSET
	struct FLinearColor                                MoonAtmosphereDiskColorScale;                             // 0x05C4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MoonPhase;                                                // 0x05D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MoonRotation;                                             // 0x05D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ESkyCreatorMoonOrbitType>              MoonOrbitType;                                            // 0x05DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x3];                                       // 0x05DD(0x0003) MISSED OFFSET
	float                                              MoonriseTime;                                             // 0x05E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MoonsetTime;                                              // 0x05E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MoonElevation;                                            // 0x05E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MoonAzimuth;                                              // 0x05EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MoonFadeInOutTime;                                        // 0x05F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EComponentMobility>                    ExponentialHeightFogMobility;                             // 0x05F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableExponentialHeightFog;                              // 0x05F5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bVolumetricFog;                                           // 0x05F6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x1];                                       // 0x05F7(0x0001) MISSED OFFSET
	float                                              FogHeightOffset;                                          // 0x05F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SecondFogHeightOffset;                                    // 0x05FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  StarMapTexture;                                           // 0x0600(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ESkyCreatorStarMapRotationType>        StarMapRotationType;                                      // 0x0608(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0609(0x0003) MISSED OFFSET
	struct FRotator                                    StarMapAdditionalRotation;                                // 0x060C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bSpawnOnlyUnderClouds;                                    // 0x0618(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0619(0x0003) MISSED OFFSET
	float                                              PrecipitationSpawnRadius;                                 // 0x061C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxRainParticles;                                         // 0x0620(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxSnowParticles;                                         // 0x0624(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableWind;                                              // 0x0628(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIndependentWindControl;                                  // 0x0629(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData14[0x2];                                       // 0x062A(0x0002) MISSED OFFSET
	struct FSkyCreatorWindSettings                     EditorIndependentWindSettings;                            // 0x062C(0x0024) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              CloudWindSkewAmount;                                      // 0x0650(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseBuiltInExposureSettings;                              // 0x0654(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0655(0x0003) MISSED OFFSET
	struct FCameraExposureSettings                     ExposureSettings;                                         // 0x0658(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData16[0x8];                                       // 0x0698(0x0008) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x06A0(0x0550) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	float                                              TimeOfDay;                                                // 0x0BF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSkyCreatorWeatherSettings                  WeatherSettings;                                          // 0x0BF4(0x0248) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_EditConst, CPF_RepNotify, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0E3C(0x0004) MISSED OFFSET
	struct FSkyCreatorVolumetricCloudMaterials         VolumetricCloudMaterials;                                 // 0x0E40(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UMaterialInterface*                          CurrentVolumetricCloudMaterial;                           // 0x0E70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    VolumetricCloudMID;                                       // 0x0E78(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CurrentShapeNoiseScale;                                   // 0x0E80(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CurrentDetailNoiseScale;                                  // 0x0E84(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     LowCloudWindOffset;                                       // 0x0E88(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     LowCloudWindSkewDirection;                                // 0x0E94(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LowCloudWindSkewForce;                                    // 0x0EA0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     HighCloudWindOffset;                                      // 0x0EA4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CloudNoiseWindOffset;                                     // 0x0EB0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0EBC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SkyCreatorPlugin.SkyCreator"));
		return ptr;
	}


	void UpdateSunMoonIntensity(float InTime);
	void UpdateSettings();
	void SetWindSettings(const struct FSkyCreatorWindSettings& InWindSettings);
	void SetWindIndependentSettings(const struct FSkyCreatorWindSettings& InWindSettings);
	void SetWeatherSettings(const struct FSkyCreatorWeatherSettings& InWeatherSettings);
	void SetWeatherFXSettings(const struct FSkyCreatorWeatherFXSettings& InWeatherFXSettings);
	void SetVolumetricCloudSettings(const struct FSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettings);
	void SetTime(float InTime);
	void SetSunMoonPosition(float InTime);
	void SetSunLightSettings(const struct FSkyCreatorSunLightSettings& InSunLightSettings);
	void SetStarMapSettings(const struct FSkyCreatorStarMapSettings& InStarMapSettings);
	void SetSkyLightSettings(const struct FSkyCreatorSkyLightSettings& InSkyLightSettings);
	void SetSkyAtmosphereSettings(const struct FSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettings);
	void SetMoonPhase(float InMoonPhase);
	void SetMoonLightSettings(const struct FSkyCreatorMoonLightSettings& InMoonLightSettings);
	void SetExposureSettings(const struct FSkyCreatorExposureSettings& InExposureSettings);
	void SetExponentialHeightFogSettings(const struct FSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettings);
	void SetComponentsSettings();
	void RerunConstructionScript();
	void RealtimeVolumetricCloudWind(float DeltaTime);
	void RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration);
	void OnRep_UpdateWeather();
	void OnRep_UpdateTime();
	void LerpWindSettings(const struct FSkyCreatorWindSettings& InWindSettingsA, const struct FSkyCreatorWindSettings& InWindSettingsB, float Alpha);
	void LerpWindIndependentSettings(const struct FSkyCreatorWindSettings& InWindSettingsA, const struct FSkyCreatorWindSettings& InWindSettingsB, float Alpha);
	void LerpWeatherSettings(const struct FSkyCreatorWeatherSettings& InWeatherSettingsA, const struct FSkyCreatorWeatherSettings& InWeatherSettingsB, float Alpha);
	void LerpWeatherFXSettings(const struct FSkyCreatorWeatherFXSettings& InWeatherFXSettingsA, const struct FSkyCreatorWeatherFXSettings& InWeatherFXSettingsB, float Alpha);
	void LerpVolumetricCloudSettings(const struct FSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettingsA, const struct FSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettingsB, float Alpha);
	void LerpSunLightSettings(const struct FSkyCreatorSunLightSettings& InSunLightSettingsA, const struct FSkyCreatorSunLightSettings& InSunLightSettingsB, float Alpha);
	void LerpStarMapSettings(const struct FSkyCreatorStarMapSettings& InStarMapSettingsA, const struct FSkyCreatorStarMapSettings& InStarMapSettingsB, float Alpha);
	void LerpSkyLightSettings(const struct FSkyCreatorSkyLightSettings& InSkyLightSettingsA, const struct FSkyCreatorSkyLightSettings& InSkyLightSettingsB, float Alpha);
	void LerpSkyAtmosphereSettings(const struct FSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettingsA, const struct FSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettingsB, float Alpha);
	void LerpMoonLightSettings(const struct FSkyCreatorMoonLightSettings& InMoonLightSettingsA, const struct FSkyCreatorMoonLightSettings& InMoonLightSettingsB, float Alpha);
	void LerpExposureSettings(const struct FSkyCreatorExposureSettings& InExposureSettingsA, const struct FSkyCreatorExposureSettings& InExposureSettingsB, float Alpha);
	void LerpExponentialHeightFogSettings(const struct FSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettingsA, const struct FSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettingsB, float Alpha);
	struct FSkyCreatorWindSettings GetWindSettings();
	struct FSkyCreatorWeatherSettings GetWeatherSettings();
	struct FSkyCreatorWeatherFXSettings GetWeatherFXSettings();
	struct FSkyCreatorVolumetricCloudSettings GetVolumetricCloudSettings();
	float GetTime();
	struct FRotator GetSunPosition(float Time);
	struct FSkyCreatorSunLightSettings GetSunLightSettings();
	struct FSkyCreatorStarMapSettings GetStarMapSettings();
	struct FRotator GetStarMapRotation(float Time);
	struct FSkyCreatorSkyLightSettings GetSkyLightSettings();
	struct FSkyCreatorSkyAtmosphereSettings GetSkyAtmosphereSettings();
	struct FRotator GetMoonPosition(float Time);
	float GetMoonPhase();
	struct FSkyCreatorMoonLightSettings GetMoonLightSettings();
	struct FSkyCreatorExposureSettings GetExposureSettings();
	struct FSkyCreatorExponentialHeightFogSettings GetExponentialHeightFogSettings();
	void CreateVolumetricCloudMID();
};


// Class SkyCreatorPlugin.SkyCreatorWeatherPreset
// 0x0260 (0x0290 - 0x0030)
class USkyCreatorWeatherPreset : public UDataAsset
{
public:
	struct FText                                       Description;                                              // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	struct FSkyCreatorSkyAtmosphereSettings            SkyAtmosphereSettings;                                    // 0x0048(0x006C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSkyCreatorVolumetricCloudSettings          VolumetricCloudSettings;                                  // 0x00B4(0x008C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSkyCreatorSkyLightSettings                 SkyLightSettings;                                         // 0x0140(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSkyCreatorSunLightSettings                 SunLightSettings;                                         // 0x0154(0x002C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSkyCreatorMoonLightSettings                MoonLightSettings;                                        // 0x0180(0x002C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSkyCreatorExponentialHeightFogSettings     ExponentialHeightFogSettings;                             // 0x01AC(0x0064) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSkyCreatorStarMapSettings                  StarMapSettings;                                          // 0x0210(0x0034) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSkyCreatorWeatherFXSettings                WeatherFXSettings;                                        // 0x0244(0x0024) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSkyCreatorWindSettings                     WindSettings;                                             // 0x0268(0x0024) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSkyCreatorExposureSettings                 ExposureSettings;                                         // 0x028C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SkyCreatorPlugin.SkyCreatorWeatherPreset"));
		return ptr;
	}


	struct FSkyCreatorWeatherSettings GetWeatherPresetSettings();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
