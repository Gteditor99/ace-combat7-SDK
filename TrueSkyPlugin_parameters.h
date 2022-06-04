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

// Function TrueSkyPlugin.CloudPlacementTexture.SetBoxExtent
struct UCloudPlacementTexture_SetBoxExtent_Params
{
	struct FVector                                     InBoxExtent;                                              // (Parm, IsPlainOldData)
	bool                                               bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.CloudPlacementTexture.GetUnscaledBoxExtent
struct UCloudPlacementTexture_GetUnscaledBoxExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.CloudPlacementTexture.GetScaledBoxExtent
struct UCloudPlacementTexture_GetScaledBoxExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.CloudSpheroid.SetSpheroidRadii
struct UCloudSpheroid_SetSpheroidRadii_Params
{
	struct FVector                                     InSpheroidRadii;                                          // (Parm, IsPlainOldData)
	bool                                               bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.CloudSpheroid.GetUnscaledSpheroidRadii
struct UCloudSpheroid_GetUnscaledSpheroidRadii_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.CloudSpheroid.GetShapeScale
struct UCloudSpheroid_GetShapeScale_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.CloudSpheroid.GetScaledSpheroidRadii
struct UCloudSpheroid_GetScaledSpheroidRadii_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.VolumeQueryResult
struct ATrueSkySequenceActor_VolumeQueryResult_Params
{
	int                                                CallerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetTime
struct ATrueSkySequenceActor_SetTime_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetTickTime
struct ATrueSkySequenceActor_SetTickTime_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetSunRotation
struct ATrueSkySequenceActor_SetSunRotation_Params
{
	struct FRotator                                    R;                                                        // (Parm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetShadowBase
struct ATrueSkySequenceActor_SetShadowBase_Params
{
	float                                              Base;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLightSource
struct ATrueSkySequenceActor_SetPointLightSource_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                lightColour;                                              // (Parm, IsPlainOldData)
	float                                              intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos;                                                      // (Parm, IsPlainOldData)
	float                                              minRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLight
struct ATrueSkySequenceActor_SetPointLight_Params
{
	class APointLight*                                 Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetMoonRotation
struct ATrueSkySequenceActor_SetMoonRotation_Params
{
	struct FRotator                                    R;                                                        // (Parm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeInt
struct ATrueSkySequenceActor_SetKeyframeInt_Params
{
	int                                                KeyframeUid;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeFloat
struct ATrueSkySequenceActor_SetKeyframeFloat_Params
{
	int                                                KeyframeUid;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetInt
struct ATrueSkySequenceActor_SetInt_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetFloat
struct ATrueSkySequenceActor_SetFloat_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetBool
struct ATrueSkySequenceActor_SetBool_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetTime2
struct ATrueSkySequenceActor_GetTime2_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetTime
struct ATrueSkySequenceActor_GetTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetTickTime
struct ATrueSkySequenceActor_GetTickTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetText
struct ATrueSkySequenceActor_GetText_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunRotation
struct ATrueSkySequenceActor_GetSunRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunOrMoonRotation
struct ATrueSkySequenceActor_GetSunOrMoonRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunIntensity
struct ATrueSkySequenceActor_GetSunIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunColor
struct ATrueSkySequenceActor_GetSunColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetSkyKeyframeByIndex
struct ATrueSkySequenceActor_GetSkyKeyframeByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetShadowBase
struct ATrueSkySequenceActor_GetShadowBase_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetProfilingText
struct ATrueSkySequenceActor_GetProfilingText_Params
{
	int                                                cpu_level;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                gpu_level;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetPreviousSkyKeyframeBeforeTime
struct ATrueSkySequenceActor_GetPreviousSkyKeyframeBeforeTime_Params
{
	float                                              T;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetPreviousCloudKeyframeBeforeTime
struct ATrueSkySequenceActor_GetPreviousCloudKeyframeBeforeTime_Params
{
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              T;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextSkyKeyframeAfterTime
struct ATrueSkySequenceActor_GetNextSkyKeyframeAfterTime_Params
{
	float                                              T;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableSkyKeyframe
struct ATrueSkySequenceActor_GetNextModifiableSkyKeyframe_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableCloudKeyframe
struct ATrueSkySequenceActor_GetNextModifiableCloudKeyframe_Params
{
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextCloudKeyframeAfterTime
struct ATrueSkySequenceActor_GetNextCloudKeyframeAfterTime_Params
{
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              T;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetMoonRotation
struct ATrueSkySequenceActor_GetMoonRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetMoonIntensity
struct ATrueSkySequenceActor_GetMoonIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetMoonColor
struct ATrueSkySequenceActor_GetMoonColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeInt
struct ATrueSkySequenceActor_GetKeyframeInt_Params
{
	int                                                KeyframeUid;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeFloat
struct ATrueSkySequenceActor_GetKeyframeFloat_Params
{
	int                                                KeyframeUid;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetInt
struct ATrueSkySequenceActor_GetInt_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetFloat
struct ATrueSkySequenceActor_GetFloat_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetCloudKeyframeByIndex
struct ATrueSkySequenceActor_GetCloudKeyframeByIndex_Params
{
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetBool
struct ATrueSkySequenceActor_GetBool_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.CloudPointTest
struct ATrueSkySequenceActor_CloudPointTest_Params
{
	int                                                QueryID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos;                                                      // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.CloudLineTest
struct ATrueSkySequenceActor_CloudLineTest_Params
{
	int                                                QueryID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartPos;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
