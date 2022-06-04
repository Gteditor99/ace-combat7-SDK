
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

// Function background.background_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubackground_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function background.background_C.Construct");

	Ubackground_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function background.background_C.ExecuteUbergraph_background
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubackground_C::ExecuteUbergraph_background(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function background.background_C.ExecuteUbergraph_background");

	Ubackground_C_ExecuteUbergraph_background_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
