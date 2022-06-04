#pragma once

// Name: AceCombat7, Version: 1.3.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum TrueSkyPlugin.EQSimulRenderMode
enum class EQSimulRenderMode : uint8_t
{
	EQSimulRenderMode__Default     = 0,
	EQSimulRenderMode__Reproject   = 1,
	EQSimulRenderMode__Checkerboard = 2,
	EQSimulRenderMode__VRMultiRes  = 3,
	EQSimulRenderMode__EQSimulRenderMode_MAX = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
