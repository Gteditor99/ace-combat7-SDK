#pragma once

// Name: AceCombat7, Version: 1.3.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class CustomKeyMouse.CustomKeyMouseBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UCustomKeyMouseBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomKeyMouse.CustomKeyMouseBlueprintLibrary");
		return ptr;
	}


	void STATIC_SetMouseStickSensitive(float InSensitvie);
	void STATIC_SetMouseLookAtSensitive(float InSensitvie);
	void STATIC_SetMouseLookAtModifyKey(int InIndex, const struct FKey& InKey);
	void STATIC_GetMouseStickSensitive(float* OutSensitive);
	void STATIC_GetMouseLookAtSensitive(float* OutSensitive);
	void STATIC_GetMouseLookAtModifyKey(int InIndex, struct FKey* OutKey);
	void STATIC_GetLastInputDevice(ECustomKeyMouseDevice* OutDevice);
	void STATIC_GetLanguage(ECustomKeyMouseLanguage* OutLanguege);
	void STATIC_GetIconType(ECustomKeyMouseIconType* OutIconType);
	void STATIC_GetExternalCharacterUnknown(struct FString* OutString);
	void STATIC_GetExternalCharacter(const struct FKey& InKey, struct FString* OutString);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
