// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_WB_Vehicle_SeatLandW_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WB_Vehicle_SeatLandW.WB_Vehicle_SeatLandW_C.UpdatePassengerInfo
// (FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FPassengerSeat>  ArrSeat                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWB_Vehicle_SeatLandW_C::UpdatePassengerInfo(TArray<struct FPassengerSeat>* ArrSeat)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WB_Vehicle_SeatLandW.WB_Vehicle_SeatLandW_C.UpdatePassengerInfo"));

	struct
	{
		TArray<struct FPassengerSeat>  ArrSeat;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ArrSeat != nullptr)
		*ArrSeat = params.ArrSeat;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
