#pragma once

// Name: AceCombat7, Version: 1.3.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum CustomKeyMouse.ECustomKeyMouseDevice
enum class ECustomKeyMouseDevice : uint8_t
{
	ECustomKeyMouseDevice__CKM_DeviceGamepad = 0,
	ECustomKeyMouseDevice__CKM_DeviceKeyboard = 1,
	ECustomKeyMouseDevice__CKM_MAX = 2
};


// Enum CustomKeyMouse.ECustomKeyMouseIconType
enum class ECustomKeyMouseIconType : uint8_t
{
	ECustomKeyMouseIconType__CKM_IconTypeGamepad = 0,
	ECustomKeyMouseIconType__CKM_IconTypeKeyboardEnglish = 1,
	ECustomKeyMouseIconType__CKM_IconTypeKeyboardFrench = 2,
	ECustomKeyMouseIconType__CKM_IconTypeKeyboardGerman = 3,
	ECustomKeyMouseIconType__CKM_IconTypeKeyboardItalian = 4,
	ECustomKeyMouseIconType__CKM_IconTypeKeyboardJapanese = 5,
	ECustomKeyMouseIconType__CKM_IconTypeKeyboardSpanish = 6,
	ECustomKeyMouseIconType__CKM_IconTypeKeyboardRussian = 7,
	ECustomKeyMouseIconType__CKM_MAX = 8
};


// Enum CustomKeyMouse.ECustomKeyMouseLanguage
enum class ECustomKeyMouseLanguage : uint8_t
{
	ECustomKeyMouseLanguage__CKM_LanguageEnglish = 0,
	ECustomKeyMouseLanguage__CKM_LanguageFrench = 1,
	ECustomKeyMouseLanguage__CKM_LanguageGerman = 2,
	ECustomKeyMouseLanguage__CKM_LanguageItalian = 3,
	ECustomKeyMouseLanguage__CKM_LanguageJapanese = 4,
	ECustomKeyMouseLanguage__CKM_LanguageSpanish = 5,
	ECustomKeyMouseLanguage__CKM_LanguageRussian = 6,
	ECustomKeyMouseLanguage__CKM_LanguageMax = 7,
	ECustomKeyMouseLanguage__CKM_MAX = 8
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
