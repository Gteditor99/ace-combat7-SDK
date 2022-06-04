
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

// Function LightMenuButtonText.LightMenuButtonText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULightMenuButtonText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightMenuButtonText.LightMenuButtonText_C.Construct");

	ULightMenuButtonText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightMenuButtonText.LightMenuButtonText_C.ExecuteUbergraph_LightMenuButtonText
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightMenuButtonText_C::ExecuteUbergraph_LightMenuButtonText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightMenuButtonText.LightMenuButtonText_C.ExecuteUbergraph_LightMenuButtonText");

	ULightMenuButtonText_C_ExecuteUbergraph_LightMenuButtonText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
