#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_LobbyMap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyMap.LobbyMap_C02_C
// 0x0008 (0x0230 - 0x0228)
class ALobbyMap_C02_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LobbyMap.LobbyMap_C02_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_LobbyMap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
