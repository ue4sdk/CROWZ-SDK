// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_UIParticleSystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UIParticleSystem.ParticleSystemWidget.SetReactivate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bActivateAndReset              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UParticleSystemWidget::SetReactivate(bool bActivateAndReset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIParticleSystem.ParticleSystemWidget.SetReactivate"));

	struct
	{
		bool                           bActivateAndReset;
	} params;

	params.bActivateAndReset = bActivateAndReset;

	UObject::ProcessEvent(fn, &params);
}


// Function UIParticleSystem.ParticleSystemWidget.GetParticleComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UParticleSystemComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UParticleSystemComponent* UParticleSystemWidget::GetParticleComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIParticleSystem.ParticleSystemWidget.GetParticleComponent"));

	struct
	{
		class UParticleSystemComponent* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UIParticleSystem.ParticleSystemWidget.ActivateParticles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bActive                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bReset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UParticleSystemWidget::ActivateParticles(bool bActive, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UIParticleSystem.ParticleSystemWidget.ActivateParticles"));

	struct
	{
		bool                           bActive;
		bool                           bReset;
	} params;

	params.bActive = bActive;
	params.bReset = bReset;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
