
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

// Function COPYRIGHT.Copyright_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCopyright_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function COPYRIGHT.Copyright_C.Construct");

	UCopyright_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function COPYRIGHT.Copyright_C.ExecuteUbergraph_Copyright
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCopyright_C::ExecuteUbergraph_Copyright(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function COPYRIGHT.Copyright_C.ExecuteUbergraph_Copyright");

	UCopyright_C_ExecuteUbergraph_Copyright_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
