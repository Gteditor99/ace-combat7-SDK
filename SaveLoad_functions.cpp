
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

// Function SaveLoad.SaveLoad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USaveLoad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SaveLoad.SaveLoad_C.Construct");

	USaveLoad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SaveLoad.SaveLoad_C.ExecuteUbergraph_SaveLoad
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USaveLoad_C::ExecuteUbergraph_SaveLoad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SaveLoad.SaveLoad_C.ExecuteUbergraph_SaveLoad");

	USaveLoad_C_ExecuteUbergraph_SaveLoad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
