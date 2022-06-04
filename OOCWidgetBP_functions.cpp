
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

// Function OOCWidgetBP.OOCWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOOCWidgetBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OOCWidgetBP.OOCWidgetBP_C.Construct");

	UOOCWidgetBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OOCWidgetBP.OOCWidgetBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOOCWidgetBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OOCWidgetBP.OOCWidgetBP_C.Tick");

	UOOCWidgetBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OOCWidgetBP.OOCWidgetBP_C.ExecuteUbergraph_OOCWidgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOOCWidgetBP_C::ExecuteUbergraph_OOCWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OOCWidgetBP.OOCWidgetBP_C.ExecuteUbergraph_OOCWidgetBP");

	UOOCWidgetBP_C_ExecuteUbergraph_OOCWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
