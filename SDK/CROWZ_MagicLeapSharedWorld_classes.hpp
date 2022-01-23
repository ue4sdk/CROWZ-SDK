#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapSharedWorld_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// 0x00D0 (0x03D8 - 0x0308)
class AMagicLeapSharedWorldGameMode : public AGameMode
{
public:
	struct FMagicLeapSharedWorldSharedData             SharedWorldData;                                          // 0x0308(0x0010) (CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnNewLocalDataFromClients;                                // 0x0318(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	float                                              PinSelectionConfidenceThreshold;                          // 0x0328(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x032C(0x00A4) MISSED OFFSET
	class AMagicLeapSharedWorldPlayerController*       ChosenOne;                                                // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode"));
		return ptr;
	}


	bool SendSharedWorldDataToClients();
	void SelectChosenOne();
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature();
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData);
};


// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// 0x0040 (0x02D0 - 0x0290)
class AMagicLeapSharedWorldGameState : public AGameState
{
public:
	struct FMagicLeapSharedWorldSharedData             SharedWorldData;                                          // 0x0290(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_RepNotify, CPF_NativeAccessSpecifierPublic)
	struct FMagicLeapSharedWorldAlignmentTransforms    AlignmentTransforms;                                      // 0x02A0(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_RepNotify, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSharedWorldDataUpdated;                                 // 0x02B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnAlignmentTransformsUpdated;                             // 0x02C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState"));
		return ptr;
	}


	void OnReplicate_SharedWorldData();
	void OnReplicate_AlignmentTransforms();
	void MagicLeapSharedWorldEvent__DelegateSignature();
	struct FTransform CalculateXRCameraRootTransform();
};


// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// 0x0018 (0x0588 - 0x0570)
class AMagicLeapSharedWorldPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0570(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController"));
		return ptr;
	}


	void ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData);
	void ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms);
	bool IsChosenOne();
	void ClientSetChosenOne(bool bChosenOne);
	void ClientMarkReadyForSendingLocalData();
	bool CanSendLocalDataToServer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
