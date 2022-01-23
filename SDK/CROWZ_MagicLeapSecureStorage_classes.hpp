#pragma once

// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapSecureStorage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapSecureStorage.MagicLeapSecureStorage
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapSecureStorage.MagicLeapSecureStorage"));
		return ptr;
	}


	static bool PutSecureVector(const struct FString& Key, const struct FVector& DataToStore);
	static bool PutSecureTransform(const struct FString& Key, const struct FTransform& DataToStore);
	static bool PutSecureString(const struct FString& Key, const struct FString& DataToStore);
	static bool PutSecureSaveGame(const struct FString& Key, class USaveGame* ObjectToStore);
	static bool PutSecureRotator(const struct FString& Key, const struct FRotator& DataToStore);
	static bool PutSecureInt64(const struct FString& Key, int64_t DataToStore);
	static bool PutSecureInt(const struct FString& Key, int DataToStore);
	static bool PutSecureFloat(const struct FString& Key, float DataToStore);
	static bool PutSecureByte(const struct FString& Key, unsigned char DataToStore);
	static bool PutSecureBool(const struct FString& Key, bool DataToStore);
	static bool PutSecureArray(const struct FString& Key, TArray<int> DataToStore);
	static bool GetSecureVector(const struct FString& Key, struct FVector* DataToRetrieve);
	static bool GetSecureTransform(const struct FString& Key, struct FTransform* DataToRetrieve);
	static bool GetSecureString(const struct FString& Key, struct FString* DataToRetrieve);
	static bool GetSecureSaveGame(const struct FString& Key, class USaveGame** ObjectToRetrieve);
	static bool GetSecureRotator(const struct FString& Key, struct FRotator* DataToRetrieve);
	static bool GetSecureInt64(const struct FString& Key, int64_t* DataToRetrieve);
	static bool GetSecureInt(const struct FString& Key, int* DataToRetrieve);
	static bool GetSecureFloat(const struct FString& Key, float* DataToRetrieve);
	static bool GetSecureByte(const struct FString& Key, unsigned char* DataToRetrieve);
	static bool GetSecureBool(const struct FString& Key, bool* DataToRetrieve);
	static bool GetSecureArray(const struct FString& Key, TArray<int>* DataToRetrieve);
	static bool DeleteSecureData(const struct FString& Key);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
