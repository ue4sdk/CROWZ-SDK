#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_MH6_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MH6.BP_MH6_C
// 0x0018 (0x0960 - 0x0948)
class ABP_MH6_C : public ABP_MH6_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0948(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UChildActorComponent*                        BP_CrowWeaponHeliFlare_1;                                 // 0x0950(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UChildActorComponent*                        BP_CrowWeaponMh6Minigun;                                  // 0x0958(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MH6.BP_MH6_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MH6(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
