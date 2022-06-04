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

// BlueprintGeneratedClass AceUIGameMode.AceUIGameMode_C
// 0x0008 (0x1058 - 0x1050)
class AAceUIGameMode_C : public AUIGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x1050(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AceUIGameMode.AceUIGameMode_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
