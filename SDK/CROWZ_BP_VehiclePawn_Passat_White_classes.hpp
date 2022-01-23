#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_VehiclePawn_Passat_White_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehiclePawn_Passat_White.BP_VehiclePawn_Passat_White_C
// 0x000C (0x09AC - 0x09A0)
class ABP_VehiclePawn_Passat_White_C : public ABP_VehiclePawn_Passat_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	int                                                PlayEventID;                                              // 0x09A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VehiclePawn_Passat_White.BP_VehiclePawn_Passat_White_C"));
		return ptr;
	}


	void InpActEvt_BackSpace_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ResetDrop();
	void ExecuteUbergraph_BP_VehiclePawn_Passat_White(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
