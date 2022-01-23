// CROWZ (0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CROWZ_MagicLeapSecureStorage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 DataToStore                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureVector(const struct FString& Key, const struct FVector& DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector"));

	struct
	{
		struct FString                 Key;
		struct FVector                 DataToStore;
		bool                           ReturnValue;
	} params;

	params.Key = Key;
	params.DataToStore = DataToStore;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              DataToStore                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureTransform(const struct FString& Key, const struct FTransform& DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform"));

	struct
	{
		struct FString                 Key;
		struct FTransform              DataToStore;
		bool                           ReturnValue;
	} params;

	params.Key = Key;
	params.DataToStore = DataToStore;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DataToStore                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureString(const struct FString& Key, const struct FString& DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString"));

	struct
	{
		struct FString                 Key;
		struct FString                 DataToStore;
		bool                           ReturnValue;
	} params;

	params.Key = Key;
	params.DataToStore = DataToStore;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USaveGame*               ObjectToStore                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureSaveGame(const struct FString& Key, class USaveGame* ObjectToStore)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame"));

	struct
	{
		struct FString                 Key;
		class USaveGame*               ObjectToStore;
		bool                           ReturnValue;
	} params;

	params.Key = Key;
	params.ObjectToStore = ObjectToStore;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                DataToStore                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureRotator(const struct FString& Key, const struct FRotator& DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator"));

	struct
	{
		struct FString                 Key;
		struct FRotator                DataToStore;
		bool                           ReturnValue;
	} params;

	params.Key = Key;
	params.DataToStore = DataToStore;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int64_t                        DataToStore                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureInt64(const struct FString& Key, int64_t DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64"));

	struct
	{
		struct FString                 Key;
		int64_t                        DataToStore;
		bool                           ReturnValue;
	} params;

	params.Key = Key;
	params.DataToStore = DataToStore;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            DataToStore                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureInt(const struct FString& Key, int DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt"));

	struct
	{
		struct FString                 Key;
		int                            DataToStore;
		bool                           ReturnValue;
	} params;

	params.Key = Key;
	params.DataToStore = DataToStore;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DataToStore                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureFloat(const struct FString& Key, float DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat"));

	struct
	{
		struct FString                 Key;
		float                          DataToStore;
		bool                           ReturnValue;
	} params;

	params.Key = Key;
	params.DataToStore = DataToStore;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  DataToStore                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureByte(const struct FString& Key, unsigned char DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte"));

	struct
	{
		struct FString                 Key;
		unsigned char                  DataToStore;
		bool                           ReturnValue;
	} params;

	params.Key = Key;
	params.DataToStore = DataToStore;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           DataToStore                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureBool(const struct FString& Key, bool DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool"));

	struct
	{
		struct FString                 Key;
		bool                           DataToStore;
		bool                           ReturnValue;
	} params;

	params.Key = Key;
	params.DataToStore = DataToStore;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    DataToStore                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureArray(const struct FString& Key, TArray<int> DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray"));

	struct
	{
		struct FString                 Key;
		TArray<int>                    DataToStore;
		bool                           ReturnValue;
	} params;

	params.Key = Key;
	params.DataToStore = DataToStore;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 DataToRetrieve                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureVector(const struct FString& Key, struct FVector* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector"));

	struct
	{
		struct FString                 Key;
		struct FVector                 DataToRetrieve;
		bool                           ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              DataToRetrieve                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureTransform(const struct FString& Key, struct FTransform* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform"));

	struct
	{
		struct FString                 Key;
		struct FTransform              DataToRetrieve;
		bool                           ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DataToRetrieve                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureString(const struct FString& Key, struct FString* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString"));

	struct
	{
		struct FString                 Key;
		struct FString                 DataToRetrieve;
		bool                           ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USaveGame*               ObjectToRetrieve               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureSaveGame(const struct FString& Key, class USaveGame** ObjectToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame"));

	struct
	{
		struct FString                 Key;
		class USaveGame*               ObjectToRetrieve;
		bool                           ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ObjectToRetrieve != nullptr)
		*ObjectToRetrieve = params.ObjectToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                DataToRetrieve                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureRotator(const struct FString& Key, struct FRotator* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator"));

	struct
	{
		struct FString                 Key;
		struct FRotator                DataToRetrieve;
		bool                           ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int64_t                        DataToRetrieve                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureInt64(const struct FString& Key, int64_t* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64"));

	struct
	{
		struct FString                 Key;
		int64_t                        DataToRetrieve;
		bool                           ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            DataToRetrieve                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureInt(const struct FString& Key, int* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt"));

	struct
	{
		struct FString                 Key;
		int                            DataToRetrieve;
		bool                           ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DataToRetrieve                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureFloat(const struct FString& Key, float* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat"));

	struct
	{
		struct FString                 Key;
		float                          DataToRetrieve;
		bool                           ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  DataToRetrieve                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureByte(const struct FString& Key, unsigned char* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte"));

	struct
	{
		struct FString                 Key;
		unsigned char                  DataToRetrieve;
		bool                           ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           DataToRetrieve                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureBool(const struct FString& Key, bool* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool"));

	struct
	{
		struct FString                 Key;
		bool                           DataToRetrieve;
		bool                           ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    DataToRetrieve                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureArray(const struct FString& Key, TArray<int>* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray"));

	struct
	{
		struct FString                 Key;
		TArray<int>                    DataToRetrieve;
		bool                           ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::DeleteSecureData(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData"));

	struct
	{
		struct FString                 Key;
		bool                           ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
