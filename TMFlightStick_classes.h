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

// Class TMFlightStick.TMFlightStickBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTMFlightStickBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TMFlightStick.TMFlightStickBlueprintLibrary");
		return ptr;
	}


	void STATIC_SearchDevice(bool* ret);
	void STATIC_IsEnableFlightStick(bool* ret);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
