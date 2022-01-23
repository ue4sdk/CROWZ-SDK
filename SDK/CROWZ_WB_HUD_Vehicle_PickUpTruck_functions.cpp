// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_HUD_Vehicle_PickUpTruck_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WB_HUD_Vehicle_PickUpTruck.WB_HUD_Vehicle_PickUpTruck_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWB_HUD_Vehicle_PickUpTruck_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_HUD_Vehicle_PickUpTruck.WB_HUD_Vehicle_PickUpTruck_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WB_HUD_Vehicle_PickUpTruck.WB_HUD_Vehicle_PickUpTruck_C.ExecuteUbergraph_WB_HUD_Vehicle_PickUpTruck
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWB_HUD_Vehicle_PickUpTruck_C::ExecuteUbergraph_WB_HUD_Vehicle_PickUpTruck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_HUD_Vehicle_PickUpTruck.WB_HUD_Vehicle_PickUpTruck_C.ExecuteUbergraph_WB_HUD_Vehicle_PickUpTruck"));

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
