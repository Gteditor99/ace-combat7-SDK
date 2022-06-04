
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

// Function MenuLeftVerticalBar.MenuLeftVerticalBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenuLeftVerticalBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuLeftVerticalBar.MenuLeftVerticalBar_C.Construct");

	UMenuLeftVerticalBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuLeftVerticalBar.MenuLeftVerticalBar_C.ExecuteUbergraph_MenuLeftVerticalBar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuLeftVerticalBar_C::ExecuteUbergraph_MenuLeftVerticalBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuLeftVerticalBar.MenuLeftVerticalBar_C.ExecuteUbergraph_MenuLeftVerticalBar");

	UMenuLeftVerticalBar_C_ExecuteUbergraph_MenuLeftVerticalBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
