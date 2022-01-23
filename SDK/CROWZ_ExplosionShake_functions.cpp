// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_ExplosionShake_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplosionShake.ExplosionShake_C.NewFunction_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UExplosionShake_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ExplosionShake.ExplosionShake_C.NewFunction_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
