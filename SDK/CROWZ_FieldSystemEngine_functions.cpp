// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_FieldSystemEngine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UFieldSystemComponent::ResetFieldSystem()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// bool                           Enabled                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Direction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& position, const struct FVector& Direction, float Radius, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce"));

	struct
	{
		bool                           Enabled;
		struct FVector                 position;
		struct FVector                 Direction;
		float                          Radius;
		float                          Magnitude;
	} params;

	params.Enabled = Enabled;
	params.position = position;
	params.Direction = Direction;
	params.Radius = Radius;
	params.Magnitude = Magnitude;

	UObject::ProcessEvent(fn, &params);
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// bool                           Enabled                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Iterations                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFieldSystemComponent::ApplyStrainField(bool Enabled, const struct FVector& position, float Radius, float Magnitude, int Iterations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField"));

	struct
	{
		bool                           Enabled;
		struct FVector                 position;
		float                          Radius;
		float                          Magnitude;
		int                            Iterations;
	} params;

	params.Enabled = Enabled;
	params.position = position;
	params.Radius = Radius;
	params.Magnitude = Magnitude;
	params.Iterations = Iterations;

	UObject::ProcessEvent(fn, &params);
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// bool                           Enabled                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFieldSystemComponent::ApplyStayDynamicField(bool Enabled, const struct FVector& position, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField"));

	struct
	{
		bool                           Enabled;
		struct FVector                 position;
		float                          Radius;
	} params;

	params.Enabled = Enabled;
	params.position = position;
	params.Radius = Radius;

	UObject::ProcessEvent(fn, &params);
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// bool                           Enabled                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& position, float Radius, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce"));

	struct
	{
		bool                           Enabled;
		struct FVector                 position;
		float                          Radius;
		float                          Magnitude;
	} params;

	params.Enabled = Enabled;
	params.position = position;
	params.Radius = Radius;
	params.Magnitude = Magnitude;

	UObject::ProcessEvent(fn, &params);
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// bool                           Enabled                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFieldSystemComponent::ApplyRadialForce(bool Enabled, const struct FVector& position, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce"));

	struct
	{
		bool                           Enabled;
		struct FVector                 position;
		float                          Magnitude;
	} params;

	params.Enabled = Enabled;
	params.position = position;
	params.Magnitude = Magnitude;

	UObject::ProcessEvent(fn, &params);
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Enabled                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EFieldPhysicsType> Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UFieldSystemMetaData*    MetaData                       (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UFieldNodeBase*          Field                          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFieldSystemComponent::ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField"));

	struct
	{
		bool                           Enabled;
		TEnumAsByte<EFieldPhysicsType> Target;
		class UFieldSystemMetaData*    MetaData;
		class UFieldNodeBase*          Field;
	} params;

	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	UObject::ProcessEvent(fn, &params);
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// bool                           Enabled                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Direction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFieldSystemComponent::ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce"));

	struct
	{
		bool                           Enabled;
		struct FVector                 Direction;
		float                          Magnitude;
	} params;

	params.Enabled = Enabled;
	params.Direction = Direction;
	params.Magnitude = Magnitude;

	UObject::ProcessEvent(fn, &params);
}


// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Enabled                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EFieldPhysicsType> Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UFieldSystemMetaData*    MetaData                       (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UFieldNodeBase*          Field                          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFieldSystemComponent::AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand"));

	struct
	{
		bool                           Enabled;
		TEnumAsByte<EFieldPhysicsType> Target;
		class UFieldSystemMetaData*    MetaData;
		class UFieldNodeBase*          Field;
	} params;

	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	UObject::ProcessEvent(fn, &params);
}


// Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            Iterations                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UFieldSystemMetaDataIteration* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::SetMetaDataIteration(int Iterations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration"));

	struct
	{
		int                            Iterations;
		class UFieldSystemMetaDataIteration* ReturnValue;
	} params;

	params.Iterations = Iterations;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EFieldResolutionType> ResolutionType                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UFieldSystemMetaDataProcessingResolution* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType"));

	struct
	{
		TEnumAsByte<EFieldResolutionType> ResolutionType;
		class UFieldSystemMetaDataProcessingResolution* ReturnValue;
	} params;

	params.ResolutionType = ResolutionType;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.UniformInteger.SetUniformInteger
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUniformInteger*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUniformInteger* UUniformInteger::SetUniformInteger(int Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.UniformInteger.SetUniformInteger"));

	struct
	{
		int                            Magnitude;
		class UUniformInteger*         ReturnValue;
	} params;

	params.Magnitude = Magnitude;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InteriorValue                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ExteriorValue                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class URadialIntMask*          ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class URadialIntMask* URadialIntMask::SetRadialIntMask(float Radius, const struct FVector& position, int InteriorValue, int ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.RadialIntMask.SetRadialIntMask"));

	struct
	{
		float                          Radius;
		struct FVector                 position;
		int                            InteriorValue;
		int                            ExteriorValue;
		TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn;
		class URadialIntMask*          ReturnValue;
	} params;

	params.Radius = Radius;
	params.position = position;
	params.InteriorValue = InteriorValue;
	params.ExteriorValue = ExteriorValue;
	params.SetMaskConditionIn = SetMaskConditionIn;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.UniformScalar.SetUniformScalar
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUniformScalar*          ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUniformScalar* UUniformScalar::SetUniformScalar(float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.UniformScalar.SetUniformScalar"));

	struct
	{
		float                          Magnitude;
		class UUniformScalar*          ReturnValue;
	} params;

	params.Magnitude = Magnitude;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MinRange                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MaxRange                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Default                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EFieldFalloffType> Falloff                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class URadialFalloff*          ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class URadialFalloff* URadialFalloff::SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& position, TEnumAsByte<EFieldFalloffType> Falloff)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.RadialFalloff.SetRadialFalloff"));

	struct
	{
		float                          Magnitude;
		float                          MinRange;
		float                          MaxRange;
		float                          Default;
		float                          Radius;
		struct FVector                 position;
		TEnumAsByte<EFieldFalloffType> Falloff;
		class URadialFalloff*          ReturnValue;
	} params;

	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Radius = Radius;
	params.position = position;
	params.Falloff = Falloff;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MinRange                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MaxRange                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Default                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Distance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Normal                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EFieldFalloffType> Falloff                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPlaneFalloff*           ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPlaneFalloff* UPlaneFalloff::SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& position, const struct FVector& Normal, TEnumAsByte<EFieldFalloffType> Falloff)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff"));

	struct
	{
		float                          Magnitude;
		float                          MinRange;
		float                          MaxRange;
		float                          Default;
		float                          Distance;
		struct FVector                 position;
		struct FVector                 Normal;
		TEnumAsByte<EFieldFalloffType> Falloff;
		class UPlaneFalloff*           ReturnValue;
	} params;

	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Distance = Distance;
	params.position = position;
	params.Normal = Normal;
	params.Falloff = Falloff;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MinRange                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MaxRange                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Default                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EFieldFalloffType> Falloff                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UBoxFalloff*             ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UBoxFalloff* UBoxFalloff::SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, TEnumAsByte<EFieldFalloffType> Falloff)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.BoxFalloff.SetBoxFalloff"));

	struct
	{
		float                          Magnitude;
		float                          MinRange;
		float                          MaxRange;
		float                          Default;
		struct FTransform              Transform;
		TEnumAsByte<EFieldFalloffType> Falloff;
		class UBoxFalloff*             ReturnValue;
	} params;

	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Transform = Transform;
	params.Falloff = Falloff;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.NoiseField.SetNoiseField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          MinRange                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MaxRange                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UNoiseField*             ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UNoiseField* UNoiseField::SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.NoiseField.SetNoiseField"));

	struct
	{
		float                          MinRange;
		float                          MaxRange;
		struct FTransform              Transform;
		class UNoiseField*             ReturnValue;
	} params;

	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Transform = Transform;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.UniformVector.SetUniformVector
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Direction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUniformVector*          ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UUniformVector* UUniformVector::SetUniformVector(float Magnitude, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.UniformVector.SetUniformVector"));

	struct
	{
		float                          Magnitude;
		struct FVector                 Direction;
		class UUniformVector*          ReturnValue;
	} params;

	params.Magnitude = Magnitude;
	params.Direction = Direction;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.RadialVector.SetRadialVector
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 position                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class URadialVector*           ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class URadialVector* URadialVector::SetRadialVector(float Magnitude, const struct FVector& position)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.RadialVector.SetRadialVector"));

	struct
	{
		float                          Magnitude;
		struct FVector                 position;
		class URadialVector*           ReturnValue;
	} params;

	params.Magnitude = Magnitude;
	params.position = position;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.RandomVector.SetRandomVector
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class URandomVector*           ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class URandomVector* URandomVector::SetRandomVector(float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.RandomVector.SetRandomVector"));

	struct
	{
		float                          Magnitude;
		class URandomVector*           ReturnValue;
	} params;

	params.Magnitude = Magnitude;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.OperatorField.SetOperatorField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UFieldNodeBase*          RightField                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UFieldNodeBase*          LeftField                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EFieldOperationType> Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UOperatorField*          ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UOperatorField* UOperatorField::SetOperatorField(float Magnitude, class UFieldNodeBase* RightField, class UFieldNodeBase* LeftField, TEnumAsByte<EFieldOperationType> Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.OperatorField.SetOperatorField"));

	struct
	{
		float                          Magnitude;
		class UFieldNodeBase*          RightField;
		class UFieldNodeBase*          LeftField;
		TEnumAsByte<EFieldOperationType> Operation;
		class UOperatorField*          ReturnValue;
	} params;

	params.Magnitude = Magnitude;
	params.RightField = RightField;
	params.LeftField = LeftField;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.ToIntegerField.SetToIntegerField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UFieldNodeFloat*         FloatField                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UToIntegerField*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UToIntegerField* UToIntegerField::SetToIntegerField(class UFieldNodeFloat* FloatField)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.ToIntegerField.SetToIntegerField"));

	struct
	{
		class UFieldNodeFloat*         FloatField;
		class UToIntegerField*         ReturnValue;
	} params;

	params.FloatField = FloatField;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.ToFloatField.SetToFloatField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UFieldNodeInt*           IntegerField                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UToFloatField*           ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UToFloatField* UToFloatField::SetToFloatField(class UFieldNodeInt* IntegerField)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.ToFloatField.SetToFloatField"));

	struct
	{
		class UFieldNodeInt*           IntegerField;
		class UToFloatField*           ReturnValue;
	} params;

	params.IntegerField = IntegerField;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.CullingField.SetCullingField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UFieldNodeBase*          Culling                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UFieldNodeBase*          Field                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EFieldCullingOperationType> Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCullingField*           ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCullingField* UCullingField::SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.CullingField.SetCullingField"));

	struct
	{
		class UFieldNodeBase*          Culling;
		class UFieldNodeBase*          Field;
		TEnumAsByte<EFieldCullingOperationType> Operation;
		class UCullingField*           ReturnValue;
	} params;

	params.Culling = Culling;
	params.Field = Field;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UReturnResultsTerminal*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UReturnResultsTerminal* UReturnResultsTerminal::SetReturnResultsTerminal()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal"));

	struct
	{
		class UReturnResultsTerminal*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
