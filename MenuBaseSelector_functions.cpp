
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

// Function MenuBaseSelector.MenuBaseSelector_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)

void UMenuBaseSelector_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuBaseSelector.MenuBaseSelector_C.NewFunction_1");

	UMenuBaseSelector_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuBaseSelector.MenuBaseSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenuBaseSelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuBaseSelector.MenuBaseSelector_C.Construct");

	UMenuBaseSelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuBaseSelector.MenuBaseSelector_C.ExecuteUbergraph_MenuBaseSelector
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuBaseSelector_C::ExecuteUbergraph_MenuBaseSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuBaseSelector.MenuBaseSelector_C.ExecuteUbergraph_MenuBaseSelector");

	UMenuBaseSelector_C_ExecuteUbergraph_MenuBaseSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
