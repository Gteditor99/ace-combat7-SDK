#pragma once

#include "../SDK.h"

// Name: AceCombat7, Version: 1.3.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function OOCWidgetBP.OOCWidgetBP_C.Construct
struct UOOCWidgetBP_C_Construct_Params
{
};

// Function OOCWidgetBP.OOCWidgetBP_C.Tick
struct UOOCWidgetBP_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OOCWidgetBP.OOCWidgetBP_C.ExecuteUbergraph_OOCWidgetBP
struct UOOCWidgetBP_C_ExecuteUbergraph_OOCWidgetBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
