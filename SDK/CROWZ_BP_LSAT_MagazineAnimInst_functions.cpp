// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_LSAT_MagazineAnimInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LSAT_MagazineAnimInst.BP_LSAT_MagazineAnimInst_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UBP_LSAT_MagazineAnimInst_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LSAT_MagazineAnimInst.BP_LSAT_MagazineAnimInst_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function BP_LSAT_MagazineAnimInst.BP_LSAT_MagazineAnimInst_C.ExecuteUbergraph_BP_LSAT_MagazineAnimInst
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_LSAT_MagazineAnimInst_C::ExecuteUbergraph_BP_LSAT_MagazineAnimInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LSAT_MagazineAnimInst.BP_LSAT_MagazineAnimInst_C.ExecuteUbergraph_BP_LSAT_MagazineAnimInst"));

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
