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

// Enum Nimbus.EMissileAlert
enum class EMissileAlert : uint8_t
{
	EMissileAlert__MissileAlertStandby = 0,
	EMissileAlert__MissileAlertNear = 1,
	EMissileAlert__MissileAlertVeryNear = 2,
	EMissileAlert__EMissileAlert_MAX = 3
};


// Enum Nimbus.EHudBoxAttribute
enum class EHudBoxAttribute : uint8_t
{
	EHudBoxAttribute__None         = 0,
	EHudBoxAttribute__LockonImpossible = 1,
	EHudBoxAttribute__Highlight    = 2,
	EHudBoxAttribute__Fake         = 3,
	EHudBoxAttribute__LockonImpossibleAndHighlight = 4,
	EHudBoxAttribute__EHudBoxAttribute_MAX = 5
};


// Enum Nimbus.ENimbusCameraShakeType
enum class ENimbusCameraShakeType : uint8_t
{
	ENimbusCameraShakeType__None   = 0,
	ENimbusCameraShakeType__EnterAirCurrentCameraShake = 1,
	ENimbusCameraShakeType__InAirCurrentCameraShake = 2,
	ENimbusCameraShakeType__EnterCloudCameraShake = 3,
	ENimbusCameraShakeType__InCloudCurrentCameraShake = 4,
	ENimbusCameraShakeType__ExitCloudCameraShake = 5,
	ENimbusCameraShakeType__EnterSandCameraShake = 6,
	ENimbusCameraShakeType__InSandCurrentCameraShake = 7,
	ENimbusCameraShakeType__ExitSandCameraShake = 8,
	ENimbusCameraShakeType__Lightning = 9,
	ENimbusCameraShakeType__BulletDamage = 10,
	ENimbusCameraShakeType__MissileDamage = 11,
	ENimbusCameraShakeType__LaserDamage = 12,
	ENimbusCameraShakeType__EMLBulletDamage = 13,
	ENimbusCameraShakeType__RectennaBarrierDamage = 14,
	ENimbusCameraShakeType__HeliosDamage = 15,
	ENimbusCameraShakeType__PlaneCrashed = 16,
	ENimbusCameraShakeType__BombImpact = 17,
	ENimbusCameraShakeType__SmallBombImpact = 18,
	ENimbusCameraShakeType__EnemyExplosion = 19,
	ENimbusCameraShakeType__WeaponTracking = 20,
	ENimbusCameraShakeType__Explosion = 21,
	ENimbusCameraShakeType__GeneralPurposeS = 22,
	ENimbusCameraShakeType__GeneralPurposeM = 23,
	ENimbusCameraShakeType__GeneralPurposeL = 24,
	ENimbusCameraShakeType__LandingBase = 25,
	ENimbusCameraShakeType__TakeOffCarrier = 26,
	ENimbusCameraShakeType__LandingCarrier = 27,
	ENimbusCameraShakeType__ReplayCameraShakeLooping = 28,
	ENimbusCameraShakeType__HeliosBombImpact = 29,
	ENimbusCameraShakeType__HeliosBombImpactLoop = 30,
	ENimbusCameraShakeType__HeliosBombImpactTask = 31,
	ENimbusCameraShakeType__Test   = 32,
	ENimbusCameraShakeType__MAX    = 33
};


// Enum Nimbus.EGameObjectSubCategory
enum class EGameObjectSubCategory : uint8_t
{
	EGameObjectSubCategory__SubCategory_None = 0,
	EGameObjectSubCategory__SubCategory_Fighter = 1,
	EGameObjectSubCategory__SubCategory_Attacker = 2,
	EGameObjectSubCategory__SubCategory_Multirole = 3,
	EGameObjectSubCategory__SubCategory_LargePlane = 4,
	EGameObjectSubCategory__SubCategory_Heli = 5,
	EGameObjectSubCategory__SubCategory_AAGun = 6,
	EGameObjectSubCategory__SubCategory_SAM = 7,
	EGameObjectSubCategory__SubCategory_Tank = 8,
	EGameObjectSubCategory__SubCategory_Bomber = 9,
	EGameObjectSubCategory__SubCategory_UAV = 10,
	EGameObjectSubCategory__SubCategory_APC = 11,
	EGameObjectSubCategory__SubCategory_FrigateShip = 12,
	EGameObjectSubCategory__SubCategory_Cruiser = 13,
	EGameObjectSubCategory__SubCategory_Facility = 14,
	EGameObjectSubCategory__SubCategory_GunTower = 15,
	EGameObjectSubCategory__SubCategory_MissileSilo = 16,
	EGameObjectSubCategory__SubCategory_RadioExceptionObject = 17,
	EGameObjectSubCategory__SubCategory_FAS = 18,
	EGameObjectSubCategory__SubCategory_BigPropeller = 19,
	EGameObjectSubCategory__SubCategory_Platform = 20,
	EGameObjectSubCategory__SubCategory_CIWS = 21,
	EGameObjectSubCategory__SubCategory_Alicorn = 22,
	EGameObjectSubCategory__SubCategory_MAX = 23
};


// Enum Nimbus.EGameObjectCategory
enum class EGameObjectCategory : uint8_t
{
	EGameObjectCategory__Category_None = 0,
	EGameObjectCategory__Category_Plane = 1,
	EGameObjectCategory__Category_Heli = 2,
	EGameObjectCategory__Category_Vehicle = 3,
	EGameObjectCategory__Category_Building = 4,
	EGameObjectCategory__Category_Battery = 5,
	EGameObjectCategory__Category_CarrierBattery = 6,
	EGameObjectCategory__Category_Ship = 7,
	EGameObjectCategory__Category_MAX = 8
};


// Enum Nimbus.EEnemySearchPriorityExtension
enum class EEnemySearchPriorityExtension : uint8_t
{
	EEnemySearchPriorityExtension__None = 0,
	EEnemySearchPriorityExtension__DispersionTargeting = 1,
	EEnemySearchPriorityExtension__EEnemySearchPriorityExtension_MAX = 2
};


// Enum Nimbus.EEnemySearchPriority
enum class EEnemySearchPriority : uint8_t
{
	EEnemySearchPriority__Default  = 0,
	EEnemySearchPriority__AIFirst  = 1,
	EEnemySearchPriority__AIOnly   = 2,
	EEnemySearchPriority__AINonTGT = 3,
	EEnemySearchPriority__AINonTGTFirst = 4,
	EEnemySearchPriority__PlayerFirst = 5,
	EEnemySearchPriority__PlayerOnly = 6,
	EEnemySearchPriority__TargetFirst = 7,
	EEnemySearchPriority__TargetOrNearbyPlayer = 8,
	EEnemySearchPriority__EEnemySearchPriority_MAX = 9
};


// Enum Nimbus.EEngagement
enum class EEngagement : uint8_t
{
	EEngagement__None              = 0,
	EEngagement__Attack            = 1,
	EEngagement__AttackOnly        = 2,
	EEngagement__ProvokeEvadeOnly  = 3,
	EEngagement__EvadeOnly         = 4,
	EEngagement__TransitAttackOnly = 5,
	EEngagement__TransitAttackAndEvade = 6,
	EEngagement__EEngagement_MAX   = 7
};


// Enum Nimbus.EWeaponNumber
enum class EWeaponNumber : uint8_t
{
	EWeaponNumber__WN_WEAPON       = 0,
	EWeaponNumber__WN_WEAPON01     = 1,
	EWeaponNumber__WN_WEAPON02     = 2,
	EWeaponNumber__WN_WEAPON_MAX   = 3
};


// Enum Nimbus.EFaction
enum class EFaction : uint8_t
{
	EFaction__Enemy                = 0,
	EFaction__Ally                 = 1,
	EFaction__EFaction_MAX         = 2
};


// Enum Nimbus.ESubFaction
enum class ESubFaction : uint8_t
{
	ESubFaction__EnemyA            = 0,
	ESubFaction__EnemyB            = 1,
	ESubFaction__AllyC             = 2,
	ESubFaction__None              = 3,
	ESubFaction__ESubFaction_MAX   = 4
};


// Enum Nimbus.EAIPathMovingActorSnap
enum class EAIPathMovingActorSnap : uint8_t
{
	EAIPathMovingActorSnap__ObjectSetting = 0,
	EAIPathMovingActorSnap__NotSnap = 1,
	EAIPathMovingActorSnap__Snap   = 2,
	EAIPathMovingActorSnap__EAIPathMovingActorSnap_MAX = 3
};


// Enum Nimbus.ETargetType
enum class ETargetType : uint8_t
{
	ETargetType__AIR_AND_GROUND    = 0,
	ETargetType__AIR_ONLY          = 1,
	ETargetType__GROUND_ONLY       = 2,
	ETargetType__SPECIAL_ONLY      = 3,
	ETargetType__ETargetType_MAX   = 4
};


// Enum Nimbus.EWeaponSpecialBehaviorType
enum class EWeaponSpecialBehaviorType : uint8_t
{
	EWeaponSpecialBehaviorType__None = 0,
	EWeaponSpecialBehaviorType__EML_AlwaysHitToPlayer = 1,
	EWeaponSpecialBehaviorType__EML_NeverHitToPlayer_Near = 2,
	EWeaponSpecialBehaviorType__EML_NeverHitToPlayer_Middle = 3,
	EWeaponSpecialBehaviorType__EML_NeverHitToPlayer_Far = 4,
	EWeaponSpecialBehaviorType__MSL_AlwaysHit = 5,
	EWeaponSpecialBehaviorType__EML_NeverHitToPlayer_Frontward = 6,
	EWeaponSpecialBehaviorType__EML_NeverHitToPlayer_Frontward_DeviationShooting = 7,
	EWeaponSpecialBehaviorType__EML_NeverHitToPlayer_DeviationShooting = 8,
	EWeaponSpecialBehaviorType__EML_AlwaysHitToPlayer_DeviationShooting = 9,
	EWeaponSpecialBehaviorType__EWeaponSpecialBehaviorType_MAX = 10
};


// Enum Nimbus.EDebugModeState
enum class EDebugModeState : uint8_t
{
	EDebugModeState__DMS_INVALID   = 0,
	EDebugModeState__DMS_PHOTOTAKING = 1,
	EDebugModeState__DMS_PLAYERMOVING = 2,
	EDebugModeState__DMS_DEBUGMENU = 3,
	EDebugModeState__DMS_MAX       = 4
};


// Enum Nimbus.EPlayerSystemDamageType
enum class EPlayerSystemDamageType : uint8_t
{
	EPlayerSystemDamageType__CrashOnEnvironment = 0,
	EPlayerSystemDamageType__CrashOnEnvironmentGround = 1,
	EPlayerSystemDamageType__CrashOnEnvironmentSea = 2,
	EPlayerSystemDamageType__OutOfCombatZone = 3,
	EPlayerSystemDamageType__OutOfRunwayZone = 4,
	EPlayerSystemDamageType__EPlayerSystemDamageType_MAX = 5
};


// Enum Nimbus.ECameraType
enum class ECameraType : uint8_t
{
	ECameraType__FIRST_PERSON      = 0,
	ECameraType__COCKPIT           = 1,
	ECameraType__THIRD_PERSON      = 2,
	ECameraType__REPLAY            = 3,
	ECameraType__MINIGAME_CAMERA   = 4,
	ECameraType__IMPACT_CAMERA     = 5,
	ECameraType__VR_CAMERA         = 6,
	ECameraType__NO_CAMERA         = 7,
	ECameraType__ECameraType_MAX   = 8
};


// Enum Nimbus.EVRSoundActor
enum class EVRSoundActor : uint8_t
{
	EVRSoundActor__WarningLight    = 0,
	EVRSoundActor__FiringSwitch    = 1,
	EVRSoundActor__ChangeWeaponSwitch = 2,
	EVRSoundActor__Count           = 3,
	EVRSoundActor__EVRSoundActor_MAX = 4
};


// Enum Nimbus.EBattleMode
enum class EBattleMode : uint8_t
{
	EBattleMode__StandardBattle    = 0,
	EBattleMode__KeyDogfightSystem = 1,
	EBattleMode__EBattleMode_MAX   = 2
};


// Enum Nimbus.EImpactCameraPlayCategory
enum class EImpactCameraPlayCategory : uint8_t
{
	EImpactCameraPlayCategory__None = 0,
	EImpactCameraPlayCategory__WeaponTrackingCamera = 1,
	EImpactCameraPlayCategory__PlayerDead = 2,
	EImpactCameraPlayCategory__KillCamera = 3,
	EImpactCameraPlayCategory__Name = 4,
	EImpactCameraPlayCategory__EImpactCameraPlayCategory_MAX = 5
};


// Enum Nimbus.EOptionsRadarMapWeaponSwitchingTypes
enum class EOptionsRadarMapWeaponSwitchingTypes : uint8_t
{
	EOptionsRadarMapWeaponSwitchingTypes__TypeA = 0,
	EOptionsRadarMapWeaponSwitchingTypes__TypeB = 1,
	EOptionsRadarMapWeaponSwitchingTypes__EOptionsRadarMapWeaponSwitchingTypes_MAX = 2
};


// Enum Nimbus.EControllerVibrationSimulationMode
enum class EControllerVibrationSimulationMode : uint8_t
{
	EControllerVibrationSimulationMode__NotSimulating = 0,
	EControllerVibrationSimulationMode__PS4 = 1,
	EControllerVibrationSimulationMode__XBoxOne = 2,
	EControllerVibrationSimulationMode__EControllerVibrationSimulationMode_MAX = 3
};


// Enum Nimbus.ERadioManagerChannel
enum class ERadioManagerChannel : uint8_t
{
	ERadioManagerChannel__Main     = 0,
	ERadioManagerChannel__Sub      = 1,
	ERadioManagerChannel__COUNT    = 2,
	ERadioManagerChannel__ERadioManagerChannel_MAX = 3
};


// Enum Nimbus.ENimbusSoundType
enum class ENimbusSoundType : uint8_t
{
	ENimbusSoundType__SFX          = 0,
	ENimbusSoundType__Voice        = 1,
	ENimbusSoundType__BGM          = 2,
	ENimbusSoundType__Count        = 3,
	ENimbusSoundType__ENimbusSoundType_MAX = 4
};


// Enum Nimbus.ERadioTension
enum class ERadioTension : uint8_t
{
	ERadioTension__NONE            = 0,
	ERadioTension__NORMAL          = 1,
	ERadioTension__HIGH            = 2,
	ERadioTension__LOW             = 3,
	ERadioTension__COUNT           = 4,
	ERadioTension__ERadioTension_MAX = 5
};


// Enum Nimbus.ERadioType
enum class ERadioType : uint8_t
{
	ERadioType__SCENARIO           = 0,
	ERadioType__PLAY_BY_PLAY       = 1,
	ERadioType__CHATTER            = 2,
	ERadioType__ERadioType_MAX     = 3
};


// Enum Nimbus.ERadioWarningSound
enum class ERadioWarningSound : uint8_t
{
	ERadioWarningSound__NONE       = 0,
	ERadioWarningSound__TYPE1      = 1,
	ERadioWarningSound__TYPE2      = 2,
	ERadioWarningSound__COUNT      = 3,
	ERadioWarningSound__ERadioWarningSound_MAX = 4
};


// Enum Nimbus.EMiniGameType
enum class EMiniGameType : uint8_t
{
	EMiniGameType__Takeoff         = 0,
	EMiniGameType__Landing         = 1,
	EMiniGameType__AerialRefuelling = 2,
	EMiniGameType__Supply          = 3,
	EMiniGameType__EMiniGameType_MAX = 4
};


// Enum Nimbus.EMissionStateMiniGameFailReason
enum class EMissionStateMiniGameFailReason : uint8_t
{
	EMissionStateMiniGameFailReason__TimeOut = 0,
	EMissionStateMiniGameFailReason__EMissionStateMiniGameFailReason_MAX = 1
};


// Enum Nimbus.EMinigameRank
enum class EMinigameRank : uint8_t
{
	EMinigameRank__None            = 0,
	EMinigameRank__S               = 1,
	EMinigameRank__A               = 2,
	EMinigameRank__B               = 3,
	EMinigameRank__C               = 4,
	EMinigameRank__D               = 5,
	EMinigameRank__EMinigameRank_MAX = 6
};


// Enum Nimbus.EHUDDamageType
enum class EHUDDamageType : uint8_t
{
	EHUDDamageType__GUN            = 0,
	EHUDDamageType__MISSILE        = 1,
	EHUDDamageType__COLLISION      = 2,
	EHUDDamageType__EHUDDamageType_MAX = 3
};


// Enum Nimbus.EGuideMessageType
enum class EGuideMessageType : uint8_t
{
	EGuideMessageType__Takeoff     = 0,
	EGuideMessageType__ViewChange  = 1,
	EGuideMessageType__IGCSkip     = 2,
	EGuideMessageType__EGuideMessageType_MAX = 3
};


// Enum Nimbus.EMissionEndReason
enum class EMissionEndReason : uint8_t
{
	EMissionEndReason__Successful  = 0,
	EMissionEndReason__PlayerDead  = 1,
	EMissionEndReason__OutOfCombatZone = 2,
	EMissionEndReason__TimeOut     = 3,
	EMissionEndReason__FailPhaseObjective = 4,
	EMissionEndReason__EMissionEndReason_MAX = 5
};


// Enum Nimbus.EMissionStatePhaseFailReason
enum class EMissionStatePhaseFailReason : uint8_t
{
	EMissionStatePhaseFailReason__TimeOut = 0,
	EMissionStatePhaseFailReason__FailObjective = 1,
	EMissionStatePhaseFailReason__EMissionStatePhaseFailReason_MAX = 2
};


// Enum Nimbus.EMissionSuccessNotificationType
enum class EMissionSuccessNotificationType : uint8_t
{
	EMissionSuccessNotificationType__MissionAccomplished = 0,
	EMissionSuccessNotificationType__MissionAccomplishedSilent = 1,
	EMissionSuccessNotificationType__None = 2,
	EMissionSuccessNotificationType__EMissionSuccessNotificationType_MAX = 3
};


// Enum Nimbus.EWeaponID
enum class EWeaponID : uint8_t
{
	EWeaponID__WID_mg              = 0,
	EWeaponID__WID_msl             = 1,
	EWeaponID__WID_4aam            = 2,
	EWeaponID__WID_4agm            = 3,
	EWeaponID__WID_6aam            = 4,
	EWeaponID__WID_8aam            = 5,
	EWeaponID__WID_8agm            = 6,
	EWeaponID__WID_eml             = 7,
	EWeaponID__WID_gpb             = 8,
	EWeaponID__WID_grkt            = 9,
	EWeaponID__WID_hcaa            = 10,
	EWeaponID__WID_hpaa            = 11,
	EWeaponID__WID_hvaa            = 12,
	EWeaponID__WID_laam            = 13,
	EWeaponID__WID_lacm            = 14,
	EWeaponID__WID_lagm            = 15,
	EWeaponID__WID_lasm            = 16,
	EWeaponID__WID_mgp             = 17,
	EWeaponID__WID_qaam            = 18,
	EWeaponID__WID_rkt             = 19,
	EWeaponID__WID_saam            = 20,
	EWeaponID__WID_sasm            = 21,
	EWeaponID__WID_plsl            = 22,
	EWeaponID__WID_sffs            = 23,
	EWeaponID__WID_sod             = 24,
	EWeaponID__WID_tls             = 25,
	EWeaponID__WID_uav             = 26,
	EWeaponID__WID_ugb             = 27,
	EWeaponID__WID_xsdb            = 28,
	EWeaponID__WID_faeb            = 29,
	EWeaponID__WID_mpbm            = 30,
	EWeaponID__WID_ecm             = 31,
	EWeaponID__WID_pgun            = 32,
	EWeaponID__WID_tgtp            = 33,
	EWeaponID__WID_uav_plsl        = 34,
	EWeaponID__WID_sod_child       = 35,
	EWeaponID__WID_sffs_child      = 36,
	EWeaponID__WID_AI_gun          = 37,
	EWeaponID__WID_AI_gun_emitter  = 38,
	EWeaponID__WID_AI_aagun        = 39,
	EWeaponID__WID_AI_aam          = 40,
	EWeaponID__WID_AI_longrange_aam = 41,
	EWeaponID__WID_AI_artillery    = 42,
	EWeaponID__WID_AI_bomb         = 43,
	EWeaponID__WID_AI_ciws         = 44,
	EWeaponID__WID_AI_laser_interceptor = 45,
	EWeaponID__WID_AI_rktl         = 46,
	EWeaponID__WID_AI_sam          = 47,
	EWeaponID__WID_AI_vls          = 48,
	EWeaponID__WID_AI_aias_aam     = 49,
	EWeaponID__WID_AI_aias_lcn     = 50,
	EWeaponID__WID_AI_aias_plc     = 51,
	EWeaponID__WID_AI_aias_htb     = 52,
	EWeaponID__WID_AI_eml          = 53,
	EWeaponID__WID_AI_eml_stonehenge = 54,
	EWeaponID__WID_AI_lpg          = 55,
	EWeaponID__WID_AI_mop          = 56,
	EWeaponID__WID_AI_rbr          = 57,
	EWeaponID__WID_AI_utl          = 58,
	EWeaponID__WID_AI_ssm          = 59,
	EWeaponID__WID_AI_ecm          = 60,
	EWeaponID__WID_NONE            = 61,
	EWeaponID__WID_MAX             = 62
};


// Enum Nimbus.EMissionCondition_CloudEvent
enum class EMissionCondition_CloudEvent : uint8_t
{
	EMissionCondition_CloudEvent__None = 0,
	EMissionCondition_CloudEvent__EnterCloud = 1,
	EMissionCondition_CloudEvent__ExitCloud = 2,
	EMissionCondition_CloudEvent__BeginIcing = 3,
	EMissionCondition_CloudEvent__Icing = 4,
	EMissionCondition_CloudEvent__EMissionCondition_MAX = 5
};


// Enum Nimbus.EMissionCondition_FailureType
enum class EMissionCondition_FailureType : uint8_t
{
	EMissionCondition_FailureType__None = 0,
	EMissionCondition_FailureType__Crashed = 1,
	EMissionCondition_FailureType__DestroyByEnemy = 2,
	EMissionCondition_FailureType__TimeUp = 3,
	EMissionCondition_FailureType__OutOfZone = 4,
	EMissionCondition_FailureType__FailObjective = 5,
	EMissionCondition_FailureType__EMissionCondition_MAX = 6
};


// Enum Nimbus.EMissionCondition_PlayerDeadReason
enum class EMissionCondition_PlayerDeadReason : uint8_t
{
	EMissionCondition_PlayerDeadReason__None = 0,
	EMissionCondition_PlayerDeadReason__Crashed = 1,
	EMissionCondition_PlayerDeadReason__DestroyByEnemy = 2,
	EMissionCondition_PlayerDeadReason__EMissionCondition_MAX = 3
};


// Enum Nimbus.EMissionCondition_SystemMessageType
enum class EMissionCondition_SystemMessageType : uint8_t
{
	EMissionCondition_SystemMessageType__None = 0,
	EMissionCondition_SystemMessageType__OutOfCombatZone = 1,
	EMissionCondition_SystemMessageType__Stall = 2,
	EMissionCondition_SystemMessageType__EMissionCondition_MAX = 3
};


// Enum Nimbus.EMissionCondition_LostLockonCause
enum class EMissionCondition_LostLockonCause : uint8_t
{
	EMissionCondition_LostLockonCause__None = 0,
	EMissionCondition_LostLockonCause__OutOfRange = 1,
	EMissionCondition_LostLockonCause__ByCloud = 2,
	EMissionCondition_LostLockonCause__EMissionCondition_MAX = 3
};


// Enum Nimbus.EMissionCondition_ObjectToObjectEvent
enum class EMissionCondition_ObjectToObjectEvent : uint8_t
{
	EMissionCondition_ObjectToObjectEvent__None = 0,
	EMissionCondition_ObjectToObjectEvent__EnterLockonWarningArea = 1,
	EMissionCondition_ObjectToObjectEvent__EnterGunRange = 2,
	EMissionCondition_ObjectToObjectEvent__EnterSearchRange = 3,
	EMissionCondition_ObjectToObjectEvent__EMissionCondition_MAX = 4
};


// Enum Nimbus.EMissionCondition_ObjectEvent
enum class EMissionCondition_ObjectEvent : uint8_t
{
	EMissionCondition_ObjectEvent__None = 0,
	EMissionCondition_ObjectEvent__ApproachReturnLine = 1,
	EMissionCondition_ObjectEvent__InfluencedByAirCurrent = 2,
	EMissionCondition_ObjectEvent__NoLongerInfluencedByAirCurrent = 3,
	EMissionCondition_ObjectEvent__EnteredLightningArea = 4,
	EMissionCondition_ObjectEvent__ExitedLightningArea = 5,
	EMissionCondition_ObjectEvent__StruckByLightning = 6,
	EMissionCondition_ObjectEvent__RecoveredFromLightning = 7,
	EMissionCondition_ObjectEvent__ObjectTargeted = 8,
	EMissionCondition_ObjectEvent__ObjectNoLongerTargeted = 9,
	EMissionCondition_ObjectEvent__CapturedBySearchLight = 10,
	EMissionCondition_ObjectEvent__OnIdentified = 11,
	EMissionCondition_ObjectEvent__AutoDestructed = 12,
	EMissionCondition_ObjectEvent__OnDetected = 13,
	EMissionCondition_ObjectEvent__CanceledWeaponFiring = 14,
	EMissionCondition_ObjectEvent__DisappearOffRadarByStealth = 15,
	EMissionCondition_ObjectEvent__RecoveredFromReturnLine = 16,
	EMissionCondition_ObjectEvent__EnteredTunnel = 17,
	EMissionCondition_ObjectEvent__ExitedTunnel = 18,
	EMissionCondition_ObjectEvent__EnteredSpaceElevator = 19,
	EMissionCondition_ObjectEvent__ExitedSpaceElevator = 20,
	EMissionCondition_ObjectEvent__CanceledIEWSEffect = 21,
	EMissionCondition_ObjectEvent__EnterECMArea = 22,
	EMissionCondition_ObjectEvent__LeaveECMArea = 23,
	EMissionCondition_ObjectEvent__EnterESMArea = 24,
	EMissionCondition_ObjectEvent__LeaveESMArea = 25,
	EMissionCondition_ObjectEvent__EMissionCondition_MAX = 26
};


// Enum Nimbus.EMissionCondition_MultiplayerEvent
enum class EMissionCondition_MultiplayerEvent : uint8_t
{
	EMissionCondition_MultiplayerEvent__None = 0,
	EMissionCondition_MultiplayerEvent__StartIntro = 1,
	EMissionCondition_MultiplayerEvent__StartBattle = 2,
	EMissionCondition_MultiplayerEvent__Result = 3,
	EMissionCondition_MultiplayerEvent__Royal_RankUp = 4,
	EMissionCondition_MultiplayerEvent__Royal_RankUpToFirstPlace = 5,
	EMissionCondition_MultiplayerEvent__Royal_RankUpToFirstPlaceTie = 6,
	EMissionCondition_MultiplayerEvent__Royal_RankDown = 7,
	EMissionCondition_MultiplayerEvent__Royal_RankDownToFirstPlaceTie = 8,
	EMissionCondition_MultiplayerEvent__Royal_RankDownToBooby = 9,
	EMissionCondition_MultiplayerEvent__Team_Superior = 10,
	EMissionCondition_MultiplayerEvent__Team_Inferior = 11,
	EMissionCondition_MultiplayerEvent__Team_FirstScore = 12,
	EMissionCondition_MultiplayerEvent__EMissionCondition_MAX = 13
};


// Enum Nimbus.EMissionCondition_MiniGameEvent
enum class EMissionCondition_MiniGameEvent : uint8_t
{
	EMissionCondition_MiniGameEvent__None = 0,
	EMissionCondition_MiniGameEvent__Begin = 1,
	EMissionCondition_MiniGameEvent__Success_RankS = 2,
	EMissionCondition_MiniGameEvent__Success_RankA = 3,
	EMissionCondition_MiniGameEvent__Success_RankB = 4,
	EMissionCondition_MiniGameEvent__Success_RankC = 5,
	EMissionCondition_MiniGameEvent__Success_RankD = 6,
	EMissionCondition_MiniGameEvent__Failure_Crashed = 7,
	EMissionCondition_MiniGameEvent__Failure_DestroyedByGameObject = 8,
	EMissionCondition_MiniGameEvent__Failure_TimeOver = 9,
	EMissionCondition_MiniGameEvent__Failure_OutOfArea = 10,
	EMissionCondition_MiniGameEvent__StartRefuelingProbeStart = 11,
	EMissionCondition_MiniGameEvent__StartRefuelingProbeEnd = 12,
	EMissionCondition_MiniGameEvent__EMissionCondition_MAX = 13
};


// Enum Nimbus.ETGTP_PhaseType
enum class ETGTP_PhaseType : uint8_t
{
	ETGTP_PhaseType__None          = 0,
	ETGTP_PhaseType__AimStart      = 1,
	ETGTP_PhaseType__AimComplete   = 2,
	ETGTP_PhaseType__Drop          = 3,
	ETGTP_PhaseType__AimFailure    = 4,
	ETGTP_PhaseType__MISS          = 5,
	ETGTP_PhaseType__HIT           = 6,
	ETGTP_PhaseType__CRITICAL      = 7,
	ETGTP_PhaseType__MAX           = 8
};


// Enum Nimbus.EMAD_SearchType
enum class EMAD_SearchType : uint8_t
{
	EMAD_SearchType__None          = 0,
	EMAD_SearchType__DetectedSubmarine = 1,
	EMAD_SearchType__Ping          = 2,
	EMAD_SearchType__MAX           = 3
};


// Enum Nimbus.ESonobuoyEvent
enum class ESonobuoyEvent : uint8_t
{
	ESonobuoyEvent__Drop           = 0,
	ESonobuoyEvent__WarterLanding  = 1,
	ESonobuoyEvent__SettleIn       = 2,
	ESonobuoyEvent__ESonobuoyEvent_MAX = 3
};


// Enum Nimbus.ESubmarineRailgunEvent
enum class ESubmarineRailgunEvent : uint8_t
{
	ESubmarineRailgunEvent__None   = 0,
	ESubmarineRailgunEvent__Extracted = 1,
	ESubmarineRailgunEvent__Broken = 2,
	ESubmarineRailgunEvent__ESubmarineRailgunEvent_MAX = 3
};


// Enum Nimbus.EMissionCondition_BattleRoyalSituation
enum class EMissionCondition_BattleRoyalSituation : uint8_t
{
	EMissionCondition_BattleRoyalSituation__None = 0,
	EMissionCondition_BattleRoyalSituation__Booby = 1,
	EMissionCondition_BattleRoyalSituation__EMissionCondition_MAX = 2
};


// Enum Nimbus.EMissionCondition_MiniGameDistanceType
enum class EMissionCondition_MiniGameDistanceType : uint8_t
{
	EMissionCondition_MiniGameDistanceType__None = 0,
	EMissionCondition_MiniGameDistanceType__Remaining_Inside = 1,
	EMissionCondition_MiniGameDistanceType__Remaining_Outside = 2,
	EMissionCondition_MiniGameDistanceType__EMissionCondition_MAX = 3
};


// Enum Nimbus.EMissionCondition_MiniGameType
enum class EMissionCondition_MiniGameType : uint8_t
{
	EMissionCondition_MiniGameType__None = 0,
	EMissionCondition_MiniGameType__TakeOffFromGround = 1,
	EMissionCondition_MiniGameType__TakeOffFromAircraftCarrier = 2,
	EMissionCondition_MiniGameType__LandingToGround = 3,
	EMissionCondition_MiniGameType__LandingToAircraftCarrier = 4,
	EMissionCondition_MiniGameType__AerialRefuelling = 5,
	EMissionCondition_MiniGameType__EMissionCondition_MAX = 6
};


// Enum Nimbus.EMissionCondition_ObjectSpecificType
enum class EMissionCondition_ObjectSpecificType : uint8_t
{
	EMissionCondition_ObjectSpecificType__None = 0,
	EMissionCondition_ObjectSpecificType__Player = 1,
	EMissionCondition_ObjectSpecificType__Ally = 2,
	EMissionCondition_ObjectSpecificType__Ally_Aircraft = 3,
	EMissionCondition_ObjectSpecificType__Ally_Ground = 4,
	EMissionCondition_ObjectSpecificType__Enemy = 5,
	EMissionCondition_ObjectSpecificType__Enemy_TGT = 6,
	EMissionCondition_ObjectSpecificType__Enemy_Aircraft = 7,
	EMissionCondition_ObjectSpecificType__Enemy_Ground = 8,
	EMissionCondition_ObjectSpecificType__Enemy_UAV = 9,
	EMissionCondition_ObjectSpecificType__Enemy_AircraftExceptUAV = 10,
	EMissionCondition_ObjectSpecificType__Enemy_GroundObjects = 11,
	EMissionCondition_ObjectSpecificType__Enemy_SeaObjects = 12,
	EMissionCondition_ObjectSpecificType__Enemy_Vehicle = 13,
	EMissionCondition_ObjectSpecificType__Enemy_Tank = 14,
	EMissionCondition_ObjectSpecificType__Enemy_APC = 15,
	EMissionCondition_ObjectSpecificType__Enemy_SAM = 16,
	EMissionCondition_ObjectSpecificType__Enemy_AAGun = 17,
	EMissionCondition_ObjectSpecificType__Enemy_AAA = 18,
	EMissionCondition_ObjectSpecificType__Enemy_Facility = 19,
	EMissionCondition_ObjectSpecificType__Enemy_Ship = 20,
	EMissionCondition_ObjectSpecificType__Enemy_FrigateShip = 21,
	EMissionCondition_ObjectSpecificType__Enemy_Cruiser = 22,
	EMissionCondition_ObjectSpecificType__Enemy_Plane = 23,
	EMissionCondition_ObjectSpecificType__Enemy_Bomber = 24,
	EMissionCondition_ObjectSpecificType__Dummy = 25,
	EMissionCondition_ObjectSpecificType__RadioExceptionObject = 26,
	EMissionCondition_ObjectSpecificType__Multi_Player = 27,
	EMissionCondition_ObjectSpecificType__Multi_Ally_Player = 28,
	EMissionCondition_ObjectSpecificType__Multi_Enemy_Player = 29,
	EMissionCondition_ObjectSpecificType__EMissionCondition_MAX = 30
};


// Enum Nimbus.EMissionCondition_DamageType
enum class EMissionCondition_DamageType : uint8_t
{
	EMissionCondition_DamageType__None = 0,
	EMissionCondition_DamageType__Gun = 1,
	EMissionCondition_DamageType__Missile = 2,
	EMissionCondition_DamageType__EMissionCondition_MAX = 3
};


// Enum Nimbus.EMissionCondition_TeamSituation
enum class EMissionCondition_TeamSituation : uint8_t
{
	EMissionCondition_TeamSituation__None = 0,
	EMissionCondition_TeamSituation__Win = 1,
	EMissionCondition_TeamSituation__Lose = 2,
	EMissionCondition_TeamSituation__Draw = 3,
	EMissionCondition_TeamSituation__EMissionCondition_MAX = 4
};


// Enum Nimbus.EMissionCondition_WeaponType
enum class EMissionCondition_WeaponType : uint8_t
{
	EMissionCondition_WeaponType__None = 0,
	EMissionCondition_WeaponType__Gun = 1,
	EMissionCondition_WeaponType__NormalMissile = 2,
	EMissionCondition_WeaponType__SpecialWeapon = 3,
	EMissionCondition_WeaponType__SPW_SAAM = 4,
	EMissionCondition_WeaponType__SPW_AirToAir = 5,
	EMissionCondition_WeaponType__SPW_AirToGround = 6,
	EMissionCondition_WeaponType__Missile = 7,
	EMissionCondition_WeaponType__LongRangeMissile = 8,
	EMissionCondition_WeaponType__Bomb = 9,
	EMissionCondition_WeaponType__SPW_LASM = 10,
	EMissionCondition_WeaponType__SPW_LAGM = 11,
	EMissionCondition_WeaponType__SPW_EML = 12,
	EMissionCondition_WeaponType__SPW_UAV = 13,
	EMissionCondition_WeaponType__SPW_HPAA = 14,
	EMissionCondition_WeaponType__SPW_4AAM = 15,
	EMissionCondition_WeaponType__SPW_6AAM = 16,
	EMissionCondition_WeaponType__SPW_HVAA = 17,
	EMissionCondition_WeaponType__SPW_HCAA = 18,
	EMissionCondition_WeaponType__SPW_UGB = 19,
	EMissionCondition_WeaponType__SPW_GPB = 20,
	EMissionCondition_WeaponType__CIWS = 21,
	EMissionCondition_WeaponType__SPW_4AGM = 22,
	EMissionCondition_WeaponType__SPW_QAAM = 23,
	EMissionCondition_WeaponType__SPW_8AAM = 24,
	EMissionCondition_WeaponType__SPW_LAAM = 25,
	EMissionCondition_WeaponType__SPW_SASM = 26,
	EMissionCondition_WeaponType__SPW_MPBM = 27,
	EMissionCondition_WeaponType__SPW_IEWS = 28,
	EMissionCondition_WeaponType__SPW_FAEB = 29,
	EMissionCondition_WeaponType__SPW_LaserWeapon = 30,
	EMissionCondition_WeaponType__SPW_ClusterChildBomb = 31,
	EMissionCondition_WeaponType__SPW_GuidedBomb = 32,
	EMissionCondition_WeaponType__SPW_MultiLockonMissile = 33,
	EMissionCondition_WeaponType__SPW_Rocket = 34,
	EMissionCondition_WeaponType__SPW_LACM = 35,
	EMissionCondition_WeaponType__EMissionCondition_MAX = 36
};


// Enum Nimbus.EMissionCondition_MiniGameCourseAssistant
enum class EMissionCondition_MiniGameCourseAssistant : uint8_t
{
	EMissionCondition_MiniGameCourseAssistant__None = 0,
	EMissionCondition_MiniGameCourseAssistant__Outside_Right = 1,
	EMissionCondition_MiniGameCourseAssistant__Outside_Left = 2,
	EMissionCondition_MiniGameCourseAssistant__Outside_Up = 3,
	EMissionCondition_MiniGameCourseAssistant__Outside_Down = 4,
	EMissionCondition_MiniGameCourseAssistant__Outside_RightAndUp = 5,
	EMissionCondition_MiniGameCourseAssistant__Outside_RightAndDown = 6,
	EMissionCondition_MiniGameCourseAssistant__Outside_LeftAndUp = 7,
	EMissionCondition_MiniGameCourseAssistant__Outside_LeftAndDown = 8,
	EMissionCondition_MiniGameCourseAssistant__Over = 9,
	EMissionCondition_MiniGameCourseAssistant__OnCourse = 10,
	EMissionCondition_MiniGameCourseAssistant__OnCourse_OverRotation = 11,
	EMissionCondition_MiniGameCourseAssistant__Reverse = 12,
	EMissionCondition_MiniGameCourseAssistant__GuideInvisible = 13,
	EMissionCondition_MiniGameCourseAssistant__EMissionCondition_MAX = 14
};


// Enum Nimbus.EMissionCondition_AzimuthOfClock
enum class EMissionCondition_AzimuthOfClock : uint8_t
{
	EMissionCondition_AzimuthOfClock__None = 0,
	EMissionCondition_AzimuthOfClock__Clock = 1,
	EMissionCondition_AzimuthOfClock__Clock01 = 2,
	EMissionCondition_AzimuthOfClock__Clock02 = 3,
	EMissionCondition_AzimuthOfClock__Clock03 = 4,
	EMissionCondition_AzimuthOfClock__Clock04 = 5,
	EMissionCondition_AzimuthOfClock__Clock05 = 6,
	EMissionCondition_AzimuthOfClock__Clock06 = 7,
	EMissionCondition_AzimuthOfClock__Clock07 = 8,
	EMissionCondition_AzimuthOfClock__Clock08 = 9,
	EMissionCondition_AzimuthOfClock__Clock09 = 10,
	EMissionCondition_AzimuthOfClock__Clock10 = 11,
	EMissionCondition_AzimuthOfClock__Clock11 = 12,
	EMissionCondition_AzimuthOfClock__EMissionCondition_MAX = 13
};


// Enum Nimbus.EMissionCondition_AzimuthOfDegrees
enum class EMissionCondition_AzimuthOfDegrees : uint8_t
{
	EMissionCondition_AzimuthOfDegrees__None = 0,
	EMissionCondition_AzimuthOfDegrees__Degrees = 1,
	EMissionCondition_AzimuthOfDegrees__Degrees01 = 2,
	EMissionCondition_AzimuthOfDegrees__Degrees02 = 3,
	EMissionCondition_AzimuthOfDegrees__Degrees03 = 4,
	EMissionCondition_AzimuthOfDegrees__Degrees04 = 5,
	EMissionCondition_AzimuthOfDegrees__Degrees05 = 6,
	EMissionCondition_AzimuthOfDegrees__Degrees06 = 7,
	EMissionCondition_AzimuthOfDegrees__Degrees07 = 8,
	EMissionCondition_AzimuthOfDegrees__Degrees08 = 9,
	EMissionCondition_AzimuthOfDegrees__Degrees09 = 10,
	EMissionCondition_AzimuthOfDegrees__Degrees10 = 11,
	EMissionCondition_AzimuthOfDegrees__Degrees11 = 12,
	EMissionCondition_AzimuthOfDegrees__Degrees12 = 13,
	EMissionCondition_AzimuthOfDegrees__Degrees13 = 14,
	EMissionCondition_AzimuthOfDegrees__Degrees14 = 15,
	EMissionCondition_AzimuthOfDegrees__Degrees15 = 16,
	EMissionCondition_AzimuthOfDegrees__Degrees16 = 17,
	EMissionCondition_AzimuthOfDegrees__Degrees17 = 18,
	EMissionCondition_AzimuthOfDegrees__Degrees18 = 19,
	EMissionCondition_AzimuthOfDegrees__Degrees19 = 20,
	EMissionCondition_AzimuthOfDegrees__Degrees20 = 21,
	EMissionCondition_AzimuthOfDegrees__Degrees21 = 22,
	EMissionCondition_AzimuthOfDegrees__Degrees22 = 23,
	EMissionCondition_AzimuthOfDegrees__Degrees23 = 24,
	EMissionCondition_AzimuthOfDegrees__Degrees24 = 25,
	EMissionCondition_AzimuthOfDegrees__Degrees25 = 26,
	EMissionCondition_AzimuthOfDegrees__Degrees26 = 27,
	EMissionCondition_AzimuthOfDegrees__Degrees27 = 28,
	EMissionCondition_AzimuthOfDegrees__Degrees28 = 29,
	EMissionCondition_AzimuthOfDegrees__Degrees29 = 30,
	EMissionCondition_AzimuthOfDegrees__Degrees30 = 31,
	EMissionCondition_AzimuthOfDegrees__Degrees31 = 32,
	EMissionCondition_AzimuthOfDegrees__Degrees32 = 33,
	EMissionCondition_AzimuthOfDegrees__Degrees33 = 34,
	EMissionCondition_AzimuthOfDegrees__Degrees34 = 35,
	EMissionCondition_AzimuthOfDegrees__Degrees35 = 36,
	EMissionCondition_AzimuthOfDegrees__EMissionCondition_MAX = 37
};


// Enum Nimbus.EMissionConditionType
enum class EMissionConditionType : uint8_t
{
	EMissionConditionType__None    = 0,
	EMissionConditionType__MissionFailure = 1,
	EMissionConditionType__MissileLostTarget = 2,
	EMissionConditionType__TargetLockon = 3,
	EMissionConditionType__WeaponFired = 4,
	EMissionConditionType__ObjectDestroyed = 5,
	EMissionConditionType__ObjectDamaged = 6,
	EMissionConditionType__EMissionConditionType_MAX = 7
};


// Enum Nimbus.EPhaseStatus
enum class EPhaseStatus : uint8_t
{
	EPhaseStatus__NotStarted       = 0,
	EPhaseStatus__InProgress       = 1,
	EPhaseStatus__Failed           = 2,
	EPhaseStatus__Successful       = 3,
	EPhaseStatus__EPhaseStatus_MAX = 4
};


// Enum Nimbus.EPhaseBeginFadeType
enum class EPhaseBeginFadeType : uint8_t
{
	EPhaseBeginFadeType__FadeIn    = 0,
	EPhaseBeginFadeType__FadeInImmediately = 1,
	EPhaseBeginFadeType__KeepFadeOut = 2,
	EPhaseBeginFadeType__EPhaseBeginFadeType_MAX = 3
};


// Enum Nimbus.EPhaseStartNotificationType
enum class EPhaseStartNotificationType : uint8_t
{
	EPhaseStartNotificationType__Start = 0,
	EPhaseStartNotificationType__Updated = 1,
	EPhaseStartNotificationType__None = 2,
	EPhaseStartNotificationType__EPhaseStartNotificationType_MAX = 3
};


// Enum Nimbus.ENimbusUIId
enum class ENimbusUIId : uint8_t
{
	ENimbusUIId__None              = 0,
	ENimbusUIId__ENimbusUIId_MAX   = 1
};


// Enum Nimbus.ESearchLightTargetPriority
enum class ESearchLightTargetPriority : uint8_t
{
	ESearchLightTargetPriority__All = 0,
	ESearchLightTargetPriority__Player = 1,
	ESearchLightTargetPriority__Ally = 2,
	ESearchLightTargetPriority__ESearchLightTargetPriority_MAX = 3
};


// Enum Nimbus.ESearchMoveMode
enum class ESearchMoveMode : uint8_t
{
	ESearchMoveMode__Move_Yaw      = 0,
	ESearchMoveMode__Move_Pitch    = 1,
	ESearchMoveMode__Stop          = 2,
	ESearchMoveMode__ESearchMoveMode_MAX = 3
};


// Enum Nimbus.EWayPointFriendlyType
enum class EWayPointFriendlyType : uint8_t
{
	EWayPointFriendlyType__None    = 0,
	EWayPointFriendlyType__Ally    = 1,
	EWayPointFriendlyType__EWayPointFriendlyType_MAX = 2
};


// Enum Nimbus.EHPModifier
enum class EHPModifier : uint8_t
{
	EHPModifier__AbsoluteValue     = 0,
	EHPModifier__PercentOfMax      = 1,
	EHPModifier__PercentOfCurrent  = 2,
	EHPModifier__EHPModifier_MAX   = 3
};


// Enum Nimbus.UnitActivationType
enum class EUnitActivationType : uint8_t
{
	UnitActivationType__PlacementCoordinates = 0,
	UnitActivationType__AbsoluteCoordinates = 1,
	UnitActivationType__WorldOffsetCoordinates = 2,
	UnitActivationType__LocalOffsetCoordinates = 3,
	UnitActivationType__UnitActivationType_MAX = 4
};


// Enum Nimbus.EAIPlaneSpecialActionTrigger
enum class EAIPlaneSpecialActionTrigger : uint8_t
{
	EAIPlaneSpecialActionTrigger__Always = 0,
	EAIPlaneSpecialActionTrigger__OneShot = 1,
	EAIPlaneSpecialActionTrigger__TargetInRange = 2,
	EAIPlaneSpecialActionTrigger__SpecifiedObjectIsAttacked = 3,
	EAIPlaneSpecialActionTrigger__EAIPlaneSpecialActionTrigger_MAX = 4
};


// Enum Nimbus.EUIKeys
enum class EUIKeys : uint8_t
{
	EUIKeys__None                  = 0,
	EUIKeys__Accept                = 1,
	EUIKeys__Cancel                = 2,
	EUIKeys__View                  = 3,
	EUIKeys__Options               = 4,
	EUIKeys__Skip                  = 5,
	EUIKeys__Any                   = 6,
	EUIKeys__Up                    = 7,
	EUIKeys__Down                  = 8,
	EUIKeys__Left                  = 9,
	EUIKeys__Right                 = 10,
	EUIKeys__RSUp                  = 11,
	EUIKeys__RSDown                = 12,
	EUIKeys__RSLeft                = 13,
	EUIKeys__RSRight               = 14,
	EUIKeys__LeftTab               = 15,
	EUIKeys__RightTab              = 16,
	EUIKeys__LeftTrigger           = 17,
	EUIKeys__RightTrigger          = 18,
	EUIKeys__LeftStick             = 19,
	EUIKeys__RightStick            = 20,
	EUIKeys__RemoveKeyAssign       = 21,
	EUIKeys__CancelKeyAssign       = 22,
	EUIKeys__All                   = 23,
	EUIKeys__Num                   = 24,
	EUIKeys__EUIKeys_MAX           = 25
};


// Enum Nimbus.ENimbusCameraShakeConditions
enum class ENimbusCameraShakeConditions : uint8_t
{
	ENimbusCameraShakeConditions__None = 0,
	ENimbusCameraShakeConditions__Unconditional = 1,
	ENimbusCameraShakeConditions__GameObject = 2,
	ENimbusCameraShakeConditions__NotGameObject = 3,
	ENimbusCameraShakeConditions__AirObject = 4,
	ENimbusCameraShakeConditions__NotAirObject = 5,
	ENimbusCameraShakeConditions__GroundObject = 6,
	ENimbusCameraShakeConditions__MAX = 7
};


// Enum Nimbus.SoundChannelType
enum class ESoundChannelType : uint8_t
{
	SoundChannelType__Explosion    = 0,
	SoundChannelType__ExplosionMissileTarget = 1,
	SoundChannelType__ExplosionMissileGround = 2,
	SoundChannelType__ExplosionMissileSea = 3,
	SoundChannelType__ExplosionMissileAir = 4,
	SoundChannelType__ExplosionBombGround = 5,
	SoundChannelType__ExplosionBombSea = 6,
	SoundChannelType__ExplosionTargetSmallGround = 7,
	SoundChannelType__ExplosionAlicornInternal = 8,
	SoundChannelType__ExplosionFAEB = 9,
	SoundChannelType__ExplosionMPBM = 10,
	SoundChannelType__ExplosionAirTarget = 11,
	SoundChannelType__ExplosionGroundTarget = 12,
	SoundChannelType__ExplosionAirTargetLarge = 13,
	SoundChannelType__ExplosionGroundTargetLarge = 14,
	SoundChannelType__ExplosionPlayerCrash = 15,
	SoundChannelType__ExplosionOtherPlaneCrash = 16,
	SoundChannelType__ExplosionOtherPlanePartsFalling = 17,
	SoundChannelType__ExplosionOtherPlanePartsFallingStop = 18,
	SoundChannelType__ExplosionOtherPlanePartsFallingFinal = 19,
	SoundChannelType__ExplosionOtherPlanePartsSecondary = 20,
	SoundChannelType__ExplosionAA  = 21,
	SoundChannelType__LandingGearDown = 22,
	SoundChannelType__LandingGearUp = 23,
	SoundChannelType__LandingGearSkid = 24,
	SoundChannelType__PlayerTakeoff = 25,
	SoundChannelType__PlayerRefuelingDocking = 26,
	SoundChannelType__GunHit       = 27,
	SoundChannelType__BuildingHit  = 28,
	SoundChannelType__BuildingDown = 29,
	SoundChannelType__ExplosionHelios = 30,
	SoundChannelType__ExplosionSupplyPlane = 31,
	SoundChannelType__BunkerBusterDrop = 32,
	SoundChannelType__BunkerBusterHit = 33,
	SoundChannelType__BunkerBusterMiss = 34,
	SoundChannelType__PlatformJunctionDestruction = 35,
	SoundChannelType__PlatformSplash = 36,
	SoundChannelType__BridgeSplash = 37,
	SoundChannelType__ShipCrushedByPlatform = 38,
	SoundChannelType__OilTankDestruction = 39,
	SoundChannelType__PlayerPostStallManeuver = 40,
	SoundChannelType__BulletPassSound = 41,
	SoundChannelType__RectennaBarrierHit = 42,
	SoundChannelType__DroneRectennaBarrierHit = 43,
	SoundChannelType__IRBMExplosion = 44,
	SoundChannelType__UAVSuicide   = 45,
	SoundChannelType__MGPHit       = 46,
	SoundChannelType__EMLHit       = 47,
	SoundChannelType__TLSHit       = 48,
	SoundChannelType__PLSLHit      = 49,
	SoundChannelType__FasFire      = 50,
	SoundChannelType__FasFireStop  = 51,
	SoundChannelType__FasBank      = 52,
	SoundChannelType__FasFall      = 53,
	SoundChannelType__FasDown      = 54,
	SoundChannelType__FasDestruction = 55,
	SoundChannelType__FasPropellerDestruction = 56,
	SoundChannelType__SFFSSplit    = 57,
	SoundChannelType__ChannelCount = 58,
	SoundChannelType__None         = 59,
	SoundChannelType__SoundChannelType_MAX = 60
};


// Enum Nimbus.ESelectionAssistType
enum class ESelectionAssistType : uint8_t
{
	ESelectionAssistType__NONE     = 0,
	ESelectionAssistType__UNGUIDED_MGP = 1,
	ESelectionAssistType__UNGUIDED_RKT = 2,
	ESelectionAssistType__SEMI_ACTIVE = 3,
	ESelectionAssistType__ESelectionAssistType_MAX = 4
};


// Enum Nimbus.EAiasAvoidsObjectOverlapType
enum class EAiasAvoidsObjectOverlapType : uint8_t
{
	EAiasAvoidsObjectOverlapType__None = 0,
	EAiasAvoidsObjectOverlapType__Approach = 1,
	EAiasAvoidsObjectOverlapType__Upper = 2,
	EAiasAvoidsObjectOverlapType__Middle = 3,
	EAiasAvoidsObjectOverlapType__Lower = 4,
	EAiasAvoidsObjectOverlapType__EAiasAvoidsObjectOverlapType_MAX = 5
};


// Enum Nimbus.ESeaExplosionSpawnConditions
enum class ESeaExplosionSpawnConditions : uint8_t
{
	ESeaExplosionSpawnConditions__Hit = 0,
	ESeaExplosionSpawnConditions__Slower = 1,
	ESeaExplosionSpawnConditions__Faster = 2,
	ESeaExplosionSpawnConditions__MAX = 3
};


// Enum Nimbus.ESeaExplosionAngleStandard
enum class ESeaExplosionAngleStandard : uint8_t
{
	ESeaExplosionAngleStandard__World = 0,
	ESeaExplosionAngleStandard__Socket = 1,
	ESeaExplosionAngleStandard__SocketYaw = 2,
	ESeaExplosionAngleStandard__MAX = 3
};


// Enum Nimbus.ESeaExplosionStartingPoint
enum class ESeaExplosionStartingPoint : uint8_t
{
	ESeaExplosionStartingPoint__SeaSurface = 0,
	ESeaExplosionStartingPoint__Socket = 1,
	ESeaExplosionStartingPoint__MAX = 2
};


// Enum Nimbus.EPilotAttribute
enum class EPilotAttribute : uint8_t
{
	EPilotAttribute__ATT_Health    = 0,
	EPilotAttribute__ATT_BSW_Default = 1,
	EPilotAttribute__ATT_BSW_LowAltitude = 2,
	EPilotAttribute__ATT_BSW_HighAltitude = 3,
	EPilotAttribute__ATT_BSW_Dying = 4,
	EPilotAttribute__ATT_BSW_InClouds = 5,
	EPilotAttribute__ATT_BSW_InCloudsDying = 6,
	EPilotAttribute__ATT_BSW_NearClouds = 7,
	EPilotAttribute__ATT_BSW_NearCloudsDying = 8,
	EPilotAttribute__ATT_ApproachCloudChanceHighHP = 9,
	EPilotAttribute__ATT_ApproachCloudChanceLowHP = 10,
	EPilotAttribute__ATT_CloudSearchRadiusInMeter = 11,
	EPilotAttribute__ATT_CloudSearchAngleInDegree = 12,
	EPilotAttribute__ATT_CloudReactionTimeForEvade = 13,
	EPilotAttribute__ATT_MAX       = 14
};


// Enum Nimbus.EAIPathControlType
enum class EAIPathControlType : uint8_t
{
	EAIPathControlType__UsePathPoint = 0,
	EAIPathControlType__UseSpline  = 1,
	EAIPathControlType__UseSplineAsPathPoint = 2,
	EAIPathControlType__EAIPathControlType_MAX = 3
};


// Enum Nimbus.EAIAlert
enum class EAIAlert : uint8_t
{
	EAIAlert__None                 = 0,
	EAIAlert__Gun                  = 1,
	EAIAlert__Missle               = 2,
	EAIAlert__SpecialWeapon        = 3,
	EAIAlert__EAIAlert_MAX         = 4
};


// Enum Nimbus.EAIDefenseRange
enum class EAIDefenseRange : uint8_t
{
	EAIDefenseRange__Near          = 0,
	EAIDefenseRange__Mid           = 1,
	EAIDefenseRange__Far           = 2,
	EAIDefenseRange__EAIDefenseRange_MAX = 3
};


// Enum Nimbus.EKDSPhase
enum class EKDSPhase : uint8_t
{
	EKDSPhase__None                = 0,
	EKDSPhase__FrontEntrance       = 1,
	EKDSPhase__FrontLead           = 2,
	EKDSPhase__BackEntrance        = 3,
	EKDSPhase__BackChase           = 4,
	EKDSPhase__EKDSPhase_MAX       = 5
};


// Enum Nimbus.EAircraftTreeNodeClass
enum class EAircraftTreeNodeClass : uint8_t
{
	EAircraftTreeNodeClass__Plane  = 0,
	EAircraftTreeNodeClass__Part   = 1,
	EAircraftTreeNodeClass__Lock   = 2,
	EAircraftTreeNodeClass__Weapon = 3,
	EAircraftTreeNodeClass__EAircraftTreeNodeClass_MAX = 4
};


// Enum Nimbus.EAVRegistryState
enum class EAVRegistryState : uint8_t
{
	EAVRegistryState__AVR_Player   = 0,
	EAVRegistryState__AVR_Weapon   = 1,
	EAVRegistryState__AVR_AIPlane  = 2,
	EAVRegistryState__AVR_Heli     = 3,
	EAVRegistryState__AVR_Vehicle  = 4,
	EAVRegistryState__AVR_Ground   = 5,
	EAVRegistryState__AVR_Vessel   = 6,
	EAVRegistryState__AVR_MapObj   = 7,
	EAVRegistryState__AVR_Root     = 8,
	EAVRegistryState__AVR_MAX      = 9
};


// Enum Nimbus.EAsyncTaskMoveUnitMoveType
enum class EAsyncTaskMoveUnitMoveType : uint8_t
{
	EAsyncTaskMoveUnitMoveType__None = 0,
	EAsyncTaskMoveUnitMoveType__SideBySide = 1,
	EAsyncTaskMoveUnitMoveType__EAsyncTaskMoveUnitMoveType_MAX = 2
};


// Enum Nimbus.EAttachedInterceptorWeaponSearchType
enum class EAttachedInterceptorWeaponSearchType : uint8_t
{
	EAttachedInterceptorWeaponSearchType__Relative = 0,
	EAttachedInterceptorWeaponSearchType__All = 1,
	EAttachedInterceptorWeaponSearchType__EAttachedInterceptorWeaponSearchType_MAX = 2
};


// Enum Nimbus.EPrepareState
enum class EPrepareState : uint8_t
{
	EPrepareState__PLAYERNOTREADY  = 0,
	EPrepareState__PLAYERPREPARING = 1,
	EPrepareState__PLAYERDELAY     = 2,
	EPrepareState__PLAYERPLAYING   = 3,
	EPrepareState__EPrepareState_MAX = 4
};


// Enum Nimbus.EFlyByDirectionZone
enum class EFlyByDirectionZone : uint8_t
{
	EFlyByDirectionZone__FRONT     = 0,
	EFlyByDirectionZone__SIDE      = 1,
	EFlyByDirectionZone__REAR      = 2,
	EFlyByDirectionZone__NONE      = 3,
	EFlyByDirectionZone__EFlyByDirectionZone_MAX = 4
};


// Enum Nimbus.EFlyByDistanceZone
enum class EFlyByDistanceZone : uint8_t
{
	EFlyByDistanceZone__Z          = 0,
	EFlyByDistanceZone__A          = 1,
	EFlyByDistanceZone__B          = 2,
	EFlyByDistanceZone__C          = 3,
	EFlyByDistanceZone__OUTSIDE    = 4,
	EFlyByDistanceZone__EFlyByDistanceZone_MAX = 5
};


// Enum Nimbus.ETGTP_ParticleSpawnType
enum class ETGTP_ParticleSpawnType : uint8_t
{
	ETGTP_ParticleSpawnType__HitLocation = 0,
	ETGTP_ParticleSpawnType__HeightOuterCircumference = 1,
	ETGTP_ParticleSpawnType__TagNotHit = 2,
	ETGTP_ParticleSpawnType__ETGTP_MAX = 3
};


// Enum Nimbus.ETGTP_AttackResult
enum class ETGTP_AttackResult : uint8_t
{
	ETGTP_AttackResult__Drop       = 0,
	ETGTP_AttackResult__MISS       = 1,
	ETGTP_AttackResult__HIT        = 2,
	ETGTP_AttackResult__CRITICAL   = 3,
	ETGTP_AttackResult__ETGTP_MAX  = 4
};


// Enum Nimbus.EBuildingType
enum class EBuildingType : uint8_t
{
	EBuildingType__Normal          = 0,
	EBuildingType__LargePlatform   = 1,
	EBuildingType__OilTank         = 2,
	EBuildingType__DerelictBuilding = 3,
	EBuildingType__EBuildingType_MAX = 4
};


// Enum Nimbus.EBulletCollisionCheck
enum class EBulletCollisionCheck : uint8_t
{
	EBulletCollisionCheck__SweepMultiSingle = 0,
	EBulletCollisionCheck__SweepThreeSteps = 1,
	EBulletCollisionCheck__EBulletCollisionCheck_MAX = 2
};


// Enum Nimbus.EManeuverSpeedType
enum class EManeuverSpeedType : uint8_t
{
	EManeuverSpeedType__SPD_CONSTANT = 0,
	EManeuverSpeedType__SPD_CRUISE = 1,
	EManeuverSpeedType__SPD_RELATIVE = 2,
	EManeuverSpeedType__SPD_NO_ADJUSTMENT = 3,
	EManeuverSpeedType__SPD_MAX    = 4
};


// Enum Nimbus.EImpactCameraPostProcessCategory
enum class EImpactCameraPostProcessCategory : uint8_t
{
	EImpactCameraPostProcessCategory__None = 0,
	EImpactCameraPostProcessCategory__DepthOfFieldFocalDistance = 1,
	EImpactCameraPostProcessCategory__DepthOfFieldScale = 2,
	EImpactCameraPostProcessCategory__EImpactCameraPostProcessCategory_MAX = 3
};


// Enum Nimbus.EBulletHitType
enum class EBulletHitType : uint8_t
{
	EBulletHitType__AutoOptimization = 0,
	EBulletHitType__Everything     = 1,
	EBulletHitType__EBulletHitType_MAX = 2
};


// Enum Nimbus.EImpactCameraType
enum class EImpactCameraType : uint8_t
{
	EImpactCameraType__None        = 0,
	EImpactCameraType__Name        = 1,
	EImpactCameraType__EnemyDestruction = 2,
	EImpactCameraType__Kill        = 3,
	EImpactCameraType__Missile     = 4,
	EImpactCameraType__ScatterTracking = 5,
	EImpactCameraType__RocketLauncher = 6,
	EImpactCameraType__Bomb        = 7,
	EImpactCameraType__UAV         = 8,
	EImpactCameraType__MPBM        = 9,
	EImpactCameraType__FAEB        = 10,
	EImpactCameraType__PlayerDead  = 11,
	EImpactCameraType__EImpactCameraType_MAX = 12
};


// Enum Nimbus.EImpactCameraObjectHitReaction
enum class EImpactCameraObjectHitReaction : uint8_t
{
	EImpactCameraObjectHitReaction__None = 0,
	EImpactCameraObjectHitReaction__FromGaze = 1,
	EImpactCameraObjectHitReaction__Height = 2,
	EImpactCameraObjectHitReaction__HitEnd = 3,
	EImpactCameraObjectHitReaction__HitStop = 4,
	EImpactCameraObjectHitReaction__HitFixed = 5,
	EImpactCameraObjectHitReaction__FromGaze_Height = 6,
	EImpactCameraObjectHitReaction__EImpactCameraObjectHitReaction_MAX = 7
};


// Enum Nimbus.EImpactCameraMode
enum class EImpactCameraMode : uint8_t
{
	EImpactCameraMode__None        = 0,
	EImpactCameraMode__AllPlay     = 1,
	EImpactCameraMode__ConditionalPlay_High = 2,
	EImpactCameraMode__ConditionalPlay_Low = 3,
	EImpactCameraMode__EImpactCameraMode_MAX = 4
};


// Enum Nimbus.EImpactCameraObject
enum class EImpactCameraObject : uint8_t
{
	EImpactCameraObject__FocusObject1 = 0,
	EImpactCameraObject__FocusObject2 = 1,
	EImpactCameraObject__Player    = 2,
	EImpactCameraObject__FocusObject1_Owner = 3,
	EImpactCameraObject__FocusObject2_Owner = 4,
	EImpactCameraObject__FocusObjectConnect = 5,
	EImpactCameraObject__EImpactCameraObject_MAX = 6
};


// Enum Nimbus.EImpactCameraTerminationCondition
enum class EImpactCameraTerminationCondition : uint8_t
{
	EImpactCameraTerminationCondition__None = 0,
	EImpactCameraTerminationCondition__WeaponDestroy = 1,
	EImpactCameraTerminationCondition__MissileHitTarget = 2,
	EImpactCameraTerminationCondition__MissileMiss = 3,
	EImpactCameraTerminationCondition__FocusObject1_2Distance = 4,
	EImpactCameraTerminationCondition__CameraTime = 5,
	EImpactCameraTerminationCondition__StartedSpawningWeapons = 6,
	EImpactCameraTerminationCondition__FocusObjectDeath = 7,
	EImpactCameraTerminationCondition__WeaponTargetDestroy = 8,
	EImpactCameraTerminationCondition__EImpactCameraTerminationCondition_MAX = 9
};


// Enum Nimbus.EImpactCameraLookAtCategory
enum class EImpactCameraLookAtCategory : uint8_t
{
	EImpactCameraLookAtCategory__LookAtTarget = 0,
	EImpactCameraLookAtCategory__LookAtTarget_RollAnim = 1,
	EImpactCameraLookAtCategory__CameraAnimation = 2,
	EImpactCameraLookAtCategory__LookAtTargetAddCameraAnimation = 3,
	EImpactCameraLookAtCategory__EImpactCameraLookAtCategory_MAX = 4
};


// Enum Nimbus.EHangarCameraType
enum class EHangarCameraType : uint8_t
{
	EHangarCameraType__HCAM_STATIC = 0,
	EHangarCameraType__HCAM_PLANE  = 1,
	EHangarCameraType__HCAM_WEAPON = 2,
	EHangarCameraType__HCAM_REVIEW = 3,
	EHangarCameraType__HCAM_SORTIE = 4,
	EHangarCameraType__HCAM_ACQUIRE = 5,
	EHangarCameraType__HCAM_EMPTY  = 6,
	EHangarCameraType__HCAM_DEFAULT = 7,
	EHangarCameraType__HCAM_EXTERNAL = 8,
	EHangarCameraType__HCAM_MAX    = 9
};


// Enum Nimbus.EMiniGameCameraType
enum class EMiniGameCameraType : uint8_t
{
	EMiniGameCameraType__BeginLanding = 0,
	EMiniGameCameraType__BeginTakeoff = 1,
	EMiniGameCameraType__EndTakeoff = 2,
	EMiniGameCameraType__BeginAerialRefuelling = 3,
	EMiniGameCameraType__EndAerialRefuelling = 4,
	EMiniGameCameraType__WeaponChange = 5,
	EMiniGameCameraType__Max       = 6
};


// Enum Nimbus.EBriefUnitDataType
enum class EBriefUnitDataType : uint8_t
{
	EBriefUnitDataType__Air        = 0,
	EBriefUnitDataType__Ground     = 1,
	EBriefUnitDataType__Naval      = 2,
	EBriefUnitDataType__EBriefUnitDataType_MAX = 3
};


// Enum Nimbus.EGameDifficulty
enum class EGameDifficulty : uint8_t
{
	EGameDifficulty__GD_EASY       = 0,
	EGameDifficulty__GD_NORMAL     = 1,
	EGameDifficulty__GD_HARD       = 2,
	EGameDifficulty__GD_ACE        = 3,
	EGameDifficulty__GD_FREE_FLIGHT = 4,
	EGameDifficulty__GD_MAX        = 5
};


// Enum Nimbus.ECAActionType
enum class ECAActionType : uint8_t
{
	ECAActionType__Unassigned      = 0,
	ECAActionType__UnlockLevel     = 1,
	ECAActionType__UnlockAchievement = 2,
	ECAActionType__UnlockMedal     = 3,
	ECAActionType__UnlockEmblem    = 4,
	ECAActionType__UnlockSkin      = 5,
	ECAActionType__UnlockNickname  = 6,
	ECAActionType__UnlockAircraft  = 7,
	ECAActionType__UnlockAircraftWeapon = 8,
	ECAActionType__UnlockAircraftPart = 9,
	ECAActionType__UnlockAircraftTreeNode = 10,
	ECAActionType__UnlockFeature   = 11,
	ECAActionType__ResetParentEntry = 12,
	ECAActionType__ECAActionType_MAX = 13
};


// Enum Nimbus.ECAConditionType
enum class ECAConditionType : uint8_t
{
	ECAConditionType__Unassigned   = 0,
	ECAConditionType__Always       = 1,
	ECAConditionType__CompleteLevel = 2,
	ECAConditionType__ObserveAnniversary = 3,
	ECAConditionType__GainStats    = 4,
	ECAConditionType__EarnScore    = 5,
	ECAConditionType__DestroyTarget = 6,
	ECAConditionType__CollectItem  = 7,
	ECAConditionType__PurchasePackage = 8,
	ECAConditionType__PlayLevel    = 9,
	ECAConditionType__ActivateCAEntry = 10,
	ECAConditionType__MissionSpecific = 11,
	ECAConditionType__PerformanceEvaluation = 12,
	ECAConditionType__Null         = 13,
	ECAConditionType__ECAConditionType_MAX = 14
};


// Enum Nimbus.EDebugMenuAnalysisItems
enum class EDebugMenuAnalysisItems : uint8_t
{
	EDebugMenuAnalysisItems__WeaponAnalysis = 0,
	EDebugMenuAnalysisItems__UnitAnalysis = 1,
	EDebugMenuAnalysisItems__ParticleSystemInfo = 2,
	EDebugMenuAnalysisItems__ParticleSystemList = 3,
	EDebugMenuAnalysisItems__TextureList = 4,
	EDebugMenuAnalysisItems__DisableReplayRecording = 5,
	EDebugMenuAnalysisItems__DisableGameObjectProcess = 6,
	EDebugMenuAnalysisItems__DisableWeaponProcess = 7,
	EDebugMenuAnalysisItems__DebugDisableWeaponDisabling = 8,
	EDebugMenuAnalysisItems__DisableDrawVapor = 9,
	EDebugMenuAnalysisItems__DisableDrawMissileTrail = 10,
	EDebugMenuAnalysisItems__DisableEventTrigger = 11,
	EDebugMenuAnalysisItems__ShowAssetLoaderInfo = 12,
	EDebugMenuAnalysisItems__ShowPauseInfo = 13,
	EDebugMenuAnalysisItems__ShowMapChangeInfo = 14,
	EDebugMenuAnalysisItems__ShowSoundManagerInfo = 15,
	EDebugMenuAnalysisItems__ShowSoundPauseInfo = 16,
	EDebugMenuAnalysisItems__ShowLevelDebugInfo = 17,
	EDebugMenuAnalysisItems__ShowRaycastTest = 18,
	EDebugMenuAnalysisItems__LogStreamingTexture = 19,
	EDebugMenuAnalysisItems__ShowNodesAnalysis = 20,
	EDebugMenuAnalysisItems__CollectLoadedTexture = 21,
	EDebugMenuAnalysisItems__ShowRibbonCollectionInfo = 22,
	EDebugMenuAnalysisItems__MissionHitch = 23,
	EDebugMenuAnalysisItems__TimeEventList = 24,
	EDebugMenuAnalysisItems__DisabledPreloadTransitionMap = 25,
	EDebugMenuAnalysisItems__MAX   = 26
};


// Enum Nimbus.EDebugMenuSaveDataItems
enum class EDebugMenuSaveDataItems : uint8_t
{
	EDebugMenuSaveDataItems__ShowStatus = 0,
	EDebugMenuSaveDataItems__UnlockAll = 1,
	EDebugMenuSaveDataItems__UnlockAllWithMaxData = 2,
	EDebugMenuSaveDataItems__UnlockFeatures = 3,
	EDebugMenuSaveDataItems__UnlockAircraftTree = 4,
	EDebugMenuSaveDataItems__UnlockAllAchevements = 5,
	EDebugMenuSaveDataItems__UnlockDLC = 6,
	EDebugMenuSaveDataItems__UnlockAllDLCs = 7,
	EDebugMenuSaveDataItems__CheckAchievement = 8,
	EDebugMenuSaveDataItems__ResetAllAchevements = 9,
	EDebugMenuSaveDataItems__SetRichPresence = 10,
	EDebugMenuSaveDataItems__UnlockEverythingInTheConditionActionSystem = 11,
	EDebugMenuSaveDataItems__UnlockLogOnScreen = 12,
	EDebugMenuSaveDataItems__SetCampaignMRP = 13,
	EDebugMenuSaveDataItems__SetMultiplayerMRP = 14,
	EDebugMenuSaveDataItems__AddCampaignFlightDistance = 15,
	EDebugMenuSaveDataItems__AddCampaignKillCount = 16,
	EDebugMenuSaveDataItems__AddVRFlightDistance = 17,
	EDebugMenuSaveDataItems__AddVRKillCount = 18,
	EDebugMenuSaveDataItems__CompleteCampaign = 19,
	EDebugMenuSaveDataItems__CompleteVRCampaign = 20,
	EDebugMenuSaveDataItems__LockAircraftTree = 21,
	EDebugMenuSaveDataItems__Spacer0 = 22,
	EDebugMenuSaveDataItems__LoadSaveData = 23,
	EDebugMenuSaveDataItems__SaveSaveData = 24,
	EDebugMenuSaveDataItems__DeleteSaveData = 25,
	EDebugMenuSaveDataItems__ResetSaveData = 26,
	EDebugMenuSaveDataItems__MAX   = 27
};


// Enum Nimbus.EDebugMenuUIItems
enum class EDebugMenuUIItems : uint8_t
{
	EDebugMenuUIItems__Language    = 0,
	EDebugMenuUIItems__SubtitleLanguage = 1,
	EDebugMenuUIItems__VoiceLanguage = 2,
	EDebugMenuUIItems__ShowDebugLog = 3,
	EDebugMenuUIItems__HideDebugInfo = 4,
	EDebugMenuUIItems__DisableHUD  = 5,
	EDebugMenuUIItems__HideMiniMapRadar = 6,
	EDebugMenuUIItems__EnableHUDTestMode = 7,
	EDebugMenuUIItems__ShowHPGauge = 8,
	EDebugMenuUIItems__ToggleBuildInformation = 9,
	EDebugMenuUIItems__ToggleBuildInformationPeak = 10,
	EDebugMenuUIItems__ToggleUI    = 11,
	EDebugMenuUIItems__ToggleDebugMessagesDisplay = 12,
	EDebugMenuUIItems__AircraftLoadingTest = 13,
	EDebugMenuUIItems__ChangeMenu  = 14,
	EDebugMenuUIItems__InvisibleFade = 15,
	EDebugMenuUIItems__ToggleSonobuoyProgressIcon = 16,
	EDebugMenuUIItems__MAX         = 17
};


// Enum Nimbus.EDebugMenuVRItems
enum class EDebugMenuVRItems : uint8_t
{
	EDebugMenuVRItems__EnableVRTestMissionMenu = 0,
	EDebugMenuVRItems__ToggleOutOfCockpitWarning = 1,
	EDebugMenuVRItems__SetVRPitchMeterDepth = 2,
	EDebugMenuVRItems__ToggleVREquipGunTrackingParts = 3,
	EDebugMenuVRItems__MAX         = 4
};


// Enum Nimbus.EMissionHitchLevel
enum class EMissionHitchLevel : uint8_t
{
	EMissionHitchLevel__None       = 0,
	EMissionHitchLevel__Caution    = 1,
	EMissionHitchLevel__Warning    = 2,
	EMissionHitchLevel__Max        = 3
};


// Enum Nimbus.EDialogIDs
enum class EDialogIDs : uint8_t
{
	EDialogIDs__None               = 0,
	EDialogIDs__OptionsResetGeneral = 1,
	EDialogIDs__OptionsResetRebindControls = 2,
	EDialogIDs__OptionsRebindControls2 = 3,
	EDialogIDs__OptionsGraphicScreenChange1 = 4,
	EDialogIDs__OptionsGraphicScreenChange2 = 5,
	EDialogIDs__OptionsMicrophoneConnectionOff = 6,
	EDialogIDs__OptionsSoundVoicechatOn = 7,
	EDialogIDs__AutoSaveNotification_PlayStation4 = 8,
	EDialogIDs__AutoSaveNotification_XboxOne = 9,
	EDialogIDs__AutoSaveNotification_Steam = 10,
	EDialogIDs__CreatingSaveData   = 11,
	EDialogIDs__Saving             = 12,
	EDialogIDs__Loading            = 13,
	EDialogIDs__LoadFailedDataBroken = 14,
	EDialogIDs__SaveFailed         = 15,
	EDialogIDs__LoadFailed         = 16,
	EDialogIDs__SaveCapacityFailure_Ps4 = 17,
	EDialogIDs__SaveCapacityFailure_Xb1 = 18,
	EDialogIDs__SaveCapacityFailure_Steam = 19,
	EDialogIDs__SaveVersionFailure = 20,
	EDialogIDs__SaveCreateSuccess  = 21,
	EDialogIDs__SaveDataCorruption = 22,
	EDialogIDs__SaveCanceled       = 23,
	EDialogIDs__Error_UserAccountChanged = 24,
	EDialogIDs__Error_GamepadDisconnected_XboxOne = 25,
	EDialogIDs__Error_DlcCustomization = 26,
	EDialogIDs__Error_DlcCustomization_Yes = 27,
	EDialogIDs__Error_DlcCustomization_No = 28,
	EDialogIDs__Error_Multiplay_DlcCustomization = 29,
	EDialogIDs__Error_Multiplay_DlcCustomization_Yes = 30,
	EDialogIDs__Error_InstallResetCustomization = 31,
	EDialogIDs__DisagreeTermOnline = 32,
	EDialogIDs__DisagreePolicyOnline = 33,
	EDialogIDs__DisagreeTerm       = 34,
	EDialogIDs__DisagreePrivacy    = 35,
	EDialogIDs__Quit               = 36,
	EDialogIDs__CampaignNewGame    = 37,
	EDialogIDs__CampaignHangarMs13 = 38,
	EDialogIDs__CampaignChangeFlightAssist = 39,
	EDialogIDs__CampaignTree       = 40,
	EDialogIDs__CampaignNewParts   = 41,
	EDialogIDs__CampaignNewAircraft = 42,
	EDialogIDs__AircraftTreeNotifyPurchasedAircraft = 43,
	EDialogIDs__AircraftTreeNotifyPurchasedWeapon = 44,
	EDialogIDs__AircraftTreeNotifyPurchasedParts = 45,
	EDialogIDs__AircraftTreeWarningCannotPurchaseDefaultWeapon = 46,
	EDialogIDs__AircraftTreeConfirmPurchase = 47,
	EDialogIDs__AircraftTreeWarningCannotPurchaseShortOfMRP = 48,
	EDialogIDs__AircraftTreeWarningCannotPurchaseLocked = 49,
	EDialogIDs__AircraftTreeNotifyUnlockEmblem = 50,
	EDialogIDs__AircraftTreeNotifyUnlockNickname = 51,
	EDialogIDs__AircraftTreeNotifyUnlockEmblemAndNickname = 52,
	EDialogIDs__CampaignHangarSetDelete = 53,
	EDialogIDs__MULTI_HANGAR_EDITSETCONFIRM_SAVE = 54,
	EDialogIDs__MULTI_HANGAR_SELECTAIRCRAFT_CONFIRM = 55,
	EDialogIDs__MULTILOADING_DIALOGUE_FAILEDSEARCH = 56,
	EDialogIDs__MULTILOADING_DIALOGUE_NOFOUND = 57,
	EDialogIDs__MULTILOADING_DIALOGUE_FAILEDJOIN = 58,
	EDialogIDs__MULTILOADING_DIALOGUE_FAILEDCREATE = 59,
	EDialogIDs__MULTILOADING_DIALOGUE_EXCESSJOIN = 60,
	EDialogIDs__MULTILOADING_DIALOGUE_EXCESSCREATE = 61,
	EDialogIDs__MULTILOADING_DIALOGUE_FULLROOM = 62,
	EDialogIDs__MULTILOADING_DIALOGUE_JOINING = 63,
	EDialogIDs__MULTILOADING_DIALOGUE_CREATING = 64,
	EDialogIDs__MULTI_LOBBY_ROOM_ACTION_DIALOGUE_LEAVE = 65,
	EDialogIDs__MULTI_SYSTEM_NETWORK_CONNECTING = 66,
	EDialogIDs__MULTI_LOBBY_ROOM_ACTION_DIALOGUE_HOSTINACTIVE = 67,
	EDialogIDs__MULTI_LOBBY_ROOM_ACTION_DIALOGUE_KICK = 68,
	EDialogIDs__MULTI_LOBBY_ROOM_ACTION_DIALOGUE_KICKHOST = 69,
	EDialogIDs__MULTI_INGAME_ACTION_DIALOGUE_LEAVE = 70,
	EDialogIDs__MULTI_INGAME_ACTION_DIALOGUE_ABORT = 71,
	EDialogIDs__MULTILOADING_DIALOGUE_AIRCRAFTREGULATION_CREATEROOM = 72,
	EDialogIDs__MULTI_LOBBY_CHANGE_DIALOGUE_COMMON = 73,
	EDialogIDs__MULTI_LOBBY_ROOM_ACTION_DIALOGUE_KICKED = 74,
	EDialogIDs__MULTI_LOBBY_ROOM_ACTION_DIALOGUE_HOSTMIGRATION = 75,
	EDialogIDs__MULTILOADING_DIALOGUE_CHANGESETTING = 76,
	EDialogIDs__MULTI_LOBBY_ROOM_ACTION_LEAVE_NOACTION = 77,
	EDialogIDs__MULTI_LOBBY_SAMEROOM = 78,
	EDialogIDs__MULTILOADING_DIALOGUE_AIRCRAFTREGULATION_JOINROOM = 79,
	EDialogIDs__MULTILOADING_DIALOGUE_AIRCRAFTREGULATION_HANGAR = 80,
	EDialogIDs__MULTILOADING_DIALOGUE_AIRCRAFTREGULATION_HANGAR_DELETE = 81,
	EDialogIDs__MULTILOADING_DIALOGUE_SEARCHING = 82,
	EDialogIDs__MULTI_SYSTEM_ACTION_CANCELLING = 83,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ERROR_SIMPLE = 84,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ERROR = 85,
	EDialogIDs__MULTI_DIALOGUE_HOSTMIGRATION_FAIL = 86,
	EDialogIDs__MULTI_SYSTEM_NETWORK_TIMEOUT = 87,
	EDialogIDs__MUTLI_SYSTEM_NETWORK_TIMEOUT = 88,
	EDialogIDs__MULTI_SYSTEM_NETWORK_NOCABE = 89,
	EDialogIDs__MULTI_SYSTEM_NETWORK_CABLECUT = 90,
	EDialogIDs__MULTI_SYSTEM_NETWORK_OFFLINE = 91,
	EDialogIDs__MULTI_SYSTEM_NETWORK_MAINTENANCE = 92,
	EDialogIDs__MULTI_SYSTEM_NETWORK_NOSERVICE = 93,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ERROR_LOGIN_PSN = 94,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ERROR_LOGIN_XB1 = 95,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ERROR_LOGIN_PSN1 = 96,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ERROR_LOGIN_XB11 = 97,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ERROR_LOGIN_STEAM1 = 98,
	EDialogIDs__MULTI_SYSTEM_NETWORK_PROHIBIT_PARENTALCONTROL_PSN = 99,
	EDialogIDs__MULTI_SYSTEM_NETWORK_PROHIBIT_PARENTALCONTROL_XB1 = 100,
	EDialogIDs__MULTI_SYSTEM_NETWORK_PROHIBIT_PS4 = 101,
	EDialogIDs__MULTI_SYSTEM_NETWORK_PROHIBIT_XB1 = 102,
	EDialogIDs__MULTI_SYSTEM_NETWORK_PROHIBIT_STEAM = 103,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ROMMISMATCH = 104,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ROMMISMATCH01 = 105,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ERROR_MEMBERSHIP_PSN = 106,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ERROR_MEMBERSHIP_PSN01 = 107,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ERROR_MEMBERSHIP_XB1 = 108,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ERROR_MEMBERSHIP_XB101 = 109,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ERROR_GUESTLOGIN_XB1 = 110,
	EDialogIDs__MULTI_INGAME_ACTION_DIALOGUE_HOTJOINLOBBY = 111,
	EDialogIDs__MULTILOADING_DIALOGUE_LEAVING = 112,
	EDialogIDs__MULTILOADING_DIALOGUE_FAILEDINVITEJOIN_XB1 = 113,
	EDialogIDs__MULTILOADING_DIALOGUE_FAILEDJOIN2 = 114,
	EDialogIDs__VRSaveFailure      = 115,
	EDialogIDs__VRContinue         = 116,
	EDialogIDs__VRQuitMission      = 117,
	EDialogIDs__VRBackToMainMenu   = 118,
	EDialogIDs__VRQuitHangar       = 119,
	EDialogIDs__VRRestartFromCheckpoint = 120,
	EDialogIDs__TutorialAircraftGuide = 121,
	EDialogIDs__TutorialAircraftParts = 122,
	EDialogIDs__TutorialMulti      = 123,
	EDialogIDs__TutorialMultiAircraftSet = 124,
	EDialogIDs__TutorialMultiRoomCreate = 125,
	EDialogIDs__TutorialMultiRoom  = 126,
	EDialogIDs__Eula               = 127,
	EDialogIDs__Privacy            = 128,
	EDialogIDs__OptionsRebindControls1 = 129,
	EDialogIDs__AircraftDetailDescription = 130,
	EDialogIDs__MULTI_SYSTEM_NETWORK_LICENSEERROR = 131,
	EDialogIDs__MULTI_SYSTEM_NETWORK_LICENSECUSTOMIZATION_YES = 132,
	EDialogIDs__MULTI_SYSTEM_NETWORK_LICENSECUSTOMIZATION_NO = 133,
	EDialogIDs__MULTI_SYSTEM_NETWORK_EULA_USERDISAGREE = 134,
	EDialogIDs__MULTI_SYSTEM_NEWTORK_EULA_USERDISAGREE = 135,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ACCOUNT_BANNED_XB1 = 136,
	EDialogIDs__ExtraCampaignWarningSpoiler = 137,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ERROR_CHEAT1 = 138,
	EDialogIDs__MULTI_SYSTEM_NETWORK_ERROR_CHEAT2 = 139,
	EDialogIDs__Num                = 140,
	EDialogIDs__EDialogIDs_MAX     = 141
};


// Enum Nimbus.EElectronicFlareTarget
enum class EElectronicFlareTarget : uint8_t
{
	EElectronicFlareTarget__None   = 0,
	EElectronicFlareTarget__Myself = 1,
	EElectronicFlareTarget__Friend = 2,
	EElectronicFlareTarget__EElectronicFlareTarget_MAX = 3
};


// Enum Nimbus.EElectronicFaction
enum class EElectronicFaction : uint8_t
{
	EElectronicFaction__Myself     = 0,
	EElectronicFaction__Friend     = 1,
	EElectronicFaction__Enemy      = 2,
	EElectronicFaction__EElectronicFaction_MAX = 3
};


// Enum Nimbus.EEmblemGameModeCategory
enum class EEmblemGameModeCategory : uint8_t
{
	EEmblemGameModeCategory__Campaign = 0,
	EEmblemGameModeCategory__Multiplayer = 1,
	EEmblemGameModeCategory__VR    = 2,
	EEmblemGameModeCategory__Count = 3,
	EEmblemGameModeCategory__EEmblemGameModeCategory_MAX = 4
};


// Enum Nimbus.EDebugMenuMultiplayerItems
enum class EDebugMenuMultiplayerItems : uint8_t
{
	EDebugMenuMultiplayerItems__MultiplayerDebugMode = 0,
	EDebugMenuMultiplayerItems__ForceSortie = 1,
	EDebugMenuMultiplayerItems__ForceCompleteMission = 2,
	EDebugMenuMultiplayerItems__SetRemainingMissionTime = 3,
	EDebugMenuMultiplayerItems__SendAircraftSetsToAllClients = 4,
	EDebugMenuMultiplayerItems__SetLocalRankExp = 5,
	EDebugMenuMultiplayerItems__CheckLocalRankInfo = 6,
	EDebugMenuMultiplayerItems__ApplyMutiplayerParametersToCampaign = 7,
	EDebugMenuMultiplayerItems__DisableAutoKick = 8,
	EDebugMenuMultiplayerItems__ChangeAssistAngleForRemotePlayer = 9,
	EDebugMenuMultiplayerItems__MAX = 10
};


// Enum Nimbus.EBattleSituation
enum class EBattleSituation : uint8_t
{
	EBattleSituation__Default      = 0,
	EBattleSituation__LowAltitude  = 1,
	EBattleSituation__HighAltitude = 2,
	EBattleSituation__Dying        = 3,
	EBattleSituation__InClouds     = 4,
	EBattleSituation__InCloudsDying = 5,
	EBattleSituation__NearClouds   = 6,
	EBattleSituation__NearCloudsDying = 7,
	EBattleSituation__Count        = 8,
	EBattleSituation__EBattleSituation_MAX = 9
};


// Enum Nimbus.EGenericLoadingScreenType
enum class EGenericLoadingScreenType : uint8_t
{
	EGenericLoadingScreenType__Plane = 0,
	EGenericLoadingScreenType__Tip = 1,
	EGenericLoadingScreenType__Weapon = 2,
	EGenericLoadingScreenType__Word = 3,
	EGenericLoadingScreenType__Count = 4,
	EGenericLoadingScreenType__EGenericLoadingScreenType_MAX = 5
};


// Enum Nimbus.EGraphicsMiscSettings
enum class EGraphicsMiscSettings : uint8_t
{
	EGraphicsMiscSettings__NimbusGlowColorSetByWidget = 0,
	EGraphicsMiscSettings__PostProcessNimbusUseAlphaBlend = 1,
	EGraphicsMiscSettings__ShadowDistanceScale = 2,
	EGraphicsMiscSettings__PS4VROverlayAdditiveBlend = 3,
	EGraphicsMiscSettings__NimbusGlowCombineHUD = 4,
	EGraphicsMiscSettings__MotionBlurAmount = 5,
	EGraphicsMiscSettings__ScreenPercentage = 6,
	EGraphicsMiscSettings__PostProcessNimbusUseExtraLayer = 7,
	EGraphicsMiscSettings__Count   = 8,
	EGraphicsMiscSettings__EGraphicsMiscSettings_MAX = 9
};


// Enum Nimbus.EGraphicsSettings
enum class EGraphicsSettings : uint8_t
{
	EGraphicsSettings__PS4Common   = 0,
	EGraphicsSettings__XBoxOneCommon = 1,
	EGraphicsSettings__WindowsCommon = 2,
	EGraphicsSettings__VRHangar    = 3,
	EGraphicsSettings__VRMission   = 4,
	EGraphicsSettings__VRAirShow   = 5,
	EGraphicsSettings__PS4Neo      = 6,
	EGraphicsSettings__PS4NeoVRHangar = 7,
	EGraphicsSettings__PS4NeoVRMission = 8,
	EGraphicsSettings__PS4NeoVRAirShow = 9,
	EGraphicsSettings__Scorpio     = 10,
	EGraphicsSettings__Count       = 11,
	EGraphicsSettings__EGraphicsSettings_MAX = 12
};


// Enum Nimbus.EEULAState
enum class EEULAState : uint8_t
{
	EEULAState__None_Opened        = 0,
	EEULAState__NotConnectedToNetwork = 1,
	EEULAState__EULA_Opened        = 2,
	EEULAState__EULA_Agreed        = 3,
	EEULAState__EULA_Disagreed     = 4,
	EEULAState__EULA_Canceled      = 5,
	EEULAState__Privacy_Opened     = 6,
	EEULAState__Privacy_Agreed     = 7,
	EEULAState__Privacy_Disagreed  = 8,
	EEULAState__Privacy_Canceled   = 9,
	EEULAState__BothAgreed         = 10,
	EEULAState__DisplayingWarning  = 11,
	EEULAState__NumState           = 12,
	EEULAState__EEULAState_MAX     = 13
};


// Enum Nimbus.EGraphicsSettingsWindowsPreset
enum class EGraphicsSettingsWindowsPreset : uint8_t
{
	EGraphicsSettingsWindowsPreset__Low = 0,
	EGraphicsSettingsWindowsPreset__Middle = 1,
	EGraphicsSettingsWindowsPreset__High = 2,
	EGraphicsSettingsWindowsPreset__Custom = 3,
	EGraphicsSettingsWindowsPreset__Count = 4,
	EGraphicsSettingsWindowsPreset__EGraphicsSettingsWindowsPreset_MAX = 5
};


// Enum Nimbus.EGraphicsScreenPercentageSettings
enum class EGraphicsScreenPercentageSettings : uint8_t
{
	EGraphicsScreenPercentageSettings__Gameplay = 0,
	EGraphicsScreenPercentageSettings__NonGameplay = 1,
	EGraphicsScreenPercentageSettings__VRNonGameplay = 2,
	EGraphicsScreenPercentageSettings__VRGameplay = 3,
	EGraphicsScreenPercentageSettings__VRAirShow = 4,
	EGraphicsScreenPercentageSettings__MPGameplay = 5,
	EGraphicsScreenPercentageSettings__NoChange = 6,
	EGraphicsScreenPercentageSettings__Count = 7,
	EGraphicsScreenPercentageSettings__EGraphicsScreenPercentageSettings_MAX = 8
};


// Enum Nimbus.EGraphicsSettingsWindowsPostProcessQuality
enum class EGraphicsSettingsWindowsPostProcessQuality : uint8_t
{
	EGraphicsSettingsWindowsPostProcessQuality__Low = 0,
	EGraphicsSettingsWindowsPostProcessQuality__Middle = 1,
	EGraphicsSettingsWindowsPostProcessQuality__High = 2,
	EGraphicsSettingsWindowsPostProcessQuality__Count = 3,
	EGraphicsSettingsWindowsPostProcessQuality__EGraphicsSettingsWindowsPostProcessQuality_MAX = 4
};


// Enum Nimbus.EGraphicsSettingsWindowsEffectAmount
enum class EGraphicsSettingsWindowsEffectAmount : uint8_t
{
	EGraphicsSettingsWindowsEffectAmount__Low = 0,
	EGraphicsSettingsWindowsEffectAmount__Middle = 1,
	EGraphicsSettingsWindowsEffectAmount__High = 2,
	EGraphicsSettingsWindowsEffectAmount__Count = 3,
	EGraphicsSettingsWindowsEffectAmount__EGraphicsSettingsWindowsEffectAmount_MAX = 4
};


// Enum Nimbus.EGraphicsSettingsWindowsEffectQuality
enum class EGraphicsSettingsWindowsEffectQuality : uint8_t
{
	EGraphicsSettingsWindowsEffectQuality__Low = 0,
	EGraphicsSettingsWindowsEffectQuality__Middle = 1,
	EGraphicsSettingsWindowsEffectQuality__High = 2,
	EGraphicsSettingsWindowsEffectQuality__Count = 3,
	EGraphicsSettingsWindowsEffectQuality__EGraphicsSettingsWindowsEffectQuality_MAX = 4
};


// Enum Nimbus.EGraphicsSettingsWindowsTextureQuality
enum class EGraphicsSettingsWindowsTextureQuality : uint8_t
{
	EGraphicsSettingsWindowsTextureQuality__Low = 0,
	EGraphicsSettingsWindowsTextureQuality__Middle = 1,
	EGraphicsSettingsWindowsTextureQuality__High = 2,
	EGraphicsSettingsWindowsTextureQuality__Count = 3,
	EGraphicsSettingsWindowsTextureQuality__EGraphicsSettingsWindowsTextureQuality_MAX = 4
};


// Enum Nimbus.EGraphicsSettingsWindowsShadowQuality
enum class EGraphicsSettingsWindowsShadowQuality : uint8_t
{
	EGraphicsSettingsWindowsShadowQuality__Low = 0,
	EGraphicsSettingsWindowsShadowQuality__Middle = 1,
	EGraphicsSettingsWindowsShadowQuality__High = 2,
	EGraphicsSettingsWindowsShadowQuality__Count = 3,
	EGraphicsSettingsWindowsShadowQuality__EGraphicsSettingsWindowsShadowQuality_MAX = 4
};


// Enum Nimbus.EGraphicsSettingsWindowsAntiAliasing
enum class EGraphicsSettingsWindowsAntiAliasing : uint8_t
{
	EGraphicsSettingsWindowsAntiAliasing__Off = 0,
	EGraphicsSettingsWindowsAntiAliasing__FXAAx2 = 1,
	EGraphicsSettingsWindowsAntiAliasing__FXAAx4 = 2,
	EGraphicsSettingsWindowsAntiAliasing__Count = 3,
	EGraphicsSettingsWindowsAntiAliasing__EGraphicsSettingsWindowsAntiAliasing_MAX = 4
};


// Enum Nimbus.EGraphicsSettingsWindowsDrawScale
enum class EGraphicsSettingsWindowsDrawScale : uint8_t
{
	EGraphicsSettingsWindowsDrawScale__S50 = 0,
	EGraphicsSettingsWindowsDrawScale__S60 = 1,
	EGraphicsSettingsWindowsDrawScale__S70 = 2,
	EGraphicsSettingsWindowsDrawScale__S80 = 3,
	EGraphicsSettingsWindowsDrawScale__S90 = 4,
	EGraphicsSettingsWindowsDrawScale__S100 = 5,
	EGraphicsSettingsWindowsDrawScale__S110 = 6,
	EGraphicsSettingsWindowsDrawScale__S120 = 7,
	EGraphicsSettingsWindowsDrawScale__S130 = 8,
	EGraphicsSettingsWindowsDrawScale__S140 = 9,
	EGraphicsSettingsWindowsDrawScale__S150 = 10,
	EGraphicsSettingsWindowsDrawScale__S160 = 11,
	EGraphicsSettingsWindowsDrawScale__S170 = 12,
	EGraphicsSettingsWindowsDrawScale__S180 = 13,
	EGraphicsSettingsWindowsDrawScale__S190 = 14,
	EGraphicsSettingsWindowsDrawScale__S200 = 15,
	EGraphicsSettingsWindowsDrawScale__Count = 16,
	EGraphicsSettingsWindowsDrawScale__EGraphicsSettingsWindowsDrawScale_MAX = 17
};


// Enum Nimbus.EGraphicsSettingsWindowsFrameLimit
enum class EGraphicsSettingsWindowsFrameLimit : uint8_t
{
	EGraphicsSettingsWindowsFrameLimit__Off = 0,
	EGraphicsSettingsWindowsFrameLimit__Fps144 = 1,
	EGraphicsSettingsWindowsFrameLimit__Fps120 = 2,
	EGraphicsSettingsWindowsFrameLimit__Fps90 = 3,
	EGraphicsSettingsWindowsFrameLimit__Fps75 = 4,
	EGraphicsSettingsWindowsFrameLimit__Fps60 = 5,
	EGraphicsSettingsWindowsFrameLimit__Count = 6,
	EGraphicsSettingsWindowsFrameLimit__EGraphicsSettingsWindowsFrameLimit_MAX = 7
};


// Enum Nimbus.EGraphicsSettingsWindowsScreenMode
enum class EGraphicsSettingsWindowsScreenMode : uint8_t
{
	EGraphicsSettingsWindowsScreenMode__Borderless = 0,
	EGraphicsSettingsWindowsScreenMode__FullScreen = 1,
	EGraphicsSettingsWindowsScreenMode__Window = 2,
	EGraphicsSettingsWindowsScreenMode__Count = 3,
	EGraphicsSettingsWindowsScreenMode__EGraphicsSettingsWindowsScreenMode_MAX = 4
};


// Enum Nimbus.ENimbusPingType
enum class ENimbusPingType : uint8_t
{
	ENimbusPingType__PING_ATTACK   = 0,
	ENimbusPingType__PING_HELP     = 1,
	ENimbusPingType__PING_ALLY     = 2,
	ENimbusPingType__PING_ENEMY    = 3,
	ENimbusPingType__PING_DEFAULT  = 4,
	ENimbusPingType__PING_MAX      = 5
};


// Enum Nimbus.ELanguages
enum class ELanguages : uint8_t
{
	ELanguages__English            = 0,
	ELanguages__TraditionalChinese = 1,
	ELanguages__French             = 2,
	ELanguages__German             = 3,
	ELanguages__Italian            = 4,
	ELanguages__Japanese           = 5,
	ELanguages__Korean             = 6,
	ELanguages__Spanish            = 7,
	ELanguages__NeutralSpanish     = 8,
	ELanguages__Polish             = 9,
	ELanguages__BrazilianPortuguese = 10,
	ELanguages__Russian            = 11,
	ELanguages__TextID             = 12,
	ELanguages__Num                = 13,
	ELanguages__ELanguages_MAX     = 14
};


// Enum Nimbus.ELaserWeaponSupplementaryType
enum class ELaserWeaponSupplementaryType : uint8_t
{
	ELaserWeaponSupplementaryType__None = 0,
	ELaserWeaponSupplementaryType__FollowingAngle = 1,
	ELaserWeaponSupplementaryType__FollowingDistance = 2,
	ELaserWeaponSupplementaryType__Swinging_Yaw = 3,
	ELaserWeaponSupplementaryType__Swinging_Target = 4,
	ELaserWeaponSupplementaryType__Swinging_Pitch = 5,
	ELaserWeaponSupplementaryType__ELaserWeaponSupplementaryType_MAX = 6
};


// Enum Nimbus.EMADObservationWaveReferenceOption
enum class EMADObservationWaveReferenceOption : uint8_t
{
	EMADObservationWaveReferenceOption__ObservatRate = 0,
	EMADObservationWaveReferenceOption__SeaRate = 1,
	EMADObservationWaveReferenceOption__Observat_SeaRate = 2,
	EMADObservationWaveReferenceOption__Fixed = 3,
	EMADObservationWaveReferenceOption__Fixed01 = 4,
	EMADObservationWaveReferenceOption__MAX = 5
};


// Enum Nimbus.EMADObservationWaveDirectionOption
enum class EMADObservationWaveDirectionOption : uint8_t
{
	EMADObservationWaveDirectionOption__Angle90 = 0,
	EMADObservationWaveDirectionOption__Angle180 = 1,
	EMADObservationWaveDirectionOption__MAX = 2
};


// Enum Nimbus.EMADObservationOption
enum class EMADObservationOption : uint8_t
{
	EMADObservationOption__CursorLocation = 0,
	EMADObservationOption__PlayerLocation = 1,
	EMADObservationOption__MAX     = 2
};


// Enum Nimbus.EMultiPlayerCheck
enum class EMultiPlayerCheck : uint8_t
{
	EMultiPlayerCheck__None        = 0,
	EMultiPlayerCheck__NetworkConnectionCheck = 1,
	EMultiPlayerCheck__ROMVersionCheck = 2,
	EMultiPlayerCheck__OnlineModeRestrictionCheck = 3,
	EMultiPlayerCheck__PlayerMembershipCheck = 4,
	EMultiPlayerCheck__EULACheck   = 5,
	EMultiPlayerCheck__LicenseCheck = 6,
	EMultiPlayerCheck__Num         = 7,
	EMultiPlayerCheck__EMultiPlayerCheck_MAX = 8
};


// Enum Nimbus.EDescriptionTextState
enum class EDescriptionTextState : uint8_t
{
	EDescriptionTextState__SHOWDEFAULTONLY = 0,
	EDescriptionTextState__SHOWDEFAULTANDSUBITEM = 1,
	EDescriptionTextState__EDescriptionTextState_MAX = 2
};


// Enum Nimbus.EMedalCategory
enum class EMedalCategory : uint8_t
{
	EMedalCategory__Campaign       = 0,
	EMedalCategory__Online         = 1,
	EMedalCategory__VR             = 2,
	EMedalCategory__EMedalCategory_MAX = 3
};


// Enum Nimbus.EUILayerMenuItemWidgetType
enum class EUILayerMenuItemWidgetType : uint8_t
{
	EUILayerMenuItemWidgetType__None = 0,
	EUILayerMenuItemWidgetType__TextBlock = 1,
	EUILayerMenuItemWidgetType__Image = 2,
	EUILayerMenuItemWidgetType__TextBlockDecorate = 3,
	EUILayerMenuItemWidgetType__EUILayerMenuItemWidgetType_MAX = 4
};


// Enum Nimbus.ESequenceMenuItemType
enum class ESequenceMenuItemType : uint8_t
{
	ESequenceMenuItemType__All     = 0,
	ESequenceMenuItemType__OnlyNormal = 1,
	ESequenceMenuItemType__OnlySub = 2,
	ESequenceMenuItemType__ESequenceMenuItemType_MAX = 3
};


// Enum Nimbus.ESequenceMenuItemCheckType
enum class ESequenceMenuItemCheckType : uint8_t
{
	ESequenceMenuItemCheckType__None = 0,
	ESequenceMenuItemCheckType__CheckPlatformPS4 = 1,
	ESequenceMenuItemCheckType__CheckPlatformOne = 2,
	ESequenceMenuItemCheckType__CheckPlatformStm = 3,
	ESequenceMenuItemCheckType__CheckShowNew = 4,
	ESequenceMenuItemCheckType__CheckShowSpNew = 5,
	ESequenceMenuItemCheckType__CheckShowContinue = 6,
	ESequenceMenuItemCheckType__CheckShowFreemisson = 7,
	ESequenceMenuItemCheckType__CheckShowMusicPlayer = 8,
	ESequenceMenuItemCheckType__CheckOptionVoiceChat = 9,
	ESequenceMenuItemCheckType__CheckShowExtramisson = 10,
	ESequenceMenuItemCheckType__ESequenceMenuItemCheckType_MAX = 11
};


// Enum Nimbus.ESequenceGroup
enum class ESequenceGroup : uint8_t
{
	ESequenceGroup__Boot           = 0,
	ESequenceGroup__FirstSetup     = 1,
	ESequenceGroup__Interrupt      = 2,
	ESequenceGroup__Main           = 3,
	ESequenceGroup__Campaign       = 4,
	ESequenceGroup__CampaignAction = 5,
	ESequenceGroup__Multiplay      = 6,
	ESequenceGroup__VR             = 7,
	ESequenceGroup__Hangar         = 8,
	ESequenceGroup__MissionTitle   = 9,
	ESequenceGroup__Briefing       = 10,
	ESequenceGroup__Debriefing     = 11,
	ESequenceGroup__CutScene       = 12,
	ESequenceGroup__Unlock         = 13,
	ESequenceGroup__ESequenceGroup_MAX = 14
};


// Enum Nimbus.EMiniGameState
enum class EMiniGameState : uint8_t
{
	EMiniGameState__NotStarted     = 0,
	EMiniGameState__InProgress     = 1,
	EMiniGameState__Completed      = 2,
	EMiniGameState__EMiniGameState_MAX = 3
};


// Enum Nimbus.EMiniMapType
enum class EMiniMapType : uint8_t
{
	EMiniMapType__MMRADAR          = 0,
	EMiniMapType__MMREGION         = 1,
	EMiniMapType__MMFULL           = 2,
	EMiniMapType__EMiniMapType_MAX = 3
};


// Enum Nimbus.EOutOfRangeLocatorType
enum class EOutOfRangeLocatorType : uint8_t
{
	EOutOfRangeLocatorType__Enemy  = 0,
	EOutOfRangeLocatorType__Unknown = 1,
	EOutOfRangeLocatorType__TGT    = 2,
	EOutOfRangeLocatorType__HighlightedAlly = 3,
	EOutOfRangeLocatorType__EOutOfRangeLocatorType_MAX = 4
};


// Enum Nimbus.EMissileHitType
enum class EMissileHitType : uint8_t
{
	EMissileHitType__AutoOptimization = 0,
	EMissileHitType__Everything    = 1,
	EMissileHitType__EMissileHitType_MAX = 2
};


// Enum Nimbus.EMissionVariableChangeHistoryType
enum class EMissionVariableChangeHistoryType : uint8_t
{
	EMissionVariableChangeHistoryType__MissionVariableChangeHistory_None = 0,
	EMissionVariableChangeHistoryType__MissionVariableChangeHistory_Int = 1,
	EMissionVariableChangeHistoryType__MissionVariableChangeHistory_Bool = 2,
	EMissionVariableChangeHistoryType__MissionVariableChangeHistory_Str = 3,
	EMissionVariableChangeHistoryType__MissionVariableChangeHistory_MAX = 4
};


// Enum Nimbus.EMissionReward
enum class EMissionReward : uint8_t
{
	EMissionReward__Medal          = 0,
	EMissionReward__Skin           = 1,
	EMissionReward__Emblem         = 2,
	EMissionReward__Nickname       = 3,
	EMissionReward__EMissionReward_MAX = 4
};


// Enum Nimbus.EMissionRankCriteria
enum class EMissionRankCriteria : uint8_t
{
	EMissionRankCriteria__ScoreEarned = 0,
	EMissionRankCriteria__TimeUsed = 1,
	EMissionRankCriteria__DefendedTargetHealth = 2,
	EMissionRankCriteria__EMissionRankCriteria_MAX = 3
};


// Enum Nimbus.EMissionPhaseProceedStatus
enum class EMissionPhaseProceedStatus : uint8_t
{
	EMissionPhaseProceedStatus__Succeeded = 0,
	EMissionPhaseProceedStatus__Failed = 1,
	EMissionPhaseProceedStatus__EMissionPhaseProceedStatus_MAX = 2
};


// Enum Nimbus.EMissionRank
enum class EMissionRank : uint8_t
{
	EMissionRank__C                = 0,
	EMissionRank__B                = 1,
	EMissionRank__A                = 2,
	EMissionRank__S                = 3,
	EMissionRank__EMissionRank_MAX = 4
};


// Enum Nimbus.EMissionRule
enum class EMissionRule : uint8_t
{
	EMissionRule__BattleRoyal      = 0,
	EMissionRule__TeamDeathMatch   = 1,
	EMissionRule__Count            = 2,
	EMissionRule__None             = 3,
	EMissionRule__EMissionRule_MAX = 4
};


// Enum Nimbus.EMissionCategory
enum class EMissionCategory : uint8_t
{
	EMissionCategory__Campaign     = 0,
	EMissionCategory__FreeFlight   = 1,
	EMissionCategory__Online       = 2,
	EMissionCategory__VR           = 3,
	EMissionCategory__AirShowVR    = 4,
	EMissionCategory__FreeFlightVR = 5,
	EMissionCategory__Test         = 6,
	EMissionCategory__EMissionCategory_MAX = 7
};


// Enum Nimbus.EIGCTransitionType
enum class EIGCTransitionType : uint8_t
{
	EIGCTransitionType__None       = 0,
	EIGCTransitionType__FadeOut    = 1,
	EIGCTransitionType__MS04Special = 2,
	EIGCTransitionType__EIGCTransitionType_MAX = 3
};


// Enum Nimbus.EObjectiveStatus
enum class EObjectiveStatus : uint8_t
{
	EObjectiveStatus__InProgress   = 0,
	EObjectiveStatus__Failed       = 1,
	EObjectiveStatus__Successful   = 2,
	EObjectiveStatus__EObjectiveStatus_MAX = 3
};


// Enum Nimbus.EMovieSubtitleButtonMode
enum class EMovieSubtitleButtonMode : uint8_t
{
	EMovieSubtitleButtonMode__Normal = 0,
	EMovieSubtitleButtonMode__Skip = 1,
	EMovieSubtitleButtonMode__EMovieSubtitleButtonMode_MAX = 2
};


// Enum Nimbus.EMultiHudIgcType
enum class EMultiHudIgcType : uint8_t
{
	EMultiHudIgcType__None         = 0,
	EMultiHudIgcType__BRIntro      = 1,
	EMultiHudIgcType__BRIntroOther = 2,
	EMultiHudIgcType__BRMVP        = 3,
	EMultiHudIgcType__BREnding     = 4,
	EMultiHudIgcType__TDMVP        = 5,
	EMultiHudIgcType__TDIntroAlpha = 6,
	EMultiHudIgcType__TDIntroBravo = 7,
	EMultiHudIgcType__TDWinner     = 8,
	EMultiHudIgcType__Killer       = 9,
	EMultiHudIgcType__EMultiHudIgcType_MAX = 10
};


// Enum Nimbus.EMultiPauseSelectedItem
enum class EMultiPauseSelectedItem : uint8_t
{
	EMultiPauseSelectedItem__Resume = 0,
	EMultiPauseSelectedItem__Quit  = 1,
	EMultiPauseSelectedItem__Option = 2,
	EMultiPauseSelectedItem__Vibration = 3,
	EMultiPauseSelectedItem__Pause_Count = 4,
	EMultiPauseSelectedItem__EMultiPauseSelectedItem_MAX = 5
};


// Enum Nimbus.EMultiLoadingScreenType
enum class EMultiLoadingScreenType : uint8_t
{
	EMultiLoadingScreenType__Plane = 0,
	EMultiLoadingScreenType__Tip   = 1,
	EMultiLoadingScreenType__Count = 2,
	EMultiLoadingScreenType__EMultiLoadingScreenType_MAX = 3
};


// Enum Nimbus.EMedalRank
enum class EMedalRank : uint8_t
{
	EMedalRank__S                  = 0,
	EMedalRank__A                  = 1,
	EMedalRank__B                  = 2,
	EMedalRank__C                  = 3,
	EMedalRank__D                  = 4,
	EMedalRank__EMedalRank_MAX     = 5
};


// Enum Nimbus.EMedalLinkedAttribute
enum class EMedalLinkedAttribute : uint8_t
{
	EMedalLinkedAttribute__EnemyKilled = 0,
	EMedalLinkedAttribute__Score   = 1,
	EMedalLinkedAttribute__EnemyKilledByMachineGun = 2,
	EMedalLinkedAttribute__EnemyKilledByMissile = 3,
	EMedalLinkedAttribute__EnemyKilledByLaser = 4,
	EMedalLinkedAttribute__MissileAffectByFlare = 5,
	EMedalLinkedAttribute__FirstKillTimeInMs = 6,
	EMedalLinkedAttribute__LastKillTimeInMs = 7,
	EMedalLinkedAttribute__TargetSwitchCount = 8,
	EMedalLinkedAttribute__PlayerKilledCount = 9,
	EMedalLinkedAttribute__MachineGunBulletFired = 10,
	EMedalLinkedAttribute__NonGunWeaponFireCount = 11,
	EMedalLinkedAttribute__MissileFireCount = 12,
	EMedalLinkedAttribute__AssistScore = 13,
	EMedalLinkedAttribute__CloudEnemyKillCount = 14,
	EMedalLinkedAttribute__KillCountWithOthers = 15,
	EMedalLinkedAttribute__MissileEvadeCountByCloud = 16,
	EMedalLinkedAttribute__LongestNoShotDownDurationInMs = 17,
	EMedalLinkedAttribute__TotalDamageToAll = 18,
	EMedalLinkedAttribute__DamageCausedByLaser = 19,
	EMedalLinkedAttribute__AfterBurnerActiveDurationInSecond = 20,
	EMedalLinkedAttribute__StallFlyingDurationInSecond = 21,
	EMedalLinkedAttribute__NearDeathFlyingDurationInSecond = 22,
	EMedalLinkedAttribute__CloudFlyingDurationInSecond = 23,
	EMedalLinkedAttribute__AverageFlyingSpeedInMps = 24,
	EMedalLinkedAttribute__FlyingDistanceInMeter = 25,
	EMedalLinkedAttribute__AverageFlyingAltitudeInMeter = 26,
	EMedalLinkedAttribute__MachineGunHitAccuracy = 27,
	EMedalLinkedAttribute__WeaponHitAccuracy = 28,
	EMedalLinkedAttribute__ScorePerKill = 29,
	EMedalLinkedAttribute__bNoShotDown = 30,
	EMedalLinkedAttribute__bNoDamage = 31,
	EMedalLinkedAttribute__bUseUpAmmo = 32,
	EMedalLinkedAttribute__bKillEnemyAfterDead = 33,
	EMedalLinkedAttribute__EMedalLinkedAttribute_MAX = 34
};


// Enum Nimbus.EMedalTitle
enum class EMedalTitle : uint8_t
{
	EMedalTitle__Ace               = 0,
	EMedalTitle__MachineGunCrazy   = 1,
	EMedalTitle__SteamRoller       = 2,
	EMedalTitle__FirstIn           = 3,
	EMedalTitle__LastOut           = 4,
	EMedalTitle__Adaptable         = 5,
	EMedalTitle__BBQ               = 6,
	EMedalTitle__IronMan           = 7,
	EMedalTitle__Efficient         = 8,
	EMedalTitle__HaloPilot         = 9,
	EMedalTitle__GroundProximityWarning = 10,
	EMedalTitle__Speedster         = 11,
	EMedalTitle__Tortoise          = 12,
	EMedalTitle__DangerousDriving  = 13,
	EMedalTitle__AeroMaster        = 14,
	EMedalTitle__SoloWing          = 15,
	EMedalTitle__BailoutMaster     = 16,
	EMedalTitle__Specter           = 17,
	EMedalTitle__TriggerHappy      = 18,
	EMedalTitle__GunMaster         = 19,
	EMedalTitle__Fireworks         = 20,
	EMedalTitle__Pacifist          = 21,
	EMedalTitle__SharpShooter      = 22,
	EMedalTitle__ShotgunStyle      = 23,
	EMedalTitle__BountyHunter      = 24,
	EMedalTitle__RollingThunder    = 25,
	EMedalTitle__CoolHead          = 26,
	EMedalTitle__Survivor          = 27,
	EMedalTitle__MechanicsFriend   = 28,
	EMedalTitle__AlanSmithee       = 29,
	EMedalTitle__GimmeAmmo         = 30,
	EMedalTitle__AGiftFromDeath    = 31,
	EMedalTitle__Entourage         = 32,
	EMedalTitle__Independent       = 33,
	EMedalTitle__CloudSeeker       = 34,
	EMedalTitle__Nephophobic       = 35,
	EMedalTitle__HideAndSeeker     = 36,
	EMedalTitle__FinalWord         = 37,
	EMedalTitle__EscapeArtist      = 38,
	EMedalTitle__StarBlade         = 39,
	EMedalTitle__Excalibur         = 40,
	EMedalTitle__Bullfighter       = 41,
	EMedalTitle__Num               = 42,
	EMedalTitle__EMedalTitle_MAX   = 43
};


// Enum Nimbus.ELobbyChatCategory
enum class ELobbyChatCategory : uint8_t
{
	ELobbyChatCategory__History    = 0,
	ELobbyChatCategory__All        = 1,
	ELobbyChatCategory__Greetings  = 2,
	ELobbyChatCategory__Procedure  = 3,
	ELobbyChatCategory__Confirmation = 4,
	ELobbyChatCategory__Communication = 5,
	ELobbyChatCategory__Reponses   = 6,
	ELobbyChatCategory__Requests   = 7,
	ELobbyChatCategory__Requests2  = 8,
	ELobbyChatCategory__Suggestion = 9,
	ELobbyChatCategory__Happy      = 10,
	ELobbyChatCategory__Sad        = 11,
	ELobbyChatCategory__Cheerful   = 12,
	ELobbyChatCategory__Others     = 13,
	ELobbyChatCategory__System     = 14,
	ELobbyChatCategory__ELobbyChatCategory_MAX = 15
};


// Enum Nimbus.ERankTitle
enum class ERankTitle : uint8_t
{
	ERankTitle__Airman             = 0,
	ERankTitle__AirmanFirstClass   = 1,
	ERankTitle__SeniorAirman       = 2,
	ERankTitle__Sergeant           = 3,
	ERankTitle__StaffSergeant      = 4,
	ERankTitle__MasterSergeant     = 5,
	ERankTitle__SeniorMasterSergeant = 6,
	ERankTitle__ChiefMasterSergeant = 7,
	ERankTitle__FirstSergeant      = 8,
	ERankTitle__WarrantOfficer     = 9,
	ERankTitle__SecondLieutenant   = 10,
	ERankTitle__FirstLieutenant    = 11,
	ERankTitle__Captain            = 12,
	ERankTitle__Major              = 13,
	ERankTitle__LieutenantColonel  = 14,
	ERankTitle__Colonel            = 15,
	ERankTitle__BrigadierGeneral   = 16,
	ERankTitle__MajorGeneral       = 17,
	ERankTitle__LieutenantGeneral  = 18,
	ERankTitle__General            = 19,
	ERankTitle__CommanderInChief   = 20,
	ERankTitle__Count              = 21,
	ERankTitle__ERankTitle_MAX     = 22
};


// Enum Nimbus.EInstantRadioCategory
enum class EInstantRadioCategory : uint8_t
{
	EInstantRadioCategory__All     = 0,
	EInstantRadioCategory__Greetings = 1,
	EInstantRadioCategory__Replies = 2,
	EInstantRadioCategory__BattleSituation = 3,
	EInstantRadioCategory__Feelings = 4,
	EInstantRadioCategory__Strategy = 5,
	EInstantRadioCategory__Action  = 6,
	EInstantRadioCategory__Other   = 7,
	EInstantRadioCategory__Special = 8,
	EInstantRadioCategory__EInstantRadioCategory_MAX = 9
};


// Enum Nimbus.MenuEntryStatus
enum class EMenuEntryStatus : uint8_t
{
	MenuEntryStatus__None          = 0,
	MenuEntryStatus__Default       = 1,
	MenuEntryStatus__Normal        = 2,
	MenuEntryStatus__MenuEntryStatus_MAX = 3
};


// Enum Nimbus.ELobbyState
enum class ELobbyState : uint8_t
{
	ELobbyState__Normal            = 0,
	ELobbyState__Idle              = 1,
	ELobbyState__InHangar          = 2,
	ELobbyState__SortieAircraftSelection = 3,
	ELobbyState__ELobbyState_MAX   = 4
};


// Enum Nimbus.ELocalPlayerQuitSessionReason
enum class ELocalPlayerQuitSessionReason : uint8_t
{
	ELocalPlayerQuitSessionReason__None = 0,
	ELocalPlayerQuitSessionReason__Manual = 1,
	ELocalPlayerQuitSessionReason__Kick = 2,
	ELocalPlayerQuitSessionReason__AutoKick = 3,
	ELocalPlayerQuitSessionReason__RetrySave = 4,
	ELocalPlayerQuitSessionReason__HostMigrationFailure = 5,
	ELocalPlayerQuitSessionReason__OnlineRestriction = 6,
	ELocalPlayerQuitSessionReason__NetworkError = 7,
	ELocalPlayerQuitSessionReason__NotConnectedToOnlineService = 8,
	ELocalPlayerQuitSessionReason__NotSignedIn = 9,
	ELocalPlayerQuitSessionReason__NotConnectedToInternet = 10,
	ELocalPlayerQuitSessionReason__InvalidMembershipSubscription = 11,
	ELocalPlayerQuitSessionReason__ROMMismatch = 12,
	ELocalPlayerQuitSessionReason__MapLoadFailure = 13,
	ELocalPlayerQuitSessionReason__Cheating = 14,
	ELocalPlayerQuitSessionReason__ELocalPlayerQuitSessionReason_MAX = 15
};


// Enum Nimbus.EDebugCameraType
enum class EDebugCameraType : uint8_t
{
	EDebugCameraType__None         = 0,
	EDebugCameraType__FollowPlane  = 1,
	EDebugCameraType__Free         = 2,
	EDebugCameraType__MovePlayer   = 3,
	EDebugCameraType__SideTargetFollow = 4,
	EDebugCameraType__Side         = 5,
	EDebugCameraType__EDebugCameraType_MAX = 6
};


// Enum Nimbus.EOngoingState
enum class EOngoingState : uint8_t
{
	EOngoingState__Lobby           = 0,
	EOngoingState__InProgress      = 1,
	EOngoingState__Ending          = 2,
	EOngoingState__EOngoingState_MAX = 3
};


// Enum Nimbus.EMultiplayerIGCType
enum class EMultiplayerIGCType : uint8_t
{
	EMultiplayerIGCType__None      = 0,
	EMultiplayerIGCType__BRIntroPlayerLong = 1,
	EMultiplayerIGCType__BRIntroPlayerShort = 2,
	EMultiplayerIGCType__BRIntroLong = 3,
	EMultiplayerIGCType__BRIntroShort = 4,
	EMultiplayerIGCType__TDMIntro  = 5,
	EMultiplayerIGCType__BRMVP     = 6,
	EMultiplayerIGCType__BRNoMVP   = 7,
	EMultiplayerIGCType__BRRanking = 8,
	EMultiplayerIGCType__BRNoWinner = 9,
	EMultiplayerIGCType__TDMWinner = 10,
	EMultiplayerIGCType__TDMDraw   = 11,
	EMultiplayerIGCType__TDMMVP    = 12,
	EMultiplayerIGCType__TDMNoMVP  = 13,
	EMultiplayerIGCType__Killer    = 14,
	EMultiplayerIGCType__Respawn   = 15,
	EMultiplayerIGCType__EMultiplayerIGCType_MAX = 16
};


// Enum Nimbus.ESyncState
enum class ESyncState : uint8_t
{
	ESyncState__ESyncState_None    = 0,
	ESyncState__ESyncState_Init    = 1,
	ESyncState__ESyncState_LobbyWaiting = 2,
	ESyncState__ESyncState_LobbyReady = 3,
	ESyncState__ESyncState_MapLoading = 4,
	ESyncState__ESyncState_MapFinishLoading = 5,
	ESyncState__ESyncState_ReadyForGame = 6,
	ESyncState__ESyncState_Starting = 7,
	ESyncState__ESyncState_Intro   = 8,
	ESyncState__ESyncState_Started = 9,
	ESyncState__ESyncState_Ended   = 10,
	ESyncState__ESyncState_EndingIGC = 11,
	ESyncState__ESyncState_WinLoseResult = 12,
	ESyncState__ESyncState_ResultDetails = 13,
	ESyncState__ESyncState_PEReward = 14,
	ESyncState__ESyncState_RewardUnlock = 15,
	ESyncState__ESyncState_RetrySave = 16,
	ESyncState__ESyncState_BackToLobby = 17,
	ESyncState__ESyncState_NetworkFailure = 18,
	ESyncState__ESyncState_MAX     = 19
};


// Enum Nimbus.ENicknameGameModeCategory
enum class ENicknameGameModeCategory : uint8_t
{
	ENicknameGameModeCategory__Campaign = 0,
	ENicknameGameModeCategory__Multiplayer = 1,
	ENicknameGameModeCategory__VR  = 2,
	ENicknameGameModeCategory__UnKnown = 3,
	ENicknameGameModeCategory__Count = 4,
	ENicknameGameModeCategory__ENicknameGameModeCategory_MAX = 5
};


// Enum Nimbus.ENicknameCategory
enum class ENicknameCategory : uint8_t
{
	ENicknameCategory__Others      = 0,
	ENicknameCategory__Performance = 1,
	ENicknameCategory__Rank        = 2,
	ENicknameCategory__Stage       = 3,
	ENicknameCategory__Mission     = 4,
	ENicknameCategory__WeaponParts = 5,
	ENicknameCategory__Aircraft    = 6,
	ENicknameCategory__Obtained    = 7,
	ENicknameCategory__NotObtained = 8,
	ENicknameCategory__All         = 9,
	ENicknameCategory__Campaign    = 10,
	ENicknameCategory__Multiplayer = 11,
	ENicknameCategory__VR          = 12,
	ENicknameCategory__UnKnown     = 13,
	ENicknameCategory__Count       = 14,
	ENicknameCategory__ENicknameCategory_MAX = 15
};


// Enum Nimbus.EAssetLoaderTag
enum class EAssetLoaderTag : uint8_t
{
	EAssetLoaderTag__None          = 0,
	EAssetLoaderTag__Aircraft      = 1,
	EAssetLoaderTag__Emblem        = 2,
	EAssetLoaderTag__SetEmblem     = 3,
	EAssetLoaderTag__EAssetLoaderTag_MAX = 4
};


// Enum Nimbus.EMFDColorType
enum class EMFDColorType : uint8_t
{
	EMFDColorType__None            = 0,
	EMFDColorType__Default         = 1,
	EMFDColorType__Alert           = 2,
	EMFDColorType__EMFDColorType_MAX = 3
};


// Enum Nimbus.ENimbusEvent
enum class ENimbusEvent : uint8_t
{
	ENimbusEvent__MISSION_ACCOMPLISHED = 0,
	ENimbusEvent__MISSION_UPDATE   = 1,
	ENimbusEvent__MISSION_START    = 2,
	ENimbusEvent__MISSION_PHASE_START = 3,
	ENimbusEvent__MISSION_FAILURE_TIME_OVER = 4,
	ENimbusEvent__MISSION_FAILURE_ZONE = 5,
	ENimbusEvent__MISSION_FAILURE_DEAD = 6,
	ENimbusEvent__MISSION_FAILURE_FAIL_OBJECTIVE = 7,
	ENimbusEvent__MISSION_CHECKPOINT_SAVED = 8,
	ENimbusEvent__MULTI_TEAM_WINNING = 9,
	ENimbusEvent__MULTI_ENEMY_WINNING = 10,
	ENimbusEvent__MULTI_YOU_WIN    = 11,
	ENimbusEvent__MULTI_YOU_LOSE   = 12,
	ENimbusEvent__MULTI_DRAW       = 13,
	ENimbusEvent__MULTI_TIME_UP    = 14,
	ENimbusEvent__MULTI_MISSION_ACCOMPLISHED = 15,
	ENimbusEvent__MULTI_ABORT      = 16,
	ENimbusEvent__MULTI_ENEMY_DESTROYED = 17,
	ENimbusEvent__MULTI_ENEMY_DESTROYED_ASSIST = 18,
	ENimbusEvent__MULTI_ENEMY_HIT  = 19,
	ENimbusEvent__MULTI_PLAYER_MISSILE_MISSED = 20,
	ENimbusEvent__PLAYER_OUT_OF_COMBAT_ZONE = 21,
	ENimbusEvent__PLAYER_APPROACHING_BASE = 22,
	ENimbusEvent__PLAYER_STALLED   = 23,
	ENimbusEvent__PLAYER_BUFFETED  = 24,
	ENimbusEvent__PLAYER_LOW_ALTITUDE = 25,
	ENimbusEvent__PLAYER_HIGH_ALTITUDE = 26,
	ENimbusEvent__PLAYER_AUTO_PILOT = 27,
	ENimbusEvent__MISSILE_ALERT_DANGER_NEAR = 28,
	ENimbusEvent__MISSILE_ALERT_DANGER_FAR = 29,
	ENimbusEvent__MISSILE_ALERT_WARNING = 30,
	ENimbusEvent__PLAYER_ENTER_CLOUD = 31,
	ENimbusEvent__PLAYER_EXIT_CLOUD = 32,
	ENimbusEvent__PLAYER_BEGIN_ICING = 33,
	ENimbusEvent__PLAYER_ICING     = 34,
	ENimbusEvent__PLAYER_END_ICING = 35,
	ENimbusEvent__ICING_HUD_NOTIFICATION = 36,
	ENimbusEvent__PLAYER_TOOK_DAMAGE = 37,
	ENimbusEvent__PLAYER_CRASHED   = 38,
	ENimbusEvent__PLAYER_TARGET_LOCKON = 39,
	ENimbusEvent__PLAYER_FLARE_ACTIVATED = 40,
	ENimbusEvent__PLAYER_FLARE_FIRED = 41,
	ENimbusEvent__PLAYER_ATTACKING_ALLY = 42,
	ENimbusEvent__AI_TARGET_LOCKON = 43,
	ENimbusEvent__WEAPON_GUN_EMPTY = 44,
	ENimbusEvent__WEAPON_MISSILE_EMPTY = 45,
	ENimbusEvent__WEAPON_SPECIAL_EMPTY = 46,
	ENimbusEvent__WEAPON_FLARE_EMPTY = 47,
	ENimbusEvent__WEAPON_SELECTED_MISSILE = 48,
	ENimbusEvent__WEAPON_SELECTED_SPECIAL = 49,
	ENimbusEvent__WEAPON_GUN_FIRED = 50,
	ENimbusEvent__WEAPON_EML_FIRED = 51,
	ENimbusEvent__WEAPON_AA_MISSILE_FIRED = 52,
	ENimbusEvent__WEAPON_AG_MISSILE_FIRED = 53,
	ENimbusEvent__WEAPON_BOMB_FIRED = 54,
	ENimbusEvent__WEAPON_ROCKET_FIRED = 55,
	ENimbusEvent__WEAPON_RAILGUN_FIRED = 56,
	ENimbusEvent__WEAPON_LASER_FIRED = 57,
	ENimbusEvent__WEAPON_LASER_RELEASED = 58,
	ENimbusEvent__WEAPON_SPECIAL_BECAME_EMPTY = 59,
	ENimbusEvent__WEAPON_TGTP_PHASE = 60,
	ENimbusEvent__WEAPON_MAD_PHASE = 61,
	ENimbusEvent__ENEMY_DESTROYED  = 62,
	ENimbusEvent__ENEMY_HIT        = 63,
	ENimbusEvent__PLAYER_MISSILE_MISSED = 64,
	ENimbusEvent__OBJECT_WEAPON_FIRED = 65,
	ENimbusEvent__OBJECT_FLARE_ACTIVATED = 66,
	ENimbusEvent__MINIGAME_CLEARED_FOR_TAKEOFF = 67,
	ENimbusEvent__MINIGAME_TAKEOFF_FAILED = 68,
	ENimbusEvent__MINIGAME_TAKEOFF_SUCCESSFUL = 69,
	ENimbusEvent__MINIGAME_REQUEST_LANDING = 70,
	ENimbusEvent__MINIGAME_LANDING_SUCCESSFUL = 71,
	ENimbusEvent__MINIGAME_LANDING_FAILED = 72,
	ENimbusEvent__MINIGAME_AERIAL_REFUELING_BEGIN = 73,
	ENimbusEvent__MINIGAME_AERIAL_REFUELING_COMMPLETED = 74,
	ENimbusEvent__MINIGAME_AERIAL_REFUELING_FAILED = 75,
	ENimbusEvent__MINIGAME_AERIAL_REFUELING_HOLD_POSITION = 76,
	ENimbusEvent__MINIGAME_FAILURE_TIME_OVER = 77,
	ENimbusEvent__NUM_OF_EVENTS    = 78,
	ENimbusEvent__ENimbusEvent_MAX = 79
};


// Enum Nimbus.ESaveLoadDataScope
enum class ESaveLoadDataScope : uint8_t
{
	ESaveLoadDataScope__Sigma      = 0,
	ESaveLoadDataScope__Count      = 1,
	ESaveLoadDataScope__ESaveLoadDataScope_MAX = 2
};


// Enum Nimbus.ESaveGameDataStatus
enum class ESaveGameDataStatus : uint8_t
{
	ESaveGameDataStatus__Unknown   = 0,
	ESaveGameDataStatus__Exist     = 1,
	ESaveGameDataStatus__NotExist  = 2,
	ESaveGameDataStatus__InProcess = 3,
	ESaveGameDataStatus__InsufficientDiskSpace = 4,
	ESaveGameDataStatus__ConcurrentSaveLoad = 5,
	ESaveGameDataStatus__InvalidSaveGameInstance = 6,
	ESaveGameDataStatus__MismatchChecksum = 7,
	ESaveGameDataStatus__InvalidOnlineService = 8,
	ESaveGameDataStatus__FailedOnlineServiceRequest = 9,
	ESaveGameDataStatus__FailedDeletion = 10,
	ESaveGameDataStatus__FailedFileBufferCopy = 11,
	ESaveGameDataStatus__InvalidUser = 12,
	ESaveGameDataStatus__RequestTimeout = 13,
	ESaveGameDataStatus__VersionError = 14,
	ESaveGameDataStatus__CorruptedSaveData = 15,
	ESaveGameDataStatus__Num       = 16,
	ESaveGameDataStatus__ESaveGameDataStatus_MAX = 17
};


// Enum Nimbus.EPhysicalMaterialType
enum class EPhysicalMaterialType : uint8_t
{
	EPhysicalMaterialType__Default = 0,
	EPhysicalMaterialType__Sea     = 1,
	EPhysicalMaterialType__Ground  = 2,
	EPhysicalMaterialType__Concrete = 3,
	EPhysicalMaterialType__Glass   = 4,
	EPhysicalMaterialType__Ice     = 5,
	EPhysicalMaterialType__Boss    = 6,
	EPhysicalMaterialType__Metal   = 7,
	EPhysicalMaterialType__Air     = 8,
	EPhysicalMaterialType__DestroyedTarget = 9,
	EPhysicalMaterialType__Intercepted = 10,
	EPhysicalMaterialType__EPhysicalMaterialType_MAX = 11
};


// Enum Nimbus.EGameSaveSlot
enum class EGameSaveSlot : uint8_t
{
	EGameSaveSlot__GS_CAMPAIGN1    = 0,
	EGameSaveSlot__GS_CAMPAIGN2    = 1,
	EGameSaveSlot__GS_CAMPAIGN3    = 2,
	EGameSaveSlot__GS_MAX          = 3
};


// Enum Nimbus.EHangarPlaneLoadingStage
enum class EHangarPlaneLoadingStage : uint8_t
{
	EHangarPlaneLoadingStage__HP_STAGE_IDLE = 0,
	EHangarPlaneLoadingStage__HP_STAGE_LOAD = 1,
	EHangarPlaneLoadingStage__HP_STAGE_SPAWN = 2,
	EHangarPlaneLoadingStage__HP_STAGE_MAX = 3
};


// Enum Nimbus.ENimbusHUDMode
enum class ENimbusHUDMode : uint8_t
{
	ENimbusHUDMode__Default        = 0,
	ENimbusHUDMode__DefaultDisabled = 1,
	ENimbusHUDMode__EverythingDisabled = 2,
	ENimbusHUDMode__RestoreToDefault = 3,
	ENimbusHUDMode__MiniGame       = 4,
	ENimbusHUDMode__Pause          = 5,
	ENimbusHUDMode__Camera         = 6,
	ENimbusHUDMode__ENimbusHUDMode_MAX = 7
};


// Enum Nimbus.EMapChangeEventType
enum class EMapChangeEventType : uint8_t
{
	EMapChangeEventType__PreOpenTransitionMap = 0,
	EMapChangeEventType__PreOpenTravelMap = 1,
	EMapChangeEventType__EMapChangeEventType_MAX = 2
};


// Enum Nimbus.EHUDLoopingMachineVoiceType
enum class EHUDLoopingMachineVoiceType : uint8_t
{
	EHUDLoopingMachineVoiceType__CAUTION = 0,
	EHUDLoopingMachineVoiceType__ICING = 1,
	EHUDLoopingMachineVoiceType__PULL_UP = 2,
	EHUDLoopingMachineVoiceType__STALL = 3,
	EHUDLoopingMachineVoiceType__MISSILE_ALERT = 4,
	EHUDLoopingMachineVoiceType__COUNT = 5,
	EHUDLoopingMachineVoiceType__NONE = 6,
	EHUDLoopingMachineVoiceType__EHUDLoopingMachineVoiceType_MAX = 7
};


// Enum Nimbus.ERibbonCollectionType
enum class ERibbonCollectionType : uint8_t
{
	ERibbonCollectionType__ERC_AI_WING_TIP = 0,
	ERibbonCollectionType__ERC_MISSILE_TRAIL = 1,
	ERibbonCollectionType__ERC_DEBRIEFING_RIBBON = 2,
	ERibbonCollectionType__ERC_COUNT = 3,
	ERibbonCollectionType__ERC_MAX = 4
};


// Enum Nimbus.EMultiNonUISFX
enum class EMultiNonUISFX : uint8_t
{
	EMultiNonUISFX__MultiChatReceived = 0,
	EMultiNonUISFX__MultiRadarPing = 1,
	EMultiNonUISFX__MultiOvertake1st = 2,
	EMultiNonUISFX__EMultiNonUISFX_MAX = 3
};


// Enum Nimbus.ENimbusSoundOutputMode
enum class ENimbusSoundOutputMode : uint8_t
{
	ENimbusSoundOutputMode__NONE   = 0,
	ENimbusSoundOutputMode__Non_VR = 1,
	ENimbusSoundOutputMode__VR     = 2,
	ENimbusSoundOutputMode__VR_AIRSHOW = 3,
	ENimbusSoundOutputMode__Num    = 4,
	ENimbusSoundOutputMode__ENimbusSoundOutputMode_MAX = 5
};


// Enum Nimbus.ENimbusChunkTypes
enum class ENimbusChunkTypes : uint8_t
{
	ENimbusChunkTypes__INITIAL_CHUNK = 0,
	ENimbusChunkTypes__MISSON_04_06 = 1,
	ENimbusChunkTypes__MISSON_07   = 2,
	ENimbusChunkTypes__MISSON_11   = 3,
	ENimbusChunkTypes__MISSON_15   = 4,
	ENimbusChunkTypes__MISSON_MULTI_VR = 5,
	ENimbusChunkTypes__NIMBUS_CHUNK_NUM = 6,
	ENimbusChunkTypes__ENimbusChunkTypes_MAX = 7
};


// Enum Nimbus.ENimbusDownloadTypes
enum class ENimbusDownloadTypes : uint8_t
{
	ENimbusDownloadTypes__INITIAL_CHUNK = 0,
	ENimbusDownloadTypes__ALL_OF_CHUNKS = 1,
	ENimbusDownloadTypes__ENimbusDownloadTypes_MAX = 2
};


// Enum Nimbus.ESoundType
enum class ESoundType : uint8_t
{
	ESoundType__Bgm                = 0,
	ESoundType__Se                 = 1,
	ESoundType__Voice              = 2,
	ESoundType__ESoundType_MAX     = 3
};


// Enum Nimbus.EOptionsVoiceChat
enum class EOptionsVoiceChat : uint8_t
{
	EOptionsVoiceChat__On          = 0,
	EOptionsVoiceChat__Off         = 1,
	EOptionsVoiceChat__EOptionsVoiceChat_MAX = 2
};


// Enum Nimbus.EOptionsDistance
enum class EOptionsDistance : uint8_t
{
	EOptionsDistance__Narrow       = 0,
	EOptionsDistance__Normal       = 1,
	EOptionsDistance__Wide         = 2,
	EOptionsDistance__EOptionsDistance_MAX = 3
};


// Enum Nimbus.EOptionsQuarity
enum class EOptionsQuarity : uint8_t
{
	EOptionsQuarity__Low           = 0,
	EOptionsQuarity__Middle        = 1,
	EOptionsQuarity__High          = 2,
	EOptionsQuarity__EOptionsQuarity_MAX = 3
};


// Enum Nimbus.EOptionsAntialias
enum class EOptionsAntialias : uint8_t
{
	EOptionsAntialias__None        = 0,
	EOptionsAntialias__FXAAx2      = 1,
	EOptionsAntialias__FXAAx4      = 2,
	EOptionsAntialias__EOptionsAntialias_MAX = 3
};


// Enum Nimbus.EOptionsAnisotropicFilter
enum class EOptionsAnisotropicFilter : uint8_t
{
	EOptionsAnisotropicFilter__None = 0,
	EOptionsAnisotropicFilter__X2  = 1,
	EOptionsAnisotropicFilter__X4  = 2,
	EOptionsAnisotropicFilter__X8  = 3,
	EOptionsAnisotropicFilter__X16 = 4,
	EOptionsAnisotropicFilter__EOptionsAnisotropicFilter_MAX = 5
};


// Enum Nimbus.EEmblemCategory
enum class EEmblemCategory : uint8_t
{
	EEmblemCategory__Normal        = 0,
	EEmblemCategory__Design        = 1,
	EEmblemCategory__Collaboration = 2,
	EEmblemCategory__Count         = 3,
	EEmblemCategory__EEmblemCategory_MAX = 4
};


// Enum Nimbus.EOptionsDrawPreset
enum class EOptionsDrawPreset : uint8_t
{
	EOptionsDrawPreset__Low        = 0,
	EOptionsDrawPreset__Middle     = 1,
	EOptionsDrawPreset__High       = 2,
	EOptionsDrawPreset__Custom     = 3,
	EOptionsDrawPreset__EOptionsDrawPreset_MAX = 4
};


// Enum Nimbus.EOptionsDrawScale
enum class EOptionsDrawScale : uint8_t
{
	EOptionsDrawScale__S50         = 0,
	EOptionsDrawScale__S60         = 1,
	EOptionsDrawScale__S70         = 2,
	EOptionsDrawScale__S80         = 3,
	EOptionsDrawScale__S90         = 4,
	EOptionsDrawScale__S100        = 5,
	EOptionsDrawScale__S110        = 6,
	EOptionsDrawScale__S120        = 7,
	EOptionsDrawScale__S130        = 8,
	EOptionsDrawScale__S140        = 9,
	EOptionsDrawScale__S150        = 10,
	EOptionsDrawScale__S160        = 11,
	EOptionsDrawScale__S170        = 12,
	EOptionsDrawScale__S180        = 13,
	EOptionsDrawScale__S190        = 14,
	EOptionsDrawScale__S200        = 15,
	EOptionsDrawScale__EOptionsDrawScale_MAX = 16
};


// Enum Nimbus.EOptionsScreenSetting
enum class EOptionsScreenSetting : uint8_t
{
	EOptionsScreenSetting__Borderless = 0,
	EOptionsScreenSetting__Fullscreen = 1,
	EOptionsScreenSetting__Window  = 2,
	EOptionsScreenSetting__EOptionsScreenSetting_MAX = 3
};


// Enum Nimbus.EOptionsWindowMode
enum class EOptionsWindowMode : uint8_t
{
	EOptionsWindowMode__Fullscreen = 0,
	EOptionsWindowMode__WindowedFullscreen = 1,
	EOptionsWindowMode__Windowed   = 2,
	EOptionsWindowMode__EOptionsWindowMode_MAX = 3
};


// Enum Nimbus.EOptionsKeyAssign
enum class EOptionsKeyAssign : uint8_t
{
	EOptionsKeyAssign__PitchDown   = 0,
	EOptionsKeyAssign__PitchUp     = 1,
	EOptionsKeyAssign__RollLeft    = 2,
	EOptionsKeyAssign__RollRight   = 3,
	EOptionsKeyAssign__YawLeft     = 4,
	EOptionsKeyAssign__YawRight    = 5,
	EOptionsKeyAssign__ThrottleUp  = 6,
	EOptionsKeyAssign__ThrottleDown = 7,
	EOptionsKeyAssign__FireMachineGun = 8,
	EOptionsKeyAssign__FireMissile = 9,
	EOptionsKeyAssign__ChangeWeapon = 10,
	EOptionsKeyAssign__CameraCtrl  = 11,
	EOptionsKeyAssign__CameraUp    = 12,
	EOptionsKeyAssign__CameraDown  = 13,
	EOptionsKeyAssign__CameraLeft  = 14,
	EOptionsKeyAssign__CameraRight = 15,
	EOptionsKeyAssign__AutoPilot   = 16,
	EOptionsKeyAssign__ThrottleUpDown = 17,
	EOptionsKeyAssign__ChangeView  = 18,
	EOptionsKeyAssign__Flares      = 19,
	EOptionsKeyAssign__TrackTarget = 20,
	EOptionsKeyAssign__ToggleRadarMapDisplay = 21,
	EOptionsKeyAssign__SwitchTarget = 22,
	EOptionsKeyAssign__ChatMenu    = 23,
	EOptionsKeyAssign__ChatMenuUp  = 24,
	EOptionsKeyAssign__ChatMenuDown = 25,
	EOptionsKeyAssign__ChatMenuOff = 26,
	EOptionsKeyAssign__NUM         = 27,
	EOptionsKeyAssign__EOptionsKeyAssign_MAX = 28
};


// Enum Nimbus.EOptionsKeys
enum class EOptionsKeys : uint8_t
{
	EOptionsKeys__None             = 0,
	EOptionsKeys__MouseAxisStickX  = 1,
	EOptionsKeys__MouseAxisStickY  = 2,
	EOptionsKeys__MouseScrollUp    = 3,
	EOptionsKeys__MouseScrollDown  = 4,
	EOptionsKeys__MouseWheelAxis   = 5,
	EOptionsKeys__LeftMouseButton  = 6,
	EOptionsKeys__RightMouseButton = 7,
	EOptionsKeys__MiddleMouseButton = 8,
	EOptionsKeys__ThumbMouseButton = 9,
	EOptionsKeys__ThumbMouseButton2 = 10,
	EOptionsKeys__BackSpace        = 11,
	EOptionsKeys__Tab              = 12,
	EOptionsKeys__Enter            = 13,
	EOptionsKeys__Pause            = 14,
	EOptionsKeys__CapsLock         = 15,
	EOptionsKeys__Escape           = 16,
	EOptionsKeys__SpaceBar         = 17,
	EOptionsKeys__PageUp           = 18,
	EOptionsKeys__PageDown         = 19,
	EOptionsKeys__End              = 20,
	EOptionsKeys__Home             = 21,
	EOptionsKeys__Left             = 22,
	EOptionsKeys__Up               = 23,
	EOptionsKeys__Right            = 24,
	EOptionsKeys__Down             = 25,
	EOptionsKeys__Insert           = 26,
	EOptionsKeys__Delete           = 27,
	EOptionsKeys__Zero             = 28,
	EOptionsKeys__One              = 29,
	EOptionsKeys__Two              = 30,
	EOptionsKeys__Three            = 31,
	EOptionsKeys__Four             = 32,
	EOptionsKeys__Five             = 33,
	EOptionsKeys__Six              = 34,
	EOptionsKeys__Seven            = 35,
	EOptionsKeys__Eight            = 36,
	EOptionsKeys__Nine             = 37,
	EOptionsKeys__A                = 38,
	EOptionsKeys__B                = 39,
	EOptionsKeys__C                = 40,
	EOptionsKeys__D                = 41,
	EOptionsKeys__E                = 42,
	EOptionsKeys__F                = 43,
	EOptionsKeys__G                = 44,
	EOptionsKeys__H                = 45,
	EOptionsKeys__I                = 46,
	EOptionsKeys__J                = 47,
	EOptionsKeys__K                = 48,
	EOptionsKeys__L                = 49,
	EOptionsKeys__M                = 50,
	EOptionsKeys__N                = 51,
	EOptionsKeys__O                = 52,
	EOptionsKeys__P                = 53,
	EOptionsKeys__Q                = 54,
	EOptionsKeys__R                = 55,
	EOptionsKeys__S                = 56,
	EOptionsKeys__T                = 57,
	EOptionsKeys__U                = 58,
	EOptionsKeys__V                = 59,
	EOptionsKeys__W                = 60,
	EOptionsKeys__X                = 61,
	EOptionsKeys__Y                = 62,
	EOptionsKeys__Z                = 63,
	EOptionsKeys__NumPadZero       = 64,
	EOptionsKeys__NumPadOne        = 65,
	EOptionsKeys__NumPadTwo        = 66,
	EOptionsKeys__NumPadThree      = 67,
	EOptionsKeys__NumPadFour       = 68,
	EOptionsKeys__NumPadFive       = 69,
	EOptionsKeys__NumPadSix        = 70,
	EOptionsKeys__NumPadSeven      = 71,
	EOptionsKeys__NumPadEight      = 72,
	EOptionsKeys__NumPadNine       = 73,
	EOptionsKeys__Multiply         = 74,
	EOptionsKeys__Add              = 75,
	EOptionsKeys__Subtract         = 76,
	EOptionsKeys__Decimal          = 77,
	EOptionsKeys__Divide           = 78,
	EOptionsKeys__F1               = 79,
	EOptionsKeys__F2               = 80,
	EOptionsKeys__F3               = 81,
	EOptionsKeys__F4               = 82,
	EOptionsKeys__F5               = 83,
	EOptionsKeys__F6               = 84,
	EOptionsKeys__F7               = 85,
	EOptionsKeys__F8               = 86,
	EOptionsKeys__F9               = 87,
	EOptionsKeys__F10              = 88,
	EOptionsKeys__F11              = 89,
	EOptionsKeys__F12              = 90,
	EOptionsKeys__NumLock          = 91,
	EOptionsKeys__ScrollLock       = 92,
	EOptionsKeys__LeftShift        = 93,
	EOptionsKeys__RightShift       = 94,
	EOptionsKeys__LeftControl      = 95,
	EOptionsKeys__RightControl     = 96,
	EOptionsKeys__LeftAlt          = 97,
	EOptionsKeys__RightAlt         = 98,
	EOptionsKeys__LeftCommand      = 99,
	EOptionsKeys__RightCommand     = 100,
	EOptionsKeys__Semicolon        = 101,
	EOptionsKeys__Equals           = 102,
	EOptionsKeys__Comma            = 103,
	EOptionsKeys__Underscore       = 104,
	EOptionsKeys__Hyphen           = 105,
	EOptionsKeys__Period           = 106,
	EOptionsKeys__Slash            = 107,
	EOptionsKeys__Tilde            = 108,
	EOptionsKeys__LeftBracket      = 109,
	EOptionsKeys__Backslash        = 110,
	EOptionsKeys__RightBracket     = 111,
	EOptionsKeys__Apostrophe       = 112,
	EOptionsKeys__Ampersand        = 113,
	EOptionsKeys__Asterix          = 114,
	EOptionsKeys__Caret            = 115,
	EOptionsKeys__Colon            = 116,
	EOptionsKeys__Dollar           = 117,
	EOptionsKeys__Exclamation      = 118,
	EOptionsKeys__LeftParantheses  = 119,
	EOptionsKeys__RightParantheses = 120,
	EOptionsKeys__Quote            = 121,
	EOptionsKeys__A_AccentGrave    = 122,
	EOptionsKeys__E_AccentGrave    = 123,
	EOptionsKeys__E_AccentAigu     = 124,
	EOptionsKeys__C_Cedille        = 125,
	EOptionsKeys__Section          = 126,
	EOptionsKeys__Atmark           = 127,
	EOptionsKeys__Scan0056         = 128,
	EOptionsKeys__Yen              = 129,
	EOptionsKeys__MouseAxisLookAtX = 130,
	EOptionsKeys__MouseAxisLookAtY = 131,
	EOptionsKeys__Scan0029         = 132,
	EOptionsKeys__Num              = 133,
	EOptionsKeys__EOptionsKeys_MAX = 134
};


// Enum Nimbus.EOptionsHighGTurnTypes
enum class EOptionsHighGTurnTypes : uint8_t
{
	EOptionsHighGTurnTypes__TypeA  = 0,
	EOptionsHighGTurnTypes__TypeB  = 1,
	EOptionsHighGTurnTypes__EOptionsHighGTurnTypes_MAX = 2
};


// Enum Nimbus.EOptionsControlTypes
enum class EOptionsControlTypes : uint8_t
{
	EOptionsControlTypes__Standard = 0,
	EOptionsControlTypes__Expert   = 1,
	EOptionsControlTypes__EOptionsControlTypes_MAX = 2
};


// Enum Nimbus.EPartsAnimationConfig_OptionsLipRot
enum class EPartsAnimationConfig_OptionsLipRot : uint8_t
{
	EPartsAnimationConfig_OptionsLipRot__ANIM_ETC_NONE = 0,
	EPartsAnimationConfig_OptionsLipRot__ANIM_ETC_LIP = 1,
	EPartsAnimationConfig_OptionsLipRot__ANIM_ETC_ROT = 2,
	EPartsAnimationConfig_OptionsLipRot__ANIM_ETC_MAX = 3
};


// Enum Nimbus.EPartsAnimationConfig_OptionsAlr
enum class EPartsAnimationConfig_OptionsAlr : uint8_t
{
	EPartsAnimationConfig_OptionsAlr__ANIM_ALR_NONE = 0,
	EPartsAnimationConfig_OptionsAlr__ANIM_ALR_TEF = 1,
	EPartsAnimationConfig_OptionsAlr__ANIM_ALR_ELV = 2,
	EPartsAnimationConfig_OptionsAlr__ANIM_ALRF_ABK = 3,
	EPartsAnimationConfig_OptionsAlr__ANIM_ALRE_ABK = 4,
	EPartsAnimationConfig_OptionsAlr__ANIM_MAX = 5
};


// Enum Nimbus.EPartsAnimationConfig_OptionsRud
enum class EPartsAnimationConfig_OptionsRud : uint8_t
{
	EPartsAnimationConfig_OptionsRud__ANIM_RUD_NONE = 0,
	EPartsAnimationConfig_OptionsRud__ANIM_RUD_ELV = 1,
	EPartsAnimationConfig_OptionsRud__ANIM_RUD_ABK = 2,
	EPartsAnimationConfig_OptionsRud__ANIM_RUD_ABKREV = 3,
	EPartsAnimationConfig_OptionsRud__ANIM_RUD_MAX = 4
};


// Enum Nimbus.EOptionsFrameRate
enum class EOptionsFrameRate : uint8_t
{
	EOptionsFrameRate__Off         = 0,
	EOptionsFrameRate__f288        = 1,
	EOptionsFrameRate__f240        = 2,
	EOptionsFrameRate__f144        = 3,
	EOptionsFrameRate__f120        = 4,
	EOptionsFrameRate__f90         = 5,
	EOptionsFrameRate__f75         = 6,
	EOptionsFrameRate__f60         = 7,
	EOptionsFrameRate__EOptionsFrameRate_MAX = 8
};


// Enum Nimbus.EPartsEnableGameMode
enum class EPartsEnableGameMode : uint8_t
{
	EPartsEnableGameMode__AllGameModeEnable = 0,
	EPartsEnableGameMode__OnlyMultiPlayEnable = 1,
	EPartsEnableGameMode__OnlyCampaignModeEnable = 2,
	EPartsEnableGameMode__EPartsEnableGameMode_MAX = 3
};


// Enum Nimbus.EPartsAnimationConfig_OptionsElv
enum class EPartsAnimationConfig_OptionsElv : uint8_t
{
	EPartsAnimationConfig_OptionsElv__ANIM_ELV_NONE = 0,
	EPartsAnimationConfig_OptionsElv__ANIM_ELV_ALR = 1,
	EPartsAnimationConfig_OptionsElv__ANIM_ELV_RUD = 2,
	EPartsAnimationConfig_OptionsElv__ANIM_ELV_ALRRUD = 3,
	EPartsAnimationConfig_OptionsElv__ANIM_ELV_ABK = 4,
	EPartsAnimationConfig_OptionsElv__ANIM_ELV_MAX = 5
};


// Enum Nimbus.EControllerVibrationType
enum class EControllerVibrationType : uint8_t
{
	EControllerVibrationType__Afterburner = 0,
	EControllerVibrationType__AirBrake = 1,
	EControllerVibrationType__Buffet = 2,
	EControllerVibrationType__Stall = 3,
	EControllerVibrationType__HighGTurn = 4,
	EControllerVibrationType__GunFire = 5,
	EControllerVibrationType__MissileSmallFire = 6,
	EControllerVibrationType__MissileLargeFire = 7,
	EControllerVibrationType__BombFire = 8,
	EControllerVibrationType__RocketFire = 9,
	EControllerVibrationType__RailgunFire = 10,
	EControllerVibrationType__LaserFire = 11,
	EControllerVibrationType__FlareFire = 12,
	EControllerVibrationType__TakeOffBase = 13,
	EControllerVibrationType__TakeOffCarrier = 14,
	EControllerVibrationType__LandingBase = 15,
	EControllerVibrationType__LandingCarrier = 16,
	EControllerVibrationType__AerialRefuel = 17,
	EControllerVibrationType__GunDamage = 18,
	EControllerVibrationType__MissileDamage = 19,
	EControllerVibrationType__PlaneCrashed = 20,
	EControllerVibrationType__OwnPlaneDestroyed = 21,
	EControllerVibrationType__CameraPlaneExplosion = 22,
	EControllerVibrationType__EnteredClouds = 23,
	EControllerVibrationType__InCloudsA = 24,
	EControllerVibrationType__InCloudsB = 25,
	EControllerVibrationType__Icing = 26,
	EControllerVibrationType__AirCurrent = 27,
	EControllerVibrationType__IGCTakeOff = 28,
	EControllerVibrationType__IGCEquipped = 29,
	EControllerVibrationType__ExitCloudCameraShake = 30,
	EControllerVibrationType__BombImpact = 31,
	EControllerVibrationType__SmallBombImpact = 32,
	EControllerVibrationType__Explosion = 33,
	EControllerVibrationType__GeneralPurposeS = 34,
	EControllerVibrationType__GeneralPurposeM = 35,
	EControllerVibrationType__GeneralPurposeL = 36,
	EControllerVibrationType__HeliosDamage = 37,
	EControllerVibrationType__EnemyExplosion = 38,
	EControllerVibrationType__InAirCurrentCameraShake = 39,
	EControllerVibrationType__Lightning = 40,
	EControllerVibrationType__EMLBulletDamage = 41,
	EControllerVibrationType__RectennaBarrierDamage = 42,
	EControllerVibrationType__HeliosBombImpact = 43,
	EControllerVibrationType__HeliosBombImpactLoop = 44,
	EControllerVibrationType__SubmarineSearch = 45,
	EControllerVibrationType__None = 46,
	EControllerVibrationType__EControllerVibrationType_MAX = 47
};


// Enum Nimbus.EPartsParameterList
enum class EPartsParameterList : uint8_t
{
	EPartsParameterList__None      = 0,
	EPartsParameterList__PA_AccelRate = 1,
	EPartsParameterList__PA_DecelRate = 2,
	EPartsParameterList__PA_SpeedBreak = 3,
	EPartsParameterList__PA_SpeedMax = 4,
	EPartsParameterList__PA_SpeedBuffet = 5,
	EPartsParameterList__PA_SpeedStall = 6,
	EPartsParameterList__PA_SpeedMin = 7,
	EPartsParameterList__PA_RotAccelX = 8,
	EPartsParameterList__PA_RotAccelY = 9,
	EPartsParameterList__PA_RotAccelZ = 10,
	EPartsParameterList__PA_RotDecelX = 11,
	EPartsParameterList__PA_RotDecelY = 12,
	EPartsParameterList__PA_RotDecelZ = 13,
	EPartsParameterList__PA_RotSpeedX = 14,
	EPartsParameterList__PA_RotSpeedY = 15,
	EPartsParameterList__PA_RotSpeedZ = 16,
	EPartsParameterList__PA_HighGPerformance = 17,
	EPartsParameterList__PA_HighGSpeedStartDec = 18,
	EPartsParameterList__PA_HighGSpeedDecR = 19,
	EPartsParameterList__PA_HighGSpeedDecMax = 20,
	EPartsParameterList__PA_CanopyIceAppearDuration = 21,
	EPartsParameterList__PA_IceTriggerCloudDensity = 22,
	EPartsParameterList__PA_LockonReductionInCloud = 23,
	EPartsParameterList__PA_LockonRangeReductionInCloud = 24,
	EPartsParameterList__PA_SeekingAbilityOfEnemyMissile = 25,
	EPartsParameterList__PA_EffectivenessOfDamage = 26,
	EPartsParameterList__PA_EffectivenessOfEnviromentDamage = 27,
	EPartsParameterList__PA_HealthRecoveryStartDelayedTime = 28,
	EPartsParameterList__PA_HealthRecoveryTime = 29,
	EPartsParameterList__PA_HealthRecoveryPerSecond = 30,
	EPartsParameterList__PA_HealthRecoveryRate = 31,
	EPartsParameterList__PA_MaxHealth = 32,
	EPartsParameterList__PA_StealthLevel = 33,
	EPartsParameterList__PA_AntiStealthLevel = 34,
	EPartsParameterList__GunPower  = 35,
	EPartsParameterList__GunSpeedInit = 36,
	EPartsParameterList__GunEndTime = 37,
	EPartsParameterList__GunEffectiveTime = 38,
	EPartsParameterList__GunAuto   = 39,
	EPartsParameterList__GunTrackingSpeed = 40,
	EPartsParameterList__GunTrackingBackSpeed = 41,
	EPartsParameterList__GunTrackingMaxAngle = 42,
	EPartsParameterList__GunMaxSpawnAngle = 43,
	EPartsParameterList__MslPower  = 44,
	EPartsParameterList__MslSpeedInit = 45,
	EPartsParameterList__MslSpeedMax = 46,
	EPartsParameterList__MslAccel  = 47,
	EPartsParameterList__MslHomingAng = 48,
	EPartsParameterList__MslRotAngMax = 49,
	EPartsParameterList__MslHomingPredictionRate = 50,
	EPartsParameterList__MslHomingPredictionRange = 51,
	EPartsParameterList__MslReload = 52,
	EPartsParameterList__MslPayload = 53,
	EPartsParameterList__MslEndTime = 54,
	EPartsParameterList__MslLockonRange = 55,
	EPartsParameterList__MslSeekSpeedInit = 56,
	EPartsParameterList__MslSeekSpeedAccel = 57,
	EPartsParameterList__MslSeekSpeedMax = 58,
	EPartsParameterList__SpMslAirPower = 59,
	EPartsParameterList__SpMslAirSpeedInit = 60,
	EPartsParameterList__SpMslAirSpeedMax = 61,
	EPartsParameterList__SpMslAirAccel = 62,
	EPartsParameterList__SpMslAirHomingAng = 63,
	EPartsParameterList__SpMslAirRotAngMax = 64,
	EPartsParameterList__SpMslAirHomingPredictionRate = 65,
	EPartsParameterList__SpMslAirHomingPredictionRange = 66,
	EPartsParameterList__SpMslAirReload = 67,
	EPartsParameterList__SpMslAirPayload = 68,
	EPartsParameterList__SpMslAirEndTime = 69,
	EPartsParameterList__SpMslAirLockonRange = 70,
	EPartsParameterList__SpMslGrdPower = 71,
	EPartsParameterList__SpMslGrdSpeedInit = 72,
	EPartsParameterList__SpMslGrdSpeedMax = 73,
	EPartsParameterList__SpMslGrdAccel = 74,
	EPartsParameterList__SpMslGrdHomingAng = 75,
	EPartsParameterList__SpMslGrdRotAngMax = 76,
	EPartsParameterList__SpMslGrdHomingPredictionRate = 77,
	EPartsParameterList__SpMslGrdHomingPredictionRange = 78,
	EPartsParameterList__SpMslGrdReload = 79,
	EPartsParameterList__SpMslGrdPayload = 80,
	EPartsParameterList__SpMslGrdEndTime = 81,
	EPartsParameterList__SpMslGrdLockonRange = 82,
	EPartsParameterList__SpMslAirSeekSpeedInit = 83,
	EPartsParameterList__SpMslAirSeekSpeedAccel = 84,
	EPartsParameterList__SpMslAirSeekSpeedMax = 85,
	EPartsParameterList__SpMslGrdSeekSpeedInit = 86,
	EPartsParameterList__SpMslGrdSeekSpeedAccel = 87,
	EPartsParameterList__SpMslGrdSeekSpeedMax = 88,
	EPartsParameterList__MGPPower  = 89,
	EPartsParameterList__MGPSpeedInit = 90,
	EPartsParameterList__MGPEndTime = 91,
	EPartsParameterList__MGPEffectiveTime = 92,
	EPartsParameterList__BombPower = 93,
	EPartsParameterList__BombReload = 94,
	EPartsParameterList__BombPayload = 95,
	EPartsParameterList__BombImpactRadius = 96,
	EPartsParameterList__BombExplosionRadius = 97,
	EPartsParameterList__BombLockonRange = 98,
	EPartsParameterList__BombSeekSpeedInit = 99,
	EPartsParameterList__BombSeekSpeedAccel = 100,
	EPartsParameterList__BombSeekSpeedMax = 101,
	EPartsParameterList__RktPower  = 102,
	EPartsParameterList__RktSpeedInit = 103,
	EPartsParameterList__RktSpeedMax = 104,
	EPartsParameterList__RktAccel  = 105,
	EPartsParameterList__RktHomingAng = 106,
	EPartsParameterList__RktRotAngMax = 107,
	EPartsParameterList__RktHomingPredictionRate = 108,
	EPartsParameterList__RktHomingPredictionRange = 109,
	EPartsParameterList__RktEndTime = 110,
	EPartsParameterList__EMLPower  = 111,
	EPartsParameterList__EMLEndTime = 112,
	EPartsParameterList__EMLSpeedInit = 113,
	EPartsParameterList__EMLEffectiveTime = 114,
	EPartsParameterList__EMLRayCastRadius = 115,
	EPartsParameterList__LaserPower = 116,
	EPartsParameterList__LaserEndTime = 117,
	EPartsParameterList__LaserEffectiveTime = 118,
	EPartsParameterList__LaserDamageRadius = 119,
	EPartsParameterList__PGunPower = 120,
	EPartsParameterList__PGunEndTime = 121,
	EPartsParameterList__PGunEffectiveTime = 122,
	EPartsParameterList__PGunDamageRadius = 123,
	EPartsParameterList__UAVPayload = 124,
	EPartsParameterList__UAVEndTime = 125,
	EPartsParameterList__UAVPlslPower = 126,
	EPartsParameterList__UAVPlslEndTime = 127,
	EPartsParameterList__UAVPlslEffectiveTime = 128,
	EPartsParameterList__MP_ReducesRespawn = 129,
	EPartsParameterList__MP_FighterPointUp = 130,
	EPartsParameterList__MP_MultirolePointUp = 131,
	EPartsParameterList__MP_AttackerPointUp = 132,
	EPartsParameterList__MP_AllTypePointUp = 133,
	EPartsParameterList__MP_MachinegunPointUp = 134,
	EPartsParameterList__MP_MissilePointUp = 135,
	EPartsParameterList__MP_SpecialWeaponPointUp = 136,
	EPartsParameterList__MPBMPower = 137,
	EPartsParameterList__MPBMSpeedInit = 138,
	EPartsParameterList__MPBMSpeedMax = 139,
	EPartsParameterList__MPBMAccel = 140,
	EPartsParameterList__MPBMHomingAng = 141,
	EPartsParameterList__MPBMRotAngMax = 142,
	EPartsParameterList__MPBMHomingPredictionRate = 143,
	EPartsParameterList__MPBMHomingPredictionRange = 144,
	EPartsParameterList__MPBMReload = 145,
	EPartsParameterList__MPBMPayload = 146,
	EPartsParameterList__MPBMEndTime = 147,
	EPartsParameterList__MPBMLockonRange = 148,
	EPartsParameterList__MPBMSeekSpeedInit = 149,
	EPartsParameterList__MPBMSeekSpeedAccel = 150,
	EPartsParameterList__MPBMSeekSpeedMax = 151,
	EPartsParameterList__PPL_Max   = 152,
	EPartsParameterList__EPartsParameterList_MAX = 153
};


// Enum Nimbus.EPartsSize
enum class EPartsSize : uint8_t
{
	EPartsSize__PS_None            = 0,
	EPartsSize__PS_S               = 1,
	EPartsSize__PS_M               = 2,
	EPartsSize__PS_L               = 3,
	EPartsSize__PS_MAX             = 4
};


// Enum Nimbus.EPartsIconCategory
enum class EPartsIconCategory : uint8_t
{
	EPartsIconCategory__PIC_None   = 0,
	EPartsIconCategory__PIC_01     = 1,
	EPartsIconCategory__PIC_02     = 2,
	EPartsIconCategory__PIC_03     = 3,
	EPartsIconCategory__PIC_04     = 4,
	EPartsIconCategory__PIC_05     = 5,
	EPartsIconCategory__PIC_06     = 6,
	EPartsIconCategory__PIC_07     = 7,
	EPartsIconCategory__PIC_08     = 8,
	EPartsIconCategory__PIC_09     = 9,
	EPartsIconCategory__PIC        = 10,
	EPartsIconCategory__PIC01      = 11,
	EPartsIconCategory__PIC02      = 12,
	EPartsIconCategory__PIC03      = 13,
	EPartsIconCategory__PIC04      = 14,
	EPartsIconCategory__PIC05      = 15,
	EPartsIconCategory__PIC06      = 16,
	EPartsIconCategory__PIC07      = 17,
	EPartsIconCategory__PIC08      = 18,
	EPartsIconCategory__PIC09      = 19,
	EPartsIconCategory__PIC10      = 20,
	EPartsIconCategory__PIC11      = 21,
	EPartsIconCategory__PIC12      = 22,
	EPartsIconCategory__PIC_MAX    = 23
};


// Enum Nimbus.EPartsGroup
enum class EPartsGroup : uint8_t
{
	EPartsGroup__PartsGroupNone    = 0,
	EPartsGroup__PartsGroup001     = 1,
	EPartsGroup__PartsGroup002     = 2,
	EPartsGroup__PartsGroup003     = 3,
	EPartsGroup__PartsGroup004     = 4,
	EPartsGroup__PartsGroup005     = 5,
	EPartsGroup__PartsGroup006     = 6,
	EPartsGroup__PartsGroup007     = 7,
	EPartsGroup__PartsGroup008     = 8,
	EPartsGroup__PartsGroup009     = 9,
	EPartsGroup__PartsGroup010     = 10,
	EPartsGroup__PartsGroup011     = 11,
	EPartsGroup__PartsGroup012     = 12,
	EPartsGroup__PartsGroup013     = 13,
	EPartsGroup__PartsGroup014     = 14,
	EPartsGroup__PartsGroup015     = 15,
	EPartsGroup__PartsGroup016     = 16,
	EPartsGroup__PartsGroup017     = 17,
	EPartsGroup__PartsGroup018     = 18,
	EPartsGroup__PartsGroup019     = 19,
	EPartsGroup__PartsGroup020     = 20,
	EPartsGroup__PartsGroup021     = 21,
	EPartsGroup__PartsGroup022     = 22,
	EPartsGroup__PartsGroup023     = 23,
	EPartsGroup__PartsGroup024     = 24,
	EPartsGroup__PartsGroup025     = 25,
	EPartsGroup__PartsGroup026     = 26,
	EPartsGroup__PartsGroup027     = 27,
	EPartsGroup__PartsGroup028     = 28,
	EPartsGroup__PartsGroup029     = 29,
	EPartsGroup__PartsGroup030     = 30,
	EPartsGroup__PartsGroup031     = 31,
	EPartsGroup__PartsGroup032     = 32,
	EPartsGroup__PartsGroup033     = 33,
	EPartsGroup__PartsGroup034     = 34,
	EPartsGroup__PartsGroup035     = 35,
	EPartsGroup__PartsGroup036     = 36,
	EPartsGroup__PartsGroup037     = 37,
	EPartsGroup__PartsGroup038     = 38,
	EPartsGroup__PartsGroup039     = 39,
	EPartsGroup__PartsGroup040     = 40,
	EPartsGroup__PartsGroup041     = 41,
	EPartsGroup__PartsGroup042     = 42,
	EPartsGroup__PartsGroup043     = 43,
	EPartsGroup__PartsGroup044     = 44,
	EPartsGroup__PartsGroup045     = 45,
	EPartsGroup__PartsGroup046     = 46,
	EPartsGroup__PartsGroup047     = 47,
	EPartsGroup__PartsGroup048     = 48,
	EPartsGroup__PartsGroup049     = 49,
	EPartsGroup__PartsGroup050     = 50,
	EPartsGroup__PartsGroup051     = 51,
	EPartsGroup__PartsGroup052     = 52,
	EPartsGroup__PartsGroup053     = 53,
	EPartsGroup__PartsGroup054     = 54,
	EPartsGroup__PartsGroup055     = 55,
	EPartsGroup__PartsGroup056     = 56,
	EPartsGroup__PartsGroup057     = 57,
	EPartsGroup__PartsGroup058     = 58,
	EPartsGroup__PartsGroup059     = 59,
	EPartsGroup__PartsGroup060     = 60,
	EPartsGroup__PartsGroup061     = 61,
	EPartsGroup__PartsGroup062     = 62,
	EPartsGroup__PartsGroup063     = 63,
	EPartsGroup__PartsGroup064     = 64,
	EPartsGroup__PartsGroup065     = 65,
	EPartsGroup__PartsGroup066     = 66,
	EPartsGroup__PartsGroup067     = 67,
	EPartsGroup__PartsGroup068     = 68,
	EPartsGroup__PartsGroup069     = 69,
	EPartsGroup__PartsGroup070     = 70,
	EPartsGroup__PartsGroup071     = 71,
	EPartsGroup__PartsGroup072     = 72,
	EPartsGroup__PartsGroup073     = 73,
	EPartsGroup__PartsGroup074     = 74,
	EPartsGroup__PartsGroup075     = 75,
	EPartsGroup__PartsGroup076     = 76,
	EPartsGroup__PartsGroup077     = 77,
	EPartsGroup__PartsGroup078     = 78,
	EPartsGroup__PartsGroup079     = 79,
	EPartsGroup__PartsGroup080     = 80,
	EPartsGroup__PartsGroup081     = 81,
	EPartsGroup__PartsGroup082     = 82,
	EPartsGroup__PartsGroup083     = 83,
	EPartsGroup__PartsGroup084     = 84,
	EPartsGroup__PartsGroup085     = 85,
	EPartsGroup__PartsGroup086     = 86,
	EPartsGroup__PartsGroup087     = 87,
	EPartsGroup__PartsGroup088     = 88,
	EPartsGroup__PartsGroup089     = 89,
	EPartsGroup__PartsGroup090     = 90,
	EPartsGroup__PartsGroup091     = 91,
	EPartsGroup__PartsGroup092     = 92,
	EPartsGroup__PartsGroup093     = 93,
	EPartsGroup__PartsGroup094     = 94,
	EPartsGroup__PartsGroup095     = 95,
	EPartsGroup__PartsGroup096     = 96,
	EPartsGroup__PartsGroup097     = 97,
	EPartsGroup__PartsGroup098     = 98,
	EPartsGroup__PartsGroup099     = 99,
	EPartsGroup__PartsGroup100     = 100,
	EPartsGroup__EPartsGroup_MAX   = 101
};


// Enum Nimbus.EUpgradePartsID
enum class EUpgradePartsID : uint8_t
{
	EUpgradePartsID__PID_None      = 0,
	EUpgradePartsID__PID_LightBlisk_S = 1,
	EUpgradePartsID__PID_LightBlisk_L = 2,
	EUpgradePartsID__PID_CuttingEdgeAirbrakes_S = 3,
	EUpgradePartsID__PID_CuttingEdgeAirbrakes_L = 4,
	EUpgradePartsID__PID_NextGenHighPressureComponents_S = 5,
	EUpgradePartsID__PID_NextGenHighPressureComponents_L = 6,
	EUpgradePartsID__PID_VariableCycleEngine_S = 7,
	EUpgradePartsID__PID_VariableCycleEngine_L = 8,
	EUpgradePartsID__PID_ECUSoftwareUpdate_S = 9,
	EUpgradePartsID__PID_ECUSoftwareUpdate_L = 10,
	EUpgradePartsID__PID_NewFlapActuators_S = 11,
	EUpgradePartsID__PID_NewFlapActuators_L = 12,
	EUpgradePartsID__PID_NewAileronActuators_S = 13,
	EUpgradePartsID__PID_NewAileronActuators_L = 14,
	EUpgradePartsID__PID_NewRudderActuators_S = 15,
	EUpgradePartsID__PID_NewRudderActuators_L = 16,
	EUpgradePartsID__PID_CuttingEdgeLargeFlap_S = 17,
	EUpgradePartsID__PID_CuttingEdgeLargeFlap_L = 18,
	EUpgradePartsID__PID_CuttingEdgeLargeAilerons_S = 19,
	EUpgradePartsID__PID_CuttingEdgeLargeAilerons_L = 20,
	EUpgradePartsID__PID_CuttingEdgeLargeRudder_S = 21,
	EUpgradePartsID__PID_CuttingEdgeLargeRudder_L = 22,
	EUpgradePartsID__PID_BulletproofFuelTank_S = 23,
	EUpgradePartsID__PID_BulletproofFuelTank_L = 24,
	EUpgradePartsID__PID_MultipurposeStealthCoating_S = 25,
	EUpgradePartsID__PID_MultipurposeStealthCoating_L = 26,
	EUpgradePartsID__PID_AutomatedFireExtinguisher_S = 27,
	EUpgradePartsID__PID_AutomatedFireExtinguisher_L = 28,
	EUpgradePartsID__PID_HighPowerEnhancedShells = 29,
	EUpgradePartsID__PID_LongRangeEnhancedShells = 30,
	EUpgradePartsID__PID_LongarrelEnhancedShells = 31,
	EUpgradePartsID__PID_DirectionalProximityFuze_MSL = 32,
	EUpgradePartsID__PID_NewHighEnergyPropellant_MSL = 33,
	EUpgradePartsID__PID_RamjetPropulsionDevice_MSL = 34,
	EUpgradePartsID__PID_ElectronicOpticalHybridSight_MSL = 35,
	EUpgradePartsID__PID_MultipleEnemyDetectionDevice_MSL = 36,
	EUpgradePartsID__PID_ThrustAdjustingSteeringDevice_MSL = 37,
	EUpgradePartsID__PID_InfraredSeekerCoolingSystem_MSL = 38,
	EUpgradePartsID__PID_DirectionalProximityFuze_SPW = 39,
	EUpgradePartsID__PID_NewHighEnergyPropellant_SPW = 40,
	EUpgradePartsID__PID_TakeoffWeightAugmentation_SPW = 41,
	EUpgradePartsID__PID_RamjetPropulsionDevice_SPW = 42,
	EUpgradePartsID__PID_ElectronicOpticalHybridSighte_SPW = 43,
	EUpgradePartsID__PID_MultipleEnemyDetectionDevice_SPW = 44,
	EUpgradePartsID__PID_ThrustAdjustingSteeringDevice_SPW = 45,
	EUpgradePartsID__PID_ImprovedLaserTargetIndicator_SPW = 46,
	EUpgradePartsID__PID_MultipleTargetThreatLevelDetectionSystem_SPW = 47,
	EUpgradePartsID__PID_HighSpecExplosiveCharge = 48,
	EUpgradePartsID__PID_HardpointExpansion = 49,
	EUpgradePartsID__PID_GPSTargetingSupportSystem = 50,
	EUpgradePartsID__PID_AdditionalBombExplosives = 51,
	EUpgradePartsID__PID_AdditionalBombStrakes = 52,
	EUpgradePartsID__PID_HighOutputBombGPSAntenna = 53,
	EUpgradePartsID__PID_HighOutputLaserGenerator = 54,
	EUpgradePartsID__PID_LaserBeamExpander = 55,
	EUpgradePartsID__PID_LightCondenserCorrectionDevice = 56,
	EUpgradePartsID__PID_HighPowerAccumulator = 57,
	EUpgradePartsID__PID_HighSpeedProjectiles = 58,
	EUpgradePartsID__PID_EMLSightCorrectionAlgorithm = 59,
	EUpgradePartsID__PID_AdditionalRocketExplosives = 60,
	EUpgradePartsID__PID_AdditionalRocketPropellant = 61,
	EUpgradePartsID__PID_NewGRKTInertialNavigationDevice = 62,
	EUpgradePartsID__PID_AntiStealthMicrowaveRadar = 63,
	EUpgradePartsID__PID_OnboardSelfDefenseJammer = 64,
	EUpgradePartsID__PID_MainStructuralFrame = 65,
	EUpgradePartsID__PID_PredictiveLockOnAlgorithm = 66,
	EUpgradePartsID__PID_SmallAntiIcingDeIcingSystem = 67,
	EUpgradePartsID__PID_AutoStrafingMachineGunDevice = 68,
	EUpgradePartsID__PID_MachineGunRadarLockSystem = 69,
	EUpgradePartsID__PID_NewUAVAttackAlgorithm = 70,
	EUpgradePartsID__PID_NewUAVFlightAlgorithm = 71,
	EUpgradePartsID__PID_SmallUAVConformalTank = 72,
	EUpgradePartsID__PID_SharpTurn = 73,
	EUpgradePartsID__PID_FighterConcentrator = 74,
	EUpgradePartsID__PID_MultiroleConcentrator = 75,
	EUpgradePartsID__PID_AttackerConcentrator = 76,
	EUpgradePartsID__PID_ACE       = 77,
	EUpgradePartsID__PID_MachinegunFanatic = 78,
	EUpgradePartsID__PID_MissileFanatic = 79,
	EUpgradePartsID__PID_SpecialWeaponFanatic = 80,
	EUpgradePartsID__PID_ThrustAdjustingSteeringDeviceS_MSL = 81,
	EUpgradePartsID__PID_ThrustAdjustingSteeringDeviceS_SPW = 82,
	EUpgradePartsID__PID_NewHighEnergyPropellantS_MSL = 83,
	EUpgradePartsID__PID_NewHighEnergyPropellantS_SPW = 84,
	EUpgradePartsID__PID_RamjetPropulsionDeviceS_MSL = 85,
	EUpgradePartsID__PID_RamjetPropulsionDeviceS_SPW = 86,
	EUpgradePartsID__PID_ThrustAdjustingSteeringDeviceL_MSL = 87,
	EUpgradePartsID__PID_ThrustAdjustingSteeringDeviceL_SPW = 88,
	EUpgradePartsID__PID_NewHighEnergyPropellantL_MSL = 89,
	EUpgradePartsID__PID_NewHighEnergyPropellantL_SPW = 90,
	EUpgradePartsID__PID_RamjetPropulsionDeviceL_MSL = 91,
	EUpgradePartsID__PID_RamjetPropulsionDeviceL_SPW = 92,
	EUpgradePartsID__PID_MAX       = 93
};


// Enum Nimbus.ESequenceMenuCampaignResetType
enum class ESequenceMenuCampaignResetType : uint8_t
{
	ESequenceMenuCampaignResetType__New = 0,
	ESequenceMenuCampaignResetType__SpNew = 1,
	ESequenceMenuCampaignResetType__ESequenceMenuCampaignResetType_MAX = 2
};


// Enum Nimbus.EHangarSpecCategory
enum class EHangarSpecCategory : uint8_t
{
	EHangarSpecCategory__Default   = 0,
	EHangarSpecCategory__Aircraft  = 1,
	EHangarSpecCategory__Weapon    = 2,
	EHangarSpecCategory__EHangarSpecCategory_MAX = 3
};


// Enum Nimbus.EPartsCategory
enum class EPartsCategory : uint8_t
{
	EPartsCategory__Body           = 0,
	EPartsCategory__Arms           = 1,
	EPartsCategory__Misc           = 2,
	EPartsCategory__Count          = 3,
	EPartsCategory__EPartsCategory_MAX = 4
};


// Enum Nimbus.EPilotDataCategory
enum class EPilotDataCategory : uint8_t
{
	EPilotDataCategory__Ally       = 0,
	EPilotDataCategory__Rival      = 1,
	EPilotDataCategory__Named      = 2,
	EPilotDataCategory__EPilotDataCategory_MAX = 3
};


// Enum Nimbus.EPilotDataGameMode
enum class EPilotDataGameMode : uint8_t
{
	EPilotDataGameMode__Campaign   = 0,
	EPilotDataGameMode__VR         = 1,
	EPilotDataGameMode__EPilotDataGameMode_MAX = 2
};


// Enum Nimbus.EPlatforms
enum class EPlatforms : uint8_t
{
	EPlatforms__PlayStation4       = 0,
	EPlatforms__XboxOne            = 1,
	EPlatforms__Steam              = 2,
	EPlatforms__Num                = 3,
	EPlatforms__EPlatforms_MAX     = 4
};


// Enum Nimbus.ECockpitMaterial
enum class ECockpitMaterial : uint8_t
{
	ECockpitMaterial__CockpitMaterial_Instr = 0,
	ECockpitMaterial__CockpitMaterial_AOA = 1,
	ECockpitMaterial__CockpitMaterial_VVI = 2,
	ECockpitMaterial__CockpitMaterial_CMP = 3,
	ECockpitMaterial__CockpitMaterial_MAX = 4
};


// Enum Nimbus.ESkinMaterial
enum class ESkinMaterial : uint8_t
{
	ESkinMaterial__SkinMaterial_BaseDecal = 0,
	ESkinMaterial__SkinMaterial_Base = 1,
	ESkinMaterial__SkinMaterial_CP = 2,
	ESkinMaterial__SkinMaterial_Damage = 3,
	ESkinMaterial__SkinMaterial_Num = 4,
	ESkinMaterial__SkinMaterial_MAX = 5
};


// Enum Nimbus.EPlayerMeshGroup
enum class EPlayerMeshGroup : uint8_t
{
	EPlayerMeshGroup__MeshGroup_ThirdPerson = 0,
	EPlayerMeshGroup__MeshGroup_Cockpit = 1,
	EPlayerMeshGroup__MeshGroup_HUD = 2,
	EPlayerMeshGroup__MeshGroup_MAX = 3
};


// Enum Nimbus.EDriftPostStallManeuverability
enum class EDriftPostStallManeuverability : uint8_t
{
	EDriftPostStallManeuverability__None = 0,
	EDriftPostStallManeuverability__Cobra = 1,
	EDriftPostStallManeuverability__Kulbit = 2,
	EDriftPostStallManeuverability__EDriftPostStallManeuverability_MAX = 3
};


// Enum Nimbus.EPlaneIGCSize
enum class EPlaneIGCSize : uint8_t
{
	EPlaneIGCSize__PIS_Small       = 0,
	EPlaneIGCSize__PIS_Medium      = 1,
	EPlaneIGCSize__PIS_Large       = 2,
	EPlaneIGCSize__PIS_Giant       = 3,
	EPlaneIGCSize__PIS_Special     = 4,
	EPlaneIGCSize__PIS_MAX         = 5
};


// Enum Nimbus.EPlaneHangarSize
enum class EPlaneHangarSize : uint8_t
{
	EPlaneHangarSize__PHS_Small    = 0,
	EPlaneHangarSize__PHS_Medium   = 1,
	EPlaneHangarSize__PHS_Large    = 2,
	EPlaneHangarSize__PHS_Giant    = 3,
	EPlaneHangarSize__PHS_SU30_X   = 4,
	EPlaneHangarSize__PHS_F15_X    = 5,
	EPlaneHangarSize__PHS_Mig31B   = 6,
	EPlaneHangarSize__PHS_Extra    = 7,
	EPlaneHangarSize__PHS_Count    = 8,
	EPlaneHangarSize__PHS_MAX      = 9
};


// Enum Nimbus.EPilotDataGender
enum class EPilotDataGender : uint8_t
{
	EPilotDataGender__Male         = 0,
	EPilotDataGender__Female       = 1,
	EPilotDataGender__EPilotDataGender_MAX = 2
};


// Enum Nimbus.EGunCaliber
enum class EGunCaliber : uint8_t
{
	EGunCaliber__GunCaliber20mm    = 0,
	EGunCaliber__GunCaliber27mm    = 1,
	EGunCaliber__GunCaliber30mm    = 2,
	EGunCaliber__GunCaliberAvenger = 3,
	EGunCaliber__GunCaliberPGun    = 4,
	EGunCaliber__EGunCaliber_MAX   = 5
};


// Enum Nimbus.EPlaneCategory
enum class EPlaneCategory : uint8_t
{
	EPlaneCategory__Fighter        = 0,
	EPlaneCategory__Multirole      = 1,
	EPlaneCategory__Attacker       = 2,
	EPlaneCategory__Bomber         = 3,
	EPlaneCategory__EPlaneCategory_MAX = 4
};


// Enum Nimbus.EPlaneTargetMode
enum class EPlaneTargetMode : uint8_t
{
	EPlaneTargetMode__CampaignAndOnline = 0,
	EPlaneTargetMode__VR           = 1,
	EPlaneTargetMode__FreeFlight   = 2,
	EPlaneTargetMode__EPlaneTargetMode_MAX = 3
};


// Enum Nimbus.EWeaponDurabilityCategory
enum class EWeaponDurabilityCategory : uint8_t
{
	EWeaponDurabilityCategory__Category00 = 0,
	EWeaponDurabilityCategory__Category01 = 1,
	EWeaponDurabilityCategory__Category02 = 2,
	EWeaponDurabilityCategory__Category03 = 3,
	EWeaponDurabilityCategory__Category04 = 4,
	EWeaponDurabilityCategory__Category05 = 5,
	EWeaponDurabilityCategory__Category06 = 6,
	EWeaponDurabilityCategory__Category07 = 7,
	EWeaponDurabilityCategory__Category08 = 8,
	EWeaponDurabilityCategory__Category09 = 9,
	EWeaponDurabilityCategory__Category10 = 10,
	EWeaponDurabilityCategory__Category11 = 11,
	EWeaponDurabilityCategory__Category12 = 12,
	EWeaponDurabilityCategory__Category13 = 13,
	EWeaponDurabilityCategory__Category14 = 14,
	EWeaponDurabilityCategory__Category15 = 15,
	EWeaponDurabilityCategory__EWeaponDurabilityCategory_MAX = 16
};


// Enum Nimbus.EWeaponCategory
enum class EWeaponCategory : uint8_t
{
	EWeaponCategory__Air           = 0,
	EWeaponCategory__Ground        = 1,
	EWeaponCategory__Other         = 2,
	EWeaponCategory__EWeaponCategory_MAX = 3
};


// Enum Nimbus.ERadioMessagePriority
enum class ERadioMessagePriority : uint8_t
{
	ERadioMessagePriority__RMP_AP  = 0,
	ERadioMessagePriority__RMP_A   = 1,
	ERadioMessagePriority__RMP_B   = 2,
	ERadioMessagePriority__RMP_C   = 3,
	ERadioMessagePriority__RMP_MAX = 4
};


// Enum Nimbus.ERadioSpeakerColor
enum class ERadioSpeakerColor : uint8_t
{
	ERadioSpeakerColor__SpeakerColor_Ally = 0,
	ERadioSpeakerColor__SpeakerColor_Enemy = 1,
	ERadioSpeakerColor__SpeakerColor_Neutral = 2,
	ERadioSpeakerColor__COUNT      = 3,
	ERadioSpeakerColor__ERadioSpeakerColor_MAX = 4
};


// Enum Nimbus.ERadioSubtitle
enum class ERadioSubtitle : uint8_t
{
	ERadioSubtitle__Default        = 0,
	ERadioSubtitle__ForceTrue      = 1,
	ERadioSubtitle__ForceFalse     = 2,
	ERadioSubtitle__Cinema         = 3,
	ERadioSubtitle__ERadioSubtitle_MAX = 4
};


// Enum Nimbus.ERadioNoiseSound
enum class ERadioNoiseSound : uint8_t
{
	ERadioNoiseSound__AWACS        = 0,
	ERadioNoiseSound__PLANE        = 1,
	ERadioNoiseSound__GROUND       = 2,
	ERadioNoiseSound__PLANE_DEATH  = 3,
	ERadioNoiseSound__GROUND_DEATH = 4,
	ERadioNoiseSound__NEWS         = 5,
	ERadioNoiseSound__PLANE_DEATH_HARD = 6,
	ERadioNoiseSound__COUNT_CRASH_LANDING = 7,
	ERadioNoiseSound__COUNT        = 8,
	ERadioNoiseSound__ERadioNoiseSound_MAX = 9
};


// Enum Nimbus.ERadioNoise
enum class ERadioNoise : uint8_t
{
	ERadioNoise__ALL               = 0,
	ERadioNoise__BEFORE            = 1,
	ERadioNoise__AFTER             = 2,
	ERadioNoise__NONE              = 3,
	ERadioNoise__COUNT             = 4,
	ERadioNoise__ERadioNoise_MAX   = 5
};


// Enum Nimbus.EOptionsDistanceUnits
enum class EOptionsDistanceUnits : uint8_t
{
	EOptionsDistanceUnits__Meter   = 0,
	EOptionsDistanceUnits__Feet    = 1,
	EOptionsDistanceUnits__EOptionsDistanceUnits_MAX = 2
};


// Enum Nimbus.ERadioChannel
enum class ERadioChannel : uint8_t
{
	ERadioChannel__DEFAULT         = 0,
	ERadioChannel__MAIN            = 1,
	ERadioChannel__SUB             = 2,
	ERadioChannel__BOTH            = 3,
	ERadioChannel__ERadioChannel_MAX = 4
};


// Enum Nimbus.ERailgunControliResult
enum class ERailgunControliResult : uint8_t
{
	ERailgunControliResult__Hit    = 0,
	ERailgunControliResult__NotHit = 1,
	ERailgunControliResult__OutRange = 2,
	ERailgunControliResult__Stop   = 3,
	ERailgunControliResult__HitMapCollision = 4,
	ERailgunControliResult__MAX    = 5
};


// Enum Nimbus.ERegions
enum class ERegions : uint8_t
{
	ERegions__WorldWide            = 0,
	ERegions__UnitedStates         = 1,
	ERegions__Europe               = 2,
	ERegions__Asia                 = 3,
	ERegions__Japan                = 4,
	ERegions__Num                  = 5,
	ERegions__ERegions_MAX         = 6
};


// Enum Nimbus.ERewardMedalWidgetState
enum class ERewardMedalWidgetState : uint8_t
{
	ERewardMedalWidgetState__WAITING = 0,
	ERewardMedalWidgetState__ANIMATING = 1,
	ERewardMedalWidgetState__DONE  = 2,
	ERewardMedalWidgetState__ERewardMedalWidgetState_MAX = 3
};


// Enum Nimbus.EWidgetStateRewardScrollboxMedal
enum class EWidgetStateRewardScrollboxMedal : uint8_t
{
	EWidgetStateRewardScrollboxMedal__INIT = 0,
	EWidgetStateRewardScrollboxMedal__WAITINIT = 1,
	EWidgetStateRewardScrollboxMedal__WAITING = 2,
	EWidgetStateRewardScrollboxMedal__ANIMATING = 3,
	EWidgetStateRewardScrollboxMedal__DONE = 4,
	EWidgetStateRewardScrollboxMedal__EWidgetStateRewardScrollboxMedal_MAX = 5
};


// Enum Nimbus.ESceneType
enum class ESceneType : uint8_t
{
	ESceneType__Scene              = 0,
	ESceneType__News               = 1,
	ESceneType__Credits            = 2,
	ESceneType__SpSceneBegin       = 3,
	ESceneType__SpSceneEnd         = 4,
	ESceneType__ESceneType_MAX     = 5
};


// Enum Nimbus.EProhibitionType
enum class EProhibitionType : uint8_t
{
	EProhibitionType__HandOverController = 0,
	EProhibitionType__Screenshot   = 1,
	EProhibitionType__VideoClip    = 2,
	EProhibitionType__Broadcast    = 3,
	EProhibitionType__ScreenSharing = 4,
	EProhibitionType__RemotePlay   = 5,
	EProhibitionType__Count        = 6,
	EProhibitionType__EProhibitionType_MAX = 7
};


// Enum Nimbus.ERectennaBarrierState
enum class ERectennaBarrierState : uint8_t
{
	ERectennaBarrierState__RingSpawn = 0,
	ERectennaBarrierState__RingMove = 1,
	ERectennaBarrierState__RingEnd = 2,
	ERectennaBarrierState__BarrierIn = 3,
	ERectennaBarrierState__BarrierIn_EndWait = 4,
	ERectennaBarrierState__BarrierActive = 5,
	ERectennaBarrierState__BarrierFade = 6,
	ERectennaBarrierState__ERectennaBarrierState_MAX = 7
};


// Enum Nimbus.EShareBlockSection
enum class EShareBlockSection : uint8_t
{
	EShareBlockSection__None       = 0,
	EShareBlockSection__CampaignMission = 1,
	EShareBlockSection__CampaignEndMovie = 2,
	EShareBlockSection__SceneViewerEndMovie = 3,
	EShareBlockSection__VrMode     = 4,
	EShareBlockSection__MultiplayerMode = 5,
	EShareBlockSection__PsStore    = 6,
	EShareBlockSection__DebugTest  = 7,
	EShareBlockSection__EShareBlockSection_MAX = 8
};


// Enum Nimbus.ECreditType
enum class ECreditType : uint8_t
{
	ECreditType__CreditsAce7       = 0,
	ECreditType__CreditsTitle      = 1,
	ECreditType__CreditsJobpart    = 2,
	ECreditType__CreditsPostandName = 3,
	ECreditType__CreditsDescription = 4,
	ECreditType__CreditsCompany    = 5,
	ECreditType__CreditsNameDouble = 6,
	ECreditType__CreditsNameQuintuple = 7,
	ECreditType__CreditsLicenseL   = 8,
	ECreditType__CreditsLogo       = 9,
	ECreditType__CreditsLogo2      = 10,
	ECreditType__CreditsSpace      = 11,
	ECreditType__ECreditType_MAX   = 12
};


// Enum Nimbus.ESubmarineRailgunState
enum class ESubmarineRailgunState : uint8_t
{
	ESubmarineRailgunState__StoredState = 0,
	ESubmarineRailgunState__ExtractState = 1,
	ESubmarineRailgunState__AttackState = 2,
	ESubmarineRailgunState__BrokenState = 3,
	ESubmarineRailgunState__DownState = 4,
	ESubmarineRailgunState__ESubmarineRailgunState_MAX = 5
};


// Enum Nimbus.ESubmarineState
enum class ESubmarineState : uint8_t
{
	ESubmarineState__OnWater       = 0,
	ESubmarineState__Diving        = 1,
	ESubmarineState__UnderWater    = 2,
	ESubmarineState__Surface       = 3,
	ESubmarineState__ESubmarineState_MAX = 4
};


// Enum Nimbus.ESubmarineSeaVFXReferenceAngle
enum class ESubmarineSeaVFXReferenceAngle : uint8_t
{
	ESubmarineSeaVFXReferenceAngle__World = 0,
	ESubmarineSeaVFXReferenceAngle__Socket = 1,
	ESubmarineSeaVFXReferenceAngle__SocketYaw = 2,
	ESubmarineSeaVFXReferenceAngle__MAX = 3
};


// Enum Nimbus.ESubmarineSeaVFXSpawnPoint
enum class ESubmarineSeaVFXSpawnPoint : uint8_t
{
	ESubmarineSeaVFXSpawnPoint__SeaSurface = 0,
	ESubmarineSeaVFXSpawnPoint__Socket = 1,
	ESubmarineSeaVFXSpawnPoint__MAX = 2
};


// Enum Nimbus.ESubmarineTrailVFXStatus
enum class ESubmarineTrailVFXStatus : uint8_t
{
	ESubmarineTrailVFXStatus__Normal = 0,
	ESubmarineTrailVFXStatus__NoseLift = 1,
	ESubmarineTrailVFXStatus__Move = 2,
	ESubmarineTrailVFXStatus__Stop = 3,
	ESubmarineTrailVFXStatus__All  = 4,
	ESubmarineTrailVFXStatus__MAX  = 5
};


// Enum Nimbus.ESubmarineTrailVFXSpawnPoint
enum class ESubmarineTrailVFXSpawnPoint : uint8_t
{
	ESubmarineTrailVFXSpawnPoint__Socket = 0,
	ESubmarineTrailVFXSpawnPoint__SeaSurface = 1,
	ESubmarineTrailVFXSpawnPoint__FitHeightSea = 2,
	ESubmarineTrailVFXSpawnPoint__MAX = 3
};


// Enum Nimbus.ESubmarineNoseState
enum class ESubmarineNoseState : uint8_t
{
	ESubmarineNoseState__Normal    = 0,
	ESubmarineNoseState__LiftProgress = 1,
	ESubmarineNoseState__Lift      = 2,
	ESubmarineNoseState__DownProgress = 3,
	ESubmarineNoseState__ESubmarineNoseState_MAX = 4
};


// Enum Nimbus.EAmbientSoundState
enum class EAmbientSoundState : uint8_t
{
	EAmbientSoundState__Playing    = 0,
	EAmbientSoundState__NotPlaying = 1,
	EAmbientSoundState__Paused     = 2,
	EAmbientSoundState__EAmbientSoundState_MAX = 3
};


// Enum Nimbus.EImpactAreaMode
enum class EImpactAreaMode : uint8_t
{
	EImpactAreaMode__None          = 0,
	EImpactAreaMode__Expansion     = 1,
	EImpactAreaMode__Shrinking     = 2,
	EImpactAreaMode__EImpactAreaMode_MAX = 3
};


// Enum Nimbus.ESystemLineType
enum class ESystemLineType : uint8_t
{
	ESystemLineType__ReturnLine    = 0,
	ESystemLineType__PulloutLine   = 1,
	ESystemLineType__ESystemLineType_MAX = 2
};


// Enum Nimbus.ESearchMode
enum class ESearchMode : uint8_t
{
	ESearchMode__Search            = 0,
	ESearchMode__Aproaching        = 1,
	ESearchMode__Capture           = 2,
	ESearchMode__ESearchMode_MAX   = 3
};


// Enum Nimbus.ESearchTargetMoveState
enum class ESearchTargetMoveState : uint8_t
{
	ESearchTargetMoveState__Move_1to2 = 0,
	ESearchTargetMoveState__Wait   = 1,
	ESearchTargetMoveState__Move_2to1 = 2,
	ESearchTargetMoveState__Wait01 = 3,
	ESearchTargetMoveState__ESearchTargetMoveState_MAX = 4
};


// Enum Nimbus.ESeekerSoundType
enum class ESeekerSoundType : uint8_t
{
	ESeekerSoundType__Main         = 0,
	ESeekerSoundType__Special      = 1,
	ESeekerSoundType__MainLockon   = 2,
	ESeekerSoundType__SpecialLockon = 3,
	ESeekerSoundType__ESeekerSoundType_MAX = 4
};


// Enum Nimbus.EParameterOperationType
enum class EParameterOperationType : uint8_t
{
	EParameterOperationType__POT_OFFSET = 0,
	EParameterOperationType__POT_RATE = 1,
	EParameterOperationType__POT_MAX = 2
};


// Enum Nimbus.ESeekerJammingState
enum class ESeekerJammingState : uint8_t
{
	ESeekerJammingState__NotJammed = 0,
	ESeekerJammingState__Jammed    = 1,
	ESeekerJammingState__JammedAndWavering = 2,
	ESeekerJammingState__JammedAndLocking = 3,
	ESeekerJammingState__ESeekerJammingState_MAX = 4
};


// Enum Nimbus.ESeekerTargetCloudState
enum class ESeekerTargetCloudState : uint8_t
{
	ESeekerTargetCloudState__NoTarget = 0,
	ESeekerTargetCloudState__NotInCloud = 1,
	ESeekerTargetCloudState__EnteredCloud = 2,
	ESeekerTargetCloudState__InCloud = 3,
	ESeekerTargetCloudState__ESeekerTargetCloudState_MAX = 4
};


// Enum Nimbus.ELockonState
enum class ELockonState : uint8_t
{
	ELockonState__NoTarget         = 0,
	ELockonState__TargetDetecting  = 1,
	ELockonState__Started          = 2,
	ELockonState__Locked           = 3,
	ELockonState__LockedEnteredCloud = 4,
	ELockonState__LockingInCloud   = 5,
	ELockonState__Jammed           = 6,
	ELockonState__ELockonState_MAX = 7
};


// Enum Nimbus.EContainerUpdateGroupDistance
enum class EContainerUpdateGroupDistance : uint8_t
{
	EContainerUpdateGroupDistance__Near = 0,
	EContainerUpdateGroupDistance__Mid = 1,
	EContainerUpdateGroupDistance__Far = 2,
	EContainerUpdateGroupDistance__Count = 3,
	EContainerUpdateGroupDistance__EContainerUpdateGroupDistance_MAX = 4
};


// Enum Nimbus.ETunnelForcedType
enum class ETunnelForcedType : uint8_t
{
	ETunnelForcedType__Normal      = 0,
	ETunnelForcedType__Near        = 1,
	ETunnelForcedType__Far         = 2,
	ETunnelForcedType__MAX         = 3
};


// Enum Nimbus.ETunnelForcedConditions
enum class ETunnelForcedConditions : uint8_t
{
	ETunnelForcedConditions__Overlap = 0,
	ETunnelForcedConditions__Angle = 1,
	ETunnelForcedConditions__AngleYawOnly = 2,
	ETunnelForcedConditions__ETunnelForcedConditions_MAX = 3
};


// Enum Nimbus.ETunnelEventType
enum class ETunnelEventType : uint8_t
{
	ETunnelEventType__Tunnel       = 0,
	ETunnelEventType__SpaceElevator = 1,
	ETunnelEventType__CollisionReduction = 2,
	ETunnelEventType__TunnelCorrection = 3,
	ETunnelEventType__MAX          = 4
};


// Enum Nimbus.ETextHidingGroupType
enum class ETextHidingGroupType : uint8_t
{
	ETextHidingGroupType__Normal   = 0,
	ETextHidingGroupType__Description = 1,
	ETextHidingGroupType__ETextHidingGroupType_MAX = 2
};


// Enum Nimbus.EMenuSpaceType
enum class EMenuSpaceType : uint8_t
{
	EMenuSpaceType__MenuSpaceNone  = 0,
	EMenuSpaceType__MenuSpaceNormal = 1,
	EMenuSpaceType__MenuSpaceLayer = 2,
	EMenuSpaceType__MenuSpaceVR    = 3,
	EMenuSpaceType__EMenuSpaceType_MAX = 4
};


// Enum Nimbus.EMultiSessionMode
enum class EMultiSessionMode : uint8_t
{
	EMultiSessionMode__Disabled    = 0,
	EMultiSessionMode__Lobby       = 1,
	EMultiSessionMode__SortieSelect = 2,
	EMultiSessionMode__Transition  = 3,
	EMultiSessionMode__InGame      = 4,
	EMultiSessionMode__EMultiSessionMode_MAX = 5
};


// Enum Nimbus.EUIFadeTime
enum class EUIFadeTime : uint8_t
{
	EUIFadeTime__None              = 0,
	EUIFadeTime__Skip              = 1,
	EUIFadeTime__Copyright         = 2,
	EUIFadeTime__Menu              = 3,
	EUIFadeTime__Mission           = 4,
	EUIFadeTime__HangarSelect      = 5,
	EUIFadeTime__HangarSortie      = 6,
	EUIFadeTime__MenuLong          = 7,
	EUIFadeTime__Num               = 8,
	EUIFadeTime__EUIFadeTime_MAX   = 9
};


// Enum Nimbus.EMenuBGMState
enum class EMenuBGMState : uint8_t
{
	EMenuBGMState__Normal          = 0,
	EMenuBGMState__Online          = 1,
	EMenuBGMState__OnlineHangar    = 2,
	EMenuBGMState__OnlineLobby     = 3,
	EMenuBGMState__Campaign        = 4,
	EMenuBGMState__VRHangar        = 5,
	EMenuBGMState__VRHangarPhase2  = 6,
	EMenuBGMState__VRHangarPhase3  = 7,
	EMenuBGMState__VRHangarPhase4  = 8,
	EMenuBGMState__EMenuBGMState_MAX = 9
};


// Enum Nimbus.EUIBgms
enum class EUIBgms : uint8_t
{
	EUIBgms__None                  = 0,
	EUIBgms__MainTitle             = 1,
	EUIBgms__MainMenu              = 2,
	EUIBgms__MainMenuCampaign      = 3,
	EUIBgms__Briefing1             = 4,
	EUIBgms__Briefing2             = 5,
	EUIBgms__Briefing3             = 6,
	EUIBgms__Briefing4             = 7,
	EUIBgms__Briefing401           = 8,
	EUIBgms__Briefing402           = 9,
	EUIBgms__Briefing5             = 10,
	EUIBgms__BriefingMS05          = 11,
	EUIBgms__BriefingMS16          = 12,
	EUIBgms__Debriefing1           = 13,
	EUIBgms__Debriefing2           = 14,
	EUIBgms__Debriefing3           = 15,
	EUIBgms__Debriefing4           = 16,
	EUIBgms__Debriefing5           = 17,
	EUIBgms__Hangar1               = 18,
	EUIBgms__Hangar2               = 19,
	EUIBgms__Hangar3               = 20,
	EUIBgms__Hangar4               = 21,
	EUIBgms__Hangar5               = 22,
	EUIBgms__HangarMS16            = 23,
	EUIBgms__Hangar301             = 24,
	EUIBgms__StaffCredits          = 25,
	EUIBgms__VRTitle               = 26,
	EUIBgms__VRMenu                = 27,
	EUIBgms__VRBriefing            = 28,
	EUIBgms__VRDebriefing          = 29,
	EUIBgms__VRHangar              = 30,
	EUIBgms__VRPrologue            = 31,
	EUIBgms__VREnding              = 32,
	EUIBgms__VRGameOver            = 33,
	EUIBgms__MultiMenu             = 34,
	EUIBgms__MultiLobby            = 35,
	EUIBgms__MultiHangar           = 36,
	EUIBgms__MultiReady            = 37,
	EUIBgms__MultiEndLoseJingle    = 38,
	EUIBgms__MultiEndWinJingle     = 39,
	EUIBgms__MultiEndMVPJingle     = 40,
	EUIBgms__BriefingEx1           = 41,
	EUIBgms__BriefingEx2           = 42,
	EUIBgms__BriefingEx3           = 43,
	EUIBgms__DebriefingEx1         = 44,
	EUIBgms__DebriefingEx2         = 45,
	EUIBgms__DebriefingEx3         = 46,
	EUIBgms__HangarEx1             = 47,
	EUIBgms__HangarEx2             = 48,
	EUIBgms__HangarEx3             = 49,
	EUIBgms__Num                   = 50,
	EUIBgms__EUIBgms_MAX           = 51
};


// Enum Nimbus.EUISounds
enum class EUISounds : uint8_t
{
	EUISounds__None                = 0,
	EUISounds__ResetAll            = 1,
	EUISounds__StopAll             = 2,
	EUISounds__Accept              = 3,
	EUISounds__Cancel              = 4,
	EUISounds__Fail                = 5,
	EUISounds__ChangeTab           = 6,
	EUISounds__ChangeItem          = 7,
	EUISounds__ChangeSubItem       = 8,
	EUISounds__OpenPause           = 9,
	EUISounds__ClosePause          = 10,
	EUISounds__OpenMenu            = 11,
	EUISounds__CloseMenu           = 12,
	EUISounds__AcceptTitle         = 13,
	EUISounds__AcceptSortie        = 14,
	EUISounds__OpenDialog          = 15,
	EUISounds__OpenErrorDialog     = 16,
	EUISounds__StartMenu           = 17,
	EUISounds__ZoomInBriefing      = 18,
	EUISounds__ZoomOutBriefing     = 19,
	EUISounds__SetParts            = 20,
	EUISounds__UnsetParts          = 21,
	EUISounds__GetMedal            = 22,
	EUISounds__BriefingSwitchEnd   = 23,
	EUISounds__TreePurchase        = 24,
	EUISounds__TreeUnlockLineMove  = 25,
	EUISounds__Scroll              = 26,
	EUISounds__GetReward           = 27,
	EUISounds__UnlockFeature       = 28,
	EUISounds__VRUI_Decide         = 29,
	EUISounds__VRUI_Cancel         = 30,
	EUISounds__VRUI_Select         = 31,
	EUISounds__VRUI_Open           = 32,
	EUISounds__VRUI_Square_Flash   = 33,
	EUISounds__VRUI_Circle         = 34,
	EUISounds__VRUI_Enemy          = 35,
	EUISounds__VRUI_Map            = 36,
	EUISounds__VRUI_FadeIn_3s      = 37,
	EUISounds__VRUI_FadeIn_5s      = 38,
	EUISounds__VRUI_FadeOut_3s     = 39,
	EUISounds__VRUI_FadeOut_5s     = 40,
	EUISounds__Radio_Dalete        = 41,
	EUISounds__Radio_Insert        = 42,
	EUISounds__MultiLobbyEnter     = 43,
	EUISounds__MultiLobbyExit      = 44,
	EUISounds__MultiChatReceived   = 45,
	EUISounds__MultiSortieEnabled  = 46,
	EUISounds__MultiSortieDisabled = 47,
	EUISounds__MultiSortieStarted  = 48,
	EUISounds__MultiSortieCountdownEnding = 49,
	EUISounds__MultiAircraftSelected = 50,
	EUISounds__MultiOvertake1st    = 51,
	EUISounds__MultiRespawningStart = 52,
	EUISounds__MultiRespawningStop = 53,
	EUISounds__MultiRespawnReady   = 54,
	EUISounds__MultiResultsScreen  = 55,
	EUISounds__MultiResultsText    = 56,
	EUISounds__MultiResultsScore   = 57,
	EUISounds__MultiRankIncreasingStart = 58,
	EUISounds__MultiRankIncreasingStop = 59,
	EUISounds__MultiRankUp         = 60,
	EUISounds__MultiMedalReceived  = 61,
	EUISounds__MultiRewardsText    = 62,
	EUISounds__MultiOpenPause      = 63,
	EUISounds__MultiClosePause     = 64,
	EUISounds__MultiSoftenBGM      = 65,
	EUISounds__MultiSoftenBGMReset = 66,
	EUISounds__MultiMemberListOpen = 67,
	EUISounds__MultiMemberListClose = 68,
	EUISounds__Num                 = 69,
	EUISounds__EUISounds_MAX       = 70
};


// Enum Nimbus.EMenuCursorSizes
enum class EMenuCursorSizes : uint8_t
{
	EMenuCursorSizes__Normal       = 0,
	EMenuCursorSizes__Emblem       = 1,
	EMenuCursorSizes__Aircraft     = 2,
	EMenuCursorSizes__Session      = 3,
	EMenuCursorSizes__Replay       = 4,
	EMenuCursorSizes__Client       = 5,
	EMenuCursorSizes__RadioMessage = 6,
	EMenuCursorSizes__SortieSelect = 7,
	EMenuCursorSizes__Num          = 8,
	EMenuCursorSizes__EMenuCursorSizes_MAX = 9
};


// Enum Nimbus.EMenuSequenceGroup
enum class EMenuSequenceGroup : uint8_t
{
	EMenuSequenceGroup__MenuGroupBoot = 0,
	EMenuSequenceGroup__MenuGroupInitialSetup = 1,
	EMenuSequenceGroup__MenuGroupMain = 2,
	EMenuSequenceGroup__MenuGroupCampaign = 3,
	EMenuSequenceGroup__MenuGroupMultiplay = 4,
	EMenuSequenceGroup__MenuGroupVR = 5,
	EMenuSequenceGroup__MenuGroupHangar = 6,
	EMenuSequenceGroup__MenuGroupMission = 7,
	EMenuSequenceGroup__EMenuSequenceGroup_MAX = 8
};


// Enum Nimbus.EDialogResults
enum class EDialogResults : uint8_t
{
	EDialogResults__None           = 0,
	EDialogResults__Cancel         = 1,
	EDialogResults__First          = 2,
	EDialogResults__Second         = 3,
	EDialogResults__Num            = 4,
	EDialogResults__EDialogResults_MAX = 5
};


// Enum Nimbus.EIconCategoryIDs
enum class EIconCategoryIDs : uint8_t
{
	EIconCategoryIDs__None         = 0,
	EIconCategoryIDs__AircraftFighter = 1,
	EIconCategoryIDs__AircraftMultirole = 2,
	EIconCategoryIDs__AircraftAttacker = 3,
	EIconCategoryIDs__AircraftBomber = 4,
	EIconCategoryIDs__WeaponAir    = 5,
	EIconCategoryIDs__WeaponGround = 6,
	EIconCategoryIDs__WeaponOther  = 7,
	EIconCategoryIDs__PartsEngine  = 8,
	EIconCategoryIDs__PartsManeuverability = 9,
	EIconCategoryIDs__PartsArmor   = 10,
	EIconCategoryIDs__PartsMachineGun = 11,
	EIconCategoryIDs__PartsNormalMissile = 12,
	EIconCategoryIDs__PartsSpecialMissile = 13,
	EIconCategoryIDs__PartsBomb    = 14,
	EIconCategoryIDs__PartsTlsAndSdlw = 15,
	EIconCategoryIDs__PartsEml     = 16,
	EIconCategoryIDs__PartsRktAndGrkt = 17,
	EIconCategoryIDs__PartsMechanicalParts = 18,
	EIconCategoryIDs__PartsElectronicParts = 19,
	EIconCategoryIDs__PartsArmCompositeDevice = 20,
	EIconCategoryIDs__PartsMiscCompositeDevice = 21,
	EIconCategoryIDs__PartsMultiPlayRespawn = 22,
	EIconCategoryIDs__PartsMultiPlayBody = 23,
	EIconCategoryIDs__PartsMultiPlayArms = 24,
	EIconCategoryIDs__PartsUav     = 25,
	EIconCategoryIDs__PartsArmorMisc = 26,
	EIconCategoryIDs__PartsMechanicalPartsArms = 27,
	EIconCategoryIDs__PartsMechanicalPartsMisc = 28,
	EIconCategoryIDs__PartsElectronicPartsMisc = 29,
	EIconCategoryIDs__PilotDataAlly = 30,
	EIconCategoryIDs__PilotDataRival = 31,
	EIconCategoryIDs__PilotDataNamed = 32,
	EIconCategoryIDs__PartsEngine_Large = 33,
	EIconCategoryIDs__PartsManeuverability_Large = 34,
	EIconCategoryIDs__PartsArmor_Large = 35,
	EIconCategoryIDs__PartsMachineGun_Large = 36,
	EIconCategoryIDs__PartsNormalMissile_Large = 37,
	EIconCategoryIDs__PartsSpecialMissile_Large = 38,
	EIconCategoryIDs__PartsBomb_Large = 39,
	EIconCategoryIDs__PartsTlsAndSdlw_Large = 40,
	EIconCategoryIDs__PartsEml_Large = 41,
	EIconCategoryIDs__PartsRktAndGrkt_Large = 42,
	EIconCategoryIDs__PartsMechanicalParts_Large = 43,
	EIconCategoryIDs__PartsElectronicParts_Large = 44,
	EIconCategoryIDs__PartsArmCompositeDevice_Large = 45,
	EIconCategoryIDs__PartsMiscCompositeDevice_Large = 46,
	EIconCategoryIDs__PartsMultiPlayRespawn_Large = 47,
	EIconCategoryIDs__PartsMultiPlayBody_Large = 48,
	EIconCategoryIDs__PartsMultiPlayArms_Large = 49,
	EIconCategoryIDs__PartsUav_Large = 50,
	EIconCategoryIDs__PartsArmorMisc_Large = 51,
	EIconCategoryIDs__PartsMechanicalPartsArms_Large = 52,
	EIconCategoryIDs__PartsMechanicalPartsMisc_Large = 53,
	EIconCategoryIDs__PartsElectronicPartsMisc_Large = 54,
	EIconCategoryIDs__Blank        = 55,
	EIconCategoryIDs__RadioEquipped = 56,
	EIconCategoryIDs__RadioEquippedWithPing = 57,
	EIconCategoryIDs__RadioNotEquipped = 58,
	EIconCategoryIDs__RadioNotEquippedWithPing = 59,
	EIconCategoryIDs__Num          = 60,
	EIconCategoryIDs__EIconCategoryIDs_MAX = 61
};


// Enum Nimbus.EIconIDs
enum class EIconIDs : uint8_t
{
	EIconIDs__None                 = 0,
	EIconIDs__Load                 = 1,
	EIconIDs__Save                 = 2,
	EIconIDs__Network              = 3,
	EIconIDs__Num                  = 4,
	EIconIDs__EIconIDs_MAX         = 5
};


// Enum Nimbus.EIconStatusIDs
enum class EIconStatusIDs : uint8_t
{
	EIconStatusIDs__None           = 0,
	EIconStatusIDs__New            = 1,
	EIconStatusIDs__Dlc            = 2,
	EIconStatusIDs__Locked         = 3,
	EIconStatusIDs__Updated        = 4,
	EIconStatusIDs__Menu           = 5,
	EIconStatusIDs__NewStore       = 6,
	EIconStatusIDs__Num            = 7,
	EIconStatusIDs__EIconStatusIDs_MAX = 8
};


// Enum Nimbus.ENotificationIDs
enum class ENotificationIDs : uint8_t
{
	ENotificationIDs__None         = 0,
	ENotificationIDs__AircraftTree = 1,
	ENotificationIDs__Parts        = 2,
	ENotificationIDs__NewAircraft1 = 3,
	ENotificationIDs__NewAircraft2 = 4,
	ENotificationIDs__NewParts     = 5,
	ENotificationIDs__UnlockTreeNode1 = 6,
	ENotificationIDs__Skin         = 7,
	ENotificationIDs__Emblem       = 8,
	ENotificationIDs__AceCampaign  = 9,
	ENotificationIDs__AceVR        = 10,
	ENotificationIDs__AirShowVR    = 11,
	ENotificationIDs__AddDLC       = 12,
	ENotificationIDs__AddRule      = 13,
	ENotificationIDs__AddStage     = 14,
	ENotificationIDs__AddBoth      = 15,
	ENotificationIDs__Num          = 16,
	ENotificationIDs__ENotificationIDs_MAX = 17
};


// Enum Nimbus.EGuideIDs
enum class EGuideIDs : uint8_t
{
	EGuideIDs__None                = 0,
	EGuideIDs__AircraftSet         = 1,
	EGuideIDs__AircraftTree        = 2,
	EGuideIDs__AircraftParts       = 3,
	EGuideIDs__Multi               = 4,
	EGuideIDs__MultiAircraftSet    = 5,
	EGuideIDs__MultiRoomCreate     = 6,
	EGuideIDs__MultiRoom           = 7,
	EGuideIDs__Num                 = 8,
	EGuideIDs__EGuideIDs_MAX       = 9
};


// Enum Nimbus.EMenuIDs
enum class EMenuIDs : uint8_t
{
	EMenuIDs__None                 = 0,
	EMenuIDs__Boot                 = 1,
	EMenuIDs__Copyright            = 2,
	EMenuIDs__MainTitle            = 3,
	EMenuIDs__SetupMenuControls    = 4,
	EMenuIDs__SetupMenuVoice       = 5,
	EMenuIDs__SetupMenuText        = 6,
	EMenuIDs__MainMenu             = 7,
	EMenuIDs__StaffCredits         = 8,
	EMenuIDs__RewardMedal          = 9,
	EMenuIDs__RewardItem           = 10,
	EMenuIDs__GenericLoad          = 11,
	EMenuIDs__CampaignHangarAircraft = 12,
	EMenuIDs__CampaignAircraftViewer = 13,
	EMenuIDs__CampaignHangarWeapon = 14,
	EMenuIDs__CampaignHangarWeaponViewer = 15,
	EMenuIDs__CampaignHangarParts  = 16,
	EMenuIDs__CampaignHangarSkin   = 17,
	EMenuIDs__CampaignHangarEmblem = 18,
	EMenuIDs__CampaignHangarEmblemSwitch = 19,
	EMenuIDs__CampaignHangarReview = 20,
	EMenuIDs__CampaignHangarSortie = 21,
	EMenuIDs__CampaignAircraftTree = 22,
	EMenuIDs__MULTI_MENU_HANGAR    = 23,
	EMenuIDs__MULTI_AIRCRAFT_VIEWER = 24,
	EMenuIDs__MULTI_HANGAR_SET     = 25,
	EMenuIDs__MULTI_HANGAR_AIRCRAFT_TREE = 26,
	EMenuIDs__MULTI_HANGAR_RADIO   = 27,
	EMenuIDs__MULTI_HANGAR_AIRCRAFT = 28,
	EMenuIDs__MULTI_HANGAR_WEAPON  = 29,
	EMenuIDs__MULTI_HANGAR_PARTS   = 30,
	EMenuIDs__MULTI_HANGAR_EMBLEM  = 31,
	EMenuIDs__MULTI_HANGAR_EMBLEM_SWITCH = 32,
	EMenuIDs__MULTI_HANGAR_SKIN    = 33,
	EMenuIDs__MULTI_HANGAR_REVIEW  = 34,
	EMenuIDs__MULTI_HANGAR_NAME    = 35,
	EMenuIDs__MULTI_SORTIE_SELECTSET = 36,
	EMenuIDs__CampaignMenuMain     = 37,
	EMenuIDs__CampaignMenuDifficulty = 38,
	EMenuIDs__CampaignMv           = 39,
	EMenuIDs__CampaignMvNews       = 40,
	EMenuIDs__CampaignMissionTitle = 41,
	EMenuIDs__CampaignBriefingMv   = 42,
	EMenuIDs__CampaignBriefingMenu = 43,
	EMenuIDs__CampaignMenuActionSelect = 44,
	EMenuIDs__CampaignMissionLoad  = 45,
	EMenuIDs__CampaignEd           = 46,
	EMenuIDs__CampaignDebriefing   = 47,
	EMenuIDs__CampaignUnlockClear  = 48,
	EMenuIDs__CampaignUnlockQuit   = 49,
	EMenuIDs__CampaignMenuNext     = 50,
	EMenuIDs__CampaignFreeMission  = 51,
	EMenuIDs__CampaignFreeMissionDifficulty = 52,
	EMenuIDs__CampaignFreeMissionNext = 53,
	EMenuIDs__CampaignHudPause     = 54,
	EMenuIDs__CampaignRetry        = 55,
	EMenuIDs__MissionFail          = 56,
	EMenuIDs__MissionSuccess       = 57,
	EMenuIDs__MissionResupply      = 58,
	EMenuIDs__MULTI_MENU_MAIN      = 59,
	EMenuIDs__MULTI_MENU_START     = 60,
	EMenuIDs__MULTI_QUICK_MATCH    = 61,
	EMenuIDs__MULTI_FIND_MATCH     = 62,
	EMenuIDs__MULTI_SESSION_BROWSER = 63,
	EMenuIDs__MULTI_SESSION_CONFIRM = 64,
	EMenuIDs__MULTI_CREATE_ROOM    = 65,
	EMenuIDs__MULTI_LOBBY          = 66,
	EMenuIDs__MULTI_LOBBY_MAP_INFO = 67,
	EMenuIDs__MULTI_LOBBY_CHAT     = 68,
	EMenuIDs__MULTI_MISSION_LOAD   = 69,
	EMenuIDs__MULTI_INVITATION     = 70,
	EMenuIDs__MULTI_MISSION_PAUSE  = 71,
	EMenuIDs__MULTI_RESULT_TD_WINLOSE = 72,
	EMenuIDs__MULTI_RESULT_BR_WINLOSE = 73,
	EMenuIDs__MULTI_RESULT_TD      = 74,
	EMenuIDs__MULTI_RESULT_BR      = 75,
	EMenuIDs__MULTI_RESULT_REWARD  = 76,
	EMenuIDs__MULTI_REWARD_ITEM    = 77,
	EMenuIDs__MULTI_REWARD_MEDAL   = 78,
	EMenuIDs__MULTI_REVIVE         = 79,
	EMenuIDs__VRMenuMain           = 80,
	EMenuIDs__VRHmd                = 81,
	EMenuIDs__VRMainTitle          = 82,
	EMenuIDs__VRHangar             = 83,
	EMenuIDs__VRPrologue           = 84,
	EMenuIDs__VRDifficulty         = 85,
	EMenuIDs__VRMissionSelect      = 86,
	EMenuIDs__VRBriefing           = 87,
	EMenuIDs__VRAircraft           = 88,
	EMenuIDs__VRWeapon             = 89,
	EMenuIDs__VRReview             = 90,
	EMenuIDs__VRAircraftViewer     = 91,
	EMenuIDs__VRHangarCockpit      = 92,
	EMenuIDs__VRMissionLoad        = 93,
	EMenuIDs__VRDebriefing         = 94,
	EMenuIDs__VRUnlock             = 95,
	EMenuIDs__VREd                 = 96,
	EMenuIDs__VRHudPause           = 97,
	EMenuIDs__VRRetry              = 98,
	EMenuIDs__ViewerMenu           = 99,
	EMenuIDs__ViewerMenuCampaign   = 100,
	EMenuIDs__ViewerCampaignRecords = 101,
	EMenuIDs__ViewerCampaignMedal  = 102,
	EMenuIDs__ViewerCampaignPilotData = 103,
	EMenuIDs__ViewerMenuVR         = 104,
	EMenuIDs__ViewerVRRecords      = 105,
	EMenuIDs__ViewerVRMedal        = 106,
	EMenuIDs__ViewerVRPilotData    = 107,
	EMenuIDs__ViewerMenuMultiplay  = 108,
	EMenuIDs__ViewerMultiplayRecords = 109,
	EMenuIDs__ViewerMultiplayMedal = 110,
	EMenuIDs__ViewerMenuGallery    = 111,
	EMenuIDs__ViewerScene          = 112,
	EMenuIDs__ViewerMusic          = 113,
	EMenuIDs__ViewerHangarReview   = 114,
	EMenuIDs__ViewerHangarAircraft = 115,
	EMenuIDs__ViewerHangarWeapon   = 116,
	EMenuIDs__ViewerHangarEmblem   = 117,
	EMenuIDs__ViewerHangarEmblemSwitch = 118,
	EMenuIDs__ViewerHangarSkin     = 119,
	EMenuIDs__ViewerHangarNickname = 120,
	EMenuIDs__ViewerHangarSelect   = 121,
	EMenuIDs__OptionsMenu          = 122,
	EMenuIDs__OptionsFlightSystem  = 123,
	EMenuIDs__OptionsController    = 124,
	EMenuIDs__OptionsKeyboard      = 125,
	EMenuIDs__OptionsMouse         = 126,
	EMenuIDs__OptionsFlightStick   = 127,
	EMenuIDs__OptionsScreen        = 128,
	EMenuIDs__OptionsGraphicsSteam = 129,
	EMenuIDs__OptionsSound         = 130,
	EMenuIDs__OptionsLanguage      = 131,
	EMenuIDs__OptionsGraphicsScreen = 132,
	EMenuIDs__OptionsGraphicsResolution = 133,
	EMenuIDs__OptionsGraphicsVsync = 134,
	EMenuIDs__OptionsGraphicsFlame = 135,
	EMenuIDs__OptionsGraphicsBloom = 136,
	EMenuIDs__OptionsGraphicsBlur  = 137,
	EMenuIDs__OptionsGraphicsAdvanced = 138,
	EMenuIDs__Replay               = 139,
	EMenuIDs__CampaignExtraMission = 140,
	EMenuIDs__CampaignExtraMissionDifficulty = 141,
	EMenuIDs__CampaignMvExtraBegin = 142,
	EMenuIDs__CampaignMvExtraEnd   = 143,
	EMenuIDs__Num                  = 144,
	EMenuIDs__EMenuIDs_MAX         = 145
};


// Enum Nimbus.EUIManagerType
enum class EUIManagerType : uint8_t
{
	EUIManagerType__Menu           = 0,
	EUIManagerType__Transition     = 1,
	EUIManagerType__Mission        = 2,
	EUIManagerType__MultiMission   = 3,
	EUIManagerType__EUIManagerType_MAX = 4
};


// Enum Nimbus.EUIButtons
enum class EUIButtons : uint8_t
{
	EUIButtons__None               = 0,
	EUIButtons__Ok                 = 1,
	EUIButtons__Next               = 2,
	EUIButtons__Select             = 3,
	EUIButtons__Set                = 4,
	EUIButtons__PlayAnimation      = 5,
	EUIButtons__ViewPlayerProfile  = 6,
	EUIButtons__ViewPlayerProfile2 = 7,
	EUIButtons__KickPlayer         = 8,
	EUIButtons__Back               = 9,
	EUIButtons__Cancel             = 10,
	EUIButtons__AltitudeOff        = 11,
	EUIButtons__DisplayOff         = 12,
	EUIButtons__ResetCamera        = 13,
	EUIButtons__AircraftTreeSet    = 14,
	EUIButtons__Customize          = 15,
	EUIButtons__CloudsOff          = 16,
	EUIButtons__Tuning             = 17,
	EUIButtons__ChangeCategory     = 18,
	EUIButtons__FastForward        = 19,
	EUIButtons__ZoomIn             = 20,
	EUIButtons__ZoomOut            = 21,
	EUIButtons__ReadMore           = 22,
	EUIButtons__SearchAgain        = 23,
	EUIButtons__Chat               = 24,
	EUIButtons__VoiceChatMute      = 25,
	EUIButtons__VoiceChatUnmute    = 26,
	EUIButtons__DefaultSettings    = 27,
	EUIButtons__EditKeys           = 28,
	EUIButtons__Details            = 29,
	EUIButtons__Result             = 30,
	EUIButtons__Skip               = 31,
	EUIButtons__Preview            = 32,
	EUIButtons__SwitchViewPoint    = 33,
	EUIButtons__Guide              = 34,
	EUIButtons__Play               = 35,
	EUIButtons__Stop               = 36,
	EUIButtons__ToggleEngagedAreas = 37,
	EUIButtons__MoveCameraR        = 38,
	EUIButtons__MoveCameraL        = 39,
	EUIButtons__AngleCamera        = 40,
	EUIButtons__PrepareMission     = 41,
	EUIButtons__FinishBriefing     = 42,
	EUIButtons__GuideClose1        = 43,
	EUIButtons__GuideClose2        = 44,
	EUIButtons__GuideClose3        = 45,
	EUIButtons__GuideClose4        = 46,
	EUIButtons__GuideClose5        = 47,
	EUIButtons__RestoreDefaults    = 48,
	EUIButtons__Delete             = 49,
	EUIButtons__Switch             = 50,
	EUIButtons__CameraZoom         = 51,
	EUIButtons__CameraAngle        = 52,
	EUIButtons__Scroll             = 53,
	EUIButtons__Scroll_R3          = 54,
	EUIButtons__MoveCursor         = 55,
	EUIButtons__SwitchTuning       = 56,
	EUIButtons__DisplayOn          = 57,
	EUIButtons__SortSwitchFilter   = 58,
	EUIButtons__CameraTrack        = 59,
	EUIButtons__CameraZoomLR1      = 60,
	EUIButtons__ResetSetting       = 61,
	EUIButtons__SlotReplace        = 62,
	EUIButtons__MPPause            = 63,
	EUIButtons__MPLoop             = 64,
	EUIButtons__MPRandom           = 65,
	EUIButtons__MPNext             = 66,
	EUIButtons__MPPrev             = 67,
	EUIButtons__Aircraftdescription = 68,
	EUIButtons__ChangeSkin         = 69,
	EUIButtons__ReplayDisplay      = 70,
	EUIButtons__ReplayRadio        = 71,
	EUIButtons__ReplaySE           = 72,
	EUIButtons__ReplayBGM          = 73,
	EUIButtons__RemoveKeyAssign    = 74,
	EUIButtons__CancelKeyAssign    = 75,
	EUIButtons__ShowCampaignDataViewer = 76,
	EUIButtons__EULA_Scroll        = 77,
	EUIButtons__EULA_MoveCursor    = 78,
	EUIButtons__RadioMoveList      = 79,
	EUIButtons__SetupCtrlLayout    = 80,
	EUIButtons__SetupCtrlDetail    = 81,
	EUIButtons__PlaySound          = 82,
	EUIButtons__BriefingNext       = 83,
	EUIButtons__BriefingSortie     = 84,
	EUIButtons__Num                = 85,
	EUIButtons__EUIButtons_MAX     = 86
};


// Enum Nimbus.EDialogType
enum class EDialogType : uint8_t
{
	EDialogType__None              = 0,
	EDialogType__Normal            = 1,
	EDialogType__Scrollable        = 2,
	EDialogType__EULA              = 3,
	EDialogType__KeyAssign         = 4,
	EDialogType__EDialogType_MAX   = 5
};


// Enum Nimbus.EChangeMenuState
enum class EChangeMenuState : uint8_t
{
	EChangeMenuState__WaitChange   = 0,
	EChangeMenuState__Start        = 1,
	EChangeMenuState__StartClose   = 2,
	EChangeMenuState__WaitClose    = 3,
	EChangeMenuState__EndClose     = 4,
	EChangeMenuState__WaitRefreshEntitlement = 5,
	EChangeMenuState__ChangeMenu   = 6,
	EChangeMenuState__StartOpen    = 7,
	EChangeMenuState__StartOpenAnim = 8,
	EChangeMenuState__WaitOpen     = 9,
	EChangeMenuState__EndOpen      = 10,
	EChangeMenuState__End          = 11,
	EChangeMenuState__EChangeMenuState_MAX = 12
};


// Enum Nimbus.EPendingDeactivateState
enum class EPendingDeactivateState : uint8_t
{
	EPendingDeactivateState__None  = 0,
	EPendingDeactivateState__WaitingPhaseEnd = 1,
	EPendingDeactivateState__WaitingDeactivate = 2,
	EPendingDeactivateState__EPendingDeactivateState_MAX = 3
};


// Enum Nimbus.EAIState
enum class EAIState : uint8_t
{
	EAIState__ReturnToWorld        = 0,
	EAIState__AvoidObstacle        = 1,
	EAIState__ReturnToUnit         = 2,
	EAIState__SpecialAction        = 3,
	EAIState__AttackAvoidance      = 4,
	EAIState__EscapeFromPursuer    = 5,
	EAIState__Provoke              = 6,
	EAIState__MoveAwayFromTarget   = 7,
	EAIState__PursueTarget         = 8,
	EAIState__FollowFormation      = 9,
	EAIState__Patrol               = 10,
	EAIState__Idle                 = 11,
	EAIState__EAIState_MAX         = 12
};


// Enum Nimbus.EViewerRecordsMode
enum class EViewerRecordsMode : uint8_t
{
	EViewerRecordsMode__CAMPAIGN   = 0,
	EViewerRecordsMode__VR         = 1,
	EViewerRecordsMode__MULTIPLAYER = 2,
	EViewerRecordsMode__EViewerRecordsMode_MAX = 3
};


// Enum Nimbus.EComparatorType
enum class EComparatorType : uint8_t
{
	EComparatorType__Less          = 0,
	EComparatorType__LessOrEqual   = 1,
	EComparatorType__Equal         = 2,
	EComparatorType__NotEqual      = 3,
	EComparatorType__GreaterOrEqual = 4,
	EComparatorType__Greater       = 5,
	EComparatorType__EComparatorType_MAX = 6
};


// Enum Nimbus.EViewerFlightTrendType
enum class EViewerFlightTrendType : uint8_t
{
	EViewerFlightTrendType__FIGHTER = 0,
	EViewerFlightTrendType__MULTI  = 1,
	EViewerFlightTrendType__ATTACKER = 2,
	EViewerFlightTrendType__TOTAL  = 3,
	EViewerFlightTrendType__NUM    = 4,
	EViewerFlightTrendType__EViewerFlightTrendType_MAX = 5
};


// Enum Nimbus.EWeaponHittingType
enum class EWeaponHittingType : uint8_t
{
	EWeaponHittingType__None       = 0,
	EWeaponHittingType__NeverHitToPlayer = 1,
	EWeaponHittingType__NeverHitToPlayer01 = 2,
	EWeaponHittingType__NeverHitToPlayer02 = 3,
	EWeaponHittingType__AlwaysHitToPlayer = 4,
	EWeaponHittingType__EWeaponHittingType_MAX = 5
};


// Enum Nimbus.EHomingType
enum class EHomingType : uint8_t
{
	EHomingType__ACTIVE_RADAR      = 0,
	EHomingType__INFRARED          = 1,
	EHomingType__SEMI_ACTIVE       = 2,
	EHomingType__EHomingType_MAX   = 3
};


// Enum Nimbus.ELogicalType
enum class ELogicalType : uint8_t
{
	ELogicalType__And              = 0,
	ELogicalType__Or               = 1,
	ELogicalType__ELogicalType_MAX = 2
};


// Enum Nimbus.EDistanceFromTarget
enum class EDistanceFromTarget : uint8_t
{
	EDistanceFromTarget__DistFar   = 0,
	EDistanceFromTarget__DistNear  = 1,
	EDistanceFromTarget__DistVeryNear = 2,
	EDistanceFromTarget__DistWithinExplosion = 3,
	EDistanceFromTarget__EDistanceFromTarget_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Nimbus.DamagedVFXInfo
// 0x0068
struct FDamagedVFXInfo
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DamagedVFX;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PositionOffset;                                           // 0x0010(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x001C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0028(0x000C) (Edit, IsPlainOldData)
	bool                                               bIsWorldSpace;                                            // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSnapToSurface;                                     // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockZAxis;                                               // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreRotation;                                          // 0x0037(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DeathVfxDelay;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddRandomDelay;                                          // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              RandomMin;                                                // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomMax;                                                // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DeathVfxDuration;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    Component;                                                // 0x0050(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // 0x0058(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0060(0x0006) MISSED OFFSET
	bool                                               bPlayCameraShake;                                         // 0x0066(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ENimbusCameraShakeType                             SpawnShakeType;                                           // 0x0067(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Nimbus.DamagedStateInstance
// 0x0070
struct FDamagedStateInstance
{
	float                                              RemainingHealthPercentage;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FDamagedVFXInfo>                     DamagedVFXList;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              TimeToLive;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x54];                                      // 0x001C(0x0054) MISSED OFFSET
};

// ScriptStruct Nimbus.SeaExplosionInfo
// 0x0008
struct FSeaExplosionInfo
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.SeaExplosionVFXInfo
// 0x0080
struct FSeaExplosionVFXInfo
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SeaCheckOffset;                                           // 0x0008(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UParticleSystem*                             ExplosionVFX;                                             // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ESeaExplosionSpawnConditions                       SpawnConditions;                                          // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              SpawnVFXSpeed;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0028(0x000C) (Edit, IsPlainOldData)
	float                                              DeathVfxDuration;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0038(0x0005) MISSED OFFSET
	bool                                               bAttach;                                                  // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESeaExplosionAngleStandard                         AngleStandard;                                            // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x003F(0x0001) MISSED OFFSET
	struct FRotator                                    RotateOffset;                                             // 0x0040(0x000C) (Edit, IsPlainOldData)
	ESeaExplosionStartingPoint                         StartingPoint;                                            // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FVector                                     LocationOffset;                                           // 0x0050(0x000C) (Edit, IsPlainOldData)
	ESoundChannelType                                  PlaySoundType;                                            // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x13];                                      // 0x005D(0x0013) MISSED OFFSET
	class UParticleSystemComponent*                    Component;                                                // 0x0070(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // 0x0078(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Nimbus.GroundDecalInfo
// 0x0020
struct FGroundDecalInfo
{
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeStartDelay;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeDuration;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DecalSize;                                                // 0x0010(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.AIASChildDelayDestructInfo
// 0x0020
struct FAIASChildDelayDestructInfo
{
	struct FName                                       ChildActorComponentName;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
	class AAIGameObject*                               ChildObject;                                              // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Nimbus.AIASPartsDestroyInfo
// 0x0040
struct FAIASPartsDestroyInfo
{
	struct FName                                       ParentActorComponentName;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ChildActorComponentName;                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              Delay;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	class AAIGameObject*                               ParentObject;                                             // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AAIGameObject*>                       ChildObject;                                              // 0x0030(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Nimbus.AirCurrentData
// 0x0048
struct FAirCurrentData
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Nimbus.OneTimeFunc
// 0x0050
struct FOneTimeFunc
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Nimbus.HoveringParam
// 0x0030
struct FHoveringParam
{
	bool                                               EnableHovering;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              StopHoveringSpeed;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ShakeRotMax;                                              // 0x0008(0x000C) (Edit, IsPlainOldData)
	float                                              ShakeSpeedMax;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShakeAccelMax;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHoveringLocationOffset;                            // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	TArray<class UCurveVector*>                        HoveringLocationOffsetCurveList;                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.AIPathPointData
// 0x0040
struct FAIPathPointData
{
	struct FVector                                     Translation;                                              // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                Option;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAIPathMovingActorSnap                             SnapSetting;                                              // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0035(0x000B) MISSED OFFSET
};

// ScriptStruct Nimbus.ImbalanceAnimCurveData
// 0x0010
struct FImbalanceAnimCurveData
{
	class UCurveVector*                                AnimCurve;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Timer;                                                    // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.DamageImbalanceAnimSettings
// 0x0038
struct FDamageImbalanceAnimSettings
{
	bool                                               EnableImbalance;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UCurveVector*>                        GunDamageAnimCurveDatas;                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<class UCurveVector*>                        MissileDamageAnimCurveDatas;                              // 0x0018(0x0010) (Edit, ZeroConstructor)
	TArray<struct FImbalanceAnimCurveData>             AnimCurveDataList;                                        // 0x0028(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Nimbus.AISpecialActionRequestInfo
// 0x0018
struct FAISpecialActionRequestInfo
{
	class UBehaviorTree*                               SpecialActionBT;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAIPlaneSpecialActionTrigger                       Trigger;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class AGameObject*                                 SpecifiedObject;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Nimbus.NimbusCockpitPartsAnim
// 0x009C
struct FNimbusCockpitPartsAnim
{
	float                                              Cmps;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Altm;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Altn;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alto;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Altk;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Altl;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Altr;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alts;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Aspm;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Aspk;                                                     // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ackh;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ackm;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Acks;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Accm;                                                     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Vspm;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Vspk;                                                     // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Aoam;                                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Erpm;                                                     // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ftit;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intt;                                                     // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Fuel;                                                     // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Nozp;                                                     // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mach;                                                     // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ecsp;                                                     // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Fasp;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Eopr;                                                     // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Slip;                                                     // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Swep;                                                     // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lleg;                                                     // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rleg;                                                     // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Hsim;                                                     // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bank;                                                     // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Adimx;                                                    // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Adimz;                                                    // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spwc;                                                     // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Swc1;                                                     // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.NimbusBodyPartsAnim
// 0x00B0
struct FNimbusBodyPartsAnim
{
	float                                              Elvl;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Elvr;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rudl;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rudr;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alrl;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alrr;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Tefn;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Vctl;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Vctr;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Vcth;                                                     // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cndl;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cndr;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spll;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Splr;                                                     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Nzln;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Abkn;                                                     // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rmpn;                                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lefn;                                                     // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Vwgn;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lipn;                                                     // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rotn;                                                     // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cmbr;                                                     // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gunc;                                                     // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Misc;                                                     // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spwc;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Swc1;                                                     // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Swc2;                                                     // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Swc3;                                                     // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Swca;                                                     // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Swcb;                                                     // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Swcc;                                                     // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lubr;                                                     // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Fdwg;                                                     // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Tire;                                                     // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ldgf;                                                     // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ldgn;                                                     // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ldga;                                                     // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Fsus;                                                     // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lsus;                                                     // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rsus;                                                     // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lchb;                                                     // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Hook;                                                     // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ldab;                                                     // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lfbm;                                                     // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverAileronRollWork
// 0x0001
struct FAIPlaneBehaviorManeuverAileronRollWork
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverBarrelRollWork
// 0x0028
struct FAIPlaneBehaviorManeuverBarrelRollWork
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverCloudReactionWork
// 0x0038
struct FAIPlaneBehaviorManeuverCloudReactionWork
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverCobraTurnWork
// 0x0005
struct FAIPlaneBehaviorManeuverCobraTurnWork
{
	unsigned char                                      UnknownData00[0x5];                                       // 0x0000(0x0005) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverFlatSpinWork
// 0x0005
struct FAIPlaneBehaviorManeuverFlatSpinWork
{
	unsigned char                                      UnknownData00[0x5];                                       // 0x0000(0x0005) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverFlyStraightWork
// 0x0020
struct FAIPlaneBehaviorManeuverFlyStraightWork
{
	class AGameObject*                                 PursuerGameObject;                                        // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverKulbitWork
// 0x0005
struct FAIPlaneBehaviorManeuverKulbitWork
{
	unsigned char                                      UnknownData00[0x5];                                       // 0x0000(0x0005) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverLevelWork
// 0x0028
struct FAIPlaneBehaviorManeuverLevelWork
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverPitchWork
// 0x0028
struct FAIPlaneBehaviorManeuverPitchWork
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverPugachevsCobraWork
// 0x000C
struct FAIPlaneBehaviorManeuverPugachevsCobraWork
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverRollWork
// 0x0028
struct FAIPlaneBehaviorManeuverRollWork
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverSlalomWork
// 0x0028
struct FAIPlaneBehaviorManeuverSlalomWork
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverStateUninterruptibleWork
// 0x0003
struct FAIPlaneBehaviorManeuverStateUninterruptibleWork
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverTurnAdvancedWork
// 0x0028
struct FAIPlaneBehaviorManeuverTurnAdvancedWork
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverTurnNormalWork
// 0x0028
struct FAIPlaneBehaviorManeuverTurnNormalWork
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverTurnQuickWork
// 0x0028
struct FAIPlaneBehaviorManeuverTurnQuickWork
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverTurnToPointWork
// 0x0028
struct FAIPlaneBehaviorManeuverTurnToPointWork
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorManeuverYawWork
// 0x0028
struct FAIPlaneBehaviorManeuverYawWork
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorShieldWork
// 0x0018
struct FAIPlaneBehaviorShieldWork
{
	class AGameObject*                                 TargetObject;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AWeaponBase*                                 FiredWeaponObject;                                        // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorReturnToUnitCircleWork
// 0x0003
struct FAIPlaneBehaviorReturnToUnitCircleWork
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorPursueTargetWork
// 0x000C
struct FAIPlaneBehaviorPursueTargetWork
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorOutOfWorldReactionWork
// 0x0018
struct FAIPlaneBehaviorOutOfWorldReactionWork
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorMoveToTargetWork
// 0x0010
struct FAIPlaneBehaviorMoveToTargetWork
{
	class AGameObject*                                 TargetGameObject;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorMoveAwayFromTargetWork
// 0x0018
struct FAIPlaneBehaviorMoveAwayFromTargetWork
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorLevelPlaneWork
// 0x0002
struct FAIPlaneBehaviorLevelPlaneWork
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorGoFormationWork
// 0x0040
struct FAIPlaneBehaviorGoFormationWork
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorFlyToClearAltitudeWork
// 0x0008
struct FAIPlaneBehaviorFlyToClearAltitudeWork
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorAvoidObstacleWork
// 0x0030
struct FAIPlaneBehaviorAvoidObstacleWork
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorAutoDestructWork
// 0x0018
struct FAIPlaneBehaviorAutoDestructWork
{
	class AGameObject*                                 TargetObject;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorAreaPatrolWork
// 0x0014
struct FAIPlaneBehaviorAreaPatrolWork
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneBehaviorActivateFlaresWork
// 0x0010
struct FAIPlaneBehaviorActivateFlaresWork
{
	class AGameObject*                                 PursuerGameObject;                                        // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.AircraftTreeZoomInfo
// 0x0010
struct FAircraftTreeZoomInfo
{
	float                                              Scale;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimTime;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 AnimCurve;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.PlaneTurbulenceData
// 0x0014
struct FPlaneTurbulenceData
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Nimbus.PlaneInZone
// 0x0010
struct FPlaneInZone
{
	class APlayerPlane*                                PlayerPlane;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.CameraImageEffectData
// 0x0048
struct FCameraImageEffectData
{
	TArray<ENimbusCameraShakeType>                     CameraShakeType;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              PlayTime;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCameraScaleUse;                                          // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class UCurveFloat*                                 ChromaticAberrationCurves;                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 VignetteIntensityCurves;                                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 GrainJitterCurves;                                        // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 GrainIntensityCurves;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct Nimbus.WeaponHangarSettings
// 0x0028
struct FWeaponHangarSettings
{
	class UStaticMesh*                                 HangarMeshOverride;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HangarMeshOffset;                                         // 0x0008(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UStaticMesh*                                 HangarRackMesh;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HangarCameraFOV;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.AssetViewerRegistryNode
// 0x0040
struct FAssetViewerRegistryNode
{
	struct FString                                     NodeNameText;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FDirectoryPath                              AssetPath;                                                // 0x0010(0x0010) (Edit)
	class UClass*                                      AssetBaseClass;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UObjectLibrary*                              ObjectLibrary;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             NextStateNodeNameList;                                    // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Nimbus.AutomationAxisKeys
// 0x000A
struct FAutomationAxisKeys
{
	unsigned char                                      Gamepad_LeftX;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Gamepad_LeftY;                                            // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Gamepad_LeftTriggerAxis;                                  // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Gamepad_RightTriggerAxis;                                 // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Gamepad_LeftShoulder;                                     // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Gamepad_RightShoulder;                                    // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Gamepad_FaceButton_Top;                                   // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Gamepad_RightY;                                           // 0x0007(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Gamepad_RightX;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Gamepad_Special_Left_X;                                   // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.AutomationActionKeys
// 0x0003
struct FAutomationActionKeys
{
	unsigned char                                      Gamepad_ThumbStick_Direction;                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Gamepad_DPad_FaceButton;                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Gamepad_STST;                                             // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.AutomationNimbusKeys
// 0x0028
struct FAutomationNimbusKeys
{
	struct FAutomationAxisKeys                         AxisKeys;                                                 // 0x0000(0x000A) (IsPlainOldData)
	struct FAutomationActionKeys                       ActionKeys;                                               // 0x000A(0x0003)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     DebugConsoleCommand;                                      // 0x0010(0x0010) (ZeroConstructor)
	float                                              TimeLogged;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.TextHidingItem
// 0x0040
struct FTextHidingItem
{
	class UTextBlock*                                  TextBlock;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      Image[0x2];                                               // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UHorizontalBox*                              HorizontalBox;                                            // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UOverlay*                                    Overlay;                                                  // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                MultiLineRootBox;                                         // 0x0028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 RootWidget;                                               // 0x0030(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.TextHidingGroup
// 0x0020
struct FTextHidingGroup
{
	TArray<struct FTextHidingItem>                     Items;                                                    // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Nimbus.ImageHidingItem
// 0x0020
struct FImageHidingItem
{
	class UImage*                                      OriginalImage;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      OverlayImage;                                             // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UHorizontalBox*                              HorizontalBox;                                            // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UOverlay*                                    Overlay;                                                  // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Nimbus.ImageHidingGroup
// 0x0020
struct FImageHidingGroup
{
	TArray<struct FImageHidingItem>                    Items;                                                    // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Nimbus.MenuBaseWidgetItem
// 0x05E0
struct FMenuBaseWidgetItem
{
	int                                                SubItemNumber;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SelectedSubItem;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsItemSelected;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsItemLocked;                                            // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsItemSecret;                                            // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsItemHidden;                                            // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData)
	EIconStatusIDs                                     ItemIconStatus;                                           // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	EIconCategoryIDs                                   ItemIconCategory;                                         // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	struct FString                                     ItemText;                                                 // 0x0010(0x0010) (ZeroConstructor)
	bool                                               bIsItemTextWithNumber;                                    // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bItemTextRequireLocalization;                             // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	struct FString                                     SubItemText[0x28];                                        // 0x0028(0x0010) (ZeroConstructor)
	bool                                               bSubItemTextRequireLocalization;                          // 0x02A8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsSubItemSlider;                                         // 0x02A9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x02AA(0x0006) MISSED OFFSET
	struct FString                                     DescriptionText[0x28];                                    // 0x02B0(0x0010) (ZeroConstructor)
	bool                                               bDescriptionTextRequireLocalization;                      // 0x0530(0x0001) (ZeroConstructor, IsPlainOldData)
	EDescriptionTextState                              DescriptionTextState;                                     // 0x0531(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0532(0x0006) MISSED OFFSET
	struct FString                                     ButtonText;                                               // 0x0538(0x0010) (ZeroConstructor)
	EMenuIDs                                           Link;                                                     // 0x0548(0x0001) (ZeroConstructor, IsPlainOldData)
	EDialogIDs                                         DialogID;                                                 // 0x0549(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x86];                                      // 0x054A(0x0086) MISSED OFFSET
	float                                              NewIconTimer;                                             // 0x05D0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsSubItemArrowHidden;                                    // 0x05D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xB];                                       // 0x05D5(0x000B) MISSED OFFSET
};

// ScriptStruct Nimbus.MenuBaseWidgetTabItem
// 0x0010
struct FMenuBaseWidgetTabItem
{
	struct FString                                     TabText;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Nimbus.MenuBaseWidgetUmgItem
// 0x0090
struct FMenuBaseWidgetUmgItem
{
	class UTextBlock*                                  UmgItemText;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      UmgItemIconStatus;                                        // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      UmgItemIconCategory;                                      // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      UmgItemMarker;                                            // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  UmgSubItemText;                                           // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      UmgSubItemButtonLeft;                                     // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      UmgSubItemButtonRight;                                    // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 UmgSubItemSlider;                                         // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      UmgSubItemSliderBar;                                      // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      UmgSubItemSliderHiding;                                   // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET
};

// ScriptStruct Nimbus.DialogData
// 0x0030
struct FDialogData
{
	EDialogIDs                                         ID;                                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	uint32_t                                           Priority;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	EDialogType                                        Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Arguments;                                                // 0x0010(0x0010) (ZeroConstructor)
	EDialogResults                                     Result;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
};

// ScriptStruct Nimbus.BuildingDamagedVFXInfo
// 0x00B0
struct FBuildingDamagedVFXInfo
{
	bool                                               bShowWhenSocketHitsSurface;                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       TriggerSocketName;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TriggerSocketPositionOffset;                              // 0x0010(0x000C) (Edit, IsPlainOldData)
	float                                              Delay;                                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldStayOnSurface;                                     // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldMoveOnSurface;                                     // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	class UParticleSystem*                             DamagedVFX;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PositionOffset;                                           // 0x0038(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0044(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0050(0x000C) (Edit, IsPlainOldData)
	float                                              ImpulseStrength;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseRadius;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyWhenOtherSocketHitsSurface;                       // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FName                                       DestroySocketName;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DestroySocketPositionOffset;                              // 0x0078(0x000C) (Edit, IsPlainOldData)
	bool                                               bPlayCameraShakeEnable;                                   // 0x0084(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ENimbusCameraShakeType                             SpawnCameraShakeType;                                     // 0x0085(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplySeaSpray;                                           // 0x0086(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESoundChannelType                                  SoundToPlayOnShowVFX;                                     // 0x0087(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     LoopSoundToPlayOnShowVFX;                                 // 0x0088(0x0010) (Edit, ZeroConstructor)
	struct FSeaExplosionInfo                           SeaExplosionInfo;                                         // 0x0098(0x0008) (Edit)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
	class UParticleSystemComponent*                    Component;                                                // 0x00A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Nimbus.BriefUnitDataTableRow
// 0x0040 (0x0048 - 0x0008)
struct FBriefUnitDataTableRow : public FTableRowBase
{
	int                                                ID;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GroupID;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     UnitName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TacName;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     Location;                                                 // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Yaw;                                                      // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAlly;                                                  // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsWingman;                                               // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTarget;                                                // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFocusable;                                             // 0x0043(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBriefUnitDataType                                 Type;                                                     // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

// ScriptStruct Nimbus.BriefUnitDataIcon3D
// 0x0020
struct FBriefUnitDataIcon3D
{
	TArray<class AStaticMeshActor*>                    MeshActors;                                               // 0x0000(0x0010) (ZeroConstructor)
	class AStaticMeshActor*                            LineMeshActor;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialBillboardComponent*                 TargetRing;                                               // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Nimbus.BriefUnitDataExtend
// 0x0068
struct FBriefUnitDataExtend
{
	struct FBriefUnitDataTableRow                      Data;                                                     // 0x0000(0x0048)
	struct FBriefUnitDataIcon3D                        Icon3D;                                                   // 0x0048(0x0020)
};

// ScriptStruct Nimbus.BriefUnitGroup
// 0x00E0
struct FBriefUnitGroup
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
	class UVerticalBox*                                DisplayNameContainer;                                     // 0x00A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBriefUnitDataIcon3D                        Icon3D;                                                   // 0x00A8(0x0020)
	class UMaterialInstanceDynamic*                    Icon3DMaterial;                                           // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Icon3DLineMaterial;                                       // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TargetRingMaterial;                                       // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.CampaignDebriefingCameraInfo
// 0x0058
struct FCampaignDebriefingCameraInfo
{
	float                                              YawSpeed;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchSpeed;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchMin;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchMax;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraOperationDuration;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraOperationAmpYawPitch;                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraOperationAmpZoom;                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraOperationDecayAmp;                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GazeStrength;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FollowRate;                                               // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FollowCoeTime;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraVelocityLimit;                                      // 0x002C(0x000C) (Edit, IsPlainOldData)
	TArray<float>                                      CameraDistanceList;                                       // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector2D>                           YawPitchCandidateList;                                    // 0x0048(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Nimbus.CampaignDebriefingMovieInfo
// 0x0040
struct FCampaignDebriefingMovieInfo
{
	uint32_t                                           MissionID;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     MovieMaterial;                                            // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ManaTexturePath;                                          // 0x0018(0x0010) (Edit, ZeroConstructor)
	class UDataTable*                                  Subtitle;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     SceneVoice;                                               // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Nimbus.CampaignDebriefingOpeningAnimInfo
// 0x0024
struct FCampaignDebriefingOpeningAnimInfo
{
	float                                              AnimationTime;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimationEndWaitTime;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraPosStart;                                           // 0x0008(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     CameraPosEnd;                                             // 0x0014(0x000C) (Edit, IsPlainOldData)
	float                                              CameraRotYaw;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.UIMenuColor
// 0x0020
struct FUIMenuColor
{
	struct FLinearColor                                Color;                                                    // 0x0000(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                GlowColor;                                                // 0x0010(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct Nimbus.ExtraMissionSelectInfo
// 0x0038
struct FExtraMissionSelectInfo
{
	class UCanvasPanel*                                UmgMissionPanel;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      UmgMissionImage;                                          // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
	class UTexture2D*                                  ThumbnailTexture;                                         // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Nimbus.FreeMissionSelectInfo
// 0x0030
struct FFreeMissionSelectInfo
{
	class UCanvasPanel*                                UmgMissionPanel;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      UmgMissionImage;                                          // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
	class UTexture2D*                                  ThumbnailTexture;                                         // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Nimbus.WeaponViewerHiddenDeta
// 0x0018
struct FWeaponViewerHiddenDeta
{
	class AActor*                                      HiddenActor;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMeshComponent*>                      ChangeCastHiddenShadowMesh;                               // 0x0008(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct Nimbus.ConditionEntry
// 0x0018
struct FConditionEntry
{
	ECAConditionType                                   ConditionType;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Parameters;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Nimbus.ActionEntry
// 0x0018
struct FActionEntry
{
	ECAActionType                                      ActionType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Parameters;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Nimbus.CAConfigurationEntry
// 0x0038
struct FCAConfigurationEntry
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FConditionEntry>                     ConditionEntryList;                                       // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<struct FActionEntry>                        ActionEntryList;                                          // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Meta;                                                     // 0x0028(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Nimbus.HealthWarningLight
// 0x0050
struct FHealthWarningLight
{
	struct FString                                     WarningLightName;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UPointLightComponent*                        WarningLight;                                             // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WarningMat;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingHealthPercentage;                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightStrength;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightRange;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      LightColor;                                               // 0x002C(0x0004) (Edit, IsPlainOldData)
	float                                              BlinkOnDuration;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlinkOffDuration;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverallBlinkDuration;                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTriggered;                                             // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              BlinkTimer;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OverallBlinkTimer;                                        // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsBlinkingOn;                                            // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Nimbus.SpawnedVfxTrailInfo
// 0x0010
struct FSpawnedVfxTrailInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UParticleSystemComponent*                    Vfx;                                                      // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Nimbus.DialogHandle
// 0x0008
struct FDialogHandle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.DialogInfo
// 0x0180
struct FDialogInfo
{
	struct FDialogData                                 DialogData;                                               // 0x0000(0x0030)
	unsigned char                                      UnknownData00[0x150];                                     // 0x0030(0x0150) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusEsm_SupportParameter
// 0x0030
struct FNimbusEsm_SupportParameter
{
	float                                              SupportReloadTime;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SupportDamage;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SupportAddLockonRangeMeter;                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SupportLockonAngle;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SupportLockonInitialSpeed;                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SupportLockonMaximumSpeed;                                // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SupportHomingAngle;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SupportRotationAngle;                                     // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SupportHomingForesightAmount;                             // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SupportSpeed;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SupportSpeedMax;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SupportAcceleration;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Nimbus.SeekerJammingParameters
// 0x0048
struct FSeekerJammingParameters
{
	float                                              SeekerReturnToCenterTimeJammed;                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JammedMinWaverFactor;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JammedMaxWaverFactor;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 JammedWaverFactorMultiplyForTimeCurve;                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LockingMinJammingTime;                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LockingMaxJammingTime;                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LockingTimeMultiplyForDistanceCurve;                      // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LockedMinJammingTime;                                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LockedMaxJammingTime;                                     // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LockedTimeMultiplyForDistanceCurve;                       // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LockingInJammingChangeDirectionMinTime;                   // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LockingInJammingChangeDirectionMaxTime;                   // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaverDistanceMeters;                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.EnemyMissileIndicator
// 0x0010
struct FEnemyMissileIndicator
{
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TimeLeftToVisibilityToggle;                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.GuidePageBlock
// 0x0010
struct FGuidePageBlock
{
	class UUserWidget*                                 PageBlockWidget;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      UmgImage;                                                 // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Nimbus.GraphicsSettingsWindowsResolution
// 0x0010
struct FGraphicsSettingsWindowsResolution
{
	struct FIntPoint                                   Resolution;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FIntPoint                                   Aspect;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Nimbus.GraphicsSettingsWindowsScreenSetting
// 0x0014
struct FGraphicsSettingsWindowsScreenSetting
{
	EGraphicsSettingsWindowsScreenMode                 ScreenMode;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FGraphicsSettingsWindowsResolution          Resolution;                                               // 0x0004(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Nimbus.RadioText
// 0x0060
struct FRadioText
{
	struct FString                                     Speaker;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     Message;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FLinearColor                                SpeakerColor;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FLinearColor                                MessageColor;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	class UTexture2D*                                  ComWindowImage;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     CinemaSubtitle;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	ERadioWarningSound                                 RadioWarningSound;                                        // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bOffline;                                                 // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
};

// ScriptStruct Nimbus.ImpactCameraPostProcess
// 0x0010
struct FImpactCameraPostProcess
{
	EImpactCameraPostProcessCategory                   ProcessCategory;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UCurveFloat*                                 Curve;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.ImpactCameraExceptionPriorityData
// 0x0018
struct FImpactCameraExceptionPriorityData
{
	struct FName                                       NextCameraName;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     TargetObjNameID;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.ImpactCameraNextCameraData
// 0x0030
struct FImpactCameraNextCameraData
{
	TArray<struct FName>                               NextCameraNameList;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FImpactCameraExceptionPriorityData>  NextCameraExceptionPriorityList;                          // 0x0010(0x0010) (Edit, ZeroConstructor)
	EImpactCameraTerminationCondition                  NextCameraConditions;                                     // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Parameter_Float;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ExecutableAir;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ExecutableGround;                                         // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct Nimbus.ImpactCameraData
// 0x00D8
struct FImpactCameraData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayTime;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EImpactCameraObjectHitReaction                     HitReaction;                                              // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              HitReactionParameter;                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEmergencyAvoidance;                                      // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              EmergencyAvoidanceTime;                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCameraAnim*                                 CameraAnim;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SupplementCurve_Location;                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSupplementTargetRelativeCoordinatesMode;                 // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UCurveFloat*                                 SupplementCurve_Rotation;                                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSupplementCurve_RotationRollMode;                        // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UCurveFloat*                                 SupplementCurve_Fov;                                      // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EImpactCameraLookAtCategory                        LookAtCategory;                                           // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWallHitLookAtCategoryForced;                             // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EImpactCameraObject                                LookAtTargetCategory;                                     // 0x0052(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x0053(0x0005) MISSED OFFSET
	struct FString                                     LookAtTargetMeshName;                                     // 0x0058(0x0010) (Edit, ZeroConstructor)
	struct FName                                       LookAtTargetSocketName;                                   // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EImpactCameraObject                                StandardLocationCategory;                                 // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FString                                     StandardLocationMeshName;                                 // 0x0078(0x0010) (Edit, ZeroConstructor)
	struct FName                                       StandardLocationSocketName;                               // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EImpactCameraObject                                StandardRotationCategory;                                 // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUesFirstFocusObjectRotation;                             // 0x0091(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUesPreviousCameraLocation;                               // 0x0092(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUesFocusObjectRotation_Pitch;                            // 0x0093(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUesFocusObjectRotation_Roll;                             // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUesFocusObjectRotation_Yaw;                              // 0x0095(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFocusObjectInertiaWhenStopped;                           // 0x0096(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x0097(0x0001) MISSED OFFSET
	float                                              InertiaDeceleration;                                      // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UMaterial*                                   PostProcessMaterial;                                      // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FImpactCameraPostProcess>            PostProcessCurves;                                        // 0x00A8(0x0010) (Edit, ZeroConstructor)
	class UCurveFloat*                                 SlowCurve;                                                // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayBombImpactCameraShake;                               // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	TArray<struct FImpactCameraNextCameraData>         NextCameraData;                                           // 0x00C8(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Nimbus.LayerMenuLineInfo
// 0x00C8
struct FLayerMenuLineInfo
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Positions;                                                // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FLinearColor>                        Colors;                                                   // 0x0018(0x0010) (ZeroConstructor)
	float                                              Width;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpVector;                                                 // 0x002C(0x000C) (IsPlainOldData)
	float                                              CurrentRate;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UMaterialInstance*                           Material;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      PositionRates;                                            // 0x0048(0x0010) (ZeroConstructor, Transient)
	int                                                SectionIdx;                                               // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Vertices;                                                 // 0x0060(0x0010) (ZeroConstructor, Transient)
	TArray<int>                                        Indices;                                                  // 0x0070(0x0010) (ZeroConstructor, Transient)
	TArray<struct FVector>                             Normals;                                                  // 0x0080(0x0010) (ZeroConstructor, Transient)
	TArray<struct FVector2D>                           UV0;                                                      // 0x0090(0x0010) (ZeroConstructor, Transient)
	TArray<struct FLinearColor>                        VertexColors;                                             // 0x00A0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FProcMeshTangent>                    Tangents;                                                 // 0x00B0(0x0010) (ZeroConstructor, Transient)
	bool                                               IsDirty;                                                  // 0x00C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsVisible;                                                // 0x00C1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00C2(0x0006) MISSED OFFSET
};

// ScriptStruct Nimbus.UILayerMenuTransform
// 0x0034
struct FUILayerMenuTransform
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0018(0x000C) (Edit, IsPlainOldData)
	struct FVector2D                                   Pivot;                                                    // 0x0024(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   CanvasCenter;                                             // 0x002C(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct Nimbus.UILayerCameraTransform
// 0x001C
struct FUILayerCameraTransform
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, IsPlainOldData)
	float                                              FOV;                                                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.UILayerMenuLineDecoration
// 0x0030
struct FUILayerMenuLineDecoration
{
	TArray<struct FVector>                             Positions;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // 0x0010(0x0010) (Edit, IsPlainOldData)
	float                                              Width;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpVector;                                                 // 0x0024(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct Nimbus.UILayerMenuParamRandomText
// 0x0028
struct FUILayerMenuParamRandomText
{
	struct FString                                     Pallete;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                TextLengthMin;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TextLengthMax;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                UpdateCountMin;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                UpdateCountMax;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Interval;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Justify;                                                  // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.UILayerMenuParamAnim
// 0x0020
struct FUILayerMenuParamAnim
{
	float                                              StartTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TargetPos;                                                // 0x0004(0x0008) (Edit, IsPlainOldData)
	float                                              DurationPos;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EaseTypePos;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetAlpha;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DurationAlpha;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EaseTypeAlpha;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.UILayerMenuParamAnimList
// 0x0010
struct FUILayerMenuParamAnimList
{
	TArray<struct FUILayerMenuParamAnim>               AnimList;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Nimbus.UILayerMenuParamTextDecorationItem
// 0x0010
struct FUILayerMenuParamTextDecorationItem
{
	int                                                RandomTextTableIndex;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OffsetPosition;                                           // 0x0004(0x0008) (Edit, IsPlainOldData)
	float                                              OffsetTime;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.UILayerMenuParamTextDecorationGroup
// 0x0028
struct FUILayerMenuParamTextDecorationGroup
{
	struct FVector2D                                   BasePosMin;                                               // 0x0000(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   BasePosMax;                                               // 0x0008(0x0008) (Edit, IsPlainOldData)
	float                                              OffsetTimeRange;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AnimListTableIndex;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FUILayerMenuParamTextDecorationItem> ItemList;                                                 // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Nimbus.UILayerMenuParamTextDecoration
// 0x0010
struct FUILayerMenuParamTextDecoration
{
	TArray<struct FUILayerMenuParamTextDecorationGroup> GroupList;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Nimbus.SearchResultDeta
// 0x0054
struct FSearchResultDeta
{
	bool                                               bSeaHit;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              SeaHitLength;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTargetHit;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              SearchRate;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SearchRadiusUU;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ObservatRate;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ObservationLeftRightRate;                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SearchStartLocation;                                      // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SeaSearchEndLocation;                                     // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SeaHitLocation;                                           // 0x0034(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     NearestTarget;                                            // 0x0040(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TargetDistanceMeter;                                      // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMADObservationOption                              ObservationOption;                                        // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMADObservationWaveDirectionOption                 ObservationWaveDirectionOption;                           // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
};

// ScriptStruct Nimbus.CursorInfo
// 0x000C
struct FCursorInfo
{
	float                                              CursorMoveDistance;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // 0x0004(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct Nimbus.MinigameRandomStartPosParam
// 0x0010
struct FMinigameRandomStartPosParam
{
	float                                              YMin;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              YMax;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZMin;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZMax;                                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.MinigameTimeBonus
// 0x000C
struct FMinigameTimeBonus
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EMinigameRank                                      RankEvent;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Nimbus.PredictedWeaponTrajectory
// 0x00E0
struct FPredictedWeaponTrajectory
{
	class AGameObject*                                 FiringObject;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) MISSED OFFSET
	bool                                               IsFired;                                                  // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              FiredTime;                                                // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartPosition;                                            // 0x0068(0x000C) (IsPlainOldData)
	struct FVector                                     EndPosition;                                              // 0x0074(0x000C) (IsPlainOldData)
	struct FLinearColor                                BaseColor;                                                // 0x0080(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0090(0x0050) MISSED OFFSET
};

// ScriptStruct Nimbus.OutOfRangeDesc
// 0x0018
struct FOutOfRangeDesc
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Transient, IsPlainOldData)
	float                                              DistSqToPlayer;                                           // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	EOutOfRangeLocatorType                             Type;                                                     // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              StealthOpacityMultiplier;                                 // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Nimbus.MissionVariableChangeHistory
// 0x0040
struct FMissionVariableChangeHistory
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UIntProperty*                                IntProperty;                                              // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	class UBoolProperty*                               BoolProperty;                                             // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	class UStrProperty*                                StrProperty;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Nimbus.KillStats
// 0x0020
struct FKillStats
{
	struct FString                                     KillName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                KillScore;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              KillTime;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsAir;                                                   // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	EGameObjectCategory                                KillCategory;                                             // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	EGameObjectSubCategory                             KillSubCategory;                                          // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	uint16_t                                           KillPilotDataID;                                          // 0x001C(0x0002) (ZeroConstructor, IsPlainOldData)
	EWeaponID                                          KillWeaponID;                                             // 0x001E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
};

// ScriptStruct Nimbus.MissionVariableEvent
// 0x0028
struct FMissionVariableEvent
{
	class UVariableComparator*                         Comparator;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
	class ALevelScriptActor*                           LevelScriptActor;                                         // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.MiniMapGridSettings
// 0x0010
struct FMiniMapGridSettings
{
	class UTexture2D*                                  BackgroundTexture;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBackgroundTextureFullMap;                              // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableBackgroundColorTint;                              // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct Nimbus.MissionIGCRequestInfo
// 0x0040
struct FMissionIGCRequestInfo
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Nimbus.MissionConditionData
// 0x0030
struct FMissionConditionData
{
	EMissionConditionType                              ConditionType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LifeTime;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Int1;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Int2;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float1;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float2;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 Object1;                                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 Object2;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class AWeaponBase*                                 Weapon;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.VariableCondition
// 0x0028
struct FVariableCondition
{
	struct FName                                       VariableName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EComparatorType                                    IntComparator;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                IntValue;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringValue;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
	bool                                               bBoolValue;                                               // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Nimbus.MiniGameLevelName
// 0x00B0
struct FMiniGameLevelName
{
	struct FString                                     LogicLevelName;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     EnvironmentLevelName;                                     // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FString                                     EnvironmentLevelName2;                                    // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FString                                     EnvironmentLevelName3;                                    // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FString                                     EnvironmentLevelName4;                                    // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FString                                     EnvironmentLevelName5;                                    // 0x0050(0x0010) (Edit, ZeroConstructor)
	struct FString                                     EnvironmentLevelName6;                                    // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FString                                     EnvironmentLevelName7;                                    // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FString                                     EnvironmentLevelName8;                                    // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FString                                     EnvironmentLevelName9;                                    // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FString                                     EnvironmentLevelName10;                                   // 0x00A0(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Nimbus.RecordReplayEventData
// 0x0050
struct FRecordReplayEventData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
	TArray<struct FKillStats>                          KillStats;                                                // 0x0040(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Nimbus.CheckPointItem
// 0x0008
struct FCheckPointItem
{
	uint64_t                                           FakePointer;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.CheckPointUnit
// 0x0018 (0x0020 - 0x0008)
struct FCheckPointUnit : public FCheckPointItem
{
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (IsPlainOldData)
};

// ScriptStruct Nimbus.CheckPointGameObject
// 0x0038 (0x0040 - 0x0008)
struct FCheckPointGameObject : public FCheckPointItem
{
	float                                              Health;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x000C(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x000C) (IsPlainOldData)
	int                                                GunCount;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MainWeaponCount;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpecialWeaponCount;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsUnidentified;                                          // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                PlayerPlaneSWP;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayerPlaneFlightDistance;                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsNotActivateOnRestart;                                  // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDestroyedChildActor;                                   // 0x003D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct Nimbus.MenuParameters
// 0x0020
struct FMenuParameters
{
	float                                              CursorPositionY;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CursorOffsetY;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceBetweenMenus;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MenuAngle;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUICategoryColor*                            IconColor;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUILayerMenuParam*                           LayerMenuParam;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.TextHidingParameters
// 0x0074
struct FTextHidingParameters
{
	float                                              StartDuration;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaitDuration;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndDuration;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartHeightRate;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndHeightRate;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BoxColorForeground;                                       // 0x0014(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                BoxColorBackground;                                       // 0x0024(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                GlowColorDarkBackground;                                  // 0x0034(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                GlowColorDarkForeground;                                  // 0x0044(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                GlowColorLightBackground;                                 // 0x0054(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                GlowColorLightForeground;                                 // 0x0064(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Nimbus.ImageHidingParameters
// 0x002C
struct FImageHidingParameters
{
	float                                              StartDuration;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaitDuration;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndDuration;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BoxColorForeground;                                       // 0x000C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                GlowColorLight;                                           // 0x001C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Nimbus.HangarPartsColorSet
// 0x0030
struct FHangarPartsColorSet
{
	struct FLinearColor                                GaugeBody;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                GaugeArms;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                GaugeMisc;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Nimbus.HangarColorParameters
// 0x02F0
struct FHangarColorParameters
{
	struct FHangarPartsColorSet                        GaugePartsLitColor;                                       // 0x0000(0x0030) (Edit, BlueprintVisible)
	struct FHangarPartsColorSet                        GaugePartsLitGlow;                                        // 0x0030(0x0030) (Edit, BlueprintVisible)
	struct FHangarPartsColorSet                        GaugePartsLitTint;                                        // 0x0060(0x0030) (Edit, BlueprintVisible)
	struct FHangarPartsColorSet                        GaugePartsUnlitColor;                                     // 0x0090(0x0030) (Edit, BlueprintVisible)
	struct FHangarPartsColorSet                        GaugePartsUnlitGlow;                                      // 0x00C0(0x0030) (Edit, BlueprintVisible)
	struct FHangarPartsColorSet                        GaugePartsUnlitTint;                                      // 0x00F0(0x0030) (Edit, BlueprintVisible)
	struct FHangarPartsColorSet                        GaugePartsConsumeColor;                                   // 0x0120(0x0030) (Edit, BlueprintVisible)
	struct FHangarPartsColorSet                        GaugePartsConsumeGlow;                                    // 0x0150(0x0030) (Edit, BlueprintVisible)
	struct FHangarPartsColorSet                        GaugePartsConsumeTint;                                    // 0x0180(0x0030) (Edit, BlueprintVisible)
	struct FHangarPartsColorSet                        GaugePartsOverColor;                                      // 0x01B0(0x0030) (Edit, BlueprintVisible)
	struct FHangarPartsColorSet                        GaugePartsOverGlow;                                       // 0x01E0(0x0030) (Edit, BlueprintVisible)
	struct FHangarPartsColorSet                        GaugePartsOverTint;                                       // 0x0210(0x0030) (Edit, BlueprintVisible)
	struct FLinearColor                                TextColorStandard;                                        // 0x0240(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                TextColorFaded;                                           // 0x0250(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FUIMenuColor                                TextColorDeficit;                                         // 0x0260(0x0020) (Edit, BlueprintVisible)
	struct FLinearColor                                UnderlayColor;                                            // 0x0280(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                UnderlayColorTree;                                        // 0x0290(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                UnderlayColorTreeMultiplay;                               // 0x02A0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                TextColorOnCursor;                                        // 0x02B0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                TextGlowOnCursor;                                         // 0x02C0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                TextColorValueOver;                                       // 0x02D0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                TextGlowValueOver;                                        // 0x02E0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Nimbus.MultiplayerTextColorParameters
// 0x00C0
struct FMultiplayerTextColorParameters
{
	struct FLinearColor                                LocalPlayerTextColor;                                     // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                LocalPlayerTextGlowColor;                                 // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                MenuGlobalTextColor;                                      // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                MenuGlobalTextGlowColor;                                  // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                HUDGlobalTextColor;                                       // 0x0040(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                HUDGlobalTextGlowColor;                                   // 0x0050(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                AllyTextColor;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                AllyTextGlowColor;                                        // 0x0070(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                EnemyTextColor;                                           // 0x0080(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                EnemyTextGlowColor;                                       // 0x0090(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                NegativeScoreColor;                                       // 0x00A0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                NegativeScoreGlowColor;                                   // 0x00B0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Nimbus.GlowParameters
// 0x0020
struct FGlowParameters
{
	struct FLinearColor                                GlowColor;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              GlowIntensity;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlowSize;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondaryGlowIntensity;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondaryGlowSize;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.BlueprintMissionVariableDelegateBinding
// 0x0030
struct FBlueprintMissionVariableDelegateBinding
{
	struct FVariableCondition                          VariableCondition;                                        // 0x0000(0x0028)
	struct FName                                       FunctionNameToBind;                                       // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.NimbusAssetLoaderRequestLoadInfo
// 0x0090
struct FNimbusAssetLoaderRequestLoadInfo
{
	TArray<class UObject*>                             LoadedObjects;                                            // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0010(0x0080) MISSED OFFSET
};

// ScriptStruct Nimbus.ControllerVibrationInterpPoint
// 0x000C
struct FControllerVibrationInterpPoint
{
	float                                              RotationalValue;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.ControllerVibrationType
// 0x0020
struct FControllerVibrationType
{
	bool                                               bLoops;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                LoopIndex;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FControllerVibrationInterpPoint>     InterpPoints;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              PSVibrationLocalScalar;                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              XBoxVibrationLocalScalar;                                 // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.MissionHitchInfo
// 0x002C
struct FMissionHitchInfo
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct Nimbus.HangarCameraNonAnimSettings
// 0x0020
struct FHangarCameraNonAnimSettings
{
	class UCurveVector*                                RotationCurveData;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FocusOffset;                                              // 0x0008(0x000C) (Edit, IsPlainOldData)
	float                                              SpringArmLength;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurveMaxTime;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.HangarSubLevelSettings
// 0x0020
struct FHangarSubLevelSettings
{
	struct FName                                       EnvironmentSubLevelName;                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LightingSubLevelName;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ExtraSubLevelName;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PersistentLongName;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.NimbusMapChangeTransitionCache
// 0x0008
struct FNimbusMapChangeTransitionCache
{
	class UNimbusCachedWorldContainer*                 MainWorldContainer;                                       // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Nimbus.NimbusMapChangeLongevityCache
// 0x0010
struct FNimbusMapChangeLongevityCache
{
	TArray<class UNimbusBundleDataAsset*>              HangarPlayerTextures;                                     // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Nimbus.NimbusMapChangeRequestInfo
// 0x0090
struct FNimbusMapChangeRequestInfo
{
	class UMapChangeTransitionDelayObject*             TransitionDelay;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0008(0x0088) MISSED OFFSET
};

// ScriptStruct Nimbus.ActiveCollisionParticleInfo
// 0x0020
struct FActiveCollisionParticleInfo
{
	struct FVector                                     LastImpactPoint;                                          // 0x0000(0x000C) (Transient, IsPlainOldData)
	float                                              LastImpactElapsedTime;                                    // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<TWeakObjectPtr<class UParticleSystemComponent>> ActiveParticles;                                          // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient)
};

// ScriptStruct Nimbus.NimbusMapChangeTravelCache
// 0x0038
struct FNimbusMapChangeTravelCache
{
	class UNimbusCachedWorldContainer*                 MainWorldContainer;                                       // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UNimbusCachedWorldContainer*                 SubWorldContainer;                                        // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      PlayerPlaneClass;                                         // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UObject*>                             PreloadAssets;                                            // 0x0018(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusCameraShakeData
// 0x0040
struct FNimbusCameraShakeData
{
	class UClass*                                      CameraShakeBP;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate_Basic;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayFPS;                                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayTPS;                                               // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayCockpit;                                           // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVRMode;                                                // 0x000F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsImpact;                                                // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsReplay;                                                // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	class UCurveFloat*                                 DistanceScaleCurve;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FovScaleCurve;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFovScaleUpdeta;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOtherCameraShake;                                    // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreStopOther;                                         // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	TArray<EControllerVibrationType>                   ControllerVibrationTypeList;                              // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Nimbus.NimbusActiveCameraShakeData
// 0x0090
struct FNimbusActiveCameraShakeData
{
	class UCameraShake*                                CameraShake;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0008(0x0088) MISSED OFFSET
};

// ScriptStruct Nimbus.RibbonWaypointData
// 0x0030
struct FRibbonWaypointData
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0010(0x0010) (IsPlainOldData)
	float                                              DistFromHead;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusRibbonSource
// 0x0070
struct FNimbusRibbonSource
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class AActor*                                      OwnerSourceActor;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	struct FVector                                     RelativeOffset;                                           // 0x0020(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x44];                                      // 0x002C(0x0044) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusTextureManagerBundleAssetInfo
// 0x0010
struct FNimbusTextureManagerBundleAssetInfo
{
	class UNimbusBundleDataAsset*                      Asset;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusTextureManagerTextureState
// 0x000C
struct FNimbusTextureManagerTextureState
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Nimbus.UIIdItem
// 0x0010
struct FUIIdItem
{
	ENimbusUIId                                        ID;                                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      UIClass;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.VFXInstance
// 0x0018
struct FVFXInstance
{
	class UParticleSystemComponent*                    Vfx;                                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowInCockpit;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bKeepParticleWhenInvisible;                               // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct Nimbus.RainLine
// 0x00D8
struct FRainLine
{
	class UParticleSystem*                             RainLineParticleSystem;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PositionOffset;                                           // 0x0008(0x000C) (Edit, IsPlainOldData)
	float                                              IgnoreGravitySpeed;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SpeedRateCurves;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FreeFallSpeed;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FreeFallThicknessRatio;                                   // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDensity;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDustTransparency;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DustTransparencyEndChangeTime;                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDensityCloud;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinThickness;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxThickness;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxThicknessCloud;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinLength;                                                // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLength;                                                // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinLengthSpeed;                                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLengthSpeed;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationInterpMargin;                                     // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverSpeedMultiplier;                                      // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    RainLinePSC;                                              // 0x0060(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0068(0x0050) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SandSmokeMaterial;                                        // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x00C0(0x0018) MISSED OFFSET
};

// ScriptStruct Nimbus.LightningStallStatus
// 0x0008
struct FLightningStallStatus
{
	float                                              IntervalTime;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsForceStall;                                            // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Nimbus.PlayerSpecialWeaponConfig
// 0x0030
struct FPlayerSpecialWeaponConfig
{
	class UClass*                                      WeaponClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxWeaponCount;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       WeaponPylonMeshName;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              WeaponPylonMeshComponent;                                 // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkAudioEvent*                               CoverOpeningSound;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CoverClosingSound;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.RadioGroupIDPostfix
// 0x0020
struct FRadioGroupIDPostfix
{
	struct FString                                     KeySpeakerID;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     RadioGroupIDPostfix;                                      // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Nimbus.DamageObjectData
// 0x0010
struct FDamageObjectData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Nimbus.CameraSettings
// 0x0090
struct FCameraSettings
{
	struct FVector                                     RelativeLocation;                                         // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FName                                       RelativeSocketName;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeSocketLocation;                                   // 0x0020(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    RelativeSocketRotation;                                   // 0x002C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              OrbitRadius;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FieldOfView;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FieldOfViewMin;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FieldOfViewMax;                                           // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShakeScale;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RelativeRotationOffsetLimit;                              // 0x004C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              RelativeRotationRate;                                     // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UCameraAnim*                                 HorizonCameraAnim;                                        // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0068(0x0028) MISSED OFFSET
};

// ScriptStruct Nimbus.StringAssetReferenceAsyncLoadRequest
// 0x0020
struct FStringAssetReferenceAsyncLoadRequest
{
	struct FSoftObjectPath                             Req;                                                      // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.MedalTextureApplication
// 0x0010
struct FMedalTextureApplication
{
	class UTexture2D*                                  Tex;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.StringAssetReferenceAsyncLoadRequestRewardMedal
// 0x0020
struct FStringAssetReferenceAsyncLoadRequestRewardMedal
{
	struct FSoftObjectPath                             Req;                                                      // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.TextureApplicationRewardScrollboxMedal
// 0x0010
struct FTextureApplicationRewardScrollboxMedal
{
	class UTexture2D*                                  Tex;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.EventStatValue
// 0x0060
struct FEventStatValue
{
	struct FString                                     EventName;                                                // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TMap<struct FName, float>                          OnlineEventParms;                                         // 0x0010(0x0050) (ZeroConstructor, SaveGame)
};

// ScriptStruct Nimbus.SystemSaveData
// 0x0060
struct FSystemSaveData
{
	bool                                               bIsEulaAgreed;                                            // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsMusicPlayerUnlocked;                                   // 0x0001(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FDateTime                                   CreationDateTime;                                         // 0x0008(0x0008) (SaveGame)
	struct FDateTime                                   LastSavedDateTime;                                        // 0x0010(0x0008) (SaveGame)
	struct FDateTime                                   CreationDateTimeUTC;                                      // 0x0018(0x0008) (SaveGame)
	struct FDateTime                                   LastSavedDateTimeUTC;                                     // 0x0020(0x0008) (SaveGame)
	unsigned char                                      TutorialFlagMask;                                         // 0x0028(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	uint32_t                                           WatchedStoreVersion;                                      // 0x002C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FEventStatValue>                     PendingEventStatList;                                     // 0x0030(0x0010) (ZeroConstructor, SaveGame)
	uint64_t                                           TotalOfflinePlayTimeSec;                                  // 0x0040(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint64_t                                           TotalOfflineMRPEarned;                                    // 0x0048(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<int>                                        SceneViewerUnlocked;                                      // 0x0050(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct Nimbus.OptionsSaveData
// 0x00C0
struct FOptionsSaveData
{
	EOptionsControlTypes                               ControlType;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsHighGTurnTypes                             HighGTurnType;                                            // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsFlightAssistOn;                                        // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsVibrationOn;                                           // 0x0003(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsLeftStickReversed;                                     // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsRightStickReversed;                                    // 0x0005(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsAccelerationYawReversed;                               // 0x0006(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsRadarMapWeaponSwitchingTypes               RadarMapWeaponSwitchingType;                              // 0x0007(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       PitchDownKey;                                             // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       PitchUpKey;                                               // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       RollLeftKey;                                              // 0x000A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       RollRightKey;                                             // 0x000B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       YawLeftKey;                                               // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       YawRightKey;                                              // 0x000D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ThrottleUpKey;                                            // 0x000E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ThrottleDownKey;                                          // 0x000F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       FireMachineGunKey;                                        // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       FireMissileKey;                                           // 0x0011(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChangeWeaponKey;                                          // 0x0012(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       CameraCtrlKey;                                            // 0x0013(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       CameraUpKey;                                              // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       CameraDownKey;                                            // 0x0015(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       CameraLeftKey;                                            // 0x0016(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       CameraRightKey;                                           // 0x0017(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       AutoPilotKey;                                             // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       FireNormalMissileKey;                                     // 0x0019(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       FireSpecialWeaponKey;                                     // 0x001A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChangeThirdViewKey;                                       // 0x001B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChangeFirstViewKey;                                       // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChangeCockpitViewKey;                                     // 0x001D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChangeViewKey;                                            // 0x001E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       FlaresKey;                                                // 0x001F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       TrackTargetKey;                                           // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ToggleRadarMapDisplayKey;                                 // 0x0021(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ToggleRadarMapDisplayRevKey;                              // 0x0022(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       SwitchTargetKey;                                          // 0x0023(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenuKey;                                              // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenuUpKey;                                            // 0x0025(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenuDownKey;                                          // 0x0026(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenuOffKey;                                           // 0x0027(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu01Key;                                            // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu02Key;                                            // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu03Key;                                            // 0x002A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu04Key;                                            // 0x002B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu05Key;                                            // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu06Key;                                            // 0x002D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu07Key;                                            // 0x002E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu08Key;                                            // 0x002F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu09Key;                                            // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu10Key;                                            // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu11Key;                                            // 0x0032(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu12Key;                                            // 0x0033(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ThrottleUpDownKey;                                        // 0x0034(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       PitchDownKey2;                                            // 0x0035(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       PitchUpKey2;                                              // 0x0036(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       RollLeftKey2;                                             // 0x0037(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       RollRightKey2;                                            // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       YawLeftKey2;                                              // 0x0039(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       YawRightKey2;                                             // 0x003A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ThrottleUpKey2;                                           // 0x003B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ThrottleDownKey2;                                         // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       FireMachineGunKey2;                                       // 0x003D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       FireMissileKey2;                                          // 0x003E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChangeWeaponKey2;                                         // 0x003F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       CameraCtrlKey2;                                           // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       CameraUpKey2;                                             // 0x0041(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       CameraDownKey2;                                           // 0x0042(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       CameraLeftKey2;                                           // 0x0043(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       CameraRightKey2;                                          // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       AutoPilotKey2;                                            // 0x0045(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       FireNormalMissileKey2;                                    // 0x0046(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       FireSpecialWeaponKey2;                                    // 0x0047(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChangeThirdViewKey2;                                      // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChangeFirstViewKey2;                                      // 0x0049(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChangeCockpitViewKey2;                                    // 0x004A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChangeViewKey2;                                           // 0x004B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       FlaresKey2;                                               // 0x004C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       TrackTargetKey2;                                          // 0x004D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ToggleRadarMapDisplayKey2;                                // 0x004E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ToggleRadarMapDisplayRevKey2;                             // 0x004F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       SwitchTargetKey2;                                         // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenuKey2;                                             // 0x0051(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenuUpKey2;                                           // 0x0052(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenuDownKey2;                                         // 0x0053(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenuOffKey2;                                          // 0x0054(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu01Key2;                                           // 0x0055(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu02Key2;                                           // 0x0056(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu03Key2;                                           // 0x0057(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu04Key2;                                           // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu05Key2;                                           // 0x0059(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu06Key2;                                           // 0x005A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu07Key2;                                           // 0x005B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu08Key2;                                           // 0x005C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu09Key2;                                           // 0x005D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu10Key2;                                           // 0x005E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu11Key2;                                           // 0x005F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ChatMenu12Key2;                                           // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsKeys                                       ThrottleUpDownKey2;                                       // 0x0061(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsMouseEnable;                                           // 0x0062(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsMouseStickReversed;                                    // 0x0063(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsMouseCameraReversed;                                   // 0x0064(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              MouseSensitivity;                                         // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              MouseCameraSensitivity;                                   // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsFlightStickRightStickReversed;                         // 0x0070(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsHudDisplayOn;                                          // 0x0071(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsDistanceUnits                              DistanceUnit;                                             // 0x0072(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsRadioSubtitlesOn;                                      // 0x0073(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsCutsceneSubtitlesOn;                                   // 0x0074(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	float                                              Brightness;                                               // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                ResolutionWidth;                                          // 0x007C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                ResolutionHeight;                                         // 0x0080(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsVSyncOn;                                               // 0x0084(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsFrameRate                                  FrameRate;                                                // 0x0085(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsBloomOn;                                               // 0x0086(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsBlurOn;                                                // 0x0087(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsWindowMode                                 WindowMode;                                               // 0x0088(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsAntialiasOn;                                           // 0x0089(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsAnisotropicFilter                          AnisotropicFilter;                                        // 0x008A(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsQuarity                                    TextureQuality;                                           // 0x008B(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsAmbientOcclusionOn;                                    // 0x008C(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsQuarity                                    ViewDistance;                                             // 0x008D(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsColorBlindOn;                                          // 0x008E(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsScreenSetting                              ScreenSettingSteam;                                       // 0x008F(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsDrawPreset                                 DrawPresetSteam;                                          // 0x0090(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsDrawScale                                  DrawScaleSteam;                                           // 0x0091(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsDistance                                   DrawDistanceSteam;                                        // 0x0092(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsAnisotropicFilter                          AnisotropicFilterSteam;                                   // 0x0093(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsAntialias                                  AntialiasSteam;                                           // 0x0094(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsAmbientOcclusionOnSteam;                               // 0x0095(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsQuarity                                    ShadowSteam;                                              // 0x0096(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsQuarity                                    TextureSteam;                                             // 0x0097(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsQuarity                                    EffectSteam;                                              // 0x0098(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsQuarity                                    PostprocessSteam;                                         // 0x0099(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	float                                              SFXVolume;                                                // 0x009C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              BGMVolume;                                                // 0x00A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              VoiceVolume;                                              // 0x00A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	EOptionsVoiceChat                                  VoiceChat;                                                // 0x00A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              VoiceChatVolume;                                          // 0x00AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	ELanguages                                         VoiceLanguage;                                            // 0x00B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	ELanguages                                         SubtitleLanguage;                                         // 0x00B1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsModified;                                              // 0x00B2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsNotFirstPlay;                                          // 0x00B3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET
};

// ScriptStruct Nimbus.UnlockSaveData
// 0x0008
struct FUnlockSaveData
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsActivated;                                             // 0x0004(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EMissionCategory                                   Category;                                                 // 0x0005(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	ECAActionType                                      ActionType;                                               // 0x0006(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
};

// ScriptStruct Nimbus.CommonSaveData
// 0x01C8
struct FCommonSaveData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FUnlockSaveData>                     UnlockData;                                               // 0x0008(0x0010) (ZeroConstructor, SaveGame)
	uint64_t                                           TotalPlayTimeSec;                                         // 0x0018(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<uint32_t>                                   UnlockedMedalIdList;                                      // 0x0020(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   UnlockedRewardsMedalIdList;                               // 0x0030(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   NewlyUnlockedMedalIdList;                                 // 0x0040(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   UnlockedSkinIdList;                                       // 0x0050(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   UnlockedRewardsSkinIdList;                                // 0x0060(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   NewlyUnlockedSkinIdList;                                  // 0x0070(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   UnlockedEmblemIdList;                                     // 0x0080(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   UnlockedRewardsEmblemIdList;                              // 0x0090(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   NewlyUnlockedEmblemIdList;                                // 0x00A0(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   UnlockedNicknameIdList;                                   // 0x00B0(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   UnlockedRewardsNicknameIdList;                            // 0x00C0(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   NewlyUnlockedNicknameIdList;                              // 0x00D0(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   UnlockedRewardsAircrafts;                                 // 0x00E0(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   UnlockedRewardsWeapons;                                   // 0x00F0(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   UnlockedAircraftTreeNodeIDs;                              // 0x0100(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   NewlyUnlockedAircraftTreeNodeIDs;                         // 0x0110(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   NewlyIconUnlockedAircraftTreeNodeIDs;                     // 0x0120(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   PurchasedAircrafts;                                       // 0x0130(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   NewlyPurchasedAircrafts;                                  // 0x0140(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   PurchasedWeapons;                                         // 0x0150(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   NewlyPurchasedWeapons;                                    // 0x0160(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   PurchasedParts;                                           // 0x0170(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   NewlyPurchasedParts;                                      // 0x0180(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   DefeatedPilotDataIdList;                                  // 0x0190(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   SeenPilotDataIdList;                                      // 0x01A0(0x0010) (ZeroConstructor, SaveGame)
	uint64_t                                           CurrentMRP;                                               // 0x01B0(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint64_t                                           TotalMRP;                                                 // 0x01B8(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                LastCameraViewType;                                       // 0x01C0(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.AircraftTypeSaveData
// 0x0038
struct FAircraftTypeSaveData
{
	int                                                PlaneID;                                                  // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	EPlaneCategory                                     PlaneCategory;                                            // 0x0004(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	uint64_t                                           FlightDistance;                                           // 0x0008(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint64_t                                           FlightTimeMilli;                                          // 0x0010(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           SortieCount;                                              // 0x0018(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           EnemyPlayerDestroyedCount;                                // 0x001C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           AerialEnemyDestroyedCount;                                // 0x0020(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           GroundEnemyDestroyedCount;                                // 0x0024(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           UAVEnemyDestroyedCount;                                   // 0x0028(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           NavalEnemyDestroyedCount;                                 // 0x002C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           HelicopterEnemyDestroyedCount;                            // 0x0030(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           AirObjectDestroyedCount;                                  // 0x0034(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Nimbus.WeaponTypeSaveData
// 0x0020
struct FWeaponTypeSaveData
{
	int                                                WeaponType;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           DestructionCount;                                         // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           AerialEnemyDestroyedCount;                                // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           GroundEnemyDestroyedCount;                                // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           UAVEnemyDestroyedCount;                                   // 0x0010(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           NavalEnemyDestroyedCount;                                 // 0x0014(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           HelicopterEnemyDestroyedCount;                            // 0x0018(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           AirObjectDestroyedCount;                                  // 0x001C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Nimbus.CampaignProgressionSaveData
// 0x0040
struct FCampaignProgressionSaveData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FAircraftTypeSaveData>               AircraftTypeRecords;                                      // 0x0008(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FWeaponTypeSaveData>                 WeaponTypeRecords;                                        // 0x0018(0x0010) (ZeroConstructor, SaveGame)
	uint32_t                                           CompletionCount;                                          // 0x0028(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	uint64_t                                           MRP;                                                      // 0x0030(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint64_t                                           AccumulatedMRP;                                           // 0x0038(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Nimbus.DifficultyClearRecordSaveData
// 0x000C
struct FDifficultyClearRecordSaveData
{
	uint32_t                                           CompletionTimeMilli;                                      // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           CompletionScore;                                          // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           CompletionTimeMilliForRank;                               // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Nimbus.DifficultySaveData
// 0x0018
struct FDifficultySaveData
{
	unsigned char                                      DifficultyLevel;                                          // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EMissionRank                                       HighestRank;                                              // 0x0001(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	uint32_t                                           SortieCount;                                              // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FDifficultyClearRecordSaveData>      RecordList;                                               // 0x0008(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct Nimbus.MissionSaveData
// 0x0030
struct FMissionSaveData
{
	int                                                MissionID;                                                // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FDifficultySaveData>                 DifficultyList;                                           // 0x0008(0x0010) (ZeroConstructor, SaveGame)
	bool                                               bIsDamaged;                                               // 0x0018(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsUsedMissile;                                           // 0x0019(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EMissionRank                                       LastRank;                                                 // 0x001A(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	struct FDifficultyClearRecordSaveData              LastRecord;                                               // 0x001C(0x000C) (SaveGame)
	bool                                               bIsMiniGameAccomplished;                                  // 0x0028(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Nimbus.AircraftSetSaveData
// 0x0030
struct FAircraftSetSaveData
{
	unsigned char                                      EmblemFlags;                                              // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PlaneID;                                                  // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                WeaponNo;                                                 // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                EmblemID;                                                 // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SkinNo;                                                   // 0x0010(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                NicknameID;                                               // 0x0014(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<int>                                        EnabledPartIDs;                                           // 0x0018(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.CampaignSaveData
// 0x00E0 (0x0120 - 0x0040)
struct FCampaignSaveData : public FCampaignProgressionSaveData
{
	int                                                LastCompletedMissionId;                                   // 0x0040(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	EGameDifficulty                                    LastGameDifficulty;                                       // 0x0044(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	uint64_t                                           AccumulatedScore;                                         // 0x0048(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TMap<uint32_t, uint64_t>                           AccumulatedScoreByMission;                                // 0x0050(0x0050) (ZeroConstructor, SaveGame)
	TArray<struct FMissionSaveData>                    CompletedMissionList;                                     // 0x00A0(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        UnlockedMissionIdList;                                    // 0x00B0(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        UnlockedFreeMissionIdList;                                // 0x00C0(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   DefeatedPilotDataID;                                      // 0x00D0(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   SeenPilotDataID;                                          // 0x00E0(0x0010) (ZeroConstructor, SaveGame)
	TArray<uint32_t>                                   UnlockedSceneID;                                          // 0x00F0(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FAircraftSetSaveData>                AircraftSets;                                             // 0x0100(0x0010) (ZeroConstructor, SaveGame)
	uint16_t                                           FeatureFlagMask;                                          // 0x0110(0x0002) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0112(0x0002) MISSED OFFSET
	uint32_t                                           FeatureNotificationFlagMask;                              // 0x0114(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      MiscFlagMask;                                             // 0x0118(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	int                                                LastSortingAircraftId;                                    // 0x011C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Nimbus.MPStageSaveData
// 0x0038
struct FMPStageSaveData
{
	uint32_t                                           StageID;                                                  // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           Destroys[0x2];                                            // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           SortieCounts[0x2];                                        // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	uint64_t                                           TotalScores[0x2];                                         // 0x0018(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint64_t                                           AccumulatedMMR[0x2];                                      // 0x0028(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Nimbus.OnlineSaveData
// 0x00A0 (0x00E0 - 0x0040)
struct FOnlineSaveData : public FCampaignProgressionSaveData
{
	TArray<struct FAircraftSetSaveData>                AircraftSets;                                             // 0x0040(0x0010) (ZeroConstructor, SaveGame)
	TArray<unsigned char>                              SortieAircraftHistory;                                    // 0x0050(0x0010) (ZeroConstructor, SaveGame)
	int8_t                                             AircraftSetInLastBattle;                                  // 0x0060(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	uint32_t                                           FirstPlacingCountInBattleRoyal;                           // 0x0064(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           MVPCountInTeamDeathMatch;                                 // 0x0068(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           VictoryCountInTeamDeathMatch;                             // 0x006C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<uint32_t>                                   MedalEvaluationCount;                                     // 0x0070(0x0010) (ZeroConstructor, SaveGame)
	uint32_t                                           MatchMakingRanking;                                       // 0x0080(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           RankingPoint;                                             // 0x0084(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      RankID;                                                   // 0x0088(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	uint32_t                                           AceLevel;                                                 // 0x008C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<uint16_t>                                   InstantRadioSetup;                                        // 0x0090(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        ChatHistoryID;                                            // 0x00A0(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FMPStageSaveData>                    StageRecords;                                             // 0x00B0(0x0010) (ZeroConstructor, SaveGame)
	struct FDateTime                                   CreationDateTime;                                         // 0x00C0(0x0008) (SaveGame)
	struct FDateTime                                   LastSavedDateTime;                                        // 0x00C8(0x0008) (SaveGame)
	struct FDateTime                                   CreationDateTimeUTC;                                      // 0x00D0(0x0008) (SaveGame)
	struct FDateTime                                   LastSavedDateTimeUTC;                                     // 0x00D8(0x0008) (SaveGame)
};

// ScriptStruct Nimbus.AdditionalSoundChannelParams
// 0x0004
struct FAdditionalSoundChannelParams
{
	float                                              CloudDensity;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.SubmarineDamagedVFXInfo
// 0x00B0
struct FSubmarineDamagedVFXInfo
{
	bool                                               bShowWhenSocketHitsSurface;                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       TriggerSocketName;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TriggerSocketPositionOffset;                              // 0x0010(0x000C) (Edit, IsPlainOldData)
	float                                              Delay;                                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldStayOnSurface;                                     // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldMoveOnSurface;                                     // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	class UParticleSystem*                             DamagedVFX;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PositionOffset;                                           // 0x0038(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0044(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0050(0x000C) (Edit, IsPlainOldData)
	float                                              ImpulseStrength;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseRadius;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyWhenOtherSocketHitsSurface;                       // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FName                                       DestroySocketName;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DestroySocketPositionOffset;                              // 0x0078(0x000C) (Edit, IsPlainOldData)
	bool                                               bPlayCameraShakeEnable;                                   // 0x0084(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ENimbusCameraShakeType                             SpawnCameraShakeType;                                     // 0x0085(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplySeaSpray;                                           // 0x0086(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESoundChannelType                                  SoundToPlayOnShowVFX;                                     // 0x0087(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     LoopSoundToPlayOnShowVFX;                                 // 0x0088(0x0010) (Edit, ZeroConstructor)
	struct FSeaExplosionInfo                           SeaExplosionInfo;                                         // 0x0098(0x0008) (Edit)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
	class UParticleSystemComponent*                    Component;                                                // 0x00A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Nimbus.SubmarineDamagedStateVfxPendingInfo
// 0x0008
struct FSubmarineDamagedStateVfxPendingInfo
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timer;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.SubmarineDamagedStateInstance
// 0x0010 (0x0080 - 0x0070)
struct FSubmarineDamagedStateInstance : public FDamagedStateInstance
{
	TArray<struct FSubmarineDamagedStateVfxPendingInfo> PendingVfxList;                                           // 0x0068(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.SubmarinePartsDamageVFXInfo
// 0x0070
struct FSubmarinePartsDamageVFXInfo
{
	struct FName                                       PartsName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bObjectiveTargetParts;                                    // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UParticleSystem*                             Vfx;                                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0020(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x002C(0x000C) (Edit, IsPlainOldData)
	float                                              Delay;                                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSeaSurfaceCheck;                                         // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHorizontalPitch;                                         // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	float                                              AutoDeactivateTime;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AutoDeactivateTimeAfterObjectiveClear;                    // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FloatParameterName;                                       // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Component;                                                // 0x0050(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AGameObject*                                 GameObject;                                               // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SpawnTimer;                                               // 0x0060(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DeactivateTimer;                                          // 0x0064(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDone;                                                    // 0x0068(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct Nimbus.BarrierDroneInfo
// 0x0018
struct FBarrierDroneInfo
{
	class AAIHeli*                                     BarrierDrone;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaseLocationOffset;                                       // 0x0008(0x000C) (IsPlainOldData)
	int                                                SocketIndex;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.BarrierDroneSocketInfo
// 0x0010
struct FBarrierDroneSocketInfo
{
	class AAIHeli*                                     BarrierDrone;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.SubmarineSeaVFXInfo
// 0x0078
struct FSubmarineSeaVFXInfo
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SeaCheckOffset;                                           // 0x0008(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UParticleSystem*                             Vfx;                                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0020(0x000C) (Edit, IsPlainOldData)
	float                                              VFXDuration;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0030(0x0005) MISSED OFFSET
	bool                                               bAttach;                                                  // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESubmarineSeaVFXReferenceAngle                     ReferenceAngle;                                           // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0037(0x0001) MISSED OFFSET
	struct FRotator                                    RotateOffset;                                             // 0x0038(0x000C) (Edit, IsPlainOldData)
	ESubmarineSeaVFXSpawnPoint                         StartingPoint;                                            // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FVector                                     LocationOffset;                                           // 0x0048(0x000C) (Edit, IsPlainOldData)
	ESoundChannelType                                  PlaySoundType;                                            // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x13];                                      // 0x0055(0x0013) MISSED OFFSET
	class UParticleSystemComponent*                    Component;                                                // 0x0068(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // 0x0070(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Nimbus.SubmarineTrailVFXInfo
// 0x0060
struct FSubmarineTrailVFXInfo
{
	bool                                               bEnableSpeedRange;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              SpeedRangeMin;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedRangeMax;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UParticleSystem*                             Vfx;                                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ESubmarineTrailVFXStatus                           Conditions;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0028(0x000C) (Edit, IsPlainOldData)
	ESubmarineTrailVFXSpawnPoint                       SpawnPoint;                                               // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	class UCurveFloat*                                 NoseLiftOffSetCurve;                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	class UParticleSystemComponent*                    TrailParticleComponent;                                   // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // 0x0050(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AActor*                                      Owner;                                                    // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Nimbus.CloudVisibilityTime
// 0x000C
struct FCloudVisibilityTime
{
	float                                              CloudDensity;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VisibleDuration;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InvisibleDuration;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.CloudVisibilityDistance
// 0x0010
struct FCloudVisibilityDistance
{
	float                                              MaxDistanceMeters;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InvisibleDurationTimePercent;                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.IdentificationSetting
// 0x0010
struct FIdentificationSetting
{
	float                                              MaxDistanceMeters;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IdentifyTime;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.IdentificationConeSetting
// 0x000C
struct FIdentificationConeSetting
{
	float                                              MaxAngle;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IdentifySpeedMultiplier;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.CustomizedTextInfo
// 0x0060
struct FCustomizedTextInfo
{
	ELanguages                                         Language;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSlateFontInfo                              FontInfo;                                                 // 0x0008(0x0058) (Edit)
};

// ScriptStruct Nimbus.AnimatedText
// 0x0030
struct FAnimatedText
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateVisibleOnly;                                      // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              SecondsDelayBeforeAnimate;                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableFadeAnimation;                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              SecondsIntervalBtweenCharacters;                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCursorAnimation;                                   // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              CursorAnimSeconds;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CursorAnimCounts;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeInSeconds;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct Nimbus.FormationSlot
// 0x0020
struct FFormationSlot
{
	struct FVector                                     RelativeLocation;                                         // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x000C(0x000C) (IsPlainOldData)
	class AAIGameObject*                               TenantGameObject;                                         // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.UnitChildActor
// 0x0010
struct FUnitChildActor
{
	class AAIGameObject*                               ParentObject;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ChildActorComponentName;                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.UserWidgetAnimationInfo
// 0x0020
struct FUserWidgetAnimationInfo
{
	struct FText                                       AnimationName;                                            // 0x0000(0x0018) (Edit, BlueprintVisible)
	class UWidgetAnimation*                            UmgAnimation;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Nimbus.HugeMedalInstance
// 0x0018
struct FHugeMedalInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Nimbus.ThumbnailMedalParameter
// 0x0058
struct FThumbnailMedalParameter
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
	class UMaterialInstanceDynamic*                    GrayedMedalMaterial;                                      // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTexture2D*                                  MedalTexture;                                             // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.HugeMedalParameter
// 0x0048
struct FHugeMedalParameter
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	class UMaterialInstanceDynamic*                    GrayedMedalMaterial;                                      // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTexture2D*                                  MedalTexture;                                             // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.MedalViewerParameter
// 0x00A0
struct FMedalViewerParameter
{
	struct FThumbnailMedalParameter                    ThumbnailMedal;                                           // 0x0000(0x0058) (Transient)
	struct FHugeMedalParameter                         HugeMedal;                                                // 0x0058(0x0048) (Transient)
};

// ScriptStruct Nimbus.HugePilotDataInstance
// 0x0018
struct FHugePilotDataInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Nimbus.ThumbnailPilotDataParameter
// 0x0058
struct FThumbnailPilotDataParameter
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
	class UMaterialInstanceDynamic*                    GrayedPilotDataMaterial;                                  // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTexture2D*                                  PilotDataTexture;                                         // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.HugePilotDataParameter
// 0x0048
struct FHugePilotDataParameter
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	class UMaterialInstanceDynamic*                    GrayedPilotDataMaterial;                                  // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTexture2D*                                  PilotDataTexture;                                         // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.PilotDataViewerParameter
// 0x00A0
struct FPilotDataViewerParameter
{
	struct FThumbnailPilotDataParameter                ThumbnailPilotDatas;                                      // 0x0000(0x0058) (Transient)
	struct FHugePilotDataParameter                     HugePilotData;                                            // 0x0058(0x0048) (Transient)
};

// ScriptStruct Nimbus.EquippedWeaponConfig
// 0x0088
struct FEquippedWeaponConfig
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
	class UWeaponParameters*                           WeaponParameters;                                         // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0050(0x0038) MISSED OFFSET
};

// ScriptStruct Nimbus.UAVWeaponData
// 0x0040
struct FUAVWeaponData
{
	class UClass*                                      SpawnWeaponClass;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShotRange;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShotIntervalTime;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DeviationShootingCurve;                                   // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                ShootingPositionOffsetCurve;                              // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DeviationShootingCurve_Ground;                            // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                ShootingPositionOffsetCurve_Ground;                       // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShootingPositionOffset_OrientationRandom;                // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0031(0x000F) MISSED OFFSET
};

// ScriptStruct Nimbus.AIFlaresConfig
// 0x0010 (0x0018 - 0x0008)
struct FAIFlaresConfig : public FTableRowBase
{
	float                                              EffectiveRange;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReloadTime;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.AIASTiltingDOCMMoveData
// 0x0020
struct FAIASTiltingDOCMMoveData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AAIGameObject*                               MoveObject;                                               // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCurveVector*                                LocationCurve;                                            // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCurveVector*                                RotationCurve;                                            // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Nimbus.WeaponExplosionDurabilityDataTable
// 0x0008 (0x0010 - 0x0008)
struct FWeaponExplosionDurabilityDataTable : public FTableRowBase
{
	EWeaponID                                          WeaponID;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Durability;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.AIPilotConfig
// 0x0018 (0x0020 - 0x0008)
struct FAIPilotConfig : public FTableRowBase
{
	EPilotAttribute                                    Attribute;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Rookie;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Normal;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Veteran;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ace;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rival;                                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.AIPlaneConfigModifier
// 0x0028 (0x0030 - 0x0008)
struct FAIPlaneConfigModifier : public FTableRowBase
{
	float                                              PitchSpeedModifier;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollSpeedModifier;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawSpeedModifier;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedNormalModifier;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMaxModifier;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMinModifier;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedTurnModifier;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationModifier;                                     // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationModifier;                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.AIPlaneConfig
// 0x0028 (0x0030 - 0x0008)
struct FAIPlaneConfig : public FTableRowBase
{
	float                                              PitchSpeed;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollSpeed;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawSpeed;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedNormal;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMax;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMin;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedTurn;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Deceleration;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.AircraftTreeLinkTable
// 0x0018 (0x0020 - 0x0008)
struct FAircraftTreeLinkTable : public FTableRowBase
{
	int                                                GroupSrcID;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GroupDstID;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Waypoints;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.AircraftTreeNodeTable
// 0x0050 (0x0058 - 0x0008)
struct FAircraftTreeNodeTable : public FTableRowBase
{
	struct FIntPoint                                   Position;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EAircraftTreeNodeClass                             Class;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                GroupID;                                                  // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReferenceID;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LockID;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Cost;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Cost1;                                                    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Cost2;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Hidden;                                                   // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct Nimbus.AircraftViewerDataTable
// 0x0088 (0x0090 - 0x0008)
struct FAircraftViewerDataTable : public FTableRowBase
{
	int                                                AircraftViewerID;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     PlaneStringID;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FString                                     HangarSubLevelName;                                       // 0x0020(0x0010) (Edit, ZeroConstructor)
	float                                              PlayerCamControlSpeed;                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerCamViewAngleOffset;                                 // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerCamLookDistOffsetDefault;                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerCamLookDistOffsetMin;                               // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerCamLookDistOffsetMax;                               // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerCamFovDefault;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerCamFovOffsetMin;                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerCamFovOffsetMax;                                    // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerCamPitchMin;                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerCamPitchMax;                                        // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InitialCameraSphericalCoordinate;                         // 0x0058(0x0008) (Edit, IsPlainOldData)
	struct FVector                                     AxisDistanceScale;                                        // 0x0060(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     TargetPositionOffset;                                     // 0x006C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     CameraInitialPanningDistance;                             // 0x0078(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     WeaponViewCamLookDistScale;                               // 0x0084(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct Nimbus.AnimFlightEngineBoneConfig
// 0x0010 (0x0018 - 0x0008)
struct FAnimFlightEngineBoneConfig : public FTableRowBase
{
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FlightEngineOuputName;                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.AnimNode_AltitudeIndicator
// 0x0070 (0x00E0 - 0x0070)
struct FAnimNode_AltitudeIndicator : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0070(0x0018) (Edit, BlueprintVisible)
	bool                                               bEnablePitchControl;                                      // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRollControl;                                       // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x56];                                      // 0x008A(0x0056) MISSED OFFSET
};

// ScriptStruct Nimbus.FlightEngineMainSequence
// 0x0008
struct FFlightEngineMainSequence
{
	class UAnimSequence*                               Sequence;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.BoneOverrideSequence
// 0x0010
struct FBoneOverrideSequence
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               OverrideSequence;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.AnimNode_FlightEngineBlend
// 0x01D0 (0x0200 - 0x0030)
struct FAnimNode_FlightEngineBlend : public FAnimNode_Base
{
	bool                                               IsCockpitAnim;                                            // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UDataTable*                                  BoneConfig;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFlightEngineMainSequence                   SequenceConfig;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<struct FBoneOverrideSequence>               OverrideSequences;                                        // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x1A8];                                     // 0x0058(0x01A8) MISSED OFFSET
};

// ScriptStruct Nimbus.WeaponParamModifiers
// 0x0038 (0x0040 - 0x0008)
struct FWeaponParamModifiers : public FTableRowBase
{
	float                                              Damage;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoadTime;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HomingForesightAmount;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrailTime;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FCSAngleLimit;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FCSActivationTime;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FCSVolleyTime;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FCSVolleyFireInterval;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FCSVolleyRestInterval;                                    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FCSForesightAmount;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FCSActivationDist;                                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LockonRange;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetSelectionMidRange;                                  // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Nimbus.WeaponParamModifiers_EXPLOSIVE
// 0x0018 (0x0058 - 0x0040)
struct FWeaponParamModifiers_EXPLOSIVE : public FWeaponParamModifiers
{
	float                                              ImpactRadius;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AreaOfEffectDamage;                                       // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialSpeed;                                             // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IgnitionInitialSpeed;                                     // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreefallAcceleration;                                     // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Nimbus.WeaponParamModifiers_ARTILLERY
// 0x0008 (0x0060 - 0x0058)
struct FWeaponParamModifiers_ARTILLERY : public FWeaponParamModifiers_EXPLOSIVE
{
	float                                              SpreadRadius;                                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.BannedUserList
// 0x0014
struct FBannedUserList
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Nimbus.PassSoundDistanceRow
// 0x0008 (0x0010 - 0x0008)
struct FPassSoundDistanceRow : public FTableRowBase
{
	float                                              DistanceMeters;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.WeaponParamModifiers_BOMB
// 0x0008 (0x0060 - 0x0058)
struct FWeaponParamModifiers_BOMB : public FWeaponParamModifiers_EXPLOSIVE
{
	float                                              MaxHomingAngle;                                           // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnAngleLimit;                                          // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Nimbus.BriefingCloudHeightDataTable
// 0x0058 (0x0060 - 0x0008)
struct FBriefingCloudHeightDataTable : public FTableRowBase
{
	int                                                MissionID;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     MissionStringID;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Cloud_1_Height;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_2_Height;                                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_3_Height;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_4_Height;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_5_Height;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_6_Height;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_7_Height;                                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_8_Height;                                           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_9_Height;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_10_Height;                                          // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_11_Height;                                          // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_12_Height;                                          // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_13_Height;                                          // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_14_Height;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_15_Height;                                          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_16_Height;                                          // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.DeathCross
// 0x0010
struct FDeathCross
{
	class AStaticMeshActor*                            Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Countdown;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.DestroyTypeData
// 0x0020
struct FDestroyTypeData
{
	struct FString                                     UnitType;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   DebriefUnitDataIndex;                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Nimbus.CompassWidgetHandler
// 0x00D0
struct FCompassWidgetHandler
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
};

// ScriptStruct Nimbus.ConditionActionDataTable
// 0x0310 (0x0318 - 0x0008)
struct FConditionActionDataTable : public FTableRowBase
{
	struct FString                                     Description;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter0Mode;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter1ConditionType;                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter1Name;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter1Relation;                                       // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter1Value;                                          // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter1Comments;                                       // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter2ConditionType;                                  // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter2Name;                                           // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter2Relation;                                       // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter2Value;                                          // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter2Comments;                                       // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter3ConditionType;                                  // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter3Name;                                           // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter3Relation;                                       // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter3Value;                                          // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter3Comments;                                       // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter4ConditionType;                                  // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter4Name;                                           // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter4Relation;                                       // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter4Value;                                          // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter4Comments;                                       // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter5ConditionType;                                  // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter5Name;                                           // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter5Relation;                                       // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter5Value;                                          // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Parameter5Comments;                                       // 0x01A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LocalizedDescriptionIDLocked;                             // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LocalizedDescriptionIDUnlocked;                           // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LocalizedDescriptionIDGetItem;                            // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Action1Type;                                              // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Action1Value;                                             // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Action1Comments;                                          // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Action2Type;                                              // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Action2Value;                                             // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Action2Comments;                                          // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Action3Type;                                              // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Action3Value;                                             // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Action3Comments;                                          // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Action4Type;                                              // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Action4Value;                                             // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Action4Comments;                                          // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Action5Type;                                              // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Action5Value;                                             // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Action5Comments;                                          // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     StartDate;                                                // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     StartTime;                                                // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EndDate;                                                  // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EndTime;                                                  // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.ConditionActionEntry
// 0x0038
struct FConditionActionEntry
{
	bool                                               bIsActivated;                                             // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsActivatedNow;                                          // 0x0001(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	uint32_t                                           ID;                                                       // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<bool>                                       ConditionActivatedList;                                   // 0x0008(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct Nimbus.ConditionActionSaveData
// 0x0010
struct FConditionActionSaveData
{
	TArray<struct FConditionActionEntry>               ConditionActionEntryList;                                 // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct Nimbus.SurfaceCollisionVfxTable
// 0x0030 (0x0038 - 0x0008)
struct FSurfaceCollisionVfxTable : public FTableRowBase
{
	struct FString                                     PhysicsMaterialType;                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PositionOffset;                                           // 0x0020(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x002C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Nimbus.DamagedVFXSocketDataTable
// 0x0038 (0x0040 - 0x0008)
struct FDamagedVFXSocketDataTable : public FTableRowBase
{
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Type;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PositionOffset;                                           // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0034(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Nimbus.DLCDataTable
// 0x0038 (0x0040 - 0x0008)
struct FDLCDataTable : public FTableRowBase
{
	struct FString                                     PS4Entitlement;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SteamDLCAppID;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     XBoxOneProductID;                                         // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.EmblemDataTable
// 0x0038 (0x0040 - 0x0008)
struct FEmblemDataTable : public FTableRowBase
{
	int                                                EmblemID;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EEmblemCategory                                    EmblemCategory;                                           // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EEmblemGameModeCategory                            EmblemGameModeCategory;                                   // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnabled;                                                // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanFlip;                                                  // 0x000F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SortNumber;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             AssetReference;                                           // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FString                                     DLCID;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.ExpDamageActorData
// 0x0010
struct FExpDamageActorData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Nimbus.PassSoundRelativeSpeedRow
// 0x0008 (0x0010 - 0x0008)
struct FPassSoundRelativeSpeedRow : public FTableRowBase
{
	float                                              SpeedKmph;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.GameObjectReplicatedMovement
// 0x0024
struct FGameObjectReplicatedMovement
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // 0x0018(0x000C) (IsPlainOldData)
};

// ScriptStruct Nimbus.GenericLoadingScreenDataTable
// 0x0048 (0x0050 - 0x0008)
struct FGenericLoadingScreenDataTable : public FTableRowBase
{
	EGenericLoadingScreenType                          LoadingScreenType;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Probability;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TypeID;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LockID;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     NameID;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DescriptionID;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSoftObjectPath                             AssetReference;                                           // 0x0038(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Nimbus.GraphicsSettings
// 0x00A8
struct FGraphicsSettings
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct Nimbus.GraphicsSettingsManager
// 0x0128
struct FGraphicsSettingsManager
{
	unsigned char                                      UnknownData00[0x128];                                     // 0x0000(0x0128) MISSED OFFSET
};

// ScriptStruct Nimbus.GuideImageDataTable
// 0x0020 (0x0028 - 0x0008)
struct FGuideImageDataTable : public FTableRowBase
{
	int                                                GuideImageID;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             Path;                                                     // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Nimbus.GuidePageDataTable
// 0x0060 (0x0068 - 0x0008)
struct FGuidePageDataTable : public FTableRowBase
{
	int                                                GuidePageID;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EGuideIDs                                          GuideID;                                                  // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                PageIndex;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     TitleTextID;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FString                                     HeaderTextID;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DescriptionTextID;                                        // 0x0038(0x0010) (Edit, ZeroConstructor)
	int                                                ExclusivePlatform;                                        // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             ImagePath;                                                // 0x0050(0x0018) (Edit)
};

// ScriptStruct Nimbus.IconStatWidgetHandler
// 0x00E8
struct FIconStatWidgetHandler
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
	struct FLinearColor                                PlaneLightDamageColor;                                    // 0x00B0(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                PlaneHeavyDamageColor;                                    // 0x00C0(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00D0(0x0004) MISSED OFFSET
	struct FLinearColor                                PlaneDefaultColor;                                        // 0x00D4(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.UILayerMenuSubMenuParamLayer
// 0x0110
struct FUILayerMenuSubMenuParamLayer
{
	unsigned char                                      UnknownData00[0x110];                                     // 0x0000(0x0110) MISSED OFFSET
};

// ScriptStruct Nimbus.UILayerMenuSubMenuParamGroup
// 0x0030
struct FUILayerMenuSubMenuParamGroup
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Nimbus.UILayerMenuSubMenuParamItem
// 0x00F8
struct FUILayerMenuSubMenuParamItem
{
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0000(0x00F8) MISSED OFFSET
};

// ScriptStruct Nimbus.UILayerMenuSubMenuParamTextDecorate
// 0x01D8
struct FUILayerMenuSubMenuParamTextDecorate
{
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x0000(0x01D8) MISSED OFFSET
};

// ScriptStruct Nimbus.UILayerMenuAnim
// 0x00B0
struct FUILayerMenuAnim
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Nimbus.UILayerMenuRandomText
// 0x0040
struct FUILayerMenuRandomText
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Nimbus.GunTracking
// 0x001C
struct FGunTracking
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct Nimbus.LocalizeTextDataTable
// 0x0040 (0x0048 - 0x0008)
struct FLocalizeTextDataTable : public FTableRowBase
{
	struct FString                                     Label;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Steam;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PS4;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     XOne;                                                     // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.MedalDataTable
// 0x0060 (0x0068 - 0x0008)
struct FMedalDataTable : public FTableRowBase
{
	int                                                MedalID;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     MedalStringID;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EMedalCategory                                     Category;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             ThumbnailTexture;                                         // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FSoftObjectPath                             HugeTexture;                                              // 0x0040(0x0018) (Edit, BlueprintVisible)
	struct FString                                     DLCID;                                                    // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.MenuSequenceInfo
// 0x0028
struct FMenuSequenceInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Nimbus.MenuSequenceSaveLoadCompletionInfo
// 0x0060
struct FMenuSequenceSaveLoadCompletionInfo
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Nimbus.SequenceMenuItemDataTable
// 0x0048 (0x0050 - 0x0008)
struct FSequenceMenuItemDataTable : public FTableRowBase
{
	struct FName                                       ParentSequenceID;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SequenceID;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ESequenceMenuItemType                              ItemType;                                                 // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FString>                             TextId;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FSoftObjectPath                             ImagePath;                                                // 0x0030(0x0018) (Edit)
	ESequenceMenuItemCheckType                         ShowCheckType;                                            // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                ShowCheckTypeArg;                                         // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.SequenceLinkDataTable
// 0x0018 (0x0020 - 0x0008)
struct FSequenceLinkDataTable : public FTableRowBase
{
	struct FName                                       SrcSequenceID;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DstSequenceID;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsBackLink;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsStartupLayerMenu;                                       // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsFadeLong;                                               // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsRefreshEntitlements;                                    // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsWaitRefreshEntitlements;                                // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Nimbus.SequenceMenuDataTable
// 0x0010 (0x0018 - 0x0008)
struct FSequenceMenuDataTable : public FTableRowBase
{
	struct FName                                       SequenceID;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EMenuSpaceType                                     MenuSpaceType;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESequenceGroup                                     SequenceGroup;                                            // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EMenuIDs                                           WidgetMenuID;                                             // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	int                                                LayerIndex;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.MinigameRetryParam
// 0x0024
struct FMinigameRetryParam
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct Nimbus.RefuelingInfo
// 0x0038
struct FRefuelingInfo
{
	bool                                               bOverlaped;                                               // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              OverlapedTime;                                            // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BackDistance;                                             // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RightDistance;                                            // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UpDistance;                                               // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBehind;                                                  // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FVector                                     PlayerLocation;                                           // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0028(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              JudgeRadius;                                              // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.NimbusRadarPing
// 0x0020
struct FNimbusRadarPing
{
	class AGameObject*                                 ObjectToPing;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PingPosition;                                             // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	ENimbusPingType                                    PingType;                                                 // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowContainerName;                                       // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA];                                       // 0x0016(0x000A) MISSED OFFSET
};

// ScriptStruct Nimbus.BlendMaskSettings
// 0x0010
struct FBlendMaskSettings
{
	struct FVector2D                                   PositionOffset;                                           // 0x0000(0x0008) (IsPlainOldData)
	struct FVector2D                                   BlendAreaSize;                                            // 0x0008(0x0008) (IsPlainOldData)
};

// ScriptStruct Nimbus.WeaponParamModifiers_MISSILE
// 0x0028 (0x0080 - 0x0058)
struct FWeaponParamModifiers_MISSILE : public FWeaponParamModifiers_EXPLOSIVE
{
	float                                              SpeedMax;                                                 // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Acceleration;                                             // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHomingAngle;                                           // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRotationAngle;                                         // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProximityFuse;                                            // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VeryNearWarning;                                          // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearWarning;                                              // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AltitudeAboveTarget;                                      // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFromTarget;                                       // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.MissionStatData
// 0x0100
struct FMissionStatData
{
	unsigned char                                      UnknownData00[0x100];                                     // 0x0000(0x0100) MISSED OFFSET
};

// ScriptStruct Nimbus.MissionPhaseAssetTable
// 0x0020 (0x0028 - 0x0008)
struct FMissionPhaseAssetTable : public FTableRowBase
{
	struct FSoftObjectPath                             Asset;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible)
	int                                                PhaseNo;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ViewerIGCNo;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.IGCSkeletalMeshSaveData
// 0x0018
struct FIGCSkeletalMeshSaveData
{
	struct FSingleAnimationPlayData                    AnimationData;                                            // 0x0000(0x0018)
};

// ScriptStruct Nimbus.IGCSaveData
// 0x0050
struct FIGCSaveData
{
	TMap<class USkeletalMeshComponent*, struct FIGCSkeletalMeshSaveData> SkeletalMeshSaveData;                                     // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Nimbus.MatineeRequestData
// 0x0058
struct FMatineeRequestData
{
	class AMatineeActor*                               MatineeActor;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FIGCSaveData                                SaveData;                                                 // 0x0008(0x0050)
};

// ScriptStruct Nimbus.MissionRankDataTable
// 0x0028 (0x0030 - 0x0008)
struct FMissionRankDataTable : public FTableRowBase
{
	EMissionRankCriteria                               RankCriteria;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ValueForS;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ValueForA;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ValueForB;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ValueForC;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BonusScoreForS;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BonusScoreForA;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BonusScoreForB;                                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BonusScoreForC;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.MissionDataTable
// 0x0160 (0x0168 - 0x0008)
struct FMissionDataTable : public FTableRowBase
{
	int                                                MissionID;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     MissionStringID;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bTestMission;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                NextMissionID;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FreeFlightMissionID;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitForTextureStreamingFinished;                         // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayReplay;                                              // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	int                                                InitialClearBonus;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RepeatCampaignClearBonus;                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MachineGunOnlyClearBonus;                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NoDamageClearBonus;                                       // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MissionReward;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMissionCategory                                   Category;                                                 // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	int                                                CampaignSpecificSkinNo;                                   // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMissionRule                                       Rule;                                                     // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	int                                                StageNo;                                                  // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxClearTimeScore;                                        // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ClearTimeScoreDecStart;                                   // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClearTimeScoreDecPerSecond;                               // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMissionRankCriteria                               RankCriteria;                                             // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              ValueForS;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ValueForA;                                                // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ValueForB;                                                // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ValueForC;                                                // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BonusScoreForS;                                           // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BonusScoreForA;                                           // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BonusScoreForB;                                           // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BonusScoreForC;                                           // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FName                                       HangarPersistentLongName;                                 // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             HangarLoadingCamera;                                      // 0x0090(0x0018) (Edit, BlueprintVisible)
	struct FString                                     BriefingMvVoice;                                          // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EUIBgms                                            BriefingBgm;                                              // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EUIBgms                                            DebriefingBgm;                                            // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EUIBgms                                            HangarBgm;                                                // 0x00BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x00BB(0x0005) MISSED OFFSET
	struct FString                                     MissionBGM;                                               // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MissionAmbience;                                          // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSoftObjectPath                             SmallThumbnailTexture;                                    // 0x00E0(0x0018) (Edit, BlueprintVisible)
	struct FSoftObjectPath                             MiddleThumbnailTexture;                                   // 0x00F8(0x0018) (Edit, BlueprintVisible)
	struct FSoftObjectPath                             LargeThumbnailTexture;                                    // 0x0110(0x0018) (Edit, BlueprintVisible)
	struct FString                                     DLCID;                                                    // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSoftObjectPath                             BriefingMap3dMesh;                                        // 0x0138(0x0018) (Edit, BlueprintVisible)
	struct FSoftObjectPath                             DebriefingMapTexture;                                     // 0x0150(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Nimbus.MovieSubtitleTableRow
// 0x0070 (0x0078 - 0x0008)
struct FMovieSubtitleTableRow : public FTableRowBase
{
	int                                                StartTime_JP;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndTime_JP;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartTime_EN;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndTime_EN;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldLocalize;                                          // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     SubtitleText;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     VoiceID;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bOverrideDefaultColor;                                    // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FLinearColor                                TextColor;                                                // 0x0044(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                ValuePerSecond;                                           // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     SpeakerNameID;                                            // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     UserData;                                                 // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.MultiplayerPerformanceEvaluationDataTable
// 0x0018 (0x0020 - 0x0008)
struct FMultiplayerPerformanceEvaluationDataTable : public FTableRowBase
{
	EMedalTitle                                        MedalTitle;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     MedalTitleLocalizationID;                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.MultiplayerMRPPlayerNumberModifierDataTable
// 0x0008 (0x0010 - 0x0008)
struct FMultiplayerMRPPlayerNumberModifierDataTable : public FTableRowBase
{
	int                                                MinimumNumberOfPlayer;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MRPModifier;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.MultiplayerCrashPenaltyModifierDataTable
// 0x0008 (0x0010 - 0x0008)
struct FMultiplayerCrashPenaltyModifierDataTable : public FTableRowBase
{
	int                                                MinimumCrashCount;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrashPenaltyModifier;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.MultiplayerRankingPlayerNumberModifierDataTable
// 0x0008 (0x0010 - 0x0008)
struct FMultiplayerRankingPlayerNumberModifierDataTable : public FTableRowBase
{
	int                                                MinimumNumberOfPlayer;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayerNumberModifier;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.MultiplayerAircraftCostModifierDataTable
// 0x0008 (0x0010 - 0x0008)
struct FMultiplayerAircraftCostModifierDataTable : public FTableRowBase
{
	int                                                MinimumAircraftCostDifference;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CostDifferenceModifier;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.MultiplayerScoreBasePointDataTable
// 0x0008 (0x0010 - 0x0008)
struct FMultiplayerScoreBasePointDataTable : public FTableRowBase
{
	int                                                MinimumAircraftCost;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BasePoint;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.MultiplayerPlacingModifierStarDataTable
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerPlacingModifierStarDataTable : public FTableRowBase
{
	float                                              BiggestModifier;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Star;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.MultiplayerPlacingModifierDataTable
// 0x0018 (0x0020 - 0x0008)
struct FMultiplayerPlacingModifierDataTable : public FTableRowBase
{
	int                                                PlayerCount;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<float>                                      ModifierArray;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.MultiplayerMdealCountDataTable
// 0x0008 (0x0010 - 0x0008)
struct FMultiplayerMdealCountDataTable : public FTableRowBase
{
	int                                                PlayerCount;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaximumMedal;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.MultiplayerEvaluationModifierDataTable
// 0x0008 (0x0010 - 0x0008)
struct FMultiplayerEvaluationModifierDataTable : public FTableRowBase
{
	int                                                PlayerCount;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Modifier;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.MultiplayerBaseMatchResultDataTable
// 0x0018 (0x0020 - 0x0008)
struct FMultiplayerBaseMatchResultDataTable : public FTableRowBase
{
	int                                                PlayerCount;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<int>                                        ScoreArray;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.MultiplayerMedalRankCreditDataTable
// 0x0018 (0x0020 - 0x0008)
struct FMultiplayerMedalRankCreditDataTable : public FTableRowBase
{
	EMedalRank                                         MedalRank;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UTexture2D*                                  MedalTexture;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OnlineCredit;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.MultiplayerMedalDataTable
// 0x0038 (0x0040 - 0x0008)
struct FMultiplayerMedalDataTable : public FTableRowBase
{
	EMedalTitle                                        MedalTitle;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     MedalTitleLocalizationID;                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MedalDescriptionLocalizationID;                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EMedalLinkedAttribute                              LinkedAttribute;                                          // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMedalRank                                         MedalRank;                                                // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowHotJoin;                                            // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMissionRule                                       GameMode;                                                 // 0x0033(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMultiple;                                                // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRelative;                                              // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsComforting;                                            // 0x0036(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLargerBetter;                                          // 0x0037(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ValueLimit;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AttributeValue;                                           // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeAllMeetMinumum;                                   // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBreakZero;                                               // 0x003E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBreakZeroAlone;                                          // 0x003F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.LobbyChatDataTable
// 0x0020 (0x0028 - 0x0008)
struct FLobbyChatDataTable : public FTableRowBase
{
	int                                                ID;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     LocalizationKey;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ELobbyChatCategory                                 Category;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnableForSteam;                                        // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct Nimbus.LobbyChatCategoryDataTable
// 0x0018 (0x0020 - 0x0008)
struct FLobbyChatCategoryDataTable : public FTableRowBase
{
	ELobbyChatCategory                                 Category;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     LocalizationKey;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.MultiplayerLoadingScreenDataTable
// 0x0048 (0x0050 - 0x0008)
struct FMultiplayerLoadingScreenDataTable : public FTableRowBase
{
	EMultiLoadingScreenType                            LoadingScreenType;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Probability;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlaneID;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LockID;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     TipsTitleID;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TipLocalizationKey;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSoftObjectPath                             AssetReference;                                           // 0x0038(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Nimbus.InstantRadioCategoryDataTable
// 0x0018 (0x0020 - 0x0008)
struct FInstantRadioCategoryDataTable : public FTableRowBase
{
	EInstantRadioCategory                              Category;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     LocalizationKey;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.InstantRadioDataTable
// 0x0020 (0x0028 - 0x0008)
struct FInstantRadioDataTable : public FTableRowBase
{
	int                                                ID;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     LocalizationKey;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EInstantRadioCategory                              Category;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPingPlayerLocation;                                      // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPingTargetLocation;                                      // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	int                                                SortNumber;                                               // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.MultiplayerRankingDataTable
// 0x0030 (0x0038 - 0x0008)
struct FMultiplayerRankingDataTable : public FTableRowBase
{
	ERankTitle                                         RankTitle;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     RankTitleLocalizationID;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  RankTextureS;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  RankTextureB;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartRankingPoint;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.MultiplayerKickDataTable
// 0x0018 (0x0020 - 0x0008)
struct FMultiplayerKickDataTable : public FTableRowBase
{
	int                                                MinutesToAutoKick;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinutesToRedBootThreshold;                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinutesToRedBootExpire;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KickedPlayersThreshold;                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinutesToPreventRejoinSession;                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.MultiplayerPlayerCountDataTable
// 0x0050 (0x0058 - 0x0008)
struct FMultiplayerPlayerCountDataTable : public FTableRowBase
{
	struct FString                                     LocalizationKeyGeneral;                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LocalizationKeyBR;                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LocalizationKeyTD;                                        // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DescriptionLocalizationKey;                               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Value;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMenuEntryStatus                                   CreateBr;                                                 // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMenuEntryStatus                                   CreateTd;                                                 // 0x004D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMenuEntryStatus                                   SearchBr;                                                 // 0x004E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMenuEntryStatus                                   SearchTd;                                                 // 0x004F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMenuEntryStatus                                   SettingBr;                                                // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMenuEntryStatus                                   SettingTd;                                                // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedExactPlayerCount;                                    // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMissionRule                                       RealGameMode;                                             // 0x0053(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.MultiplayerSessionDataTable
// 0x0018 (0x0020 - 0x0008)
struct FMultiplayerSessionDataTable : public FTableRowBase
{
	struct FString                                     LocalizationKey;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Value;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.MultiplayerMissionTable
// 0x0040 (0x0048 - 0x0008)
struct FMultiplayerMissionTable : public FTableRowBase
{
	struct FString                                     LocalizationKey;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                StageNo;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     CloudLocKey;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TimeLocKey;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  MapTexture;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.MultiplayerFakeSessionDataTable
// 0x0038 (0x0040 - 0x0008)
struct FMultiplayerFakeSessionDataTable : public FTableRowBase
{
	struct FString                                     HostName;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                StageNo;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMissionRule                                       GameMode;                                                 // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EOngoingState                                      State;                                                    // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSpecialWeapon;                                     // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlexiblePlayerCount;                                     // 0x001F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaximumClientCount;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentClientCount;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowHotJoin;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowTeamChange;                                         // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                MatchMakingValue;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AircraftRegulation;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AntennaBarCount;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRedBoot;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKickedLocalClient;                                       // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

// ScriptStruct Nimbus.NicknameDataTable
// 0x0020 (0x0028 - 0x0008)
struct FNicknameDataTable : public FTableRowBase
{
	int                                                NicknameID;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ENicknameCategory                                  Category;                                                 // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ENicknameGameModeCategory                          GameModeCategory;                                         // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnabled;                                                // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	int                                                SortNumber;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     DLCID;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.NicknameCategoryDataTable
// 0x0018 (0x0020 - 0x0008)
struct FNicknameCategoryDataTable : public FTableRowBase
{
	ENicknameCategory                                  Category;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     LocalizationKey;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.GameObjectIterator
// 0x0010
struct FGameObjectIterator
{
	class UNimbusActorManager*                         ActorManager;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.ControllerVibrationInstance
// 0x0060
struct FControllerVibrationInstance
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusBodyPartsReplayData
// 0x0088
struct FNimbusBodyPartsReplayData
{
	float                                              Pitch;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AfterBurner;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirBrake;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Accele;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gear;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Aoa;                                                      // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sus;                                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Tire;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Thrust;                                                   // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EngineThrust;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterlockThrustSound;                                     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SusFrontMask;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SusBackMask;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Azimuth;                                                  // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alt;                                                      // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AltToGround;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MissionTime;                                              // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AcceleSpeedKmh;                                           // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdownRate;                                               // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mach;                                                     // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Slip;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchSpeed;                                               // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InputPitch;                                               // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InputYaw;                                                 // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InputRoll;                                                // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlagState;                                                // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StateGunc;                                                // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StateMisc;                                                // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StateSpwc;                                                // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StateGear;                                                // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.NimbusLatentActionManager
// 0x0008 (0x0100 - 0x00F8)
struct FNimbusLatentActionManager : public FLatentActionManager
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusCameraShakePlayDelayData
// 0x0028
struct FNimbusCameraShakePlayDelayData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusCameraShakeDebugData
// 0x0040
struct FNimbusCameraShakeDebugData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusControllerShakeDebugData
// 0x000C
struct FNimbusControllerShakeDebugData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusSoundAKEventNameTable
// 0x0000 (0x0008 - 0x0008)
struct FNimbusSoundAKEventNameTable : public FTableRowBase
{

};

// ScriptStruct Nimbus.NimbusCallbackEventInfo
// 0x0028
struct FNimbusCallbackEventInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusSoundBusInfo
// 0x0008
struct FNimbusSoundBusInfo
{
	int                                                BusVolume;                                                // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsBusBlocked;                                            // 0x0004(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusMissionTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FNimbusMissionTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusLevelScriptActorTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FNimbusLevelScriptActorTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusPrePhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FNimbusPrePhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusEndPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FNimbusEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.NimbusStartFrameTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FNimbusStartFrameTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.Resolution
// 0x0008
struct FResolution
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.OptionSoundDataTable
// 0x0018 (0x0020 - 0x0008)
struct FOptionSoundDataTable : public FTableRowBase
{
	ESoundType                                         SoundType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     SoundID;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.PartsAnimationConfig
// 0x0070 (0x0078 - 0x0008)
struct FPartsAnimationConfig : public FTableRowBase
{
	EPartsAnimationConfig_OptionsElv                   OptionsElv;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPartsAnimationConfig_OptionsRud                   OptionsRud;                                               // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPartsAnimationConfig_OptionsAlr                   OptionsAlr;                                               // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOptionsAnimCndAbk;                                       // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOptionsAnimControlCnd;                                   // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOptionsAnimRudLimit;                                     // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOptionsAnimAlrVwg;                                       // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOptionsAnimAbkLcover;                                    // 0x000F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOptionsAnimWpCover;                                      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOptionsAnimGearDownFixedVcth;                            // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPartsExistsPartsElvLrExist;                              // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPartsExistsPartsRudLrExist;                              // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPartsExistsPartsCndLrExist;                              // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPartsExistsPartsVctLrExist;                              // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPartsExistsPartsGuncoverExist;                           // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPartsExistsPartsMsslcoverExist;                          // 0x0017(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPartsExistsPartsSpwccoverExist;                          // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPartsExistsPartsSpw1coverExist;                          // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPartsExistsPartsSpw2coverExist;                          // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPartsExistsPartsSpw3coverExist;                          // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPartsExistsPartsCndExist;                                // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              MoveMin;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveMax;                                                  // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveRate;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TefMin;                                                   // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TefMax;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VctMin;                                                   // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VctMax;                                                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RmpMin;                                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RmpMax;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOptionsAnimRmpAoa;                                       // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              LefMin;                                                   // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LefMax;                                                   // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOptionsAnimLefAoa;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              VwgMin;                                                   // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VwgMax;                                                   // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LipMin;                                                   // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LipMax;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPartsAnimationConfig_OptionsLipRot                OptionsLipRot;                                            // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              RotSpeed;                                                 // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOptionsAnimRotSpd;                                       // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              TimeGearAmount;                                           // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.PartsGraphDataTable
// 0x0010 (0x0018 - 0x0008)
struct FPartsGraphDataTable : public FTableRowBase
{
	EPartsParameterList                                ParameterLabel;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGraphAirToAir;                                           // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGraphAirToGround;                                        // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGraphSpeed;                                              // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGraphMobirity;                                           // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGraphStability;                                          // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGraphDefense;                                            // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGraphAirToAirWeapon;                                     // 0x000F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGraphAirToGroundWeapon;                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGraphHoming;                                             // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGraphReload;                                             // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGraphLongRange;                                          // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGraphDamageRange;                                        // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Nimbus.PartsData
// 0x0008
struct FPartsData
{
	EPartsParameterList                                ParameterLabel;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EParameterOperationType                            OperationType;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              ParameterValue;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.PartsDataTable
// 0x0050 (0x0058 - 0x0008)
struct FPartsDataTable : public FTableRowBase
{
	int                                                PartsID;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<struct FPartsData>                          PartsData;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EPartsGroup                                        PartsGroup;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPartsIconCategory                                 PartsIconCategory;                                        // 0x0021(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPartsSize                                         PartsSize;                                                // 0x0022(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	float                                              PartsRank;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPartsCategory                                     Category;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                SlotCost;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPartsEnableGameMode                               PartsEnableGameMode;                                      // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphAirToAir;                                            // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphAirToGround;                                         // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphSpeed;                                               // 0x0033(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphMobirity;                                            // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphStability;                                           // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphDefense;                                             // 0x0036(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphAirToAirWeapon;                                      // 0x0037(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphAirToGroundWeapon;                                   // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphHoming;                                              // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphReload;                                              // 0x003A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphLongRange;                                           // 0x003B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphDamageRange;                                         // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EHangarSpecCategory                                HangarSpecOverride;                                       // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	int                                                SortNumber;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PartsCost;                                                // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     DLCID;                                                    // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Nimbus.PilotDataDataTable
// 0x00D0 (0x00D8 - 0x0008)
struct FPilotDataDataTable : public FTableRowBase
{
	int                                                PilotDataID;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPilotDataGameMode                                 GameMode;                                                 // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPilotDataCategory                                 Category;                                                 // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Age;                                                      // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             ThumbnailTexture;                                         // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FSoftObjectPath                             VisualTexture;                                            // 0x0040(0x0018) (Edit, BlueprintVisible)
	struct FString                                     AircraftLocalizationStringID;                             // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TACLocalizationStringID;                                  // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Rank;                                                     // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     UnitText;                                                 // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ProfileText;                                              // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     HintText;                                                 // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SortNumber;                                               // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LastAppearedMission;                                      // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSameUnlockConditionAsAlly;                               // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FString                                     DLCID;                                                    // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.VFXIntensity
// 0x0044
struct FVFXIntensity
{
	float                                              WingTipVapor;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShoulderVapor;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WingSurfaceVapor;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WingOverVapor;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WingOverVaporHighGTurn;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AfterBurner;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AfterBurnerSize;                                          // 0x0018(0x000C) (IsPlainOldData)
	struct FVector                                     AfterBurnerLightSize;                                     // 0x0024(0x000C) (IsPlainOldData)
	struct FVector                                     VariableWingVectorParam1;                                 // 0x0030(0x000C) (IsPlainOldData)
	float                                              VariableWingParam1;                                       // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HeatDistortionIntensity;                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.VFXSocketDataTable
// 0x0058 (0x0060 - 0x0008)
struct FVFXSocketDataTable : public FTableRowBase
{
	bool                                               UseForNoneVR;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseForVR;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Type;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UParticleSystem*                             Reference;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PositionOffset;                                           // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x003C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               IsShadowPass;                                             // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyScaling;                                            // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	struct FVector                                     Scale;                                                    // 0x004C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bShowInCockpit;                                           // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAdditionalVFXForAI;                                      // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
};

// ScriptStruct Nimbus.PlayerPlaneConfig
// 0x0278 (0x0280 - 0x0008)
struct FPlayerPlaneConfig : public FTableRowBase
{
	float                                              SpeedBreak;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMax;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedCruise;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedBuffet;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedStall;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMin;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AcceleR;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeceleR;                                                  // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThrustMinWait;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AfterburnerWait;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThrustMaxWait;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PowerAfterBurnerR;                                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedUpperR;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedDownerR;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedRollDownerR;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuffetRecoverySpeedRate;                                  // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuffetRotX;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuffetRotY;                                               // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuffetRotXFreq;                                           // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuffetRotYFreq;                                           // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuffetOffset;                                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AltStallStart;                                            // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              altStall;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GndSpeedTakeoff;                                          // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GndDrag0;                                                 // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GndDrag1;                                                 // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GndDrag2;                                                 // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GndDrag3;                                                 // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LandingAOALimitDeg;                                       // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotStallR;                                                // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchUpDownR;                                             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AddRotR;                                                  // 0x0084(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     DecRotR;                                                  // 0x0090(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     InputRotAdd;                                              // 0x009C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     InputRotDec;                                              // 0x00A8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              YawRateStdNrm;                                            // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StdArtificialRoll;                                        // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchLimitPre;                                            // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchLimitMax;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollLimitPre;                                             // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollLimitMax;                                             // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchLimitPreGear;                                        // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchLimitMaxGear;                                        // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollLimitPreGear;                                         // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollLimitMaxGear;                                         // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedGraph0;                                              // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedGraph1;                                              // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedGraph2;                                              // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedGraph3;                                              // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedGraph4;                                              // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedGraph5;                                              // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedGraph6;                                              // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedGraph7;                                              // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedGraph8;                                              // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedGraph9;                                              // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DiffNoseVelocityR0;                                       // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DiffNoseVelocityR1;                                       // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DiffNoseVelocityR2;                                       // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DiffNoseVelocityR3;                                       // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DiffNoseVelocityR4;                                       // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DiffNoseVelocityR5;                                       // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DiffNoseVelocityR6;                                       // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DiffNoseVelocityR7;                                       // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DiffNoseVelocityR8;                                       // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DiffNoseVelocityR9;                                       // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpeedRot0;                                                // 0x012C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpeedRot1;                                                // 0x0138(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpeedRot2;                                                // 0x0144(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpeedRot3;                                                // 0x0150(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpeedRot4;                                                // 0x015C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpeedRot5;                                                // 0x0168(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpeedRot6;                                                // 0x0174(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpeedRot7;                                                // 0x0180(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpeedRot8;                                                // 0x018C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpeedRot9;                                                // 0x0198(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RotGravR0;                                                // 0x01A4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RotGravR1;                                                // 0x01B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RotGravR2;                                                // 0x01BC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RotGravR3;                                                // 0x01C8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RotGravR4;                                                // 0x01D4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RotGravR5;                                                // 0x01E0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RotGravR6;                                                // 0x01EC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RotGravR7;                                                // 0x01F8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RotGravR8;                                                // 0x0204(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RotGravR9;                                                // 0x0210(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DriftStartInputTime;                                      // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DriftSpeedMinStart;                                       // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DriftSpeedEnd;                                            // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DriftStopDiffRadian;                                      // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DriftIsEndReleaseThrottle;                                // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	float                                              DriftAddRadStartingPitch;                                 // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DriftAddPitchR;                                           // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DriftPitchRate;                                           // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DriftYawRate;                                             // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DriftRadLimit;                                            // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DriftRadDecR;                                             // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DriftSpeedStartDec;                                       // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DriftSpeedDecR;                                           // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DriftSpeedDecMax;                                         // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDriftPostStallManeuverability                     DriftPostStallManeuverability;                            // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	float                                              DriftPostStallManeuverSpeedEnd;                           // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerSpringConstRotX;                                   // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerSpringConstRotZ;                                   // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerDamperConstRotX;                                   // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerDamperConstRotZ;                                   // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerTimeMax;                                           // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerImpactRotXMax;                                     // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerImpactRotZMax;                                     // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerImpactDamageMax;                                   // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerImpactDamageMin;                                   // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.PlayerInitializationData
// 0x0028
struct FPlayerInitializationData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Nimbus.CallsignDataTable
// 0x0010 (0x0018 - 0x0008)
struct FCallsignDataTable : public FTableRowBase
{
	struct FString                                     Callsign;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Nimbus.AntiAIStealthDataTable
// 0x0008 (0x0010 - 0x0008)
struct FAntiAIStealthDataTable : public FTableRowBase
{
	unsigned char                                      StealthLevel;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              StartFiringDistancePercent;                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.AntiPlayerStealthDataTable
// 0x0018 (0x0020 - 0x0008)
struct FAntiPlayerStealthDataTable : public FTableRowBase
{
	unsigned char                                      StealthLevel;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              DistanceToStartDisplaying;                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToFullyDisplay;                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BackBlindHalfAngleInDegrees;                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BackBlindMinDistance;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.PlayerPlaneDataTable
// 0x01E0 (0x01E8 - 0x0008)
struct FPlayerPlaneDataTable : public FTableRowBase
{
	int                                                PlaneID;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OriginalPlaneID;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlaneStringID;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EPlaneTargetMode                                   TargetMode;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0021(0x0028) UNKNOWN PROPERTY: SoftClassProperty Nimbus.PlayerPlaneDataTable.Reference
	EPlaneCategory                                     Category;                                                 // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPlaneHangarSize                                   HangarSize;                                               // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPlaneIGCSize                                      IGCSize;                                                  // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGunCaliber                                        GunCaliber;                                               // 0x0053(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GunLoadCount;                                             // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MainWeaponLoadCount;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     SpWeaponID1;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SpWeaponLoadCount1;                                       // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     SpWeaponID2;                                              // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SpWeaponLoadCount2;                                       // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     SpWeaponID3;                                              // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SpWeaponLoadCount3;                                       // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlareLoadCount;                                           // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlareEffectiveRange_MP;                                   // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             HangarAcquireCamera;                                      // 0x00B0(0x0018) (Edit, BlueprintVisible)
	int                                                SortNumber;                                               // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AlphabeticalSortNumber;                                   // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphAirToAir;                                            // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphAirToGround;                                         // 0x00D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphSpeed;                                               // 0x00D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphMobirity;                                            // 0x00D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphStability;                                           // 0x00D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphDefense;                                             // 0x00D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PartsSlotBody;                                            // 0x00D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PartsSlotArms;                                            // 0x00D7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PartsSlotMisc;                                            // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      StealthLevel;                                             // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxHealth;                                                // 0x00DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x00DB(0x0001) MISSED OFFSET
	int                                                AircraftCost;                                             // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CanopyEffectChangeDuration_MP;                            // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CanopyIceAppearDuration_MP;                               // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CanopyIceChangeDuration_MP;                               // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CanopyEffectDecayMultiplier_MP;                           // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IceTriggerCloudDensity_MP;                                // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirCurrentPositionInfluenceModifier_MP;                   // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirCurrentRotationInfluenceModifier_MP;                   // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InAirCurrentMovementDegradePercent_MP;                    // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirCurrentStrengthThreshold_MP;                           // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InCloudMovementDegradePercent_MP;                         // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InCloudMovementDegradeDuration_MP;                        // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InCloudStallSpeed_MP;                                     // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InCloudBuffetSpeed_MP;                                    // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloudEnterDensity_MP;                                     // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloudExitDensity_MP;                                      // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             RefPlaneImagePortrait;                                    // 0x0120(0x0018) (Edit)
	struct FSoftObjectPath                             RefPlaneImageLandscape;                                   // 0x0138(0x0018) (Edit)
	float                                              BeginAerialRefuelling[0x3];                               // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BeginLanding[0x3];                                        // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BeginTakeoffA[0x3];                                       // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BeginTakeoffB[0x3];                                       // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BeginTakeoffC[0x3];                                       // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BeginTakeoffNavyA[0x3];                                   // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BeginTakeoffNavyB[0x3];                                   // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BeginTakeoffNavyC[0x3];                                   // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndAerialRefuelling[0x3];                                 // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndTakeOff[0x3];                                          // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WeaponChange[0x3];                                        // 0x01C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnlockAircraftTree;                                     // 0x01D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x01D5(0x0003) MISSED OFFSET
	struct FString                                     DLCID;                                                    // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.InputRate
// 0x0018
struct FInputRate
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Nimbus.GunAutoFire
// 0x0002
struct FGunAutoFire
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct Nimbus.RainLineParticleAdjustmentParameter
// 0x0014
struct FRainLineParticleAdjustmentParameter
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Nimbus.SeaSprayTrigger
// 0x0014
struct FSeaSprayTrigger
{
	struct FVector                                     HitLocation;                                              // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FSeaExplosionInfo                           SeaExplosionInfo;                                         // 0x000C(0x0008) (Edit)
};

// ScriptStruct Nimbus.WeaponDurabilityCategoryDataTable
// 0x0040 (0x0048 - 0x0008)
struct FWeaponDurabilityCategoryDataTable : public FTableRowBase
{
	float                                              Category01;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Category02;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Category03;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Category04;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Category05;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Category06;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Category07;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Category08;                                               // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Category09;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Category10;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Category11;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Category12;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Category13;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Category14;                                               // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Category15;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.PlayerWeaponDataTable
// 0x00F8 (0x0100 - 0x0008)
struct FPlayerWeaponDataTable : public FTableRowBase
{
	int                                                WeaponID;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     WeaponStringID;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EWeaponCategory                                    Category;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeaponDurabilityCategory                          WeaponDurabilityCategory;                                 // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	int                                                WeaponCost;                                               // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphAirToAir;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphAirToGround;                                         // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphHoming;                                              // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphReload;                                              // 0x002B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphLongRange;                                           // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GraphDamageRange;                                         // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	float                                              HomingDelay_MP;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HomingForesightAmount_MP;                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHomingAngle_MP;                                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRotationAngle_MP;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHomingAngleNotCaptured_MP;                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRotationAngleNotCaptured_MP;                           // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReducedHomingDuration_MP;                                 // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReducedHomingRotationAngle_MP;                            // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HomingReductionInCloud_MP;                                // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HomingCloudThreshold_MP;                                  // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMaxKmph_MP;                                          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationKmph_MP;                                      // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedInitKmph_MP;                                         // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IgnitionInitialSpeedKmph_MP;                              // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damage_MP;                                                // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaOfEffectDamage_MP;                                    // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactRadiusMeters_MP;                                    // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionRadiusMeters_MP;                                 // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime_MP;                                              // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LoadTime_MP;                                              // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LockonReductionInCloud_MP;                                // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LockonRangeReductionInCloud_MP;                           // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LockonAngle_MP;                                           // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LockonRangeInMeters_MP;                                   // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LockonInitialSpeed_MP;                                    // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LockonMaximumSpeed_MP;                                    // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LockonAccelerationTime_MP;                                // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DummyNumber_MP;                                           // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTargetSwitchTime_MP;                                   // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTargetSwitchTime_MP;                                   // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFromBodyMeters_MP;                                // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceToFollowMainMeters_MP;                         // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             WeaponConceptManaTexture;                                 // 0x00B0(0x0018) (Edit, BlueprintVisible)
	struct FSoftObjectPath                             WeaponConceptVideoMaterial;                               // 0x00C8(0x0018) (Edit, BlueprintVisible)
	struct FString                                     WeaponConceptText;                                        // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DLCID;                                                    // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.TunnelStatus
// 0x0050
struct FTunnelStatus
{
	class APlayerPlane*                                Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct Nimbus.RadioDataTable
// 0x0060 (0x0068 - 0x0008)
struct FRadioDataTable : public FTableRowBase
{
	struct FString                                     TextId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     VoiceID;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SpeakerID;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ERadioMessagePriority                              Priority;                                                 // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     NextID;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              StartDelay;                                               // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndDelay;                                                 // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Comments;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.DebugRadioItem
// 0x0018
struct FDebugRadioItem
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              StartDelay;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              EndDelay;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Nimbus.DebugRadioGroup
// 0x0030
struct FDebugRadioGroup
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                Priority;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                LimitPlayTimes;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MaxLimitPlayTimes;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              QueueLimitLife;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FDebugRadioItem>                     Items;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct Nimbus.RadioAutomaticSpeakerIDTable
// 0x0028 (0x0030 - 0x0008)
struct FRadioAutomaticSpeakerIDTable : public FTableRowBase
{
	struct FString                                     AutoSpeakerID;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TargetSpeakerID;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bGeneral;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Nimbus.RadioSpeakerTable
// 0x0028 (0x0030 - 0x0008)
struct FRadioSpeakerTable : public FTableRowBase
{
	class UTexture2D*                                  ComWindowImage;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERadioSpeakerColor                                 Color;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     CallsignID;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SilentGroupFlags;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.RadioTable
// 0x0100 (0x0108 - 0x0008)
struct FRadioTable : public FTableRowBase
{
	struct FString                                     RadioGroupID;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TextId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     VoiceID;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SpeakerID;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ERadioType                                         RadioType;                                                // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              StartDelay;                                               // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndDelay;                                                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              QueueLimitLife;                                           // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RequeueingWaitTime;                                       // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LimitPlayTimes;                                           // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              PossibilityOfPlay;                                        // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Priority;                                                 // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERadioSubtitle                                     Subtitle;                                                 // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERadioChannel                                      Channel;                                                  // 0x0066(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0067(0x0001) MISSED OFFSET
	struct FString                                     VoiceTypeID;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EnvseID;                                                  // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ERadioNoise                                        Noise;                                                    // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERadioNoiseSound                                   NoiseSound;                                               // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERadioWarningSound                                 WarningSound;                                             // 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ComWindow;                                                // 0x008B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               KeepComWindow;                                            // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	float                                              Volume;                                                   // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FString                                     Tag;                                                      // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     KeySpeakerID;                                             // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     NextRadioGroupID;                                         // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ParallelRequestRadioGroupID;                              // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ExclusiveMissions;                                        // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               CheckAliveSpeaker;                                        // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CheckAliveKeySpeaker;                                     // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CheckAliveColleagues;                                     // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERadioTension                                      Tension;                                                  // 0x00EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CheckSpeakerInAllowRange;                                 // 0x00EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	struct FString                                     RelatedRadioGroupIDs;                                     // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BlockSubChannel;                                          // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
};

// ScriptStruct Nimbus.DebugRequeueingWaitTimeGroup
// 0x0018
struct FDebugRequeueingWaitTimeGroup
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              RequeueingWaitTime;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.PassCameraSettingsTable
// 0x0158 (0x0160 - 0x0008)
struct FPassCameraSettingsTable : public FTableRowBase
{
	float                                              WeaponFollowSpeed;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponTargetDelayTime;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizonPushTime;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CancelPushTime;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizonPushAdjustScale;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxOcclusionTime;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MultiTargetRotationInterpSpeed;                           // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bChangeRotInterpSpeed;                                    // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              RotationInterpInterpSpeed;                                // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StabilizeRotationInterpSpeed;                             // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RotationInterpLimitAngle;                                 // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponCoverageScale;                                      // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PotentialHitCoverageScale;                                // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizonCoverageScale;                                     // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MultiTargetPotentialHitCoverageScale;                     // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MultiTargetCoverageScale;                                 // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponFovInterpTime;                                      // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizonFovInterpTime;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SuddenZoomOutFovInterpTime;                               // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MultiTargetFovInterpTime;                                 // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizonMinFov;                                            // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizonMaxFov;                                            // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MultiTargetMaxFov;                                        // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class UCurveFloat*                                 UserFovCurveFloat;                                        // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NonDefaultModeChance;                                     // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PassThroughModeRange;                                     // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PassThroughThreshold;                                     // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PassThroughJumpScale;                                     // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PassThroughModeReactivateTime;                            // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PotentialHitGunCheckDist;                                 // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PotentialHitWeaponCheckDist;                              // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PotentialHitAirThreshold;                                 // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PotentialHitGroundThreshold;                              // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PotentialHitGunThreshold;                                 // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartSearchPotentialHitDelay;                             // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxSearchPotentialHitDuration;                            // 0x009C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxPotentialHitActiveDuration;                            // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GunPotentialHitFocusDuration;                             // 0x00A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FinalVicinityCheckRadius;                                 // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExtendedSearchDuration;                                   // 0x00AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ConsecutiveFireValidDuration;                             // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MultiTargetWeightInScale;                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MultiTargetWeightOutScale;                                // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MultiTargetLocationTime;                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MultiTargetRadiusInterpSpeed;                             // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponFollowOffsetDist;                                   // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponFollowOffsetTime;                                   // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponLookOffsetDist;                                     // 0x00CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WeaponUpOffsetDist;                                       // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MultiTargetReactivateTime;                                // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinSuddenZoomOutBegin;                                    // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxSuddenZoomOutBegin;                                    // 0x00DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SuddenZoomOutDistThreshold;                               // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxSuddenZoomOutActiveDuration;                           // 0x00E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GroundModeDistThreshold;                                  // 0x00E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GroundModeSweepThreshold;                                 // 0x00EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GroundObjUpScale;                                         // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GroundModeMinOffsetV;                                     // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GroundModeMinOffsetH;                                     // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TargetToGroundDirVeloAdjustScale;                         // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GroundObjRadiusAdjustScale;                               // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GroundOrbitEllipseScaleMax;                               // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GroundMinInterpSpeed;                                     // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GroundMaxInterpSpeed;                                     // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GroundMinPushTime;                                        // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GroundMaxPushTime;                                        // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GroundModeAvoidThreshold;                                 // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizonModeDistThreshold;                                 // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizonAirDuration;                                       // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizonGroundDuration;                                    // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizonRightOffsetInterpTime;                             // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizonOffsetInterpSpeed;                                 // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHorizonEaseIn;                                           // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              HorizonEaseExp;                                           // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizonFrontRadiusScale;                                  // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizonRearRadiusScale;                                   // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCameraAnim*                                 HorizonCameraAnim;                                        // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AirShootDownModeDist;                                     // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GroundShootDownModeDist;                                  // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableCameraShakeSpeedZero;                             // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableCameraShakeRatePlaneSpeed;                        // 0x0151(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0152(0x0002) MISSED OFFSET
	float                                              OnBoardCameraShakeRate;                                   // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CameraStickRate;                                          // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.PassCameraDefaultSettingsTable
// 0x0080 (0x0088 - 0x0008)
struct FPassCameraDefaultSettingsTable : public FTableRowBase
{
	float                                              CameraMoveDurationDefault;                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CameraMoveDurationCombat;                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CameraInitVeloScale;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CameraMoveVeloScale;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CameraMoveCombatDist;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartPlaneFocusAngle;                                     // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartWeaponFocusAngle;                                    // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartFocusPlaneDistThreshold;                             // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FollowOffsetDist;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FollowOffsetTime;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InactiveReactivateTime;                                   // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDefaultActiveDuration;                                 // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PassFarMoveVeloScale;                                     // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PassFarModeRange;                                         // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PassFarInitDir;                                           // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PassFarExitAngle;                                         // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PassFarModeReactivateTime;                                // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultUpAdjustDist;                                      // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PassFarUpAdjustDist;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultPushTime;                                          // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultPushAdjustScale;                                   // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultRotationInterpSpeed;                               // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FollowRotationInterpSpeed;                                // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultCoverageScale;                                     // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultFovInterpTime;                                     // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultMinFov;                                            // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultMaxFov;                                            // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PassFarMaxFov;                                            // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultZoomOutTargetFov;                                  // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PassFarZoomOutTargetFov;                                  // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.PassCameraDebugSettingsTable
// 0x0010 (0x0018 - 0x0008)
struct FPassCameraDebugSettingsTable : public FTableRowBase
{
	bool                                               bDebugDrawCollisionRadius;                                // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawMultiTargets;                                   // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawGroundMode;                                     // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawTargetLocation;                                 // 0x000B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugWeaponTarget;                                       // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugPassThrough;                                        // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	float                                              DebugNodeRadius;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DebugTimeDilation;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.CameraSettingsTable
// 0x0060 (0x0068 - 0x0008)
struct FCameraSettingsTable : public FTableRowBase
{
	struct FVector                                     RelativeLocation;                                         // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FName                                       RelativeSocketName;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeSocketLocation;                                   // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    RelativeSocketRotation;                                   // 0x0034(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              OrbitRadius;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FieldOfView;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FieldOfViewMin;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FieldOfViewMax;                                           // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShakeScale;                                               // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RelativeRotationOffsetLimit;                              // 0x0054(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              RelativeRotationRate;                                     // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.RewardsScrollboxItemAcquirePanel
// 0x0068
struct FRewardsScrollboxItemAcquirePanel
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct Nimbus.SceneDataTable
// 0x0058 (0x0060 - 0x0008)
struct FSceneDataTable : public FTableRowBase
{
	int                                                SceneID;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     SceneStringID;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ESceneType                                         SceneType;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                MissionID;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     MissionStringID;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSoftObjectPath                             SceneDataAsset;                                           // 0x0038(0x0018) (Edit, BlueprintVisible)
	struct FString                                     DLCID;                                                    // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.RewardItemAcquirePanel
// 0x0068
struct FRewardItemAcquirePanel
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct Nimbus.WeaponParamModifiers_SFFSBOMB
// 0x0018 (0x0078 - 0x0060)
struct FWeaponParamModifiers_SFFSBOMB : public FWeaponParamModifiers_BOMB
{
	float                                              ScatterStart;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScatterInterval;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScatterAngle;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScatterCount;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChildInitialSpeed;                                        // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.SkinDataTable
// 0x0048 (0x0050 - 0x0008)
struct FSkinDataTable : public FTableRowBase
{
	int                                                SkinID;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     PlaneStringID;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SkinNo;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SortNumber;                                               // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoseEmblem;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWingEmblem;                                              // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTailEmblem;                                              // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	struct FString                                     PlaneReference;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DLCID;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.WeaponParamModifiers_SODBOMB
// 0x0010 (0x0090 - 0x0080)
struct FWeaponParamModifiers_SODBOMB : public FWeaponParamModifiers_MISSILE
{
	float                                              DispersionStart;                                          // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DispersionInterval;                                       // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DispersionAngle;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DispersionCount;                                          // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Nimbus.StaffCreditsDataTable
// 0x0058 (0x0060 - 0x0008)
struct FStaffCreditsDataTable : public FTableRowBase
{
	int                                                StaffCreditsID;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECreditType                                        CreditType;                                               // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     Text01;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Text02;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Text03;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Text04;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Text05;                                                   // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Nimbus.WeaponParamModifiers_SSMISSILE
// 0x0008 (0x0088 - 0x0080)
struct FWeaponParamModifiers_SSMISSILE : public FWeaponParamModifiers_MISSILE
{
	float                                              AltitudeFromLaunch;                                       // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.StandaloneTextStatWidgetHandler
// 0x00C8
struct FStandaloneTextStatWidgetHandler
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0000(0x00C8) MISSED OFFSET
};

// ScriptStruct Nimbus.ContainerUpdateGroup
// 0x0008
struct FContainerUpdateGroup
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.TimeScoreStatWidgetHandler
// 0x00D8
struct FTimeScoreStatWidgetHandler
{
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0000(0x00D8) MISSED OFFSET
};

// ScriptStruct Nimbus.CategoryColorInfo
// 0x0030
struct FCategoryColorInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Nimbus.UnitObject
// 0x0010
struct FUnitObject
{
	class AAIGameObject*                               Instance;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ClassType;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.ViewerMusicDataTable
// 0x0030 (0x0038 - 0x0008)
struct FViewerMusicDataTable : public FTableRowBase
{
	int                                                ViewerMusicID;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     LocalizeTextID;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BgmEventName;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              BgmLength;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.ViewerMedalTitleAwarded
// 0x0008
struct FViewerMedalTitleAwarded
{
	EMedalTitle                                        Medal;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                TimesAwarded;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.ViewerPerformanceEvaluation
// 0x0028
struct FViewerPerformanceEvaluation
{
	uint32_t                                           Total;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FViewerMedalTitleAwarded>            MedalTitle;                                               // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Nimbus.ViewerMissionMRP
// 0x0018
struct FViewerMissionMRP
{
	int                                                MissionID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StageNo;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           Score;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	EMissionRule                                       Rule;                                                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Nimbus.ViewerMRPBase
// 0x0028
struct FViewerMRPBase
{
	uint64_t                                           TotalScore;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FViewerMissionMRP>                   MissionMRP;                                               // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FViewerMissionMRP>                   DLCMissionMRP;                                            // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Nimbus.ViewerMRPVR
// 0x0028
struct FViewerMRPVR
{
	struct FViewerMRPBase                              MRPBase;                                                  // 0x0000(0x0028)
};

// ScriptStruct Nimbus.ViewerMRPMulti
// 0x0050
struct FViewerMRPMulti
{
	struct FViewerMRPBase                              MRPBase;                                                  // 0x0000(0x0028)
	uint64_t                                           CumulativeMMRP;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           MultiMMRP;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                BRTotalFirstPlace;                                        // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BRTotalScore;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TDMTotalMVP;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TDMTotalWinCount;                                         // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TDMTotalScore;                                            // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.ViewerMRPCampaign
// 0x0038
struct FViewerMRPCampaign
{
	uint64_t                                           CumulativeMRP;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           CampaignMRP;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FViewerMRPBase                              MRPBase;                                                  // 0x0010(0x0028)
};

// ScriptStruct Nimbus.ViewerTargetDestroyedWithWeapon
// 0x000C
struct FViewerTargetDestroyedWithWeapon
{
	int                                                WeaponID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalDestroyed;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsInRecords;                                             // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Nimbus.ViewerTargetDestroyedBase
// 0x0018
struct FViewerTargetDestroyedBase
{
	int                                                TotalDestroyed;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FViewerTargetDestroyedWithWeapon>    WeaponTargetDestroyed;                                    // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Nimbus.ViewerTargetDestroyedVR
// 0x0028
struct FViewerTargetDestroyedVR
{
	struct FViewerTargetDestroyedBase                  TargetDestroyedBase;                                      // 0x0000(0x0018)
	int                                                AircraftDestroyed;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UAVDestroyed;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SurperficiesDestroyed;                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VesselsDestroyed;                                         // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.ViewerTargetDestroyedMulti
// 0x0020
struct FViewerTargetDestroyedMulti
{
	struct FViewerTargetDestroyedBase                  TargetDestroyedBase;                                      // 0x0000(0x0018)
	int                                                BRTargetDestroyed;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TDMTargetDestroyed;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.ViewerTargetDestroyedCampaign
// 0x0028
struct FViewerTargetDestroyedCampaign
{
	struct FViewerTargetDestroyedBase                  TargetDestroyedBase;                                      // 0x0000(0x0018)
	int                                                AircraftDestroyed;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UAVDestroyed;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SurperficiesDestroyed;                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VesselsDestroyed;                                         // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.ViewerSortieDataParameter
// 0x0010
struct FViewerSortieDataParameter
{
	int                                                MissionID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StageNo;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Sortie;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	EMissionRule                                       Rule;                                                     // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Nimbus.ViewerSortieDataBase
// 0x0028
struct FViewerSortieDataBase
{
	int                                                TotalSortie;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FViewerSortieDataParameter>          SortieData;                                               // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FViewerSortieDataParameter>          SortieDataDLC;                                            // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Nimbus.ViewerSortieDataVR
// 0x0028
struct FViewerSortieDataVR
{
	struct FViewerSortieDataBase                       SortieBase;                                               // 0x0000(0x0028)
};

// ScriptStruct Nimbus.ViewerSortieDataMulti
// 0x0030
struct FViewerSortieDataMulti
{
	struct FViewerSortieDataBase                       SortieBase;                                               // 0x0000(0x0028)
	int                                                BRTotal;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TDMTotal;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.ViewerSortieDataCampaign
// 0x0028
struct FViewerSortieDataCampaign
{
	struct FViewerSortieDataBase                       SortieBase;                                               // 0x0000(0x0028)
};

// ScriptStruct Nimbus.ViewerAircraftDataParameter
// 0x001C
struct FViewerAircraftDataParameter
{
	bool                                               bInSavedData;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PlaneID;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Sortie;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Usage;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TargetsDestroyed;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DestructionRate;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SortNumber;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.ViewerAircraftData
// 0x0020
struct FViewerAircraftData
{
	TArray<struct FViewerAircraftDataParameter>        AircraftData;                                             // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Nimbus.ViewerScrollingData
// 0x0010
struct FViewerScrollingData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Nimbus.ViewerFlightTrendData
// 0x0020
struct FViewerFlightTrendData
{
	EViewerFlightTrendType                             Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Sortie;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TargetsDestroyed;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Usage;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           FlightTime;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           FlightDistance;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Nimbus.ViewerFlightTrend
// 0x0010
struct FViewerFlightTrend
{
	TArray<struct FViewerFlightTrendData>              FlightTrend;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Nimbus.WeaponParamModifiers_VLSMISSILE
// 0x0008 (0x0088 - 0x0080)
struct FWeaponParamModifiers_VLSMISSILE : public FWeaponParamModifiers_MISSILE
{
	float                                              OmnidirectionalDuration;                                  // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OmnidirectionalAbility;                                   // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Nimbus.VRHangarWeaponPlacementDataTable
// 0x0028 (0x0030 - 0x0008)
struct FVRHangarWeaponPlacementDataTable : public FTableRowBase
{
	struct FString                                     PlaneStringID;                                            // 0x0008(0x0010) (Edit, ZeroConstructor)
	int                                                WeaponNumber;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             WeaponPosition;                                           // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Nimbus.VRAircraftViewerTableRow
// 0x0060 (0x0068 - 0x0008)
struct FVRAircraftViewerTableRow : public FTableRowBase
{
	struct FString                                     PlaneStringID;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ViewID;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewPosition;                                             // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    ViewRotation;                                             // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                LeftLinkViewID;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RightLinkViewID;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UpLinkViewID;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DownLinkViewID;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldPlaceLadder;                                       // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FVector                                     LadderPosition;                                           // 0x0048(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LadderRotation;                                           // 0x0054(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              IndicatorHeight;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct Nimbus.VRSelectorItem
// 0x0030
struct FVRSelectorItem
{
	class UTextBlock*                                  NameNormal;                                               // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  NameSelect;                                               // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     Border;                                                   // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct Nimbus.WeaponReplicatedMovement
// 0x0024
struct FWeaponReplicatedMovement
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // 0x0018(0x000C) (IsPlainOldData)
};

// ScriptStruct Nimbus.PostSpawnWeaponProjectileParam
// 0x0048
struct FPostSpawnWeaponProjectileParam
{
	bool                                               bEnable;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                LoadedSlotIndex;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UsedWeaponSlot;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	EWeaponNumber                                      WeaponNumber;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                WeaponLevel;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class AGameObject*                                 HomeTarget;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsFirstShot;                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	EWeaponSpecialBehaviorType                         BehaviorType;                                             // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	int                                                ExtraAttribute;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WeaponLocation;                                           // 0x0028(0x000C) (IsPlainOldData)
	struct FRotator                                    WeaponRotation;                                           // 0x0034(0x000C) (IsPlainOldData)
	bool                                               bRelative;                                                // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct Nimbus.EquippedFlareConfig
// 0x0038
struct FEquippedFlareConfig
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Nimbus.FlareParticleTimer
// 0x0010
struct FFlareParticleTimer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Nimbus.WeaponSlot
// 0x0060
struct FWeaponSlot
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Nimbus.FlareSlot
// 0x0000 (0x0060 - 0x0060)
struct FFlareSlot : public FWeaponSlot
{

};

// ScriptStruct Nimbus.WeaponMeshReactivateTimer
// 0x0010
struct FWeaponMeshReactivateTimer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Nimbus.DoubleVisibilityMeshComponent
// 0x0020
struct FDoubleVisibilityMeshComponent
{
	class UMeshComponent*                              MeshComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	class USceneComponent*                             AttachedParent;                                           // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Nimbus.MoveWeaponMeshData
// 0x0010
struct FMoveWeaponMeshData
{
	class UMeshComponent*                              MeshComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
