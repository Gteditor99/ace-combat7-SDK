
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

// Function Communication.Communication_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommunication_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Communication.Communication_C.Construct");

	UCommunication_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Communication.Communication_C.ExecuteUbergraph_Communication
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommunication_C::ExecuteUbergraph_Communication(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Communication.Communication_C.ExecuteUbergraph_Communication");

	UCommunication_C_ExecuteUbergraph_Communication_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
