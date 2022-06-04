#pragma once

#include "../SDK.h"

// Name: AceCombat7, Version: 1.3.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.SetMouseStickSensitive
struct UCustomKeyMouseBlueprintLibrary_SetMouseStickSensitive_Params
{
	float                                              InSensitvie;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.SetMouseLookAtSensitive
struct UCustomKeyMouseBlueprintLibrary_SetMouseLookAtSensitive_Params
{
	float                                              InSensitvie;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.SetMouseLookAtModifyKey
struct UCustomKeyMouseBlueprintLibrary_SetMouseLookAtModifyKey_Params
{
	int                                                InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        InKey;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetMouseStickSensitive
struct UCustomKeyMouseBlueprintLibrary_GetMouseStickSensitive_Params
{
	float                                              OutSensitive;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetMouseLookAtSensitive
struct UCustomKeyMouseBlueprintLibrary_GetMouseLookAtSensitive_Params
{
	float                                              OutSensitive;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetMouseLookAtModifyKey
struct UCustomKeyMouseBlueprintLibrary_GetMouseLookAtModifyKey_Params
{
	struct FKey                                        OutKey;                                                   // (Parm, OutParm)
	int                                                InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetLastInputDevice
struct UCustomKeyMouseBlueprintLibrary_GetLastInputDevice_Params
{
	ECustomKeyMouseDevice                              OutDevice;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetLanguage
struct UCustomKeyMouseBlueprintLibrary_GetLanguage_Params
{
	ECustomKeyMouseLanguage                            OutLanguege;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetIconType
struct UCustomKeyMouseBlueprintLibrary_GetIconType_Params
{
	ECustomKeyMouseIconType                            OutIconType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetExternalCharacterUnknown
struct UCustomKeyMouseBlueprintLibrary_GetExternalCharacterUnknown_Params
{
	struct FString                                     OutString;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function CustomKeyMouse.CustomKeyMouseBlueprintLibrary.GetExternalCharacter
struct UCustomKeyMouseBlueprintLibrary_GetExternalCharacter_Params
{
	struct FString                                     OutString;                                                // (Parm, OutParm, ZeroConstructor)
	struct FKey                                        InKey;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
