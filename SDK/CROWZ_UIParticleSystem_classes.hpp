#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_UIParticleSystem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UIParticleSystem.ParticleSystemWidget
// 0x0030 (0x0138 - 0x0108)
class UParticleSystemWidget : public UWidget
{
public:
	class UParticleSystem*                             ParticleSystemTemplate;                                   // 0x0108(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAutoActivate;                                            // 0x0110(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bReactivate;                                              // 0x0111(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0112(0x0006) MISSED OFFSET
	class UUIParticleComponent*                        WorldParticleComponent;                                   // 0x0118(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class AActor*                                      WorldParticleActor;                                       // 0x0120(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0128(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UIParticleSystem.ParticleSystemWidget"));
		return ptr;
	}


	void SetReactivate(bool bActivateAndReset);
	class UParticleSystemComponent* GetParticleComponent();
	void ActivateParticles(bool bActive, bool bReset);
};


// Class UIParticleSystem.UIParticleComponent
// 0x0000 (0x06A0 - 0x06A0)
class UUIParticleComponent : public UParticleSystemComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UIParticleSystem.UIParticleComponent"));
		return ptr;
	}

};


// Class UIParticleSystem.UIParticleActor
// 0x0000 (0x0220 - 0x0220)
class AUIParticleActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UIParticleSystem.UIParticleActor"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
