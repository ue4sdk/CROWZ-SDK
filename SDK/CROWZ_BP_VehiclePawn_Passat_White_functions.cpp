// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_VehiclePawn_Passat_White_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VehiclePawn_Passat_White.BP_VehiclePawn_Passat_White_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_VehiclePawn_Passat_White_C::InpActEvt_BackSpace_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehiclePawn_Passat_White.BP_VehiclePawn_Passat_White_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_1"));

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_VehiclePawn_Passat_White.BP_VehiclePawn_Passat_White_C.ResetDrop
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_VehiclePawn_Passat_White_C::ResetDrop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehiclePawn_Passat_White.BP_VehiclePawn_Passat_White_C.ResetDrop"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_VehiclePawn_Passat_White.BP_VehiclePawn_Passat_White_C.ExecuteUbergraph_BP_VehiclePawn_Passat_White
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_VehiclePawn_Passat_White_C::ExecuteUbergraph_BP_VehiclePawn_Passat_White(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehiclePawn_Passat_White.BP_VehiclePawn_Passat_White_C.ExecuteUbergraph_BP_VehiclePawn_Passat_White"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
