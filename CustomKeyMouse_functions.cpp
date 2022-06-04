
#include "../SDK.h"

// Name: AceCombat7, Version: 1.3.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.SetMouseStickSensitive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          InSensitvie                    (Parm, ZeroConstructor, IsPlainOldData)

void UCustomKeyMouseBlueprintLibrary::STATIC_SetMouseStickSensitive(float InSensitvie)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.SetMouseStickSensitive");

	UCustomKeyMouseBlueprintLibrary_SetMouseStickSensitive_Params params;
	params.InSensitvie = InSensitvie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.SetMouseLookAtSensitive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          InSensitvie                    (Parm, ZeroConstructor, IsPlainOldData)

void UCustomKeyMouseBlueprintLibrary::STATIC_SetMouseLookAtSensitive(float InSensitvie)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.SetMouseLookAtSensitive");

	UCustomKeyMouseBlueprintLibrary_SetMouseLookAtSensitive_Params params;
	params.InSensitvie = InSensitvie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.SetMouseLookAtModifyKey
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InIndex                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    InKey                          (ConstParm, Parm, OutParm, ReferenceParm)

void UCustomKeyMouseBlueprintLibrary::STATIC_SetMouseLookAtModifyKey(int InIndex, const struct FKey& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.SetMouseLookAtModifyKey");

	UCustomKeyMouseBlueprintLibrary_SetMouseLookAtModifyKey_Params params;
	params.InIndex = InIndex;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetMouseStickSensitive
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          OutSensitive                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCustomKeyMouseBlueprintLibrary::STATIC_GetMouseStickSensitive(float* OutSensitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetMouseStickSensitive");

	UCustomKeyMouseBlueprintLibrary_GetMouseStickSensitive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSensitive != nullptr)
		*OutSensitive = params.OutSensitive;
}


// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetMouseLookAtSensitive
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          OutSensitive                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCustomKeyMouseBlueprintLibrary::STATIC_GetMouseLookAtSensitive(float* OutSensitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetMouseLookAtSensitive");

	UCustomKeyMouseBlueprintLibrary_GetMouseLookAtSensitive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSensitive != nullptr)
		*OutSensitive = params.OutSensitive;
}


// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetMouseLookAtModifyKey
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    OutKey                         (Parm, OutParm)
// int                            InIndex                        (Parm, ZeroConstructor, IsPlainOldData)

void UCustomKeyMouseBlueprintLibrary::STATIC_GetMouseLookAtModifyKey(int InIndex, struct FKey* OutKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetMouseLookAtModifyKey");

	UCustomKeyMouseBlueprintLibrary_GetMouseLookAtModifyKey_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutKey != nullptr)
		*OutKey = params.OutKey;
}


// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetLastInputDevice
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// ECustomKeyMouseDevice          OutDevice                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCustomKeyMouseBlueprintLibrary::STATIC_GetLastInputDevice(ECustomKeyMouseDevice* OutDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetLastInputDevice");

	UCustomKeyMouseBlueprintLibrary_GetLastInputDevice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDevice != nullptr)
		*OutDevice = params.OutDevice;
}


// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetLanguage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// ECustomKeyMouseLanguage        OutLanguege                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCustomKeyMouseBlueprintLibrary::STATIC_GetLanguage(ECustomKeyMouseLanguage* OutLanguege)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetLanguage");

	UCustomKeyMouseBlueprintLibrary_GetLanguage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLanguege != nullptr)
		*OutLanguege = params.OutLanguege;
}


// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetIconType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// ECustomKeyMouseIconType        OutIconType                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCustomKeyMouseBlueprintLibrary::STATIC_GetIconType(ECustomKeyMouseIconType* OutIconType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetIconType");

	UCustomKeyMouseBlueprintLibrary_GetIconType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIconType != nullptr)
		*OutIconType = params.OutIconType;
}


// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetExternalCharacterUnknown
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 OutString                      (Parm, OutParm, ZeroConstructor)

void UCustomKeyMouseBlueprintLibrary::STATIC_GetExternalCharacterUnknown(struct FString* OutString)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetExternalCharacterUnknown");

	UCustomKeyMouseBlueprintLibrary_GetExternalCharacterUnknown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;
}


// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetExternalCharacter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 OutString                      (Parm, OutParm, ZeroConstructor)
// struct FKey                    InKey                          (ConstParm, Parm, OutParm, ReferenceParm)

void UCustomKeyMouseBlueprintLibrary::STATIC_GetExternalCharacter(const struct FKey& InKey, struct FString* OutString)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetExternalCharacter");

	UCustomKeyMouseBlueprintLibrary_GetExternalCharacter_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
