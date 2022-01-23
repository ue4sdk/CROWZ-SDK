// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_M2_Browning_Boat_Back_Anim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function M2_Browning_Boat_Back_Anim.M2_Browning_Boat_Back_Anim_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UM2_Browning_Boat_Back_Anim_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function M2_Browning_Boat_Back_Anim.M2_Browning_Boat_Back_Anim_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function M2_Browning_Boat_Back_Anim.M2_Browning_Boat_Back_Anim_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UM2_Browning_Boat_Back_Anim_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function M2_Browning_Boat_Back_Anim.M2_Browning_Boat_Back_Anim_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function M2_Browning_Boat_Back_Anim.M2_Browning_Boat_Back_Anim_C.ExecuteUbergraph_M2_Browning_Boat_Back_Anim
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UM2_Browning_Boat_Back_Anim_C::ExecuteUbergraph_M2_Browning_Boat_Back_Anim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function M2_Browning_Boat_Back_Anim.M2_Browning_Boat_Back_Anim_C.ExecuteUbergraph_M2_Browning_Boat_Back_Anim"));

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
