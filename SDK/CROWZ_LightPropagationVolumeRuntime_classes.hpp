#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_LightPropagationVolumeRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
// 0x0050 (0x0078 - 0x0028)
class ULightPropagationVolumeBlendable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FLightPropagationVolumeSettings             Settings;                                                 // 0x0030(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_Interp, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              BlendWeight;                                              // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
