
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

// Function TMFlightStick.TMFlightStickBlueprintLibrary.SearchDevice
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTMFlightStickBlueprintLibrary::STATIC_SearchDevice(bool* ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function TMFlightStick.TMFlightStickBlueprintLibrary.SearchDevice");

	UTMFlightStickBlueprintLibrary_SearchDevice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
}


// Function TMFlightStick.TMFlightStickBlueprintLibrary.IsEnableFlightStick
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTMFlightStickBlueprintLibrary::STATIC_IsEnableFlightStick(bool* ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function TMFlightStick.TMFlightStickBlueprintLibrary.IsEnableFlightStick");

	UTMFlightStickBlueprintLibrary_IsEnableFlightStick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
