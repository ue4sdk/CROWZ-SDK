#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_BP_CrowWeaponAbramCannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrowWeaponAbramCannon.BP_CrowWeaponAbramCannon_C
// 0x0008 (0x31F8 - 0x31F0)
class ABP_CrowWeaponAbramCannon_C : public ACrowWeaponVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x31F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CrowWeaponAbramCannon.BP_CrowWeaponAbramCannon_C"));
		return ptr;
	}


	void BIE_PlayFireEffect(const struct FCrowWeaponFire& WeaponFire, bool IsLocalFire);
	void ExecuteUbergraph_BP_CrowWeaponAbramCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
