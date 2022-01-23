#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_FoliageRemover_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FoliageRemover.BP_FoliageRemover_C
// 0x0010 (0x04E0 - 0x04D0)
class UBP_FoliageRemover_C : public UStaticMeshComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	bool                                               EnableScalingByDistance;                                  // 0x04D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	float                                              MaxDistance;                                              // 0x04DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FoliageRemover.BP_FoliageRemover_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_FoliageRemover(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
