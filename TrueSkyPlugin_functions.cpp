
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

// Function TrueSkyPlugin.CloudPlacementTexture.SetBoxExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InBoxExtent                    (Parm, IsPlainOldData)
// bool                           bUpdateOverlaps                (Parm, ZeroConstructor, IsPlainOldData)

void UCloudPlacementTexture::SetBoxExtent(const struct FVector& InBoxExtent, bool bUpdateOverlaps)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.CloudPlacementTexture.SetBoxExtent");

	UCloudPlacementTexture_SetBoxExtent_Params params;
	params.InBoxExtent = InBoxExtent;
	params.bUpdateOverlaps = bUpdateOverlaps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.CloudPlacementTexture.GetUnscaledBoxExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UCloudPlacementTexture::GetUnscaledBoxExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.CloudPlacementTexture.GetUnscaledBoxExtent");

	UCloudPlacementTexture_GetUnscaledBoxExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.CloudPlacementTexture.GetScaledBoxExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UCloudPlacementTexture::GetScaledBoxExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.CloudPlacementTexture.GetScaledBoxExtent");

	UCloudPlacementTexture_GetScaledBoxExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.CloudSpheroid.SetSpheroidRadii
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InSpheroidRadii                (Parm, IsPlainOldData)
// bool                           bUpdateOverlaps                (Parm, ZeroConstructor, IsPlainOldData)

