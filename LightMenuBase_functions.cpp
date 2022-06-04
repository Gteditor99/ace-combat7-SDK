
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

// Function LightMenuBase.LightMenuBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULightMenuBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightMenuBase.LightMenuBase_C.Construct");

	ULightMenuBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightMenuBase.LightMenuBase_C.ExecuteUbergraph_LightMenuBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightMenuBase_C::ExecuteUbergraph_LightMenuBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightMenuBase.LightMenuBase_C.ExecuteUbergraph_LightMenuBase");

	ULightMenuBase_C_ExecuteUbergraph_LightMenuBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
