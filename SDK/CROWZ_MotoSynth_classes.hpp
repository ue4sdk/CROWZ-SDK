#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MotoSynth_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MotoSynth.MotoSynthPreset
// 0x0068 (0x0090 - 0x0028)
class UMotoSynthPreset : public UObject
{
public:
	struct FMotoSynthRuntimeSettings                   Settings;                                                 // 0x0028(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MotoSynth.MotoSynthPreset"));
		return ptr;
	}

};


// Class MotoSynth.MotoSynthSource
// 0x00D0 (0x00F8 - 0x0028)
class UMotoSynthSource : public UObject
{
public:
	bool                                               bConvertTo8Bit;                                           // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              DownSampleFactor;                                         // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          RPMCurve;                                                 // 0x0030(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      SourceData;                                               // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_Deprecated, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<int16_t>                                    SourceDataPCM;                                            // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	int                                                SourceSampleRate;                                         // 0x00D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TArray<struct FGrainTableEntry>                    GrainTable;                                               // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MotoSynth.MotoSynthSource"));
		return ptr;
	}

};


// Class MotoSynth.SynthComponentMoto
// 0x00C0 (0x0780 - 0x06C0)
class USynthComponentMoto : public USynthComponent
{
public:
	class UMotoSynthPreset*                            MotoSynthPreset;                                          // 0x06C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RPM;                                                      // 0x06C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xB4];                                      // 0x06CC(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MotoSynth.SynthComponentMoto"));
		return ptr;
	}


	void SetSettings(const struct FMotoSynthRuntimeSettings& InSettings);
	void SetRPM(float InRPM, float InTimeSec);
	bool IsEnabled();
	void GetRPMRange(float* OutMinRPM, float* OutMaxRPM);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
