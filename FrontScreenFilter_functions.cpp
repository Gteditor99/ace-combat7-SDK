
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

// Function FrontScreenFilter.FrontScreenFilter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFrontScreenFilter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontScreenFilter.FrontScreenFilter_C.Construct");

	UFrontScreenFilter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontScreenFilter.FrontScreenFilter_C.ExecuteUbergraph_FrontScreenFilter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontScreenFilter_C::ExecuteUbergraph_FrontScreenFilter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontScreenFilter.FrontScreenFilter_C.ExecuteUbergraph_FrontScreenFilter");

	UFrontScreenFilter_C_ExecuteUbergraph_FrontScreenFilter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
