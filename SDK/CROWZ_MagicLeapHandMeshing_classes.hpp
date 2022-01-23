#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapHandMeshing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
// 0x0000 (0x00B0 - 0x00B0)
class UMagicLeapHandMeshingComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent"));
		return ptr;
	}


	void SetUseWeightedNormals(bool bInUseWeightedNormals);
	bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};


// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary"));
		return ptr;
	}


	static bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	static bool DestroyClient();
	static bool CreateClient();
	static bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
