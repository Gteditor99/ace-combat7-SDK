#pragma once

// Name: AceCombat7, Version: 1.3.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class TrueSkyPlugin.CloudPlacementTexture
// 0x0020 (0x0730 - 0x0710)
class UCloudPlacementTexture : public UShapeComponent
{
public:
	class UTexture2D*                                  CloudMapTexture;                                          // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x0718(0x000C) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0724(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrueSkyPlugin.CloudPlacementTexture");
		return ptr;
	}


	void SetBoxExtent(const struct FVector& InBoxExtent, bool bUpdateOverlaps);
	struct FVector GetUnscaledBoxExtent();
	struct FVector GetScaledBoxExtent();
};


// Class TrueSkyPlugin.CloudSpheroid
// 0x0010 (0x0720 - 0x0710)
class UCloudSpheroid : public UShapeComponent
{
public:
	struct FVector                                     SpheroidRadii;                                            // 0x0710(0x000C) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x071C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrueSkyPlugin.CloudSpheroid");
		return ptr;
	}


	void SetSpheroidRadii(const struct FVector& InSpheroidRadii, bool bUpdateOverlaps);
	struct FVector GetUnscaledSpheroidRadii();
	struct FVector GetShapeScale();
	struct FVector GetScaledSpheroidRadii();
};


// Class TrueSkyPlugin.CumulonimbusComponent
// 0x0010 (0x0730 - 0x0720)
class UCumulonimbusComponent : public UBoxComponent
{
public:
	struct FVector2D                                   Rake;                                                     // 0x0720(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0728(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrueSkyPlugin.CumulonimbusComponent");
		return ptr;
	}

};


// Class TrueSkyPlugin.TrueSkyLight
// 0x0008 (0x0380 - 0x0378)
class ATrueSkyLight : public ALight
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0378(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrueSkyPlugin.TrueSkyLight");
		return ptr;
	}

};


// Class TrueSkyPlugin.TrueSkySequenceActor
// 0x0078 (0x03E0 - 0x0368)
class ATrueSkySequenceActor : public AActor
{
public:
	class UTrueSkySequenceAsset*                       ActiveSequence;                                           // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MoonTexture;                                              // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  CosmicBackgroundTexture;                                  // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTargetCube*                    SkylightCubemapRT;                                        // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      InscatterRT;                                              // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      LossRT;                                                   // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      cloudVisibilityRT;                                        // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EQSimulRenderMode                                  RenderMode;                                               // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	float                                              DownscaleFactor;                                          // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               SVSampling;                                               // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	float                                              Brightness;                                               // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimpleCloudShadowing;                                     // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimpleCloudShadowSharpness;                               // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimpleCloudShadowRange;                                   // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              SimpleCloudShadowBase;                                    // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              VrMultiResRadius;                                         // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              VrMultiResBlend;                                          // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              VrMultiResOffset;                                         // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                RaytraceSteps;                                            // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              MetresPerUnit;                                            // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x03D4(0x0005) MISSED OFFSET
	bool                                               Visible;                                                  // 0x03D9(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x03DA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrueSkyPlugin.TrueSkySequenceActor");
		return ptr;
	}


	void VolumeQueryResult(int CallerId, float Density);
	void STATIC_SetTime(float Value);
	void SetTickTime(float Value);
	void STATIC_SetSunRotation(const struct FRotator& R);
	void STATIC_SetShadowBase(float Base);
	void STATIC_SetPointLightSource(int ID, const struct FLinearColor& lightColour, float intensity, const struct FVector& Pos, float minRadius, float MaxRadius);
	void STATIC_SetPointLight(class APointLight* Source);
	void STATIC_SetMoonRotation(const struct FRotator& R);
	void STATIC_SetKeyframeInt(int KeyframeUid, const struct FString& Name, int Value);
	void STATIC_SetKeyframeFloat(int KeyframeUid, const struct FString& Name, float Value);
	void STATIC_SetInt(const struct FString& Name, int Value);
	void STATIC_SetFloat(const struct FString& Name, float Value);
	void STATIC_SetBool(const struct FString& Name, bool Value);
	float GetTime2();
	float STATIC_GetTime();
	float GetTickTime();
	struct FString STATIC_GetText(const struct FString& Name);
	struct FRotator STATIC_GetSunRotation();
	struct FRotator STATIC_GetSunOrMoonRotation();
	float STATIC_GetSunIntensity();
	struct FLinearColor STATIC_GetSunColor();
	int STATIC_GetSkyKeyframeByIndex(int Index);
	float STATIC_GetShadowBase();
	struct FString STATIC_GetProfilingText(int cpu_level, int gpu_level);
	int STATIC_GetPreviousSkyKeyframeBeforeTime(float T);
	int STATIC_GetPreviousCloudKeyframeBeforeTime(int Layer, float T);
	int STATIC_GetNextSkyKeyframeAfterTime(float T);
	int STATIC_GetNextModifiableSkyKeyframe();
	int STATIC_GetNextModifiableCloudKeyframe(int Layer);
	int STATIC_GetNextCloudKeyframeAfterTime(int Layer, float T);
	struct FRotator STATIC_GetMoonRotation();
	float STATIC_GetMoonIntensity();
	struct FLinearColor STATIC_GetMoonColor();
	int STATIC_GetKeyframeInt(int KeyframeUid, const struct FString& Name);
	float STATIC_GetKeyframeFloat(int KeyframeUid, const struct FString& Name);
	int STATIC_GetInt(const struct FString& Name);
	float STATIC_GetFloat(const struct FString& Name);
	int STATIC_GetCloudKeyframeByIndex(int Layer, int Index);
	bool STATIC_GetBool(const struct FString& Name);
	float STATIC_CloudPointTest(int QueryID, const struct FVector& Pos);
	float STATIC_CloudLineTest(int QueryID, const struct FVector& StartPos, const struct FVector& EndPos);
};


// Class TrueSkyPlugin.TrueSkySequenceAsset
// 0x0010 (0x0038 - 0x0028)
class UTrueSkySequenceAsset : public UObject
{
public:
	TArray<unsigned char>                              SequenceText;                                             // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrueSkyPlugin.TrueSkySequenceAsset");
		return ptr;
	}

};


// Class TrueSkyPlugin.TrueSkyComponent
// 0x0000 (0x02F0 - 0x02F0)
class UTrueSkyComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrueSkyPlugin.TrueSkyComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
