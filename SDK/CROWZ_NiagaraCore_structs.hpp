#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_Basic.hpp"
#include "CROWZ_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NiagaraCore.NiagaraCompileHash
// 0x0010
struct FNiagaraCompileHash
{
	TArray<unsigned char>                              DataHash;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
