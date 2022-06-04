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

// Function Communication.Communication_C.Construct
struct UCommunication_C_Construct_Params
{
};

// Function Communication.Communication_C.ExecuteUbergraph_Communication
struct UCommunication_C_ExecuteUbergraph_Communication_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
