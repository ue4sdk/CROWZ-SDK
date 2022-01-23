// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowWeaponT90Cannon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CrowWeaponT90Cannon.BP_CrowWeaponT90Cannon_C.BIE_PlayFireEffect
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FCrowWeaponFire         WeaponFire                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           IsLocalFire                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_CrowWeaponT90Cannon_C::BIE_PlayFireEffect(const struct FCrowWeaponFire& WeaponFire, bool IsLocalFire)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CrowWeaponT90Cannon.BP_CrowWeaponT90Cannon_C.BIE_PlayFireEffect"));

	struct
	{
		struct FCrowWeaponFire         WeaponFire;
		bool                           IsLocalFire;
	} params;

	params.WeaponFire = WeaponFire;
	params.IsLocalFire = IsLocalFire;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CrowWeaponT90Cannon.BP_CrowWeaponT90Cannon_C.ExecuteUbergraph_BP_CrowWeaponT90Cannon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CrowWeaponT90Cannon_C::ExecuteUbergraph_BP_CrowWeaponT90Cannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CrowWeaponT90Cannon.BP_CrowWeaponT90Cannon_C.ExecuteUbergraph_BP_CrowWeaponT90Cannon"));

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
