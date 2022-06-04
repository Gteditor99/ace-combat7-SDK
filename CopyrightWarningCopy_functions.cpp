
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

// Function CopyrightWarningCopy.CopyrightWarningCopy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCopyrightWarningCopy_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CopyrightWarningCopy.CopyrightWarningCopy_C.Construct");

	UCopyrightWarningCopy_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CopyrightWarningCopy.CopyrightWarningCopy_C.ExecuteUbergraph_CopyrightWarningCopy
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCopyrightWarningCopy_C::ExecuteUbergraph_CopyrightWarningCopy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CopyrightWarningCopy.CopyrightWarningCopy_C.ExecuteUbergraph_CopyrightWarningCopy");

	UCopyrightWarningCopy_C_ExecuteUbergraph_CopyrightWarningCopy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
