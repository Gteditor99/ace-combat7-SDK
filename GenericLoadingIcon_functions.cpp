
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

// Function GenericLoadingIcon.GenericLoadingIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGenericLoadingIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericLoadingIcon.GenericLoadingIcon_C.Construct");

	UGenericLoadingIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericLoadingIcon.GenericLoadingIcon_C.ExecuteUbergraph_GenericLoadingIcon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGenericLoadingIcon_C::ExecuteUbergraph_GenericLoadingIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericLoadingIcon.GenericLoadingIcon_C.ExecuteUbergraph_GenericLoadingIcon");

	UGenericLoadingIcon_C_ExecuteUbergraph_GenericLoadingIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