void UCloudSpheroid::SetSpheroidRadii(const struct FVector& InSpheroidRadii, bool bUpdateOverlaps)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.CloudSpheroid.SetSpheroidRadii");

	UCloudSpheroid_SetSpheroidRadii_Params params;
	params.InSpheroidRadii = InSpheroidRadii;
	params.bUpdateOverlaps = bUpdateOverlaps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.CloudSpheroid.GetUnscaledSpheroidRadii
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UCloudSpheroid::GetUnscaledSpheroidRadii()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.CloudSpheroid.GetUnscaledSpheroidRadii");

	UCloudSpheroid_GetUnscaledSpheroidRadii_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.CloudSpheroid.GetShapeScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UCloudSpheroid::GetShapeScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.CloudSpheroid.GetShapeScale");

	UCloudSpheroid_GetShapeScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.CloudSpheroid.GetScaledSpheroidRadii
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UCloudSpheroid::GetScaledSpheroidRadii()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.CloudSpheroid.GetScaledSpheroidRadii");

	UCloudSpheroid_GetScaledSpheroidRadii_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.VolumeQueryResult
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            CallerId                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Density                        (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::VolumeQueryResult(int CallerId, float Density)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.VolumeQueryResult");

	ATrueSkySequenceActor_VolumeQueryResult_Params params;
	params.CallerId = CallerId;
	params.Density = Density;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::STATIC_SetTime(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetTime");

	ATrueSkySequenceActor_SetTime_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetTickTime
// (Final, Native, Public)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::SetTickTime(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetTickTime");

	ATrueSkySequenceActor_SetTickTime_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetSunRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                R                              (Parm, IsPlainOldData)

void ATrueSkySequenceActor::STATIC_SetSunRotation(const struct FRotator& R)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetSunRotation");

	ATrueSkySequenceActor_SetSunRotation_Params params;
	params.R = R;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetShadowBase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Base                           (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::STATIC_SetShadowBase(float Base)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetShadowBase");

	ATrueSkySequenceActor_SetShadowBase_Params params;
	params.Base = Base;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLightSource
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            lightColour                    (Parm, IsPlainOldData)
// float                          intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Pos                            (Parm, IsPlainOldData)
// float                          minRadius                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRadius                      (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::STATIC_SetPointLightSource(int ID, const struct FLinearColor& lightColour, float intensity, const struct FVector& Pos, float minRadius, float MaxRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLightSource");

	ATrueSkySequenceActor_SetPointLightSource_Params params;
	params.ID = ID;
	params.lightColour = lightColour;
	params.intensity = intensity;
	params.Pos = Pos;
	params.minRadius = minRadius;
	params.MaxRadius = MaxRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLight
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APointLight*             Source                         (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::STATIC_SetPointLight(class APointLight* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLight");

	ATrueSkySequenceActor_SetPointLight_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetMoonRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                R                              (Parm, IsPlainOldData)

void ATrueSkySequenceActor::STATIC_SetMoonRotation(const struct FRotator& R)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetMoonRotation");

	ATrueSkySequenceActor_SetMoonRotation_Params params;
	params.R = R;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            KeyframeUid                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::STATIC_SetKeyframeInt(int KeyframeUid, const struct FString& Name, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeInt");

	ATrueSkySequenceActor_SetKeyframeInt_Params params;
	params.KeyframeUid = KeyframeUid;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            KeyframeUid                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::STATIC_SetKeyframeFloat(int KeyframeUid, const struct FString& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeFloat");

	ATrueSkySequenceActor_SetKeyframeFloat_Params params;
	params.KeyframeUid = KeyframeUid;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::STATIC_SetInt(const struct FString& Name, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetInt");

	ATrueSkySequenceActor_SetInt_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::STATIC_SetFloat(const struct FString& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetFloat");

	ATrueSkySequenceActor_SetFloat_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::STATIC_SetBool(const struct FString& Name, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetBool");

	ATrueSkySequenceActor_SetBool_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetTime2
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrueSkySequenceActor::GetTime2()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetTime2");

	ATrueSkySequenceActor_GetTime2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrueSkySequenceActor::STATIC_GetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetTime");

	ATrueSkySequenceActor_GetTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetTickTime
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrueSkySequenceActor::GetTickTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetTickTime");

	ATrueSkySequenceActor_GetTickTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ATrueSkySequenceActor::STATIC_GetText(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetText");

	ATrueSkySequenceActor_GetText_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ATrueSkySequenceActor::STATIC_GetSunRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetSunRotation");

	ATrueSkySequenceActor_GetSunRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunOrMoonRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ATrueSkySequenceActor::STATIC_GetSunOrMoonRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetSunOrMoonRotation");

	ATrueSkySequenceActor_GetSunOrMoonRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunIntensity
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrueSkySequenceActor::STATIC_GetSunIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetSunIntensity");

	ATrueSkySequenceActor_GetSunIntensity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor ATrueSkySequenceActor::STATIC_GetSunColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetSunColor");

	ATrueSkySequenceActor_GetSunColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetSkyKeyframeByIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATrueSkySequenceActor::STATIC_GetSkyKeyframeByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetSkyKeyframeByIndex");

	ATrueSkySequenceActor_GetSkyKeyframeByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetShadowBase
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrueSkySequenceActor::STATIC_GetShadowBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetShadowBase");

	ATrueSkySequenceActor_GetShadowBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetProfilingText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            cpu_level                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            gpu_level                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ATrueSkySequenceActor::STATIC_GetProfilingText(int cpu_level, int gpu_level)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetProfilingText");

	ATrueSkySequenceActor_GetProfilingText_Params params;
	params.cpu_level = cpu_level;
	params.gpu_level = gpu_level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetPreviousSkyKeyframeBeforeTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          T                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATrueSkySequenceActor::STATIC_GetPreviousSkyKeyframeBeforeTime(float T)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetPreviousSkyKeyframeBeforeTime");

	ATrueSkySequenceActor_GetPreviousSkyKeyframeBeforeTime_Params params;
	params.T = T;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetPreviousCloudKeyframeBeforeTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          T                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATrueSkySequenceActor::STATIC_GetPreviousCloudKeyframeBeforeTime(int Layer, float T)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetPreviousCloudKeyframeBeforeTime");

	ATrueSkySequenceActor_GetPreviousCloudKeyframeBeforeTime_Params params;
	params.Layer = Layer;
	params.T = T;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextSkyKeyframeAfterTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          T                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATrueSkySequenceActor::STATIC_GetNextSkyKeyframeAfterTime(float T)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetNextSkyKeyframeAfterTime");

	ATrueSkySequenceActor_GetNextSkyKeyframeAfterTime_Params params;
	params.T = T;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableSkyKeyframe
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATrueSkySequenceActor::STATIC_GetNextModifiableSkyKeyframe()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableSkyKeyframe");

	ATrueSkySequenceActor_GetNextModifiableSkyKeyframe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableCloudKeyframe
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATrueSkySequenceActor::STATIC_GetNextModifiableCloudKeyframe(int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableCloudKeyframe");

	ATrueSkySequenceActor_GetNextModifiableCloudKeyframe_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextCloudKeyframeAfterTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          T                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATrueSkySequenceActor::STATIC_GetNextCloudKeyframeAfterTime(int Layer, float T)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetNextCloudKeyframeAfterTime");

	ATrueSkySequenceActor_GetNextCloudKeyframeAfterTime_Params params;
	params.Layer = Layer;
	params.T = T;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetMoonRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ATrueSkySequenceActor::STATIC_GetMoonRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetMoonRotation");

	ATrueSkySequenceActor_GetMoonRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetMoonIntensity
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrueSkySequenceActor::STATIC_GetMoonIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetMoonIntensity");

	ATrueSkySequenceActor_GetMoonIntensity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetMoonColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor ATrueSkySequenceActor::STATIC_GetMoonColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetMoonColor");

	ATrueSkySequenceActor_GetMoonColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            KeyframeUid                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATrueSkySequenceActor::STATIC_GetKeyframeInt(int KeyframeUid, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeInt");

	ATrueSkySequenceActor_GetKeyframeInt_Params params;
	params.KeyframeUid = KeyframeUid;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            KeyframeUid                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrueSkySequenceActor::STATIC_GetKeyframeFloat(int KeyframeUid, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeFloat");

	ATrueSkySequenceActor_GetKeyframeFloat_Params params;
	params.KeyframeUid = KeyframeUid;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATrueSkySequenceActor::STATIC_GetInt(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetInt");

	ATrueSkySequenceActor_GetInt_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrueSkySequenceActor::STATIC_GetFloat(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetFloat");

	ATrueSkySequenceActor_GetFloat_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetCloudKeyframeByIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATrueSkySequenceActor::STATIC_GetCloudKeyframeByIndex(int Layer, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetCloudKeyframeByIndex");

	ATrueSkySequenceActor_GetCloudKeyframeByIndex_Params params;
	params.Layer = Layer;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATrueSkySequenceActor::STATIC_GetBool(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetBool");

	ATrueSkySequenceActor_GetBool_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.CloudPointTest
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            QueryID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Pos                            (Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrueSkySequenceActor::STATIC_CloudPointTest(int QueryID, const struct FVector& Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.CloudPointTest");

	ATrueSkySequenceActor_CloudPointTest_Params params;
	params.QueryID = QueryID;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.CloudLineTest
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            QueryID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartPos                       (Parm, IsPlainOldData)
// struct FVector                 EndPos                         (Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrueSkySequenceActor::STATIC_CloudLineTest(int QueryID, const struct FVector& StartPos, const struct FVector& EndPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.CloudLineTest");

	ATrueSkySequenceActor_CloudLineTest_Params params;
	params.QueryID = QueryID;
	params.StartPos = StartPos;
	params.EndPos = EndPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
