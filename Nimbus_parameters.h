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

// Function Nimbus.AIASCommandComponent.StopBarrier
struct UAIASCommandComponent_StopBarrier_Params
{
};

// DelegateFunction Nimbus.AIASCommandComponent.OnStopBarrier__DelegateSignature
struct UAIASCommandComponent_OnStopBarrier__DelegateSignature_Params
{
	class AGameObject*                                 Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIASCommandComponent.OnReleaseBarrierWeapon
struct UAIASCommandComponent_OnReleaseBarrierWeapon_Params
{
};

// DelegateFunction Nimbus.AIASCommandComponent.OnActivateBarrier__DelegateSignature
struct UAIASCommandComponent_OnActivateBarrier__DelegateSignature_Params
{
	class AGameObject*                                 Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIASCommandComponent.ActivateBarrier
struct UAIASCommandComponent_ActivateBarrier_Params
{
	int                                                InNumber;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIASDamagedStateComponent.OnVisibilityChanged
struct UAIASDamagedStateComponent_OnVisibilityChanged_Params
{
	bool                                               bVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIASDamagedStateComponent.OnRestored
struct UAIASDamagedStateComponent_OnRestored_Params
{
};

// Function Nimbus.AIASDamagedStateComponent.OnComponentHitSurface
struct UAIASDamagedStateComponent_OnComponentHitSurface_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.AIASDamagedStateComponent.ForceShowExtraDestroyedVFX
struct UAIASDamagedStateComponent_ForceShowExtraDestroyedVFX_Params
{
};

// Function Nimbus.AIASDamagedStateComponent.DamageStateLifeSpanExpired
struct UAIASDamagedStateComponent_DamageStateLifeSpanExpired_Params
{
	struct FDamagedStateInstance                       DamagedStateInstance;                                     // (Parm, OutParm)
};

// Function Nimbus.AIASStateComponent.OnRestored
struct UAIASStateComponent_OnRestored_Params
{
};

// Function Nimbus.AIFireControlSystem.SetInitialPose
struct UAIFireControlSystem_SetInitialPose_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// DelegateFunction Nimbus.AIFireControlSystem.OnWeaponFired__DelegateSignature
struct UAIFireControlSystem_OnWeaponFired__DelegateSignature_Params
{
};

// Function Nimbus.AIFireControlSystem.CanActivateFlares
struct UAIFireControlSystem_CanActivateFlares_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.SetMinHealth
struct AGameObject_SetMinHealth_Params
{
	float                                              InHealth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.SetIsUnidentified
struct AGameObject_SetIsUnidentified_Params
{
	bool                                               bUnidentified;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.SetIsInvincibleFromAI
struct AGameObject_SetIsInvincibleFromAI_Params
{
	bool                                               bInvincible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.SetIsInvincible
struct AGameObject_SetIsInvincible_Params
{
	bool                                               bInvincible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.SetIsExcludeFromGunAutoFire
struct AGameObject_SetIsExcludeFromGunAutoFire_Params
{
	bool                                               bExcludeFromGunAutoFire;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.SetIsAttackTargetsException
struct AGameObject_SetIsAttackTargetsException_Params
{
	bool                                               bAttackTargetsException;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.SetHudBoxAttribute
struct AGameObject_SetHudBoxAttribute_Params
{
	EHudBoxAttribute                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.SetActive
struct AGameObject_SetActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.OnWeaponLocked
struct AGameObject_OnWeaponLocked_Params
{
};

// Function Nimbus.GameObject.OnWeaponDetectionLost
struct AGameObject_OnWeaponDetectionLost_Params
{
};

// Function Nimbus.GameObject.OnWeaponDetectionAcquired
struct AGameObject_OnWeaponDetectionAcquired_Params
{
};

// DelegateFunction Nimbus.GameObject.OnVisibilityChanged__DelegateSignature
struct AGameObject_OnVisibilityChanged__DelegateSignature_Params
{
	bool                                               bVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.GameObject.OnTakeDamage__DelegateSignature
struct AGameObject_OnTakeDamage__DelegateSignature_Params
{
	class AGameObject*                                 Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 DamagedObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase*                                 Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase*                                 WeaponTypeCDO;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.GameObject.OnSleepChanged__DelegateSignature
struct AGameObject_OnSleepChanged__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.GameObject.OnRestoredDelegate__DelegateSignature
struct AGameObject_OnRestoredDelegate__DelegateSignature_Params
{
};

// Function Nimbus.GameObject.OnRestored
struct AGameObject_OnRestored_Params
{
};

// DelegateFunction Nimbus.GameObject.OnRepositionDelegate__DelegateSignature
struct AGameObject_OnRepositionDelegate__DelegateSignature_Params
{
};

// Function Nimbus.GameObject.OnReposition
struct AGameObject_OnReposition_Params
{
};

// Function Nimbus.GameObject.OnMissileAlertStateChange
struct AGameObject_OnMissileAlertStateChange_Params
{
	EMissileAlert                                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.GameObject.OnLockedOnByEnemy__DelegateSignature
struct AGameObject_OnLockedOnByEnemy__DelegateSignature_Params
{
	class AGameObject*                                 LockedObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 EnemyObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.GameObject.OnIdentified__DelegateSignature
struct AGameObject_OnIdentified__DelegateSignature_Params
{
};

// Function Nimbus.GameObject.OnHitByGun
struct AGameObject_OnHitByGun_Params
{
	class AActor*                                      Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.OnExecRecordableEvent
struct AGameObject_OnExecRecordableEvent_Params
{
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.OnDeath
struct AGameObject_OnDeath_Params
{
	class AGameObject*                                 DeadGameObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.OnDeactivate
struct AGameObject_OnDeactivate_Params
{
};

// DelegateFunction Nimbus.GameObject.OnChildGameObjectRecoveryTriggered__DelegateSignature
struct AGameObject_OnChildGameObjectRecoveryTriggered__DelegateSignature_Params
{
	class AGameObject*                                 ChildGameObject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.GameObject.OnChildGameObjectRecoveryEnded__DelegateSignature
struct AGameObject_OnChildGameObjectRecoveryEnded__DelegateSignature_Params
{
	class AGameObject*                                 ChildGameObject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.GameObject.OnChildGameObjectDeath__DelegateSignature
struct AGameObject_OnChildGameObjectDeath__DelegateSignature_Params
{
	class AGameObject*                                 DeadChildGameObject;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.OnAttackedBySpecialWeapon
struct AGameObject_OnAttackedBySpecialWeapon_Params
{
	bool                                               isAttacked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.OnAttachedActorLockedOnByEnemy
struct AGameObject_OnAttachedActorLockedOnByEnemy_Params
{
	class AGameObject*                                 LockedObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 EnemyObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.OnActivate
struct AGameObject_OnActivate_Params
{
};

// Function Nimbus.GameObject.ModifyHealth
struct AGameObject_ModifyHealth_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCauseDamageEvent;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.K2_DestroyActor
struct AGameObject_K2_DestroyActor_Params
{
};

// Function Nimbus.GameObject.IsStruckByLightning
struct AGameObject_IsStruckByLightning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.IsPlayerTarget
struct AGameObject_IsPlayerTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.IsNimbusOverlappingActor
struct AGameObject_IsNimbusOverlappingActor_Params
{
	class AActor*                                      Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.IsAttackedBySpecialWeapon
struct AGameObject_IsAttackedBySpecialWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.IsAttackedByOpponent
struct AGameObject_IsAttackedByOpponent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.IsAttackedByMainWeapon
struct AGameObject_IsAttackedByMainWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.IsAlive
struct AGameObject_IsAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.IsActivated
struct AGameObject_IsActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.GetUnit
struct AGameObject_GetUnit_Params
{
	class AUnit*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.GetTrueSkyQueryID
struct AGameObject_GetTrueSkyQueryID_Params
{
	int                                                RelativeID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.GetSpeedMps
struct AGameObject_GetSpeedMps_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.GetSpeedKmph
struct AGameObject_GetSpeedKmph_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.GetSpeakerID
struct AGameObject_GetSpeakerID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.GameObject.GetPursuitPoint
struct AGameObject_GetPursuitPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.GetObjNameID
struct AGameObject_GetObjNameID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.GameObject.GetObjName
struct AGameObject_GetObjName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.GameObject.GetNimbusOverlappingActors
struct AGameObject_GetNimbusOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.GetMinHealth
struct AGameObject_GetMinHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.GetMaxHealth
struct AGameObject_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.GetLockedOnTarget
struct AGameObject_GetLockedOnTarget_Params
{
	class AGameObject*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.GetLeadPoint
struct AGameObject_GetLeadPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.GetIsUnidentified
struct AGameObject_GetIsUnidentified_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.GetIsInStealth
struct AGameObject_GetIsInStealth_Params
{
	struct FVector                                     PlayerLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AGameObject*                                 GameObject;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.GetIsDetected
struct AGameObject_GetIsDetected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.GetHealth
struct AGameObject_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.GetDamagePercentage
struct AGameObject_GetDamagePercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.GetCallsignID
struct AGameObject_GetCallsignID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.GameObject.GetCallsign
struct AGameObject_GetCallsign_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.GameObject.GetAttackingMainWeaponArray
struct AGameObject_GetAttackingMainWeaponArray_Params
{
	TArray<class AWeaponBase*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.GameObject.GetAltitudeMeters
struct AGameObject_GetAltitudeMeters_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GameObject.ForceShowHudBoxInSand
struct AGameObject_ForceShowHudBoxInSand_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.ForceDetection
struct AGameObject_ForceDetection_Params
{
};

// Function Nimbus.GameObject.ExecRecordableEvent
struct AGameObject_ExecRecordableEvent_Params
{
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.EnableKDSMode
struct AGameObject_EnableKDSMode_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GameObject.EnableFriendlyFireDamage
struct AGameObject_EnableFriendlyFireDamage_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.StopFireContinuousShotWeapon
struct AAIGameObject_StopFireContinuousShotWeapon_Params
{
};

// Function Nimbus.AIGameObject.SetWeaponSpecialBehavior
struct AAIGameObject_SetWeaponSpecialBehavior_Params
{
	EWeaponNumber                                      WeaponNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponSpecialBehaviorType                         BehaviorType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.SetWeaponSettings
struct AAIGameObject_SetWeaponSettings_Params
{
	bool                                               bInCanDamageTGT;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInCanFireNoCollisionWeapon;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.SetShowHudBox
struct AAIGameObject_SetShowHudBox_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.SetPathParameter
struct AAIGameObject_SetPathParameter_Params
{
	float                                              InSpeedKmph;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InAccelerationMpss;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRotationSpeedDegree;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EAIPathMovingActorSnap                             InSnapSetting;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.SetParkingMode
struct AAIGameObject_SetParkingMode_Params
{
	bool                                               bParked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DelayTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.SetMoveOnPathApproachTimeOutValue
struct AAIGameObject_SetMoveOnPathApproachTimeOutValue_Params
{
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.SetIsTGT
struct AAIGameObject_SetIsTGT_Params
{
	bool                                               bIsTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.SetIsMissionSpecialObject
struct AAIGameObject_SetIsMissionSpecialObject_Params
{
	bool                                               bIsMissionSpecial;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.SetExceptionTarget
struct AAIGameObject_SetExceptionTarget_Params
{
	class AGameObject*                                 ExceptionTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.SetEnemySearchType
struct AAIGameObject_SetEnemySearchType_Params
{
	ETargetType                                        InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.RemoveFromDebriefingRecording
struct AAIGameObject_RemoveFromDebriefingRecording_Params
{
};

// Function Nimbus.AIGameObject.ParkOnPoint
struct AAIGameObject_ParkOnPoint_Params
{
	class AActor*                                      Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.AIGameObject.OnStartedMovingOnPath__DelegateSignature
struct AAIGameObject_OnStartedMovingOnPath__DelegateSignature_Params
{
	class AAIPath*                                     Path;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.AIGameObject.OnResetPath__DelegateSignature
struct AAIGameObject_OnResetPath__DelegateSignature_Params
{
	class AAIPath*                                     Path;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.OnRecoveryTriggered
struct AAIGameObject_OnRecoveryTriggered_Params
{
};

// Function Nimbus.AIGameObject.OnRecoveryEnded
struct AAIGameObject_OnRecoveryEnded_Params
{
};

// DelegateFunction Nimbus.AIGameObject.OnReachedPathPoint__DelegateSignature
struct AAIGameObject_OnReachedPathPoint__DelegateSignature_Params
{
	class AAIPathPoint*                                PathPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.AIGameObject.OnReachedPathEntryPoint__DelegateSignature
struct AAIGameObject_OnReachedPathEntryPoint__DelegateSignature_Params
{
	class AAIPath*                                     Path;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.OnNotRecoveryTriggered
struct AAIGameObject_OnNotRecoveryTriggered_Params
{
};

// DelegateFunction Nimbus.AIGameObject.OnFinishedMovingOnPath__DelegateSignature
struct AAIGameObject_OnFinishedMovingOnPath__DelegateSignature_Params
{
	class AAIPath*                                     Path;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.OnEngagementOrderIssued
struct AAIGameObject_OnEngagementOrderIssued_Params
{
};

// Function Nimbus.AIGameObject.MoveWithCurve
struct AAIGameObject_MoveWithCurve_Params
{
	class UCurveVector*                                TransCurve;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                RotCurve;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.MoveOnPath
struct AAIGameObject_MoveOnPath_Params
{
	class AAIPath*                                     AIPath;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InSpeedKmph;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InAccelerationMpss;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRotationSpeedDegree;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EAIPathMovingActorSnap                             InSnapSetting;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPointRadiusMeter;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseApproachActorForwardVector;                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepOnLastPathPoint;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseQuaternionVersion;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.IsTrackingAirTarget
struct AAIGameObject_IsTrackingAirTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIGameObject.IsTGT
struct AAIGameObject_IsTGT_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIGameObject.IsSea
struct AAIGameObject_IsSea_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIGameObject.IsReallyOnGround
struct AAIGameObject_IsReallyOnGround_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIGameObject.IsParkingMode
struct AAIGameObject_IsParkingMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIGameObject.IsAir
struct AAIGameObject_IsAir_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIGameObject.GetTrackingTarget
struct AAIGameObject_GetTrackingTarget_Params
{
	class AGameObject*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIGameObject.GetSubFaction
struct AAIGameObject_GetSubFaction_Params
{
	ESubFaction                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIGameObject.GetLockedOnTarget
struct AAIGameObject_GetLockedOnTarget_Params
{
	class AGameObject*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIGameObject.GetFaction
struct AAIGameObject_GetFaction_Params
{
	EFaction                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIGameObject.GetChildGameObject
struct AAIGameObject_GetChildGameObject_Params
{
	struct FName                                       ComponentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AAIGameObject*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIGameObject.FireOneShotWeaponWithTargetTracking
struct AAIGameObject_FireOneShotWeaponWithTargetTracking_Params
{
	EWeaponNumber                                      WeaponNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTargetRange;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bContinueTrackingTarget;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.FireOneShotWeaponWithLocationTracking
struct AAIGameObject_FireOneShotWeaponWithLocationTracking_Params
{
	EWeaponNumber                                      WeaponNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIgnoreTargetRange;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bContinueTrackingTarget;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.FireOneShotWeapon
struct AAIGameObject_FireOneShotWeapon_Params
{
	EWeaponNumber                                      WeaponNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DummyTargetOffset;                                        // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIGameObject.FireContinuousShotWeapon
struct AAIGameObject_FireContinuousShotWeapon_Params
{
	EWeaponNumber                                      WeaponNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DummyTargetOffset;                                        // (Parm, IsPlainOldData)
	float                                              InFCSVolleyTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InFCSVolleyFireInterval;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.EngagementOrderOverride
struct AAIGameObject_EngagementOrderOverride_Params
{
	EEngagement                                        Order;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetEnemy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EEnemySearchPriority                               SearchPriority;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EEnemySearchPriorityExtension                      SearchPriorityExtension;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreUnidentifiedObject;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreAttackQuota;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanFireWeapon1;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanFireWeapon2;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanFireWeapon3;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PropogateToChild;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.DisableRecovery
struct AAIGameObject_DisableRecovery_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIGameObject.CheckOutOfWorld
struct AAIGameObject_CheckOutOfWorld_Params
{
};

// Function Nimbus.AIGameObject.CancelMovingOnPath
struct AAIGameObject_CancelMovingOnPath_Params
{
};

// Function Nimbus.AIGameObject.AddToDebriefingRecording
struct AAIGameObject_AddToDebriefingRecording_Params
{
};

// Function Nimbus.AIGameObject.ActivateFlares
struct AAIGameObject_ActivateFlares_Params
{
};

// Function Nimbus.AIGroundVehicle.SubmarineSurface
struct AAIGroundVehicle_SubmarineSurface_Params
{
};

// Function Nimbus.AIGroundVehicle.SubmarineStartNoseLift
struct AAIGroundVehicle_SubmarineStartNoseLift_Params
{
};

// Function Nimbus.AIGroundVehicle.SubmarineRailgunStored
struct AAIGroundVehicle_SubmarineRailgunStored_Params
{
};

// Function Nimbus.AIGroundVehicle.SubmarineRailgunExtract
struct AAIGroundVehicle_SubmarineRailgunExtract_Params
{
};

// Function Nimbus.AIGroundVehicle.SubmarineRailgunDown
struct AAIGroundVehicle_SubmarineRailgunDown_Params
{
};

// Function Nimbus.AIGroundVehicle.SubmarineRailgunBroken
struct AAIGroundVehicle_SubmarineRailgunBroken_Params
{
};

// Function Nimbus.AIGroundVehicle.SubmarineRailgunAttack
struct AAIGroundVehicle_SubmarineRailgunAttack_Params
{
};

// Function Nimbus.AIGroundVehicle.SubmarineForcedUnderWater
struct AAIGroundVehicle_SubmarineForcedUnderWater_Params
{
};

// Function Nimbus.AIGroundVehicle.SubmarineForcedOnWater
struct AAIGroundVehicle_SubmarineForcedOnWater_Params
{
};

// Function Nimbus.AIGroundVehicle.SubmarineEndNoseLift
struct AAIGroundVehicle_SubmarineEndNoseLift_Params
{
};

// Function Nimbus.AIGroundVehicle.SubmarineDiving
struct AAIGroundVehicle_SubmarineDiving_Params
{
};

// Function Nimbus.AIGroundVehicle.SetLocationAboveGround
struct AAIGroundVehicle_SetLocationAboveGround_Params
{
};

// Function Nimbus.AIHeli.IsEnabledRotorRotation
struct AAIHeli_IsEnabledRotorRotation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIHeli.EnableRotorRotation
struct AAIHeli_EnableRotorRotation_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDelayTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIHeli.DroneSelfDestruct
struct AAIHeli_DroneSelfDestruct_Params
{
};

// Function Nimbus.AIHeli.DroneReturn
struct AAIHeli_DroneReturn_Params
{
};

// Function Nimbus.AIMihaiComponent.StopRailgunCharge
struct UAIMihaiComponent_StopRailgunCharge_Params
{
};

// Function Nimbus.AIMihaiComponent.StopRailgunAiming
struct UAIMihaiComponent_StopRailgunAiming_Params
{
};

// Function Nimbus.AIMihaiComponent.StartRailgunCharge
struct UAIMihaiComponent_StartRailgunCharge_Params
{
	float                                              ChargeTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIMihaiComponent.StartRailgunAiming
struct UAIMihaiComponent_StartRailgunAiming_Params
{
	float                                              AimingTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.StopImbalanceAnime
struct AAIPlane_StopImbalanceAnime_Params
{
};

// Function Nimbus.AIPlane.StartDamagedRotate
struct AAIPlane_StartDamagedRotate_Params
{
};

// Function Nimbus.AIPlane.SetFormationLightEmissive
struct AAIPlane_SetFormationLightEmissive_Params
{
	float                                              intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.SetFELocationAndRotation
struct AAIPlane_SetFELocationAndRotation_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
};

// Function Nimbus.AIPlane.SetCurrentBehaviorTreeName
struct AAIPlane_SetCurrentBehaviorTreeName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Nimbus.AIPlane.SetCloudAvoidanceAbility
struct AAIPlane_SetCloudAvoidanceAbility_Params
{
	bool                                               CloudAvoidanceAbility;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.SetBehaviorActive
struct AAIPlane_SetBehaviorActive_Params
{
	bool                                               BehaviorActiveState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.SetAutopilotYawRelative
struct AAIPlane_SetAutopilotYawRelative_Params
{
	float                                              RelativeAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Power;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.SetAutopilotRollRelative
struct AAIPlane_SetAutopilotRollRelative_Params
{
	float                                              RelativeAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Power;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.SetAutopilotRoll
struct AAIPlane_SetAutopilotRoll_Params
{
	float                                              AbsoluteAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Power;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.SetAutopilotPitchRelative
struct AAIPlane_SetAutopilotPitchRelative_Params
{
	float                                              RelativeAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Power;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.SearchFrontCloudDirection
struct AAIPlane_SearchFrontCloudDirection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIPlane.RequestSpecialAction
struct AAIPlane_RequestSpecialAction_Params
{
	struct FAISpecialActionRequestInfo                 SpecialActionRequestInfo;                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.AIPlane.PlayImbalanceAnime
struct AAIPlane_PlayImbalanceAnime_Params
{
	class UCurveVector*                                InRotationCurveData;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.OverwriteFELocationAndRotation
struct AAIPlane_OverwriteFELocationAndRotation_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
};

// Function Nimbus.AIPlane.OverrideAIPlaneConfig
struct AAIPlane_OverrideAIPlaneConfig_Params
{
	class UDataTable*                                  AIPlaneConfig;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.OnUpdateAIState
struct AAIPlane_OnUpdateAIState_Params
{
};

// Function Nimbus.AIPlane.OnPostAIState
struct AAIPlane_OnPostAIState_Params
{
};

// Function Nimbus.AIPlane.IsStrictDrift
struct AAIPlane_IsStrictDrift_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIPlane.IsInKDSP2
struct AAIPlane_IsInKDSP2_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIPlane.IsInKDSP1
struct AAIPlane_IsInKDSP1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIPlane.IsInCloud
struct AAIPlane_IsInCloud_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIPlane.IsFireMissileFinished
struct AAIPlane_IsFireMissileFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIPlane.IsEnabledSurroundPursuitTarget
struct AAIPlane_IsEnabledSurroundPursuitTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIPlane.IsDrift
struct AAIPlane_IsDrift_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIPlane.IsApproachingCloud
struct AAIPlane_IsApproachingCloud_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIPlane.InputYaw
struct AAIPlane_InputYaw_Params
{
	float                                              Power;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.InputRoll
struct AAIPlane_InputRoll_Params
{
	float                                              Power;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.InputPitch
struct AAIPlane_InputPitch_Params
{
	float                                              Power;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.GetTurnSpeed
struct AAIPlane_GetTurnSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIPlane.GetMinSpeed
struct AAIPlane_GetMinSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIPlane.GetMaxSpeed
struct AAIPlane_GetMaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIPlane.GetDecelerationMpss
struct AAIPlane_GetDecelerationMpss_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIPlane.GetCockpitPartsAnimation
struct AAIPlane_GetCockpitPartsAnimation_Params
{
	struct FNimbusCockpitPartsAnim                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Nimbus.AIPlane.GetBodyPartsAnimation
struct AAIPlane_GetBodyPartsAnimation_Params
{
	struct FNimbusBodyPartsAnim                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Nimbus.AIPlane.GetAccelerationMpss
struct AAIPlane_GetAccelerationMpss_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIPlane.FrameUpdate
struct AAIPlane_FrameUpdate_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.EnableTakeoffAfterburner
struct AAIPlane_EnableTakeoffAfterburner_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.EnableLandingGear
struct AAIPlane_EnableLandingGear_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDelayTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.EnableAvoidObstacle
struct AAIPlane_EnableAvoidObstacle_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.CheckAvoidObstacle
struct AAIPlane_CheckAvoidObstacle_Params
{
};

// Function Nimbus.AIPlane.AutopilotHorizontalYaw
struct AAIPlane_AutopilotHorizontalYaw_Params
{
	float                                              Power;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.AutopilotAdjustSpeed
struct AAIPlane_AutopilotAdjustSpeed_Params
{
	float                                              spd;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Power;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.AIFlightEngineTick
struct AAIPlane_AIFlightEngineTick_Params
{
	float                                              DeltaTimeSeconds;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIPlane.AIFlightEngineRepositionDebugUseOnly
struct AAIPlane_AIFlightEngineRepositionDebugUseOnly_Params
{
};

// Function Nimbus.AirCurrentVolume.OnPreRestartPhaseEvent
struct AAirCurrentVolume_OnPreRestartPhaseEvent_Params
{
};

// Function Nimbus.MultiplayerZone.Activate
struct AMultiplayerZone_Activate_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AITurnToTargetComponent.TurnToOriginal
struct UAITurnToTargetComponent_TurnToOriginal_Params
{
};

// Function Nimbus.AITurnToTargetComponent.SetTurnToTarget
struct UAITurnToTargetComponent_SetTurnToTarget_Params
{
	class AGameObject*                                 TargetToTurnTo;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AITurnToTargetComponent.SetTurnToLocation
struct UAITurnToTargetComponent_SetTurnToLocation_Params
{
	struct FVector                                     LocationToTurnTo;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AITurnToTargetComponent.SetTurnToDirection
struct UAITurnToTargetComponent_SetTurnToDirection_Params
{
	struct FVector                                     DirectionToTurnTo;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AITurnToTargetComponent.PerformTargetSweep
struct UAITurnToTargetComponent_PerformTargetSweep_Params
{
	class AGameObject*                                 Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AITurnToTargetComponent.PerformCustomSweep
struct UAITurnToTargetComponent_PerformCustomSweep_Params
{
	struct FVector                                     StartDirection;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndDirection;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              StayAtStartDuration;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StayAtEndDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TurnRateMultiplier;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweepLongerDirection;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AITurnToTargetComponent.IsSweeping
struct UAITurnToTargetComponent_IsSweeping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AITurnToTargetComponent.IsStartingSweep
struct UAITurnToTargetComponent_IsStartingSweep_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AITurnToTargetComponent.HasCompletedTurning
struct UAITurnToTargetComponent_HasCompletedTurning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AITurnToTargetComponent.GetYawBoneTransform
struct UAITurnToTargetComponent_GetYawBoneTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AITurnToTargetComponent.GetTurnToDirection
struct UAITurnToTargetComponent_GetTurnToDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AITurnToTargetComponent.GetTurnRotation
struct UAITurnToTargetComponent_GetTurnRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AITurnToTargetComponent.GetTurnForwardVector
struct UAITurnToTargetComponent_GetTurnForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AITurnToTargetComponent.GetPitchBoneTransform
struct UAITurnToTargetComponent_GetPitchBoneTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AIUAVComponent.ResetUAVDockSlots
struct UAIUAVComponent_ResetUAVDockSlots_Params
{
};

// Function Nimbus.AIUAVComponent.OnVisibilityChanged
struct UAIUAVComponent_OnVisibilityChanged_Params
{
	bool                                               bVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AIUAVComponent.Launch
struct UAIUAVComponent_Launch_Params
{
};

// Function Nimbus.ApproachDistObservationComponent.RemoveApproachGameObject
struct UApproachDistObservationComponent_RemoveApproachGameObject_Params
{
	class AGameObject*                                 AddGameObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.ApproachDistObservationComponent.IsApproachGameObjectsAllDead
struct UApproachDistObservationComponent_IsApproachGameObjectsAllDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.ApproachDistObservationComponent.GetRemainingDistanceMeter
struct UApproachDistObservationComponent_GetRemainingDistanceMeter_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.ApproachDistObservationComponent.AddApproachGameObject
struct UApproachDistObservationComponent_AddApproachGameObject_Params
{
	class AGameObject*                                 AddGameObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.WeaponBase.OnWeaponDestroyed
struct AWeaponBase_OnWeaponDestroyed_Params
{
};

// Function Nimbus.WeaponBase.OnInitialized
struct AWeaponBase_OnInitialized_Params
{
};

// Function Nimbus.WeaponBase.OnImpact
struct AWeaponBase_OnImpact_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OldVelocity;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.WeaponBase.OnCreateWeapon_BP
struct AWeaponBase_OnCreateWeapon_BP_Params
{
};

// Function Nimbus.WeaponBase.IsDestroyed
struct AWeaponBase_IsDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.WeaponBase.GetWeaponID
struct AWeaponBase_GetWeaponID_Params
{
	EWeaponID                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.WeaponBase.GetTargetToHome
struct AWeaponBase_GetTargetToHome_Params
{
	class AGameObject*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.WeaponBase.GetSelectionAssistRange
struct AWeaponBase_GetSelectionAssistRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.WeaponBase.GetSelectionAssistRadius
struct AWeaponBase_GetSelectionAssistRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.WeaponBase.GetSelectionAssistLockOnTime
struct AWeaponBase_GetSelectionAssistLockOnTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.WeaponBase.GetSelectionAssistAngle
struct AWeaponBase_GetSelectionAssistAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.WeaponBase.GetLifeTime
struct AWeaponBase_GetLifeTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.ExplosiveWeapon.OnTargetMiss
struct AExplosiveWeapon_OnTargetMiss_Params
{
};

// Function Nimbus.ExplosiveWeapon.OnMovementReportMiss
struct AExplosiveWeapon_OnMovementReportMiss_Params
{
};

// Function Nimbus.ExplosiveWeapon.InformTargetBeingAttacked
struct AExplosiveWeapon_InformTargetBeingAttacked_Params
{
	bool                                               bIsAttacked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AsyncTaskActivateUnit.ActivateUnit
struct UAsyncTaskActivateUnit_ActivateUnit_Params
{
	class AUnit*                                       Unit;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UVariableComparator*                         ConditionToActivate;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DelayInSeconds;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EUnitActivationType                                ActivationType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	class AActor*                                      TransformReferenceActor;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddHeightOfGroundToZ;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Comment;                                                  // (Parm, ZeroConstructor)
	bool                                               bEnabledDelay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAsyncTaskActivateUnit*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AsyncTaskMissionRequestIGC.RequestIGC
struct UAsyncTaskMissionRequestIGC_RequestIGC_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EMultiplayerIGCType                                IGCType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  BeginSubtitleDataTable;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               BeginVoiceEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EIGCTransitionType                                 TransitionType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBeginFade;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBeginUpdateShadowDistanceScale;                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BeginShadowDistance;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               EndVoiceEvent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEndFade;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MiniGameMapPhaseName;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopBGMWhenSkip;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OverrideStopBGMEventWhenSkip;                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAsyncTaskMissionRequestIGC*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AsyncTaskProcessUnit.StopTask
struct UAsyncTaskProcessUnit_StopTask_Params
{
	class AUnit*                                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInterrupted;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCallExit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.AsyncTaskMoveUnit.MoveToLocation
struct UAsyncTaskMoveUnit_MoveToLocation_Params
{
	class AUnit*                                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	class UVariableComparator*                         InterruptCondition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceToLocationInMeters;                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedKmph;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeLimitInSeconds;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBoostable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Comment;                                                  // (Parm, ZeroConstructor)
	class UAsyncTaskMoveUnit*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AsyncTaskMoveUnit.MoveToActor
struct UAsyncTaskMoveUnit_MoveToActor_Params
{
	class AUnit*                                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVariableComparator*                         InterruptCondition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceToLocationInMeters;                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedKmph;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeLimitInSeconds;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetFromActor;                                          // (Parm, IsPlainOldData)
	bool                                               bBoostable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Comment;                                                  // (Parm, ZeroConstructor)
	class UAsyncTaskMoveUnit*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AsyncTaskMoveUnit.MoveOnPath
struct UAsyncTaskMoveUnit_MoveOnPath_Params
{
	class AUnit*                                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AAIPath*                                     AIPath;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UVariableComparator*                         InterruptCondition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeLimitInSeconds;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedKmph;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMpss;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationSpeedDegree;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PointRadiusMeter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportUnitLocation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseApproachActorForwardVector;                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBoostable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Comment;                                                  // (Parm, ZeroConstructor)
	class UAsyncTaskMoveUnit*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AsyncTaskStopUnit.StopUnit
struct UAsyncTaskStopUnit_StopUnit_Params
{
	class AUnit*                                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UVariableComparator*                         InterruptCondition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StopDurationInSeconds;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Comment;                                                  // (Parm, ZeroConstructor)
	class UAsyncTaskStopUnit*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.AttachedInstantWeapon.OnLifeTimeExpired
struct AAttachedInstantWeapon_OnLifeTimeExpired_Params
{
};

// Function Nimbus.AttachedInstantWeapon.OnCreateWeaponEnd
struct AAttachedInstantWeapon_OnCreateWeaponEnd_Params
{
};

// Function Nimbus.BasePassSoundComponent.OnReplayCameraChanged
struct UBasePassSoundComponent_OnReplayCameraChanged_Params
{
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.BasePassSoundComponent.OnCameraViewChanged
struct UBasePassSoundComponent_OnCameraViewChanged_Params
{
	ECameraType                                        Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.UpdateSunParameters_BP
struct ABasicLightRig_UpdateSunParameters_BP_Params
{
};

// Function Nimbus.BasicLightRig.UpdateLoop_BP
struct ABasicLightRig_UpdateLoop_BP_Params
{
};

// Function Nimbus.BasicLightRig.UpdateLocalCameraPosition_BP
struct ABasicLightRig_UpdateLocalCameraPosition_BP_Params
{
};

// Function Nimbus.BasicLightRig.UpdateLightRigMPC_BP
struct ABasicLightRig_UpdateLightRigMPC_BP_Params
{
};

// Function Nimbus.BasicLightRig.UpdateBlendHeight
struct ABasicLightRig_UpdateBlendHeight_Params
{
};

// Function Nimbus.BasicLightRig.UpdateAircraftMaterial_BP
struct ABasicLightRig_UpdateAircraftMaterial_BP_Params
{
};

// Function Nimbus.BasicLightRig.SetMinBlendHeight
struct ABasicLightRig_SetMinBlendHeight_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.SetMaxBlendHeight
struct ABasicLightRig_SetMaxBlendHeight_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.ResetAircraftMaterial_BP
struct ABasicLightRig_ResetAircraftMaterial_BP_Params
{
};

// Function Nimbus.BasicLightRig.OnTransitionToMiniGameEvent_Native
struct ABasicLightRig_OnTransitionToMiniGameEvent_Native_Params
{
	bool                                               bIsTransitingIn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.MaterialUpdateCP_BP
struct ABasicLightRig_MaterialUpdateCP_BP_Params
{
};

// Function Nimbus.BasicLightRig.GetUseSkyLight
struct ABasicLightRig_GetUseSkyLight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetUseOfflineCapture
struct ABasicLightRig_GetUseOfflineCapture_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetUseHDRI
struct ABasicLightRig_GetUseHDRI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetUseCubemapBlending
struct ABasicLightRig_GetUseCubemapBlending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetTimeline_RoughnessRampUp
struct ABasicLightRig_GetTimeline_RoughnessRampUp_Params
{
	class UTimelineComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetTimeline_RoughnessRampDown
struct ABasicLightRig_GetTimeline_RoughnessRampDown_Params
{
	class UTimelineComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetTimeline_2
struct ABasicLightRig_GetTimeline_2_Params
{
	class UTimelineComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetTimeline_1
struct ABasicLightRig_GetTimeline_1_Params
{
	class UTimelineComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetSunLight_CP
struct ABasicLightRig_GetSunLight_CP_Params
{
	class UDirectionalLightComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetSunLight
struct ABasicLightRig_GetSunLight_Params
{
	class UDirectionalLightComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetSunDirLight
struct ABasicLightRig_GetSunDirLight_Params
{
	class UDirectionalLightComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetSkylight_PreviewBlendHeight
struct ABasicLightRig_GetSkylight_PreviewBlendHeight_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetSkyLight_Intensity
struct ABasicLightRig_GetSkyLight_Intensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetSkyLight_CubemapBlending
struct ABasicLightRig_GetSkyLight_CubemapBlending_Params
{
	class USkyLightComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetSkyLight
struct ABasicLightRig_GetSkyLight_Params
{
	class USkyLightComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetShow_EnvDome
struct ABasicLightRig_GetShow_EnvDome_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetSceneCaptureCube_InClouds
struct ABasicLightRig_GetSceneCaptureCube_InClouds_Params
{
	class USceneCaptureComponentCube*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetSceneCaptureCube_BelowClouds
struct ABasicLightRig_GetSceneCaptureCube_BelowClouds_Params
{
	class USceneCaptureComponentCube*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetSceneCaptureCube_AboveClouds
struct ABasicLightRig_GetSceneCaptureCube_AboveClouds_Params
{
	class USceneCaptureComponentCube*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetSceneCaptureComponentCube
struct ABasicLightRig_GetSceneCaptureComponentCube_Params
{
	class USceneCaptureComponentCube*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetPostProcessComp00
struct ABasicLightRig_GetPostProcessComp00_Params
{
	class UPostProcessComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetPostProcess00
struct ABasicLightRig_GetPostProcess00_Params
{
	struct FPostProcessSettings                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Nimbus.BasicLightRig.GetMinBlendHeight
struct ABasicLightRig_GetMinBlendHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetMaxBlendHeight
struct ABasicLightRig_GetMaxBlendHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetLightTemperature
struct ABasicLightRig_GetLightTemperature_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetLightScale
struct ABasicLightRig_GetLightScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetLightIntensity
struct ABasicLightRig_GetLightIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetLightDirection
struct ABasicLightRig_GetLightDirection_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetLevelVFX_Intensity
struct ABasicLightRig_GetLevelVFX_Intensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetLevelCloudSand_Color
struct ABasicLightRig_GetLevelCloudSand_Color_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetHDRI_CubeMap
struct ABasicLightRig_GetHDRI_CubeMap_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetHDRI_Brightness
struct ABasicLightRig_GetHDRI_Brightness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetGet_TrueSky_Sun_Rotation
struct ABasicLightRig_GetGet_TrueSky_Sun_Rotation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetFollow_TrusSky
struct ABasicLightRig_GetFollow_TrusSky_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetEnvSphere
struct ABasicLightRig_GetEnvSphere_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetCockpit_SunLight_Increase
struct ABasicLightRig_GetCockpit_SunLight_Increase_Params
{
	class UTimelineComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetCockpit_SunLight_Decrease
struct ABasicLightRig_GetCockpit_SunLight_Decrease_Params
{
	class UTimelineComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.BasicLightRig.GetApply_Reflection
struct ABasicLightRig_GetApply_Reflection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Missile.OnTargetWithinProximity
struct AMissile_OnTargetWithinProximity_Params
{
};

// Function Nimbus.Missile.OnMissForceKill
struct AMissile_OnMissForceKill_Params
{
};

// Function Nimbus.Missile.GetTrueSkyQueryID
struct AMissile_GetTrueSkyQueryID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Bomb_TGTP.ReacquireLocationRotation
struct ABomb_TGTP_ReacquireLocationRotation_Params
{
};

// Function Nimbus.Bomb_TGTP.GetTGTP_DropLocation
struct ABomb_TGTP_GetTGTP_DropLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Bomb_TGTP.GetAttackResult
struct ABomb_TGTP_GetAttackResult_Params
{
	ETGTP_AttackResult                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.UIBaseWidget.GetUIManagerActor
struct UUIBaseWidget_GetUIManagerActor_Params
{
	class AUIManagerActor*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MenuBaseWidget.SimpleDialogInputResult
struct UMenuBaseWidget_SimpleDialogInputResult_Params
{
	struct FDialogData                                 DialogData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.MenuBaseWidget.SetIsEnableControl
struct UMenuBaseWidget_SetIsEnableControl_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MenuBaseWidget.OnUnfocusedBP
struct UMenuBaseWidget_OnUnfocusedBP_Params
{
};

// Function Nimbus.MenuBaseWidget.OnFocusedBP
struct UMenuBaseWidget_OnFocusedBP_Params
{
};

// Function Nimbus.MenuBaseWidget.IsEnableControl
struct UMenuBaseWidget_IsEnableControl_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.BuildingDamagedState.OnVisibilityChanged
struct UBuildingDamagedState_OnVisibilityChanged_Params
{
	bool                                               bVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.BuildingDamagedState.OnRestored
struct UBuildingDamagedState_OnRestored_Params
{
};

// Function Nimbus.BuildingDamagedState.OnComponentHitSurface
struct UBuildingDamagedState_OnComponentHitSurface_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.CameraViewComponent.SwitchToThirdPersonView
struct UCameraViewComponent_SwitchToThirdPersonView_Params
{
};

// Function Nimbus.CameraViewComponent.SwitchToMiniGameView
struct UCameraViewComponent_SwitchToMiniGameView_Params
{
	EMiniGameCameraType                                MiniGameCameraType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.CameraViewComponent.SwitchToFirstPersonView
struct UCameraViewComponent_SwitchToFirstPersonView_Params
{
};

// Function Nimbus.CameraViewComponent.SwitchToCockpitView
struct UCameraViewComponent_SwitchToCockpitView_Params
{
};

// Function Nimbus.CameraViewComponent.OnIGCStart
struct UCameraViewComponent_OnIGCStart_Params
{
};

// Function Nimbus.CameraViewComponent.OnIGCEnd
struct UCameraViewComponent_OnIGCEnd_Params
{
};

// Function Nimbus.CameraViewComponent.InitializeCameras
struct UCameraViewComponent_InitializeCameras_Params
{
	class UCameraComponent*                            FirstPersonCam;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            CockpitCam;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCam;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            MiniGameCam;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraInputComponent*                       FirstPersonCamInput;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraInputComponent*                       CockpitCamInput;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraInputComponent*                       ThirdPersonCamInput;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Nimbus.CameraViewComponent.GetCurrentCameraViewType
struct UCameraViewComponent_GetCurrentCameraViewType_Params
{
	ECameraType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.CampaignBriefingWidget.OnMapMeshLoaded
struct UCampaignBriefingWidget_OnMapMeshLoaded_Params
{
};

// Function Nimbus.CampaignBriefingWidget.OnCloudMaterialLoaded
struct UCampaignBriefingWidget_OnCloudMaterialLoaded_Params
{
};

// Function Nimbus.CampaignBriefingWidget.OnBriefingLevelLoaded
struct UCampaignBriefingWidget_OnBriefingLevelLoaded_Params
{
};

// Function Nimbus.CampaignDebriefingWidget.OnMapTextureLoaded
struct UCampaignDebriefingWidget_OnMapTextureLoaded_Params
{
};

// Function Nimbus.CampaignDebriefingWidget.OnLevelLoaded
struct UCampaignDebriefingWidget_OnLevelLoaded_Params
{
};

// Function Nimbus.NimbusUserWidget.OnVRFadeOut
struct UNimbusUserWidget_OnVRFadeOut_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusUserWidget.OnSpecialWeaponChanged
struct UNimbusUserWidget_OnSpecialWeaponChanged_Params
{
};

// Function Nimbus.NimbusUserWidget.OnResetWeaponName
struct UNimbusUserWidget_OnResetWeaponName_Params
{
};

// Function Nimbus.NimbusUserWidget.OnHUDShowGroup
struct UNimbusUserWidget_OnHUDShowGroup_Params
{
	int                                                Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusUserWidget.OnHUDEnabled
struct UNimbusUserWidget_OnHUDEnabled_Params
{
};

// Function Nimbus.NimbusUserWidget.OnHUDDisabled
struct UNimbusUserWidget_OnHUDDisabled_Params
{
};

// Function Nimbus.NimbusUserWidget.OnHUDAlertEnd
struct UNimbusUserWidget_OnHUDAlertEnd_Params
{
};

// Function Nimbus.NimbusUserWidget.OnHUDAlertBegin
struct UNimbusUserWidget_OnHUDAlertBegin_Params
{
};

// Function Nimbus.NimbusUserWidget.OnCurrentHUDAlertColorUpdated
struct UNimbusUserWidget_OnCurrentHUDAlertColorUpdated_Params
{
	struct FLinearColor                                NewColor;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsDefaultColor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusUserWidget.OnCameraViewChanged
struct UNimbusUserWidget_OnCameraViewChanged_Params
{
	ECameraType                                        CameraType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.CompassWidget.CurrentHUDAlertColorUpdated
struct UCompassWidget_CurrentHUDAlertColorUpdated_Params
{
	struct FLinearColor                                NewColor;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsDefaultColor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.DamagedStateComponent.OnVisibilityChanged
struct UDamagedStateComponent_OnVisibilityChanged_Params
{
	bool                                               bVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.DamagedStateComponent.OnRestored
struct UDamagedStateComponent_OnRestored_Params
{
};

// Function Nimbus.DamagedStateComponent.OnOwnerChildObjectRecoveryTriggered
struct UDamagedStateComponent_OnOwnerChildObjectRecoveryTriggered_Params
{
	class AGameObject*                                 ChildGameObject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.DamagedStateComponent.OnComponentHitSurface
struct UDamagedStateComponent_OnComponentHitSurface_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.DamagedStateComponent.OnCameraViewChanged
struct UDamagedStateComponent_OnCameraViewChanged_Params
{
	ECameraType                                        CameraViewType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.DamagedStateComponent.ForceCauseFinalExplosion
struct UDamagedStateComponent_ForceCauseFinalExplosion_Params
{
};

// Function Nimbus.DamagedStateComponent.DamageStateLifeSpanExpired
struct UDamagedStateComponent_DamageStateLifeSpanExpired_Params
{
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MultiPlayerGameMode.ToggleManuallyRequestGameResults
struct AMultiPlayerGameMode_ToggleManuallyRequestGameResults_Params
{
};

// Function Nimbus.MultiPlayerGameMode.OnDialogItemAccepted
struct AMultiPlayerGameMode_OnDialogItemAccepted_Params
{
	struct FDialogData                                 DialogData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.TeamDeathMatchGameMode.PlayIGC
struct ATeamDeathMatchGameMode_PlayIGC_Params
{
	EMultiplayerIGCType                                IGCType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IGCIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.TeamDeathMatchGameMode.OnIGCCompleted
struct ATeamDeathMatchGameMode_OnIGCCompleted_Params
{
	EMultiplayerIGCType                                IGCType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IGCIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.TeamDeathMatchGameMode.GetBaseMatchResultReward
struct ATeamDeathMatchGameMode_GetBaseMatchResultReward_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MultiPlayerInGameWidget.OnHUDEnabled
struct UMultiPlayerInGameWidget_OnHUDEnabled_Params
{
};

// Function Nimbus.MultiPlayerInGameWidget.OnCurrentHUDAlertColorUpdated
struct UMultiPlayerInGameWidget_OnCurrentHUDAlertColorUpdated_Params
{
	struct FLinearColor                                NewColor;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsDefaultColor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusDebugController.StopDebugMode
struct ANimbusDebugController_StopDebugMode_Params
{
};

// Function Nimbus.NimbusDebugController.StartDebugMode
struct ANimbusDebugController_StartDebugMode_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class ANimbusDebugController*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusDebugController.SetYawAcceleration
struct ANimbusDebugController_SetYawAcceleration_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusDebugController.SetState
struct ANimbusDebugController_SetState_Params
{
	EDebugModeState                                    Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusDebugController.SetSpeedScale
struct ANimbusDebugController_SetSpeedScale_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusDebugController.SetLookSensitivity
struct ANimbusDebugController_SetLookSensitivity_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusDebugController.SetIsUsingFPSControls
struct ANimbusDebugController_SetIsUsingFPSControls_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusDebugController.SetIsSpeedBoostEnabled
struct ANimbusDebugController_SetIsSpeedBoostEnabled_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.NimbusDebugController.OnStateChange__DelegateSignature
struct ANimbusDebugController_OnStateChange__DelegateSignature_Params
{
	EDebugModeState                                    NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.NimbusDebugController.OnShowDebugMenu__DelegateSignature
struct ANimbusDebugController_OnShowDebugMenu__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.NimbusDebugController.OnPause__DelegateSignature
struct ANimbusDebugController_OnPause__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.NimbusDebugController.OnHideDebugMenu__DelegateSignature
struct ANimbusDebugController_OnHideDebugMenu__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.NimbusDebugController.OnExit__DelegateSignature
struct ANimbusDebugController_OnExit__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.NimbusDebugController.OnAttachToTarget__DelegateSignature
struct ANimbusDebugController_OnAttachToTarget__DelegateSignature_Params
{
};

// Function Nimbus.NimbusDebugController.GetYawAcceleration
struct ANimbusDebugController_GetYawAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusDebugController.GetState
struct ANimbusDebugController_GetState_Params
{
	EDebugModeState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusDebugController.GetSpeedScale
struct ANimbusDebugController_GetSpeedScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusDebugController.GetLookSensitivity
struct ANimbusDebugController_GetLookSensitivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusDebugController.GetIsUsingFPSControls
struct ANimbusDebugController_GetIsUsingFPSControls_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusDebugController.GetIsSpeedBoostEnabled
struct ANimbusDebugController_GetIsSpeedBoostEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusDebugController.GetDebugController
struct ANimbusDebugController_GetDebugController_Params
{
	class ANimbusDebugController*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.DebugMenuPreviewRadioDataTableList.SetRadioDataTable
struct UDebugMenuPreviewRadioDataTableList_SetRadioDataTable_Params
{
	TArray<class UDataTable*>                          InRadioDataTable;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Nimbus.DestroyableTGT.ActivateTGT
struct ADestroyableTGT_ActivateTGT_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.DialogManager.OpenDialogID
struct UDialogManager_OpenDialogID_Params
{
	EDialogIDs                                         DialogID;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DialogArguments;                                          // (Parm, ZeroConstructor)
	struct FDialogHandle                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Nimbus.DialogManager.OpenDialog
struct UDialogManager_OpenDialog_Params
{
	struct FDialogInfo                                 DialogInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FDialogHandle                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Nimbus.DialogManager.OnItemAccepted
struct UDialogManager_OnItemAccepted_Params
{
	struct FDialogInfo                                 DialogInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.DialogManager.OnDialogOpened
struct UDialogManager_OnDialogOpened_Params
{
	struct FDialogInfo                                 DialogInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.DialogManager.OnDialogClosed
struct UDialogManager_OnDialogClosed_Params
{
	struct FDialogInfo                                 DialogInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.DialogManager.IsDialogStackEmpty
struct UDialogManager_IsDialogStackEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.DialogManager.IsDialogOpen
struct UDialogManager_IsDialogOpen_Params
{
	bool                                               bIncludeIcons;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.DialogManager.IsDialogInStack
struct UDialogManager_IsDialogInStack_Params
{
	struct FDialogHandle                               DialogHandle;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.DialogManager.IsDialogIDInStack
struct UDialogManager_IsDialogIDInStack_Params
{
	EDialogIDs                                         DialogID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.DialogManager.GetDialogResultByHandle
struct UDialogManager_GetDialogResultByHandle_Params
{
	struct FDialogHandle                               DialogHandle;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	EDialogResults                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.DialogManager.GetDialogResult
struct UDialogManager_GetDialogResult_Params
{
	EDialogResults                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.DialogManager.GetCurrentOpenDialogWidget
struct UDialogManager_GetCurrentOpenDialogWidget_Params
{
	class UDialogWidget*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.DialogManager.GetCurrentDialogID
struct UDialogManager_GetCurrentDialogID_Params
{
	EDialogIDs                                         ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.DialogManager.GetCurrentDialogHandle
struct UDialogManager_GetCurrentDialogHandle_Params
{
	struct FDialogHandle                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function Nimbus.DialogManager.DoesDialogWidgetExist
struct UDialogManager_DoesDialogWidgetExist_Params
{
	EDialogType                                        DialogType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.DialogManager.CloseDialogByID
struct UDialogManager_CloseDialogByID_Params
{
	EDialogIDs                                         DialogID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.DialogManager.CloseAllDialogs
struct UDialogManager_CloseAllDialogs_Params
{
	uint32_t                                           LimitPriorityHigh;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.EnemyMissileIndicatorComponent.OnOwnerSuspendedBySleep
struct UEnemyMissileIndicatorComponent_OnOwnerSuspendedBySleep_Params
{
};

// Function Nimbus.EnemyMissileIndicatorComponent.OnOwnerResumedBySleep
struct UEnemyMissileIndicatorComponent_OnOwnerResumedBySleep_Params
{
};

// Function Nimbus.EnemyMissileIndicatorComponent.OnHUDEnabled
struct UEnemyMissileIndicatorComponent_OnHUDEnabled_Params
{
};

// Function Nimbus.EnemyMissileIndicatorComponent.OnHUDDisabled
struct UEnemyMissileIndicatorComponent_OnHUDDisabled_Params
{
};

// Function Nimbus.EULAHelper.OnDialogItemAccepted
struct UEULAHelper_OnDialogItemAccepted_Params
{
	struct FDialogData                                 DialogData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.Flare.OnImpact
struct AFlare_OnImpact_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.FlyBySoundComponent.OnRestored
struct UFlyBySoundComponent_OnRestored_Params
{
};

// Function Nimbus.GenericMenu.SetActiveLayerId
struct AGenericMenu_SetActiveLayerId_Params
{
	int                                                LayerId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceSet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.GenericMenu.PrevLayer
struct AGenericMenu_PrevLayer_Params
{
};

// Function Nimbus.GenericMenu.NextLayer
struct AGenericMenu_NextLayer_Params
{
};

// Function Nimbus.GroundVehicleTrailVFXComponent.OnRestored
struct UGroundVehicleTrailVFXComponent_OnRestored_Params
{
};

// Function Nimbus.GroundVehicleTrailVFXComponent.OnOwnerVisibilityChanged
struct UGroundVehicleTrailVFXComponent_OnOwnerVisibilityChanged_Params
{
	bool                                               bVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GuideMessageWidget.OnHUDEnabled
struct UGuideMessageWidget_OnHUDEnabled_Params
{
};

// Function Nimbus.GuideMessageWidget.OnHUDDisabled
struct UGuideMessageWidget_OnHUDDisabled_Params
{
};

// Function Nimbus.GuideMessageWidget.OnCameraViewChanged
struct UGuideMessageWidget_OnCameraViewChanged_Params
{
	ECameraType                                        CameraType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GuideMessageWidget.HideGuideMessage
struct UGuideMessageWidget_HideGuideMessage_Params
{
};

// Function Nimbus.GuideMessageWidget.DisplayGuideMessage
struct UGuideMessageWidget_DisplayGuideMessage_Params
{
	EGuideMessageType                                  GuideMessageType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.SetWindowsVSyncOn
struct UGraphicsSettingsWindowsBlueprintLibrary_SetWindowsVSyncOn_Params
{
	bool                                               InVSyncOn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.SetWindowsTextureQuality
struct UGraphicsSettingsWindowsBlueprintLibrary_SetWindowsTextureQuality_Params
{
	EGraphicsSettingsWindowsTextureQuality             InTextureQuality;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.SetWindowsSSROn
struct UGraphicsSettingsWindowsBlueprintLibrary_SetWindowsSSROn_Params
{
	bool                                               InSSROn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.SetWindowsShadowQuality
struct UGraphicsSettingsWindowsBlueprintLibrary_SetWindowsShadowQuality_Params
{
	EGraphicsSettingsWindowsShadowQuality              InShadowQuality;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.SetWindowsPreset
struct UGraphicsSettingsWindowsBlueprintLibrary_SetWindowsPreset_Params
{
	EGraphicsSettingsWindowsPreset                     InPreset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.SetWindowsPostProcessQuality
struct UGraphicsSettingsWindowsBlueprintLibrary_SetWindowsPostProcessQuality_Params
{
	EGraphicsSettingsWindowsPostProcessQuality         InPostProcessQuality;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.SetWindowsMotionBlurOn
struct UGraphicsSettingsWindowsBlueprintLibrary_SetWindowsMotionBlurOn_Params
{
	bool                                               InMotionBlurOn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.SetWindowsFrameLimit
struct UGraphicsSettingsWindowsBlueprintLibrary_SetWindowsFrameLimit_Params
{
	EGraphicsSettingsWindowsFrameLimit                 InFrameLimit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.SetWindowsEffectQuality
struct UGraphicsSettingsWindowsBlueprintLibrary_SetWindowsEffectQuality_Params
{
	EGraphicsSettingsWindowsEffectQuality              InEffectQuality;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.SetWindowsEffectAmount
struct UGraphicsSettingsWindowsBlueprintLibrary_SetWindowsEffectAmount_Params
{
	EGraphicsSettingsWindowsEffectAmount               InEffectAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.SetWindowsDrawScale
struct UGraphicsSettingsWindowsBlueprintLibrary_SetWindowsDrawScale_Params
{
	EGraphicsSettingsWindowsDrawScale                  InDrawScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.SetWindowsBloomOn
struct UGraphicsSettingsWindowsBlueprintLibrary_SetWindowsBloomOn_Params
{
	bool                                               InBloomOn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.SetWindowsAntiAliasing
struct UGraphicsSettingsWindowsBlueprintLibrary_SetWindowsAntiAliasing_Params
{
	EGraphicsSettingsWindowsAntiAliasing               InAntiAliasing;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.SaveWindowsSetting
struct UGraphicsSettingsWindowsBlueprintLibrary_SaveWindowsSetting_Params
{
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.RevertWindowsScreenSetting
struct UGraphicsSettingsWindowsBlueprintLibrary_RevertWindowsScreenSetting_Params
{
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.ResetWindowsSetting
struct UGraphicsSettingsWindowsBlueprintLibrary_ResetWindowsSetting_Params
{
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.RequestWindowsScreenSetting
struct UGraphicsSettingsWindowsBlueprintLibrary_RequestWindowsScreenSetting_Params
{
	struct FGraphicsSettingsWindowsScreenSetting       InScreenSetting;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.ReflectWindowsSetting
struct UGraphicsSettingsWindowsBlueprintLibrary_ReflectWindowsSetting_Params
{
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.IsWindowsVSyncOn
struct UGraphicsSettingsWindowsBlueprintLibrary_IsWindowsVSyncOn_Params
{
	bool                                               OutVSyncOn;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.IsWindowsSSROn
struct UGraphicsSettingsWindowsBlueprintLibrary_IsWindowsSSROn_Params
{
	bool                                               OutSSROn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.IsWindowsMotionBlurOn
struct UGraphicsSettingsWindowsBlueprintLibrary_IsWindowsMotionBlurOn_Params
{
	bool                                               OutMotionBlurOn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.IsWindowsBloomOn
struct UGraphicsSettingsWindowsBlueprintLibrary_IsWindowsBloomOn_Params
{
	bool                                               OutBloomOn;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.GetWindowsWindowResolutionArray
struct UGraphicsSettingsWindowsBlueprintLibrary_GetWindowsWindowResolutionArray_Params
{
	TArray<struct FGraphicsSettingsWindowsResolution>  OutResolutionArray;                                       // (Parm, OutParm, ZeroConstructor)
	bool                                               bIsNeedAspect;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.GetWindowsTextureQuality
struct UGraphicsSettingsWindowsBlueprintLibrary_GetWindowsTextureQuality_Params
{
	EGraphicsSettingsWindowsTextureQuality             OutTextureQuality;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.GetWindowsShadowQuality
struct UGraphicsSettingsWindowsBlueprintLibrary_GetWindowsShadowQuality_Params
{
	EGraphicsSettingsWindowsShadowQuality              OutShadowQuality;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.GetWindowsScreenSettingDefault
struct UGraphicsSettingsWindowsBlueprintLibrary_GetWindowsScreenSettingDefault_Params
{
	struct FGraphicsSettingsWindowsScreenSetting       OutScreenSetting;                                         // (Parm, OutParm)
	bool                                               bIsNeedAspect;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.GetWindowsScreenSetting
struct UGraphicsSettingsWindowsBlueprintLibrary_GetWindowsScreenSetting_Params
{
	struct FGraphicsSettingsWindowsScreenSetting       OutScreenSetting;                                         // (Parm, OutParm)
	bool                                               bIsNeedAspect;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.GetWindowsPreset
struct UGraphicsSettingsWindowsBlueprintLibrary_GetWindowsPreset_Params
{
	EGraphicsSettingsWindowsPreset                     OutPreset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.GetWindowsPostProcessQuality
struct UGraphicsSettingsWindowsBlueprintLibrary_GetWindowsPostProcessQuality_Params
{
	EGraphicsSettingsWindowsPostProcessQuality         OutPostProcessQuality;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.GetWindowsFullScreenResolutionArray
struct UGraphicsSettingsWindowsBlueprintLibrary_GetWindowsFullScreenResolutionArray_Params
{
	TArray<struct FGraphicsSettingsWindowsResolution>  OutResolutionArray;                                       // (Parm, OutParm, ZeroConstructor)
	bool                                               bIsNeedAspect;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.GetWindowsFrameLimit
struct UGraphicsSettingsWindowsBlueprintLibrary_GetWindowsFrameLimit_Params
{
	EGraphicsSettingsWindowsFrameLimit                 OutFrameLimit;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.GetWindowsEffectQuality
struct UGraphicsSettingsWindowsBlueprintLibrary_GetWindowsEffectQuality_Params
{
	EGraphicsSettingsWindowsEffectQuality              OutEffectQuality;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.GetWindowsEffectAmount
struct UGraphicsSettingsWindowsBlueprintLibrary_GetWindowsEffectAmount_Params
{
	EGraphicsSettingsWindowsEffectAmount               OutEffectAmount;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.GetWindowsDrawScale
struct UGraphicsSettingsWindowsBlueprintLibrary_GetWindowsDrawScale_Params
{
	EGraphicsSettingsWindowsDrawScale                  OutDrawScale;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.GetWindowsBorderlessResolution
struct UGraphicsSettingsWindowsBlueprintLibrary_GetWindowsBorderlessResolution_Params
{
	struct FGraphicsSettingsWindowsResolution          OutResolution;                                            // (Parm, OutParm)
	bool                                               bIsNeedAspect;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.GetWindowsAntiAliasing
struct UGraphicsSettingsWindowsBlueprintLibrary_GetWindowsAntiAliasing_Params
{
	EGraphicsSettingsWindowsAntiAliasing               OutAntiAliasing;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.GraphicsSettingsWindowsBlueprintLibrary.ConfirmWindowsScreenSetting
struct UGraphicsSettingsWindowsBlueprintLibrary_ConfirmWindowsScreenSetting_Params
{
};

// Function Nimbus.HeatBombExplosion.OnImpactResponse
struct AHeatBombExplosion_OnImpactResponse_Params
{
};

// Function Nimbus.HUDMessageWidget.TurnOffGlowForPortrait
struct UHUDMessageWidget_TurnOffGlowForPortrait_Params
{
	float                                              InLuminanceRate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.HUDMessageWidget.ShowPortraitEvent
struct UHUDMessageWidget_ShowPortraitEvent_Params
{
};

// Function Nimbus.HUDMessageWidget.RadioMessageReceived
struct UHUDMessageWidget_RadioMessageReceived_Params
{
	struct FRadioText                                  RadioText;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.HUDMessageWidget.OnHUDEnabled
struct UHUDMessageWidget_OnHUDEnabled_Params
{
};

// Function Nimbus.HUDMessageWidget.OnHUDDisabled
struct UHUDMessageWidget_OnHUDDisabled_Params
{
};

// Function Nimbus.HUDMessageWidget.OnHUDAlertEnd
struct UHUDMessageWidget_OnHUDAlertEnd_Params
{
};

// Function Nimbus.HUDMessageWidget.OnHUDAlertBegin
struct UHUDMessageWidget_OnHUDAlertBegin_Params
{
};

// Function Nimbus.HUDMessageWidget.OnCurrentHUDAlertColorUpdated
struct UHUDMessageWidget_OnCurrentHUDAlertColorUpdated_Params
{
	struct FLinearColor                                NewColor;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsDefaultColor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.HUDMessageWidget.OnCameraViewChanged
struct UHUDMessageWidget_OnCameraViewChanged_Params
{
	ECameraType                                        CameraType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.IconStatBaseWidget.SetForcedPlaneIconDefaultColor
struct UIconStatBaseWidget_SetForcedPlaneIconDefaultColor_Params
{
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.IconStatBaseWidget.OnWeaponActivatorInitialize
struct UIconStatBaseWidget_OnWeaponActivatorInitialize_Params
{
};

// Function Nimbus.IconStatBaseWidget.OnSpecialWeaponChanged
struct UIconStatBaseWidget_OnSpecialWeaponChanged_Params
{
};

// Function Nimbus.IconStatBaseWidget.OnHUDEnabled
struct UIconStatBaseWidget_OnHUDEnabled_Params
{
};

// Function Nimbus.IGCPlaneController.OnIGCStart
struct AIGCPlaneController_OnIGCStart_Params
{
	bool                                               bStopPlaneSounds;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.IGCPlaneController.OnIGCEnd
struct AIGCPlaneController_OnIGCEnd_Params
{
};

// Function Nimbus.IGCPlaneController.OnIgcCameraChanged
struct AIGCPlaneController_OnIgcCameraChanged_Params
{
	class ACameraActor*                                NewCameraActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.IGCPlaneController.GetControlledPlayerPlane
struct AIGCPlaneController_GetControlledPlayerPlane_Params
{
	class APlayerPlane*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.IGCPlaneController.GetControlledAIPlane
struct AIGCPlaneController_GetControlledAIPlane_Params
{
	class AAIPlane*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.InstantRadioReceiveWidget.OnHUDEnabled
struct UInstantRadioReceiveWidget_OnHUDEnabled_Params
{
};

// Function Nimbus.InstantRadioReceiveWidget.OnHUDDisabled
struct UInstantRadioReceiveWidget_OnHUDDisabled_Params
{
};

// Function Nimbus.LaserInterceptor.OnLifeTimeExpired
struct ALaserInterceptor_OnLifeTimeExpired_Params
{
};

// Function Nimbus.LaserInterceptor.OnCreateWeaponEnd
struct ALaserInterceptor_OnCreateWeaponEnd_Params
{
};

// Function Nimbus.LobbyGameMode.StartGame
struct ALobbyGameMode_StartGame_Params
{
};

// Function Nimbus.LobbyGameMode.AllClientsHaveValidSessionObject
struct ALobbyGameMode_AllClientsHaveValidSessionObject_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.LocalizationManager.SetVoiceCulture
struct ULocalizationManager_SetVoiceCulture_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Nimbus.LocalizationManager.SetSubtitleCulture
struct ULocalizationManager_SetSubtitleCulture_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Nimbus.LocalizationManager.SetIsDebugOutputEnabled
struct ULocalizationManager_SetIsDebugOutputEnabled_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.LocalizationManager.SetCulture
struct ULocalizationManager_SetCulture_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Nimbus.LocalizationManager.LocalizeStringParams
struct ULocalizationManager_LocalizeStringParams_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	TArray<struct FString>                             Params;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.LocalizationManager.LocalizeString
struct ULocalizationManager_LocalizeString_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               bErrorCheck;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DummyPrefix;                                              // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.LocalizationManager.HasString
struct ULocalizationManager_HasString_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.LocalizationManager.GetVoiceCulture
struct ULocalizationManager_GetVoiceCulture_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.LocalizationManager.GetSubtitleCulture
struct ULocalizationManager_GetSubtitleCulture_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.LocalizationManager.GetIsDebugOutputEnabled
struct ULocalizationManager_GetIsDebugOutputEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.LocalizationManager.GetCulture
struct ULocalizationManager_GetCulture_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.MagneticAnomalyDetectorComponent.StopJammingMode
struct UMagneticAnomalyDetectorComponent_StopJammingMode_Params
{
};

// Function Nimbus.MagneticAnomalyDetectorComponent.SetJammingMode
struct UMagneticAnomalyDetectorComponent_SetJammingMode_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MagneticAnomalyDetectorComponent.GetSearchResult
struct UMagneticAnomalyDetectorComponent_GetSearchResult_Params
{
	struct FSearchResultDeta                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Nimbus.MenuScrollBox.SetMenuScrollBar
struct UMenuScrollBox_SetMenuScrollBar_Params
{
	class UImage*                                      InScrollBar;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      InScrollBarBackground;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Nimbus.MenuScrollBox.SetMenuBox
struct UMenuScrollBox_SetMenuBox_Params
{
	class UTextBlock*                                  InText;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  InScrollBox;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Nimbus.MenuScrollBox.RemoveChildAt
struct UMenuScrollBox_RemoveChildAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MenuScrollBox.GetChildAt
struct UMenuScrollBox_GetChildAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.MenuScrollBox.ClearContent
struct UMenuScrollBox_ClearContent_Params
{
};

// Function Nimbus.MenuScrollBox.AddChild
struct UMenuScrollBox_AddChild_Params
{
	class UWidget*                                     InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction Nimbus.MiniGameHUDManager.OnSuccessAerialRefuelingDelegate__DelegateSignature
struct UMiniGameHUDManager_OnSuccessAerialRefuelingDelegate__DelegateSignature_Params
{
};

// Function Nimbus.MiniGameHUDManager.OnReferencedActorEndPlayHandler
struct UMiniGameHUDManager_OnReferencedActorEndPlayHandler_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGamePhase.OnSuccessTakeoffHandler
struct AMiniGamePhase_OnSuccessTakeoffHandler_Params
{
	float                                              ElapsedTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGamePhase.OnSuccessLandingHandler
struct AMiniGamePhase_OnSuccessLandingHandler_Params
{
	float                                              ElapsedTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGamePhase.OnSuccessAerialRefuelingHandler
struct AMiniGamePhase_OnSuccessAerialRefuelingHandler_Params
{
	float                                              ElapsedTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGamePhase.OnStartTakeoffHandler
struct AMiniGamePhase_OnStartTakeoffHandler_Params
{
	bool                                               bIsRetry;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGamePhase.OnStartSupplyMenuHandler
struct AMiniGamePhase_OnStartSupplyMenuHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnStartPlayableTakeoffHandler
struct AMiniGamePhase_OnStartPlayableTakeoffHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnStartPlayableLandingHandler
struct AMiniGamePhase_OnStartPlayableLandingHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnStartPlayableAerialRefuelingHandler
struct AMiniGamePhase_OnStartPlayableAerialRefuelingHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnStartLandingHandler
struct AMiniGamePhase_OnStartLandingHandler_Params
{
	bool                                               bIsRetry;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGamePhase.OnStartAerialRefuelingProbeStartHandler
struct AMiniGamePhase_OnStartAerialRefuelingProbeStartHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnStartAerialRefuelingProbeEndHandler
struct AMiniGamePhase_OnStartAerialRefuelingProbeEndHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnStartAerialRefuelingHandler
struct AMiniGamePhase_OnStartAerialRefuelingHandler_Params
{
	bool                                               bIsRetry;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGamePhase.OnSkipTakeoffHandler
struct AMiniGamePhase_OnSkipTakeoffHandler_Params
{
	float                                              FadeOutDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MiniGamePhase.OnSkipMiniGamePhaseDelegate__DelegateSignature
struct AMiniGamePhase_OnSkipMiniGamePhaseDelegate__DelegateSignature_Params
{
	float                                              FadeOutDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGamePhase.OnSkipLandingHandler
struct AMiniGamePhase_OnSkipLandingHandler_Params
{
	float                                              FadeOutDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGamePhase.OnSkipAerialRefuelingHandler
struct AMiniGamePhase_OnSkipAerialRefuelingHandler_Params
{
	float                                              FadeOutDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MiniGamePhase.OnPreStartMiniGamePhaseDelegate__DelegateSignature
struct AMiniGamePhase_OnPreStartMiniGamePhaseDelegate__DelegateSignature_Params
{
	bool                                               bIsRetry;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGamePhase.OnMiniGameTick
struct AMiniGamePhase_OnMiniGameTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGamePhase.OnMiniGameStart
struct AMiniGamePhase_OnMiniGameStart_Params
{
};

// Function Nimbus.MiniGamePhase.OnMiniGameSkip
struct AMiniGamePhase_OnMiniGameSkip_Params
{
};

// Function Nimbus.MiniGamePhase.OnMiniGameComplete
struct AMiniGamePhase_OnMiniGameComplete_Params
{
};

// Function Nimbus.MiniGamePhase.OnFinishTakeoffHandler
struct AMiniGamePhase_OnFinishTakeoffHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnFinishLandingHandler
struct AMiniGamePhase_OnFinishLandingHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnFinishdSupplyMenuHandler
struct AMiniGamePhase_OnFinishdSupplyMenuHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnFinishAerialRefuelingHandler
struct AMiniGamePhase_OnFinishAerialRefuelingHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnFailedMiniGameHandler
struct AMiniGamePhase_OnFailedMiniGameHandler_Params
{
	EMissionStateMiniGameFailReason                    Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGamePhase.OnCooldownStartTimeOutHandler
struct AMiniGamePhase_OnCooldownStartTimeOutHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnCooldownStartSuccessfulHandler
struct AMiniGamePhase_OnCooldownStartSuccessfulHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnCooldownStartOutOfZoneHandler
struct AMiniGamePhase_OnCooldownStartOutOfZoneHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnCooldownStartDeadHandler
struct AMiniGamePhase_OnCooldownStartDeadHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnCooldownFinishedSuccessfulHandler
struct AMiniGamePhase_OnCooldownFinishedSuccessfulHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnCooldownFinishedFailedHandler
struct AMiniGamePhase_OnCooldownFinishedFailedHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnCloseSupplyMenu
struct AMiniGamePhase_OnCloseSupplyMenu_Params
{
};

// Function Nimbus.MiniGamePhase.OnCheckInterruptStateHandler
struct AMiniGamePhase_OnCheckInterruptStateHandler_Params
{
};

// Function Nimbus.MiniGamePhase.OnActorEndOverlapTakeoffRunwayHandler
struct AMiniGamePhase_OnActorEndOverlapTakeoffRunwayHandler_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGamePhase.OnActorEndOverlapLandingRunwayHandler
struct AMiniGamePhase_OnActorEndOverlapLandingRunwayHandler_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGamePhase.OnActorBeginOverlapTakeoffRunwayHandler
struct AMiniGamePhase_OnActorBeginOverlapTakeoffRunwayHandler_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGamePhase.OnActorBeginOverlapLandingRunwayHandler
struct AMiniGamePhase_OnActorBeginOverlapLandingRunwayHandler_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MiniGameLandingState.OnSuccessLandingDelegate__DelegateSignature
struct UMiniGameLandingState_OnSuccessLandingDelegate__DelegateSignature_Params
{
	float                                              ElapsedTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MiniGameLandingState.OnStartLandingPlayableDelegate__DelegateSignature
struct UMiniGameLandingState_OnStartLandingPlayableDelegate__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.MiniGameLandingState.OnStartLandingDelegate__DelegateSignature
struct UMiniGameLandingState_OnStartLandingDelegate__DelegateSignature_Params
{
	bool                                               bIsRetry;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MiniGameLandingState.OnSkipDelegate__DelegateSignature
struct UMiniGameLandingState_OnSkipDelegate__DelegateSignature_Params
{
	float                                              FadeOutDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGameLandingState.OnPlayerEndLandingHandler
struct UMiniGameLandingState_OnPlayerEndLandingHandler_Params
{
};

// DelegateFunction Nimbus.MiniGameLandingState.OnFinishLandingDelegate__DelegateSignature
struct UMiniGameLandingState_OnFinishLandingDelegate__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.MiniGameLandingState.OnFailLandingDelegate__DelegateSignature
struct UMiniGameLandingState_OnFailLandingDelegate__DelegateSignature_Params
{
	EMissionStateMiniGameFailReason                    Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGameLandingState.OnFadeOutHandler
struct UMiniGameLandingState_OnFadeOutHandler_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGameRefuelInterpolator.OnPlayerAdjustMovedTransformHandler
struct UMiniGameRefuelInterpolator_OnPlayerAdjustMovedTransformHandler_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInOutChangedTransform;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InOutNextLocation;                                        // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    InOutNextRotation;                                        // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    InOutNextMomentSpeed;                                     // (Parm, OutParm, IsPlainOldData)
};

// Function Nimbus.MiniGameMiniMapManager.OnReferencedActorEndPlayHandler
struct UMiniGameMiniMapManager_OnReferencedActorEndPlayHandler_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGameVolumeSet.OnActorEndOverlapHandler
struct UMiniGameVolumeSet_OnActorEndOverlapHandler_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGameVolumeSet.OnActorBeginOverlapHandler
struct UMiniGameVolumeSet_OnActorBeginOverlapHandler_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MiniGameVolumeSet.ActorOverlapDelegate__DelegateSignature
struct UMiniGameVolumeSet_ActorOverlapDelegate__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniMapLayerWidget.UpdateMiniMapRadarVisibility
struct UMiniMapLayerWidget_UpdateMiniMapRadarVisibility_Params
{
	EMiniMapType                                       NewMiniMapType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniMapLayerWidget.OnUpdateMiniMapRadarVisibility
struct UMiniMapLayerWidget_OnUpdateMiniMapRadarVisibility_Params
{
	EMiniMapType                                       NewMiniMapType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniMapLayerWidget.OnHUDAlertEnd
struct UMiniMapLayerWidget_OnHUDAlertEnd_Params
{
};

// Function Nimbus.MiniMapLayerWidget.OnHUDAlertBegin
struct UMiniMapLayerWidget_OnHUDAlertBegin_Params
{
};

// Function Nimbus.MiniMapLayerWidget.OnCurrentHUDAlertColorUpdated
struct UMiniMapLayerWidget_OnCurrentHUDAlertColorUpdated_Params
{
	struct FLinearColor                                NewColor;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsDefaultColor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniMapWidget.SetRetainerBoxEffectsSaturation
struct UMiniMapWidget_SetRetainerBoxEffectsSaturation_Params
{
	float                                              InSaturationValue;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniMapWidget.SetRetainerBoxApplyGammaCorrection
struct UMiniMapWidget_SetRetainerBoxApplyGammaCorrection_Params
{
	bool                                               bApplyGammaCorrection;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniMapWidget.SetRenderIconScale
struct UMiniMapWidget_SetRenderIconScale_Params
{
	float                                              Scale;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniMapWidget.SetPlayerIconScale
struct UMiniMapWidget_SetPlayerIconScale_Params
{
	float                                              Scale;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniMapWidget.RefreshMiniMap
struct UMiniMapWidget_RefreshMiniMap_Params
{
};

// Function Nimbus.MiniMapWidget.OnHUDDisabled
struct UMiniMapWidget_OnHUDDisabled_Params
{
};

// Function Nimbus.MiniMapWidget.OnHUDAlertEnd
struct UMiniMapWidget_OnHUDAlertEnd_Params
{
};

// Function Nimbus.MiniMapWidget.OnHUDAlertBegin
struct UMiniMapWidget_OnHUDAlertBegin_Params
{
};

// Function Nimbus.MiniMapWidget.OnCurrentHUDAlertColorUpdated
struct UMiniMapWidget_OnCurrentHUDAlertColorUpdated_Params
{
	struct FLinearColor                                NewColor;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsDefaultColor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniMapWidget.OnCombatZoneUpdated
struct UMiniMapWidget_OnCombatZoneUpdated_Params
{
};

// Function Nimbus.MiniMapWidget.GetMiniMapSize
struct UMiniMapWidget_GetMiniMapSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MiniMapRadarWidget.RefreshMiniMap
struct UMiniMapRadarWidget_RefreshMiniMap_Params
{
};

// Function Nimbus.MiniMapRadarWidget.OnHUDEnabled
struct UMiniMapRadarWidget_OnHUDEnabled_Params
{
};

// Function Nimbus.MiniMapRadarWidget.OnHUDAlertEnd
struct UMiniMapRadarWidget_OnHUDAlertEnd_Params
{
};

// Function Nimbus.MiniMapRadarWidget.OnHUDAlertBegin
struct UMiniMapRadarWidget_OnHUDAlertBegin_Params
{
};

// Function Nimbus.MiniMapRadarWidget.OnCurrentHUDAlertColorUpdated
struct UMiniMapRadarWidget_OnCurrentHUDAlertColorUpdated_Params
{
	struct FLinearColor                                NewColor;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsDefaultColor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniMapRadarWidget.ChangeRadarLineColor
struct UMiniMapRadarWidget_ChangeRadarLineColor_Params
{
};

// Function Nimbus.MiniGameAerialRefuelingState.OnVisibilityChangedRefuelingAircraftHandler
struct UMiniGameAerialRefuelingState_OnVisibilityChangedRefuelingAircraftHandler_Params
{
	bool                                               bVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGameAerialRefuelingState.OnSuccessAerialRefuelingHandler
struct UMiniGameAerialRefuelingState_OnSuccessAerialRefuelingHandler_Params
{
};

// DelegateFunction Nimbus.MiniGameAerialRefuelingState.OnSuccessAerialRefuelingDelegate__DelegateSignature
struct UMiniGameAerialRefuelingState_OnSuccessAerialRefuelingDelegate__DelegateSignature_Params
{
	float                                              ElapsedTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MiniGameAerialRefuelingState.OnStartProbeStartDelegate__DelegateSignature
struct UMiniGameAerialRefuelingState_OnStartProbeStartDelegate__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.MiniGameAerialRefuelingState.OnStartProbeEndDelegate__DelegateSignature
struct UMiniGameAerialRefuelingState_OnStartProbeEndDelegate__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.MiniGameAerialRefuelingState.OnStartAerialRefuelingPlayableDelegate__DelegateSignature
struct UMiniGameAerialRefuelingState_OnStartAerialRefuelingPlayableDelegate__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.MiniGameAerialRefuelingState.OnStartAerialRefuelingDelegate__DelegateSignature
struct UMiniGameAerialRefuelingState_OnStartAerialRefuelingDelegate__DelegateSignature_Params
{
	bool                                               bIsRetry;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MiniGameAerialRefuelingState.OnSkipDelegate__DelegateSignature
struct UMiniGameAerialRefuelingState_OnSkipDelegate__DelegateSignature_Params
{
	float                                              FadeOutDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MiniGameAerialRefuelingState.OnFinishAerialRefuelingDelegate__DelegateSignature
struct UMiniGameAerialRefuelingState_OnFinishAerialRefuelingDelegate__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.MiniGameAerialRefuelingState.OnFailAerialRefuelingDelegate__DelegateSignature
struct UMiniGameAerialRefuelingState_OnFailAerialRefuelingDelegate__DelegateSignature_Params
{
	EMissionStateMiniGameFailReason                    Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGameAerialRefuelingState.OnFadeOutHandler
struct UMiniGameAerialRefuelingState_OnFadeOutHandler_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniMapScrollableWidget.RefreshMiniMap
struct UMiniMapScrollableWidget_RefreshMiniMap_Params
{
};

// Function Nimbus.MiniMapScrollableWidget.OnHUDAlertEnd
struct UMiniMapScrollableWidget_OnHUDAlertEnd_Params
{
};

// Function Nimbus.MiniMapScrollableWidget.OnHUDAlertBegin
struct UMiniMapScrollableWidget_OnHUDAlertBegin_Params
{
};

// Function Nimbus.Mission.SkipMiniGame
struct AMission_SkipMiniGame_Params
{
};

// Function Nimbus.Mission.ShowMissionQuota
struct AMission_ShowMissionQuota_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.ShowMissionAccomplished_S
struct AMission_ShowMissionAccomplished_S_Params
{
	EMissionSuccessNotificationType                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.SetTrueSkyTime_S
struct AMission_SetTrueSkyTime_S_Params
{
	int                                                Hour;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Minute;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShadowBase;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.SetRemainingHpPercentage
struct AMission_SetRemainingHpPercentage_Params
{
	float                                              Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.SetObjectiveMissionScore_S
struct AMission_SetObjectiveMissionScore_S_Params
{
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.SetMissionObjectivesOnPause_S
struct AMission_SetMissionObjectivesOnPause_S_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnSystemMissionHandler
struct AMission_OnSystemMissionHandler_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnSystemLevelScriptActorHandler
struct AMission_OnSystemLevelScriptActorHandler_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnSystemEndPhysicsHandler
struct AMission_OnSystemEndPhysicsHandler_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnSuccessSupplyPhaseHandler
struct AMission_OnSuccessSupplyPhaseHandler_Params
{
	class AMissionPhase*                               MissionPhase;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RestartLocation;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    RestartRotation;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.Mission.OnSuccessCurrentPhaseHandler
struct AMission_OnSuccessCurrentPhaseHandler_Params
{
	class AMissionPhase*                               MissionPhase;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnStoppedReplayHandler
struct AMission_OnStoppedReplayHandler_Params
{
};

// Function Nimbus.Mission.OnStartSupplyPhaseHandler
struct AMission_OnStartSupplyPhaseHandler_Params
{
	class AMissionPhase*                               MissionPhase;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnStartNextPhaseHandler
struct AMission_OnStartNextPhaseHandler_Params
{
	class AMissionPhase*                               MissionPhase;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRestart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnPreStopBusEvent
struct AMission_OnPreStopBusEvent_Params
{
	ENimbusSoundType                                   BusType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnPreStartReplayHandler
struct AMission_OnPreStartReplayHandler_Params
{
	bool                                               bIsRestart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.Mission.OnPreStartMiniGamePhaseDelegate__DelegateSignature
struct AMission_OnPreStartMiniGamePhaseDelegate__DelegateSignature_Params
{
	bool                                               bIsRetry;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnPostStartReplayHandler
struct AMission_OnPostStartReplayHandler_Params
{
	bool                                               bIsRestart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnIgcStartSkipFadeOutHandler
struct AMission_OnIgcStartSkipFadeOutHandler_Params
{
	bool                                               bStopBGM;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OverrideStopBGMEvent;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnIgcCameraChangedHandler
struct AMission_OnIgcCameraChangedHandler_Params
{
	class ACameraActor*                                NewCameraActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.Mission.OnIgcCameraChanged__DelegateSignature
struct AMission_OnIgcCameraChanged__DelegateSignature_Params
{
	class ACameraActor*                                NewCameraActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnGameEndPhysicsHandler
struct AMission_OnGameEndPhysicsHandler_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnFailCurrentPhaseHandler
struct AMission_OnFailCurrentPhaseHandler_Params
{
	class AMissionPhase*                               MissionPhase;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EMissionStatePhaseFailReason                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnEndIGCHandler
struct AMission_OnEndIGCHandler_Params
{
	struct FMissionIGCRequestInfo                      RequestInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AMissionPhase*                               MiniGameMapPhase;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnCooldownStartTimeOutHandler
struct AMission_OnCooldownStartTimeOutHandler_Params
{
};

// Function Nimbus.Mission.OnCooldownStartSuccessfulHandler
struct AMission_OnCooldownStartSuccessfulHandler_Params
{
};

// Function Nimbus.Mission.OnCooldownStartOutOfZoneHandler
struct AMission_OnCooldownStartOutOfZoneHandler_Params
{
};

// Function Nimbus.Mission.OnCooldownStartFailObjectiveHandler
struct AMission_OnCooldownStartFailObjectiveHandler_Params
{
};

// Function Nimbus.Mission.OnCooldownStartDeadHandler
struct AMission_OnCooldownStartDeadHandler_Params
{
};

// Function Nimbus.Mission.OnCooldownFinishedHandler
struct AMission_OnCooldownFinishedHandler_Params
{
};

// Function Nimbus.Mission.OnCheckInterruptStateHandler
struct AMission_OnCheckInterruptStateHandler_Params
{
};

// Function Nimbus.Mission.OnChangedReplayChapterHandler
struct AMission_OnChangedReplayChapterHandler_Params
{
};

// Function Nimbus.Mission.OnBeginIGCHandler
struct AMission_OnBeginIGCHandler_Params
{
	struct FMissionIGCRequestInfo                      RequestInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AMissionPhase*                               MiniGameMapPhase;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.OnActorSpawnedHandler
struct AMission_OnActorSpawnedHandler_Params
{
	class AActor*                                      SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.IsPlayingBGM
struct AMission_IsPlayingBGM_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Mission.IsMissionStarted
struct AMission_IsMissionStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Mission.IsMissionFailed
struct AMission_IsMissionFailed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Mission.IsMissionCompleted
struct AMission_IsMissionCompleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Mission.IsInIGC
struct AMission_IsInIGC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Nimbus.Mission.IGCPreviewDelegate__DelegateSignature
struct AMission_IGCPreviewDelegate__DelegateSignature_Params
{
	int                                                IGCNumber;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.GetObjectiveMissionScore_S
struct AMission_GetObjectiveMissionScore_S_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Mission.GetMissionScore_S
struct AMission_GetMissionScore_S_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Mission.GetMissionPhaseTimeLeftInSeconds_S
struct AMission_GetMissionPhaseTimeLeftInSeconds_S_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Mission.GetMissionPhaseElapsedTimeInSeconds_S
struct AMission_GetMissionPhaseElapsedTimeInSeconds_S_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Mission.GetMissionElapsedTimeInSeconds_S
struct AMission_GetMissionElapsedTimeInSeconds_S_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Mission.GetKillStatCount
struct AMission_GetKillStatCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Mission.GetKillStat
struct AMission_GetKillStat_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutName;                                                  // (Parm, OutParm, ZeroConstructor)
	int                                                OutScore;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutTime;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.GetCurrentMission
struct AMission_GetCurrentMission_Params
{
	bool                                               bIncludeOnline;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AMission*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Mission.GetConditionChecker
struct AMission_GetConditionChecker_Params
{
	class AMissionConditionChecker*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Mission.GetAIManager
struct AMission_GetAIManager_Params
{
	class AMissionAIManager*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Mission.ForcePauseMissionTimer_S
struct AMission_ForcePauseMissionTimer_S_Params
{
	bool                                               bPause;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.CompleteCoolDownOverride
struct AMission_CompleteCoolDownOverride_Params
{
	float                                              NewCooldownDuration;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewCooldownFadingDuration;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Mission.Complete
struct AMission_Complete_Params
{
};

// DelegateFunction Nimbus.Mission.CombatZoneUpdatedDelegate__DelegateSignature
struct AMission_CombatZoneUpdatedDelegate__DelegateSignature_Params
{
};

// Function Nimbus.MissionCommonActor.GetMissionCommonActor
struct AMissionCommonActor_GetMissionCommonActor_Params
{
	class AMissionCommonActor*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionAIManager.OnMissionPhaseRestarted
struct AMissionAIManager_OnMissionPhaseRestarted_Params
{
	struct FString                                     Dummy;                                                    // (Parm, ZeroConstructor)
};

// Function Nimbus.MissionConditionChecker.OnMissionPhaseRestarted
struct AMissionConditionChecker_OnMissionPhaseRestarted_Params
{
	struct FString                                     Dummy;                                                    // (Parm, ZeroConstructor)
};

// DelegateFunction Nimbus.MissionConditionChecker.OnConditionUpdate__DelegateSignature
struct AMissionConditionChecker_OnConditionUpdate__DelegateSignature_Params
{
};

// Function Nimbus.MissionConditionChecker.Get_TargetModifierStar
struct AMissionConditionChecker_Get_TargetModifierStar_Params
{
	class AGameObject*                                 GameObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Get_StealthContainerOpacityPercentage
struct AMissionConditionChecker_Get_StealthContainerOpacityPercentage_Params
{
	class AGameObject*                                 GameObject;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Get_LandingCourseAssistant
struct AMissionConditionChecker_Get_LandingCourseAssistant_Params
{
	float                                              TouchdownRate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TopSlopeRate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BottomSlopeRate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SideLineRate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TopExpandAngle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BottomExpandAngle;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SideExpandAngle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LimitGauge;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LimitRoll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_MiniGameCourseAssistant          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Get_AzimuthOfDegreesToObject
struct AMissionConditionChecker_Get_AzimuthOfDegreesToObject_Params
{
	class AGameObject*                                 GameObject;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRelativePosition;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_AzimuthOfDegrees                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Get_AzimuthOfClockToObject
struct AMissionConditionChecker_Get_AzimuthOfClockToObject_Params
{
	class AGameObject*                                 GameObject;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRelativePosition;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_AzimuthOfClock                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Get_AerialRefuellingCourseAssistant
struct AMissionConditionChecker_Get_AerialRefuellingCourseAssistant_Params
{
	float                                              ThresholdSideDistance;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdTopDistance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdBottomDistance;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SideExpandAngle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TopExpandAngle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BottomExpandAngle;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LimitGauge;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LimitRoll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_MiniGameCourseAssistant          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_WeaponType
struct AMissionConditionChecker_Check_WeaponType_Params
{
	class AWeaponBase*                                 Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_WeaponType                       WeaponType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase*                                 OutWeapon;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_WeaponLockedOnTarget
struct AMissionConditionChecker_Check_WeaponLockedOnTarget_Params
{
	class AWeaponBase*                                 HitWeapon;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 DamagedObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_WeaponInCloud
struct AMissionConditionChecker_Check_WeaponInCloud_Params
{
	class AWeaponBase*                                 Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_WeaponFired
struct AMissionConditionChecker_Check_WeaponFired_Params
{
	EMissionCondition_ObjectSpecificType               OwnerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_ObjectSpecificType               TargetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_WeaponType                       WeaponType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_WeaponCountRateLessThanOrEqualTo
struct AMissionConditionChecker_Check_WeaponCountRateLessThanOrEqualTo_Params
{
	int                                                WeaponCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_TeamDeathMatchSituation
struct AMissionConditionChecker_Check_TeamDeathMatchSituation_Params
{
	class AGameObject*                                 GameObject;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_TeamSituation                    Situation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_TeamDeathMatchScoreProgress
struct AMissionConditionChecker_Check_TeamDeathMatchScoreProgress_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_TargetPlaneRank
struct AMissionConditionChecker_Check_TargetPlaneRank_Params
{
	class AGameObject*                                 GameObject;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_TargetLockon
struct AMissionConditionChecker_Check_TargetLockon_Params
{
	EMissionCondition_ObjectSpecificType               TargetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_ObjectSpecificType               InstigatorType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_PhaseNo
struct AMissionConditionChecker_Check_PhaseNo_Params
{
	int                                                PhaseNo;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_PhaseElapsedTime
struct AMissionConditionChecker_Check_PhaseElapsedTime_Params
{
	float                                              ElapsedTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_OutOfCombatZone
struct AMissionConditionChecker_Check_OutOfCombatZone_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAdaptAIFlightBufferDist;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_ObjectType
struct AMissionConditionChecker_Check_ObjectType_Params
{
	class AGameObject*                                 GameObject;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_ObjectSpecificType               SpecificType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 OutGameObject;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_ObjectDestroyed
struct AMissionConditionChecker_Check_ObjectDestroyed_Params
{
	EMissionCondition_ObjectSpecificType               TargetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_ObjectSpecificType               InstigatorType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_ObjectDamaged
struct AMissionConditionChecker_Check_ObjectDamaged_Params
{
	EMissionCondition_ObjectSpecificType               TargetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_ObjectSpecificType               InstigatorType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_DamageType                       DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_MissionFailure
struct AMissionConditionChecker_Check_MissionFailure_Params
{
	EMissionCondition_FailureType                      FailureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_MissileLostTarget
struct AMissionConditionChecker_Check_MissileLostTarget_Params
{
	EMissionCondition_ObjectSpecificType               TargetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_ObjectSpecificType               OwnerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_MiniGameType
struct AMissionConditionChecker_Check_MiniGameType_Params
{
	EMissionCondition_MiniGameType                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_MiniGameDistance
struct AMissionConditionChecker_Check_MiniGameDistance_Params
{
	EMissionCondition_MiniGameDistanceType             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdDistanceMeter;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_LessMissionTimeLeft
struct AMissionConditionChecker_Check_LessMissionTimeLeft_Params
{
	float                                              CheckTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_ElapsedTimeSinceEnteredCloud
struct AMissionConditionChecker_Check_ElapsedTimeSinceEnteredCloud_Params
{
	class AGameObject*                                 GameObject;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 OutGameObject;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_ElapsedMissionTime
struct AMissionConditionChecker_Check_ElapsedMissionTime_Params
{
	float                                              CheckTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_DistanceFromPlayer
struct AMissionConditionChecker_Check_DistanceFromPlayer_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_BattleRoyalSituation
struct AMissionConditionChecker_Check_BattleRoyalSituation_Params
{
	class AGameObject*                                 GameObject;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_BattleRoyalSituation             Situation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionConditionChecker.Check_BattleRoyalRank
struct AMissionConditionChecker_Check_BattleRoyalRank_Params
{
	class AGameObject*                                 GameObject;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Nimbus.MissionEventListener.MissionEventListenerTick__DelegateSignature
struct AMissionEventListener_MissionEventListenerTick__DelegateSignature_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListener.EnableBPEvent
struct AMissionEventListener_EnableBPEvent_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerWeaponCountChanged
struct UMissionEventListenerInterface_HandlerWeaponCountChanged_Params
{
	class AGameObject*                                 Caucer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase*                                 Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RemainingCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PrevCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerUnitDestroyed
struct UMissionEventListenerInterface_HandlerUnitDestroyed_Params
{
	class AUnit*                                       Unit;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerUnitActivated
struct UMissionEventListenerInterface_HandlerUnitActivated_Params
{
	class AUnit*                                       Unit;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerTimeElapseSinceEnteredCloud
struct UMissionEventListenerInterface_HandlerTimeElapseSinceEnteredCloud_Params
{
	class AGameObject*                                 Caucer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PrevElapsedTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerTGTPEventPhase
struct UMissionEventListenerInterface_HandlerTGTPEventPhase_Params
{
	ETGTP_PhaseType                                    InPhaseType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerSubmarineEventRailgunState
struct UMissionEventListenerInterface_HandlerSubmarineEventRailgunState_Params
{
	class AAIGroundVehicle*                            Submarine;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ESubmarineRailgunEvent                             Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerSubmarineEventMovedUnderWater
struct UMissionEventListenerInterface_HandlerSubmarineEventMovedUnderWater_Params
{
	class AAIGroundVehicle*                            Submarine;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerSubmarineEventMovedOnWater
struct UMissionEventListenerInterface_HandlerSubmarineEventMovedOnWater_Params
{
	class AAIGroundVehicle*                            Submarine;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerSubmarineEventCompletedNoseLift
struct UMissionEventListenerInterface_HandlerSubmarineEventCompletedNoseLift_Params
{
	class AAIGroundVehicle*                            Submarine;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerSubmarineEventCompletedNoseDown
struct UMissionEventListenerInterface_HandlerSubmarineEventCompletedNoseDown_Params
{
	class AAIGroundVehicle*                            Submarine;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerSonobuoyEventOccurred
struct UMissionEventListenerInterface_HandlerSonobuoyEventOccurred_Params
{
	class ASystemObjectSonobuoy*                       Sonobuoy;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ESonobuoyEvent                                     Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerRadioMessageEnd
struct UMissionEventListenerInterface_HandlerRadioMessageEnd_Params
{
	struct FString                                     RadioGroupID;                                             // (Parm, ZeroConstructor)
	struct FString                                     VoiceID;                                                  // (Parm, ZeroConstructor)
	bool                                               bGroupEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerRadioMessageBegin
struct UMissionEventListenerInterface_HandlerRadioMessageBegin_Params
{
	struct FString                                     RadioGroupID;                                             // (Parm, ZeroConstructor)
	struct FString                                     VoiceID;                                                  // (Parm, ZeroConstructor)
};

// Function Nimbus.MissionEventListenerInterface.HandlerRadioGroupBegin
struct UMissionEventListenerInterface_HandlerRadioGroupBegin_Params
{
	struct FString                                     RadioGroupID;                                             // (Parm, ZeroConstructor)
};

// Function Nimbus.MissionEventListenerInterface.HandlerPlayerDead
struct UMissionEventListenerInterface_HandlerPlayerDead_Params
{
	EMissionCondition_PlayerDeadReason                 DeadReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerObjectToObjectEventOccurred
struct UMissionEventListenerInterface_HandlerObjectToObjectEventOccurred_Params
{
	class AGameObject*                                 Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_ObjectToObjectEvent              Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerObjectTakeDamage
struct UMissionEventListenerInterface_HandlerObjectTakeDamage_Params
{
	class AGameObject*                                 Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 DamagedTarget;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase*                                 WeaponEntity;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase*                                 WeaponTypeCDO;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerObjectLostLockon
struct UMissionEventListenerInterface_HandlerObjectLostLockon_Params
{
	class AGameObject*                                 Caucer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 LcokonTarget;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_LostLockonCause                  Cause;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerObjectLockon
struct UMissionEventListenerInterface_HandlerObjectLockon_Params
{
	class AGameObject*                                 Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 LockonTarget;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerObjectKilledByPlayer
struct UMissionEventListenerInterface_HandlerObjectKilledByPlayer_Params
{
	class AGameObject*                                 Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ESubFaction                                        SubFaction;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerObjectInterceptWeapon
struct UMissionEventListenerInterface_HandlerObjectInterceptWeapon_Params
{
	class AGameObject*                                 Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase*                                 Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 InterceptedShooter;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase*                                 InterceptedWeapon;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerObjectGetBehind
struct UMissionEventListenerInterface_HandlerObjectGetBehind_Params
{
	class AGameObject*                                 Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 ChaseTarget;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerObjectFoundTarget
struct UMissionEventListenerInterface_HandlerObjectFoundTarget_Params
{
	class AGameObject*                                 Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 TrackingTarget;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerObjectFireWeapon
struct UMissionEventListenerInterface_HandlerObjectFireWeapon_Params
{
	class AGameObject*                                 Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 WeaponTarget;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase*                                 Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerObjectFireFlare
struct UMissionEventListenerInterface_HandlerObjectFireFlare_Params
{
	class AGameObject*                                 Caucer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RemainingCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerObjectEventOccurred
struct UMissionEventListenerInterface_HandlerObjectEventOccurred_Params
{
	class AGameObject*                                 Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_ObjectEvent                      Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerObjectDestroyed
struct UMissionEventListenerInterface_HandlerObjectDestroyed_Params
{
	class AGameObject*                                 Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 DestroyedTarget;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 TargetLockonTarget;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase*                                 HitWeapon;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase*                                 HitWeaponTypeCDO;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerMissionTimeElapse
struct UMissionEventListenerInterface_HandlerMissionTimeElapse_Params
{
	float                                              ElapsedTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PrevElapsedTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PrevTimeLeft;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerMissionPhaseStart
struct UMissionEventListenerInterface_HandlerMissionPhaseStart_Params
{
	int                                                PhaseNo;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerMissionFailed
struct UMissionEventListenerInterface_HandlerMissionFailed_Params
{
	EMissionCondition_FailureType                      FailureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerMissionAccomplished
struct UMissionEventListenerInterface_HandlerMissionAccomplished_Params
{
};

// Function Nimbus.MissionEventListenerInterface.HandlerMissileLostTarget
struct UMissionEventListenerInterface_HandlerMissileLostTarget_Params
{
	class AGameObject*                                 Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 MissileTarget;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase*                                 Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerMiniGamePlayingTick
struct UMissionEventListenerInterface_HandlerMiniGamePlayingTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerMiniGameEventOccurred
struct UMissionEventListenerInterface_HandlerMiniGameEventOccurred_Params
{
	EMissionCondition_MiniGameEvent                    Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerMADEventPhase
struct UMissionEventListenerInterface_HandlerMADEventPhase_Params
{
	EMAD_SearchType                                    InPhaseType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerLostTargetJammerEnd
struct UMissionEventListenerInterface_HandlerLostTargetJammerEnd_Params
{
};

// Function Nimbus.MissionEventListenerInterface.HandlerDisplayTargetLocator
struct UMissionEventListenerInterface_HandlerDisplayTargetLocator_Params
{
	class AGameObject*                                 Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerDisplaySystemMessage
struct UMissionEventListenerInterface_HandlerDisplaySystemMessage_Params
{
	EMissionCondition_SystemMessageType                MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerCloudStateChanged
struct UMissionEventListenerInterface_HandlerCloudStateChanged_Params
{
	class AGameObject*                                 Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_CloudEvent                       CloudEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionEventListenerInterface.HandlerChangedMultiplayerState
struct UMissionEventListenerInterface_HandlerChangedMultiplayerState_Params
{
	class AGameObject*                                 Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EMissionCondition_MultiplayerEvent                 Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionFadeSoundManager.OnPreUnpauseBusHandler
struct UMissionFadeSoundManager_OnPreUnpauseBusHandler_Params
{
	ENimbusSoundType                                   BusType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionFadeSoundManager.OnPreStopBusHandler
struct UMissionFadeSoundManager_OnPreStopBusHandler_Params
{
	ENimbusSoundType                                   BusType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionFadeSoundManager.OnPrePauseBusHandler
struct UMissionFadeSoundManager_OnPrePauseBusHandler_Params
{
	ENimbusSoundType                                   BusType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionFadeSoundManager.OnPostStopBusHandler
struct UMissionFadeSoundManager_OnPostStopBusHandler_Params
{
	ENimbusSoundType                                   BusType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionFadeSoundManager.OnFadeOutHandler
struct UMissionFadeSoundManager_OnFadeOutHandler_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionFadeSoundManager.OnFadeInHandler
struct UMissionFadeSoundManager_OnFadeInHandler_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionFadeSoundManager.OnFadedOutHandler
struct UMissionFadeSoundManager_OnFadedOutHandler_Params
{
};

// Function Nimbus.MissionFadeSoundManager.OnFadedInHandler
struct UMissionFadeSoundManager_OnFadedInHandler_Params
{
};

// DelegateFunction Nimbus.MissionIGCPlayer.OnStartSkipFadeOut__DelegateSignature
struct UMissionIGCPlayer_OnStartSkipFadeOut__DelegateSignature_Params
{
	bool                                               bStopBGM;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OverrideStopBGMEvent;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MissionIGCPlayer.OnIgcCameraChanged__DelegateSignature
struct UMissionIGCPlayer_OnIgcCameraChanged__DelegateSignature_Params
{
	class ACameraActor*                                NewCameraActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionIGCPlayer.OnFadeOutHandler
struct UMissionIGCPlayer_OnFadeOutHandler_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionObjectiveBase.Reset
struct UMissionObjectiveBase_Reset_Params
{
};

// Function Nimbus.MissionObjectiveBase.GetPlayerPlane
struct UMissionObjectiveBase_GetPlayerPlane_Params
{
	class APlayerPlane*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionObjectiveBase.CheckObjectiveStatus
struct UMissionObjectiveBase_CheckObjectiveStatus_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EObjectiveStatus                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Nimbus.MiniGameTakeoffState.OnSuccessTakeoffDelegate__DelegateSignature
struct UMiniGameTakeoffState_OnSuccessTakeoffDelegate__DelegateSignature_Params
{
	float                                              ElapsedTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MiniGameTakeoffState.OnStartTakeoffPlayableDelegate__DelegateSignature
struct UMiniGameTakeoffState_OnStartTakeoffPlayableDelegate__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.MiniGameTakeoffState.OnStartTakeoffDelegate__DelegateSignature
struct UMiniGameTakeoffState_OnStartTakeoffDelegate__DelegateSignature_Params
{
	bool                                               bIsRetry;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MiniGameTakeoffState.OnSkipDelegate__DelegateSignature
struct UMiniGameTakeoffState_OnSkipDelegate__DelegateSignature_Params
{
	float                                              FadeOutDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGameTakeoffState.OnPlayerEndTakeoffHandler
struct UMiniGameTakeoffState_OnPlayerEndTakeoffHandler_Params
{
};

// Function Nimbus.MiniGameTakeoffState.OnPlayerBeginCatapultTakeoffHandler
struct UMiniGameTakeoffState_OnPlayerBeginCatapultTakeoffHandler_Params
{
};

// DelegateFunction Nimbus.MiniGameTakeoffState.OnFinishTakeoffDelegate__DelegateSignature
struct UMiniGameTakeoffState_OnFinishTakeoffDelegate__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.MiniGameTakeoffState.OnFailTakeoffDelegate__DelegateSignature
struct UMiniGameTakeoffState_OnFailTakeoffDelegate__DelegateSignature_Params
{
	EMissionStateMiniGameFailReason                    Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MiniGameTakeoffState.OnFadeOutHandler
struct UMiniGameTakeoffState_OnFadeOutHandler_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionPhase.StartMiniGame
struct AMissionPhase_StartMiniGame_Params
{
};

// Function Nimbus.MissionPhase.ShouldShowNavyMiniGameLevels
struct AMissionPhase_ShouldShowNavyMiniGameLevels_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Nimbus.MissionPhase.OnTimeIsUp__DelegateSignature
struct AMissionPhase_OnTimeIsUp__DelegateSignature_Params
{
};

// Function Nimbus.MissionPhase.OnSkipMiniGamePhaseHandler
struct AMissionPhase_OnSkipMiniGamePhaseHandler_Params
{
	float                                              FadeOutDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionPhase.OnReferencedActorEndPlayHandler
struct AMissionPhase_OnReferencedActorEndPlayHandler_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionPhase.OnPreStartMiniGamePhaseHandler
struct AMissionPhase_OnPreStartMiniGamePhaseHandler_Params
{
	bool                                               bIsRetry;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MissionPhase.OnChangeWayPointState__DelegateSignature
struct AMissionPhase_OnChangeWayPointState__DelegateSignature_Params
{
	bool                                               bReached;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ASystemObjectWayPointMarker*                 WayPointMarker;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MissionPhase.OnChangeSearchLightState__DelegateSignature
struct AMissionPhase_OnChangeSearchLightState__DelegateSignature_Params
{
	bool                                               bInside;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MissionPhase.OnChangeRestrictedAltitudeState__DelegateSignature
struct AMissionPhase_OnChangeRestrictedAltitudeState__DelegateSignature_Params
{
	bool                                               bOver;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MissionPhase.OnChangeRadarAreaState__DelegateSignature
struct AMissionPhase_OnChangeRadarAreaState__DelegateSignature_Params
{
	bool                                               bInside;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MissionPhase.OnChangePulloutLineState__DelegateSignature
struct AMissionPhase_OnChangePulloutLineState__DelegateSignature_Params
{
	bool                                               bBeyond;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MissionPhase.OnChangeJammingAreaState__DelegateSignature
struct AMissionPhase_OnChangeJammingAreaState__DelegateSignature_Params
{
	bool                                               bInside;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MissionPhase.OnChangeImpactAreaState__DelegateSignature
struct AMissionPhase_OnChangeImpactAreaState__DelegateSignature_Params
{
	bool                                               bInside;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MissionPhase.OnAddMissionScore__DelegateSignature
struct AMissionPhase_OnAddMissionScore__DelegateSignature_Params
{
	int                                                CurrentMissionScore;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveMissionScore;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAchieved;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionPhase.GetStatus
struct AMissionPhase_GetStatus_Params
{
	EPhaseStatus                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionPhase.GetMissionPhaseTimeLeft
struct AMissionPhase_GetMissionPhaseTimeLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionPhase.GetElapsedMissionPhaseTime
struct AMissionPhase_GetElapsedMissionPhaseTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MissionPhase.ForceUpdateStatus
struct AMissionPhase_ForceUpdateStatus_Params
{
	EPhaseStatus                                       NewStatus;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionPhase.CompleteMiniGame
struct AMissionPhase_CompleteMiniGame_Params
{
};

// DelegateFunction Nimbus.MissionPhaseState.OnSuccessPhaseDelegate__DelegateSignature
struct UMissionPhaseState_OnSuccessPhaseDelegate__DelegateSignature_Params
{
	class AMissionPhase*                               MissionPhase;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MissionPhaseState.OnStartPhaseDelegate__DelegateSignature
struct UMissionPhaseState_OnStartPhaseDelegate__DelegateSignature_Params
{
	class AMissionPhase*                               MissionPhase;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestart;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionPhaseState.OnReferencedActorEndPlayHandler
struct UMissionPhaseState_OnReferencedActorEndPlayHandler_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.MissionPhaseState.OnFailPhaseDelegate__DelegateSignature
struct UMissionPhaseState_OnFailPhaseDelegate__DelegateSignature_Params
{
	class AMissionPhase*                               MissionPhase;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EMissionStatePhaseFailReason                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionSetupFrameManager.OnPostGarbageCollectHandler
struct UMissionSetupFrameManager_OnPostGarbageCollectHandler_Params
{
};

// Function Nimbus.UIManagerActor.RemoveAllMenus
struct AUIManagerActor_RemoveAllMenus_Params
{
};

// Function Nimbus.UIManagerActor.OpenMenu
struct AUIManagerActor_OpenMenu_Params
{
	EMenuIDs                                           MenuID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.UIManagerActor.OnSetCurrentUIManagerActor
struct AUIManagerActor_OnSetCurrentUIManagerActor_Params
{
};

// Function Nimbus.UIManagerActor.OnEvaluateGlowPulsing
struct AUIManagerActor_OnEvaluateGlowPulsing_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.UIManagerActor.GetCurrentUIManagerActor
struct AUIManagerActor_GetCurrentUIManagerActor_Params
{
	class AUIManagerActor*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.UIManagerActor.CloseMenuAndResumePlay
struct AUIManagerActor_CloseMenuAndResumePlay_Params
{
};

// Function Nimbus.MissionUIManagerActor.StartDebug
struct AMissionUIManagerActor_StartDebug_Params
{
	EDebugModeState                                    InDebugState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionUIManagerActor.SetupDebugUI
struct AMissionUIManagerActor_SetupDebugUI_Params
{
	EDebugModeState                                    InDebugState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionUIManagerActor.OnReplay
struct AMissionUIManagerActor_OnReplay_Params
{
};

// Function Nimbus.MissionUIManagerActor.OnMissionSuccess
struct AMissionUIManagerActor_OnMissionSuccess_Params
{
};

// Function Nimbus.MissionUIManagerActor.OnMissionResupply
struct AMissionUIManagerActor_OnMissionResupply_Params
{
};

// Function Nimbus.MissionUIManagerActor.OnMissionFail
struct AMissionUIManagerActor_OnMissionFail_Params
{
};

// Function Nimbus.MonoEyeColorChangeComponent.OnRestored
struct UMonoEyeColorChangeComponent_OnRestored_Params
{
};

// Function Nimbus.MovieSubtitleWidget.OnAnalyzeAnimationStart
struct UMovieSubtitleWidget_OnAnalyzeAnimationStart_Params
{
};

// Function Nimbus.MovieSubtitleWidget.OnAnalyzeAnimationShow
struct UMovieSubtitleWidget_OnAnalyzeAnimationShow_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MovieSubtitleWidget.OnAnalyzeAnimationEnd
struct UMovieSubtitleWidget_OnAnalyzeAnimationEnd_Params
{
};

// Function Nimbus.MultiCreateSessionWidget.OnDialogItemAccepted
struct UMultiCreateSessionWidget_OnDialogItemAccepted_Params
{
	struct FDialogData                                 DialogData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction Nimbus.MissionSupplyPhaseState.OnSuccessPhaseDelegate__DelegateSignature
struct UMissionSupplyPhaseState_OnSuccessPhaseDelegate__DelegateSignature_Params
{
	class AMissionPhase*                               MissionPhase;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RestartLocation;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    RestartRotation;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// DelegateFunction Nimbus.MissionSupplyPhaseState.OnStartPhaseDelegate__DelegateSignature
struct UMissionSupplyPhaseState_OnStartPhaseDelegate__DelegateSignature_Params
{
	class AMissionPhase*                               MissionPhase;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MissionSupplyPhaseState.OnReferencedActorEndPlayHandler
struct UMissionSupplyPhaseState_OnReferencedActorEndPlayHandler_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MultiInvitationTransitionWidget.OnDialogItemAccepted
struct UMultiInvitationTransitionWidget_OnDialogItemAccepted_Params
{
	struct FDialogData                                 DialogData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.MultiLobbyWidget.OnDialogItemAccepted
struct UMultiLobbyWidget_OnDialogItemAccepted_Params
{
	struct FDialogData                                 DialogData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.MultiMenuMainWidget.OnDialogItemAccepted
struct UMultiMenuMainWidget_OnDialogItemAccepted_Params
{
	struct FDialogData                                 DialogData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.MultiIGCTargetPoint.MultiIGCTest
struct AMultiIGCTargetPoint_MultiIGCTest_Params
{
	EMultiplayerIGCType                                IGCType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IGCIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MultiplayerScoreCalculator.CalculateShootScore
struct UMultiplayerScoreCalculator_CalculateShootScore_Params
{
	float                                              DamagePercentage;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EnemyBasePoint;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CostDifferenceModifier;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlacementModifier;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MultiplayerScoreCalculator.CalculateRankingXP
struct UMultiplayerScoreCalculator_CalculateRankingXP_Params
{
	float                                              PlayingTimePercentage;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerNumberModifier;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MultiplayerScoreCalculator.CalculateMRP
struct UMultiplayerScoreCalculator_CalculateMRP_Params
{
	int                                                BaseMatchResultReward;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScoreReward;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PerformanceReward;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerNumberModifier;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CrashPenaltyModifier;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutMRPCoefficient;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutScoreCoefficient;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PartsBonus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MultiplayerScoreCalculator.CalculateKillScore
struct UMultiplayerScoreCalculator_CalculateKillScore_Params
{
	int                                                EnemyBasePoint;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CostDifferenceModifier;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlacementModifier;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MultiplayerScoreCalculator.CalculateCrashScore
struct UMultiplayerScoreCalculator_CalculateCrashScore_Params
{
	int                                                CrashedPlaneBasePoint;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlacementModifier;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CrashCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MultiplayerScoreCalculator.CalculateAssistScore
struct UMultiplayerScoreCalculator_CalculateAssistScore_Params
{
	float                                              DamagePercentage;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EnemyBasePoint;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.MultiResultBaseWidget.ChangeScreen
struct UMultiResultBaseWidget_ChangeScreen_Params
{
};

// Function Nimbus.MultiQuickMatchWidget.OnDialogItemAccepted
struct UMultiQuickMatchWidget_OnDialogItemAccepted_Params
{
	struct FDialogData                                 DialogData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.MultiResultWinLoseWidget.ProceedToNextAnimationPhase
struct UMultiResultWinLoseWidget_ProceedToNextAnimationPhase_Params
{
};

// Function Nimbus.MultiReviveWidget.OnReparCompleteAnimationFinished
struct UMultiReviveWidget_OnReparCompleteAnimationFinished_Params
{
};

// Function Nimbus.MultiSessionCommonWidget.OnDialogItemAccepted
struct UMultiSessionCommonWidget_OnDialogItemAccepted_Params
{
	struct FDialogData                                 DialogData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.MultiSessionConfirmWidget.OnSelectAcceptButton
struct UMultiSessionConfirmWidget_OnSelectAcceptButton_Params
{
	bool                                               bAccepted;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.MultiSessionConfirmWidget.OnDialogItemAccepted
struct UMultiSessionConfirmWidget_OnDialogItemAccepted_Params
{
	struct FDialogData                                 DialogData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.MultiSessionResultWidget.OnDialogItemAccepted
struct UMultiSessionResultWidget_OnDialogItemAccepted_Params
{
	struct FDialogData                                 DialogData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.MultiSessionWidget.OnDialogItemAccepted
struct UMultiSessionWidget_OnDialogItemAccepted_Params
{
	struct FDialogData                                 DialogData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.MultiSimpleVoiceChatWidget.OnHUDEnabled
struct UMultiSimpleVoiceChatWidget_OnHUDEnabled_Params
{
};

// Function Nimbus.MultiSimpleVoiceChatWidget.OnHUDDisabled
struct UMultiSimpleVoiceChatWidget_OnHUDDisabled_Params
{
};

// Function Nimbus.NimbusAssetLoader.OnPostWorldCleanupHandler
struct UNimbusAssetLoader_OnPostWorldCleanupHandler_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSessionEnded;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCleanupResources;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusAssetLoader.OnPostGarbageCollectHandler
struct UNimbusAssetLoader_OnPostGarbageCollectHandler_Params
{
};

// Function Nimbus.NimbusBlueprintLibrary.WaitSpecialActionEnd
struct UNimbusBlueprintLibrary_WaitSpecialActionEnd_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class AAIPlane*                                    AIPlane;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.WaitImpactCameraCompletion
struct UNimbusBlueprintLibrary_WaitImpactCameraCompletion_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function Nimbus.NimbusBlueprintLibrary.UUToMeter
struct UNimbusBlueprintLibrary_UUToMeter_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.UUpsToMps
struct UNimbusBlueprintLibrary_UUpsToMps_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.UUpsToKmph
struct UNimbusBlueprintLibrary_UUpsToKmph_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.UpdateMaterialAnimation
struct UNimbusBlueprintLibrary_UpdateMaterialAnimation_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComp;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<int>                                        MaterialIndexArray;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               ParamNames;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      ParamValues;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Nimbus.NimbusBlueprintLibrary.UpdateBGM
struct UNimbusBlueprintLibrary_UpdateBGM_Params
{
	class UAkAudioEvent*                               BGMUpdateEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.ToggleVisibilityForEngineer
struct UNimbusBlueprintLibrary_ToggleVisibilityForEngineer_Params
{
	class USceneComponent*                             Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.TestStopNimbusMatinee
struct UNimbusBlueprintLibrary_TestStopNimbusMatinee_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.TestPlayNimbusMatinee
struct UNimbusBlueprintLibrary_TestPlayNimbusMatinee_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.TerminateNimbusMatinee
struct UNimbusBlueprintLibrary_TerminateNimbusMatinee_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.SwitchRadar
struct UNimbusBlueprintLibrary_SwitchRadar_Params
{
	EMiniMapType                                       MiniMapType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.StopRailgunAiming
struct UNimbusBlueprintLibrary_StopRailgunAiming_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class URailgunControliComponent*                   InRailgunControliComponent;                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.StopNimbusCameraShakeAll
struct UNimbusBlueprintLibrary_StopNimbusCameraShakeAll_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.StopNimbusCameraShake
struct UNimbusBlueprintLibrary_StopNimbusCameraShake_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ENimbusCameraShakeType                             InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.StopImpactCamera
struct UNimbusBlueprintLibrary_StopImpactCamera_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.StopBGMImmediately
struct UNimbusBlueprintLibrary_StopBGMImmediately_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.StopBGM
struct UNimbusBlueprintLibrary_StopBGM_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OverrideBGMStopEvent;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.StereoStartFadingBackground
struct UNimbusBlueprintLibrary_StereoStartFadingBackground_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFadeIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.StereoRemoveWidgetFromViewport
struct UNimbusBlueprintLibrary_StereoRemoveWidgetFromViewport_Params
{
	class UUserWidget*                                 InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.StereoAddWidgetToViewport
struct UNimbusBlueprintLibrary_StereoAddWidgetToViewport_Params
{
	class UUserWidget*                                 InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInEnableBg;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.StartRemainingDistance
struct UNimbusBlueprintLibrary_StartRemainingDistance_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ApproachTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AGameObject*>                         ApproachGameObjects;                                      // (Parm, ZeroConstructor)
	float                                              GoalRadiusMeter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.StartRailgunAiming
struct UNimbusBlueprintLibrary_StartRailgunAiming_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class URailgunControliComponent*                   InRailgunControliComponent;                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGameObject*                                 InTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RailgunTargetClass;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.StartMissionPhase
struct UNimbusBlueprintLibrary_StartMissionPhase_Params
{
	struct FString                                     Arg;                                                      // (Parm, ZeroConstructor)
	EMissionPhaseProceedStatus                         OutputBranch;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.StartMagneticAnomalyDetectorByClassBP
struct UNimbusBlueprintLibrary_StartMagneticAnomalyDetectorByClassBP_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MADComponentClassBP;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.StartMagneticAnomalyDetector
struct UNimbusBlueprintLibrary_StartMagneticAnomalyDetector_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDisplay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SearchDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SearchDownwardAngle;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxSearchRadius;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SearchDistanceRange;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ObservationRange;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EMADObservationOption                              ObservationOption;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EMADObservationWaveDirectionOption                 ObservationWaveDirectionOption;                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxVibrationScale;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 WaveNumRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 WaveOffsetRange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 WaveMinRatioRange;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 WaveMaxRatioRange;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 WaveMaxIntervalRange;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 WaveMaxTimeRange;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EMADObservationWaveReferenceOption                 WaveScaleReference;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EMADObservationWaveReferenceOption                 WaveNumReference;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EMADObservationWaveReferenceOption                 WaveOffsetReference;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EMADObservationWaveReferenceOption                 WaveMinReference;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EMADObservationWaveReferenceOption                 WaveMaxReference;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSearchUnderMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.StartDisplayTimer
struct UNimbusBlueprintLibrary_StartDisplayTimer_Params
{
	float                                              TotalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEmergency;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TriggerEventWhenEnd;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.SpawnExplosionWeapon
struct UNimbusBlueprintLibrary_SpawnExplosionWeapon_Params
{
	class AGameObject*                                 OwnerGameObject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (Parm, IsPlainOldData)
	class AWeaponBase*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.SetVisibilityForEngineer
struct UNimbusBlueprintLibrary_SetVisibilityForEngineer_Params
{
	class USceneComponent*                             Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.SetNearClipDistance
struct UNimbusBlueprintLibrary_SetNearClipDistance_Params
{
	float                                              NewDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.SetComponentTickEnabledForEngineer
struct UNimbusBlueprintLibrary_SetComponentTickEnabledForEngineer_Params
{
	class UActorComponent*                             Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.SetActorHiddenInGameForEngineerToArray
struct UNimbusBlueprintLibrary_SetActorHiddenInGameForEngineerToArray_Params
{
	TArray<class AActor*>                              Target;                                                   // (Parm, ZeroConstructor)
	bool                                               bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.SetActorHiddenInGameForEngineer
struct UNimbusBlueprintLibrary_SetActorHiddenInGameForEngineer_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.SaveAndUseIGCCamera
struct UNimbusBlueprintLibrary_SaveAndUseIGCCamera_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.ResetTutorialMessage
struct UNimbusBlueprintLibrary_ResetTutorialMessage_Params
{
};

// Function Nimbus.NimbusBlueprintLibrary.ResetParticlesCall
struct UNimbusBlueprintLibrary_ResetParticlesCall_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEmptyInstances;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.ResetNearClipDistance
struct UNimbusBlueprintLibrary_ResetNearClipDistance_Params
{
};

// Function Nimbus.NimbusBlueprintLibrary.ReplaceTextureReference
struct UNimbusBlueprintLibrary_ReplaceTextureReference_Params
{
	class UTexture*                                    OriginalTexture;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    NewTexture;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.Project
struct UNimbusBlueprintLibrary_Project_Params
{
	struct FVector                                     Pos;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FMatrix                                     ViewProjMtx;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ViewSize;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.PostEvent2D
struct UNimbusBlueprintLibrary_PostEvent2D_Params
{
	class UAkAudioEvent*                               akevent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.PlayRadioText
struct UNimbusBlueprintLibrary_PlayRadioText_Params
{
	class APlayerController*                           InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  InComWindowImage;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InSpeakerName;                                            // (Parm, ZeroConstructor)
	struct FString                                     InMessage;                                                // (Parm, ZeroConstructor)
	bool                                               bHasWarning;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 InSpeakerColor;                                           // (Parm)
	struct FSlateColor                                 InMessageColor;                                           // (Parm)
};

// Function Nimbus.NimbusBlueprintLibrary.PlayNimbusMatinee
struct UNimbusBlueprintLibrary_PlayNimbusMatinee_Params
{
	class AMatineeActor*                               MatineeActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.PlayNimbusCameraShake_DistanceLocation
struct UNimbusBlueprintLibrary_PlayNimbusCameraShake_DistanceLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ENimbusCameraShakeType                             InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (Parm, IsPlainOldData)
	class UCurveFloat*                                 OverrideDistanceScaleCurve;                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 OverrideFovScaleCurve;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.PlayNimbusCameraShake
struct UNimbusBlueprintLibrary_PlayNimbusCameraShake_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ENimbusCameraShakeType                             InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDistanceMeter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.PlayImpactCamera
struct UNimbusBlueprintLibrary_PlayImpactCamera_Params
{
	class AActor*                                      FocusObject1;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FocusObject2;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EImpactCameraPlayCategory                          InPlayCategory;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CameraName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInAutoEnd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnemyDestruction;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.PlayBGM
struct UNimbusBlueprintLibrary_PlayBGM_Params
{
	class UAkAudioEvent*                               BGMPlayEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               BGMStopEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.PingPositionOnRadar
struct UNimbusBlueprintLibrary_PingPositionOnRadar_Params
{
	class APlayerController*                           InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PingPosition;                                             // (Parm, IsPlainOldData)
	ENimbusPingType                                    InPingType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.PingObjectsOnRadar
struct UNimbusBlueprintLibrary_PingObjectsOnRadar_Params
{
	class APlayerController*                           InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AGameObject*>                         ObjectsToPing;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	ENimbusPingType                                    InPingType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowContainerName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.PingObjectOnRadar
struct UNimbusBlueprintLibrary_PingObjectOnRadar_Params
{
	class APlayerController*                           InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 ObjectToPing;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	ENimbusPingType                                    InPingType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowContainerName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.OverridePostProcessSettingForIGCCockpitView
struct UNimbusBlueprintLibrary_OverridePostProcessSettingForIGCCockpitView_Params
{
	class ACameraActor*                                InCameraActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.OverridePostProcessMaterialBlendWeightForIGC
struct UNimbusBlueprintLibrary_OverridePostProcessMaterialBlendWeightForIGC_Params
{
	class ACameraActor*                                InCameraActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendWeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.NimbusUnLoadLevelInstance
struct UNimbusBlueprintLibrary_NimbusUnLoadLevelInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelStreamingKismet*                       UnloadLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.NimbusSetDrawTypeLocalToView
struct UNimbusBlueprintLibrary_NimbusSetDrawTypeLocalToView_Params
{
	class USceneComponent*                             SceneComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bUseLTV;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceUpdateTransform;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutLTVFlag;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.NimbusOpenLevel
struct UNimbusBlueprintLibrary_NimbusOpenLevel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.NimbusLoadLevelInstance
struct UNimbusBlueprintLibrary_NimbusLoadLevelInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, IsPlainOldData)
	bool                                               bOutSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ULevelStreamingKismet*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.NimbusDrawLine
struct UNimbusBlueprintLibrary_NimbusDrawLine_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector2D                                   PositionA;                                                // (Parm, IsPlainOldData)
	struct FVector2D                                   PositionB;                                                // (Parm, IsPlainOldData)
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, IsPlainOldData)
	bool                                               bAntiAlias;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.NimbusDrawBox
struct UNimbusBlueprintLibrary_NimbusDrawBox_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector2D                                   Position;                                                 // (Parm, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (Parm, IsPlainOldData)
	class USlateBrushAsset*                            Brush;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.MpsToUUps
struct UNimbusBlueprintLibrary_MpsToUUps_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.MpsToKmph
struct UNimbusBlueprintLibrary_MpsToKmph_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.MeterToUU
struct UNimbusBlueprintLibrary_MeterToUU_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.KmphToUUps
struct UNimbusBlueprintLibrary_KmphToUUps_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.KmphToMps
struct UNimbusBlueprintLibrary_KmphToMps_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.IsWithEditorOnlyData
struct UNimbusBlueprintLibrary_IsWithEditorOnlyData_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.IsThisObjectInClouds
struct UNimbusBlueprintLibrary_IsThisObjectInClouds_Params
{
	class AGameObject*                                 GameObject;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.IsReplaying
struct UNimbusBlueprintLibrary_IsReplaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.IsPlaykillCameraWithImpactCamera
struct UNimbusBlueprintLibrary_IsPlaykillCameraWithImpactCamera_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.IsPlacedInIGCLevel
struct UNimbusBlueprintLibrary_IsPlacedInIGCLevel_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.IsLastInputDeviceGamepad
struct UNimbusBlueprintLibrary_IsLastInputDeviceGamepad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.IsInHangar
struct UNimbusBlueprintLibrary_IsInHangar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.IsGamepadConnected
struct UNimbusBlueprintLibrary_IsGamepadConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.IsDebugMode
struct UNimbusBlueprintLibrary_IsDebugMode_Params
{
	bool                                               bAllowTestBuild;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.IsDebug
struct UNimbusBlueprintLibrary_IsDebug_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.HideAllActorsForSceneCapture
struct UNimbusBlueprintLibrary_HideAllActorsForSceneCapture_Params
{
	class USceneCaptureComponent2D*                    CaptureComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      ExceptActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GetRevision
struct UNimbusBlueprintLibrary_GetRevision_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.NimbusBlueprintLibrary.GetRemainingDistanceComponent
struct UNimbusBlueprintLibrary_GetRemainingDistanceComponent_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UApproachDistObservationComponent*           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GetPlayerPlane
struct UNimbusBlueprintLibrary_GetPlayerPlane_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerPlane*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GetPlayerKillObject
struct UNimbusBlueprintLibrary_GetPlayerKillObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GetNearestPointDistance
struct UNimbusBlueprintLibrary_GetNearestPointDistance_Params
{
	struct FVector                                     LineSegmentA;                                             // (Parm, IsPlainOldData)
	struct FVector                                     LineSegmentB;                                             // (Parm, IsPlainOldData)
	struct FVector                                     CheckLocation;                                            // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GetNearestPoint
struct UNimbusBlueprintLibrary_GetNearestPoint_Params
{
	struct FVector                                     LineSegmentA;                                             // (Parm, IsPlainOldData)
	struct FVector                                     LineSegmentB;                                             // (Parm, IsPlainOldData)
	struct FVector                                     CheckLocation;                                            // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GetMissionClearFlag
struct UNimbusBlueprintLibrary_GetMissionClearFlag_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GetMADComponent
struct UNimbusBlueprintLibrary_GetMADComponent_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMagneticAnomalyDetectorComponent*           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GetGamePlatform
struct UNimbusBlueprintLibrary_GetGamePlatform_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EPlatforms                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GetGameDifficulty
struct UNimbusBlueprintLibrary_GetGameDifficulty_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EGameDifficulty                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GetDistanceUnit
struct UNimbusBlueprintLibrary_GetDistanceUnit_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EOptionsDistanceUnits                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GetCampaignClearFlag
struct UNimbusBlueprintLibrary_GetCampaignClearFlag_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GetBuildDate
struct UNimbusBlueprintLibrary_GetBuildDate_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.NimbusBlueprintLibrary.GetAnimationSequenceLength
struct UNimbusBlueprintLibrary_GetAnimationSequenceLength_Params
{
	class UAnimSequenceBase*                           Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GetActiveTrueSkySequenceActor
struct UNimbusBlueprintLibrary_GetActiveTrueSkySequenceActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GetActiveNimbusCameraManager
struct UNimbusBlueprintLibrary_GetActiveNimbusCameraManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ANimbusPlayerCameraManager*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GetAcceptCancelConfigKeys
struct UNimbusBlueprintLibrary_GetAcceptCancelConfigKeys_Params
{
	TArray<struct FKey>                                OutAcceptKeys;                                            // (Parm, OutParm, ZeroConstructor)
	TArray<struct FKey>                                OutCancelKeys;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Nimbus.NimbusBlueprintLibrary.GenerateIntComparator
struct UNimbusBlueprintLibrary_GenerateIntComparator_Params
{
	int                                                Property;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EComparatorType                                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UIntComparator*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GenerateCompositeComparator
struct UNimbusBlueprintLibrary_GenerateCompositeComparator_Params
{
	ELogicalType                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UVariableComparator*                         Child1;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UVariableComparator*                         Child2;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UCompositeComparator*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.GenerateBoolComparator
struct UNimbusBlueprintLibrary_GenerateBoolComparator_Params
{
	bool                                               Property;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               IsEqual;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UBoolComparator*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.EndRemainingDistance
struct UNimbusBlueprintLibrary_EndRemainingDistance_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.EndMagneticAnomalyDetector
struct UNimbusBlueprintLibrary_EndMagneticAnomalyDetector_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.EnableHMDBlackOverlay
struct UNimbusBlueprintLibrary_EnableHMDBlackOverlay_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.DrawPredictedWeaponTrajectoryOnRadar
struct UNimbusBlueprintLibrary_DrawPredictedWeaponTrajectoryOnRadar_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 FiringObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.DisplayTutorialMessage
struct UNimbusBlueprintLibrary_DisplayTutorialMessage_Params
{
	struct FString                                     TextId;                                                   // (Parm, ZeroConstructor)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.DisplayMissionUpdated
struct UNimbusBlueprintLibrary_DisplayMissionUpdated_Params
{
};

// Function Nimbus.NimbusBlueprintLibrary.DisplayMissionStart
struct UNimbusBlueprintLibrary_DisplayMissionStart_Params
{
};

// Function Nimbus.NimbusBlueprintLibrary.Deproject
struct UNimbusBlueprintLibrary_Deproject_Params
{
	struct FVector2D                                   ScreenPos;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FMatrix                                     InvViewProjMtx;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ViewSize;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutRayOrigin;                                             // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutRayDir;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.ConvertEngineThrustToEngineSoundRTPC
struct UNimbusBlueprintLibrary_ConvertEngineThrustToEngineSoundRTPC_Params
{
	float                                              EngineThrust;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.ClearAllTimersAndLatentActionForObject
struct UNimbusBlueprintLibrary_ClearAllTimersAndLatentActionForObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.CancelDisplayTimer
struct UNimbusBlueprintLibrary_CancelDisplayTimer_Params
{
};

// Function Nimbus.NimbusBlueprintLibrary.BindMissionPhaseEvents
struct UNimbusBlueprintLibrary_BindMissionPhaseEvents_Params
{
	class AActor*                                      MissionPhaseActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             StartEvent;                                               // (Parm, ZeroConstructor)
	struct FScriptDelegate                             RetryEvent;                                               // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusBlueprintLibrary.BattleNavigationUnitList
struct UNimbusBlueprintLibrary_BattleNavigationUnitList_Params
{
	TArray<class AUnit*>                               UnitsToPing;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bForciblySWitchToBattleMap;                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BattleNavigationID;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.BattleNavigationUnit
struct UNimbusBlueprintLibrary_BattleNavigationUnit_Params
{
	class AUnit*                                       UnitToPing;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForciblySWitchToBattleMap;                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BattleNavigationID;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.BattleNavigationList
struct UNimbusBlueprintLibrary_BattleNavigationList_Params
{
	TArray<class AAIGameObject*>                       AIObjectsToPing;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bForciblySWitchToBattleMap;                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BattleNavigationID;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.BattleNavigation
struct UNimbusBlueprintLibrary_BattleNavigation_Params
{
	class AAIGameObject*                               AIObjectToPing;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForciblySWitchToBattleMap;                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BattleNavigationID;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.AddMissionWarningMessage
struct UNimbusBlueprintLibrary_AddMissionWarningMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusBlueprintLibrary.AddComparatorIntoComposite
struct UNimbusBlueprintLibrary_AddComparatorIntoComposite_Params
{
	class UCompositeComparator*                        Composite;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UVariableComparator*                         Child;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UCompositeComparator*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibrary.ActivateConditionActionEntry
struct UNimbusBlueprintLibrary_ActivateConditionActionEntry_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.SubTitleAutoBind
struct UNimbusBlueprintLibraryVR_SubTitleAutoBind_Params
{
	class USubtitleWidget*                             SubtitleWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ARadioManager*                               RadioManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBind;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.StopPlayingID
struct UNimbusBlueprintLibraryVR_StopPlayingID_Params
{
	int                                                in_playingID;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.StopPlayerPlaneVibrations
struct UNimbusBlueprintLibraryVR_StopPlayerPlaneVibrations_Params
{
	class APlayerPlane*                                PlayerPlane;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.StopPlayerPlaneSounds
struct UNimbusBlueprintLibraryVR_StopPlayerPlaneSounds_Params
{
	class APlayerPlane*                                PlayerPlane;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.StopAllLoopingSound
struct UNimbusBlueprintLibraryVR_StopAllLoopingSound_Params
{
	class ANimbusHUD*                                  NimbusHUD;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.StartFading
struct UNimbusBlueprintLibraryVR_StartFading_Params
{
	class UNimbusGameInstance*                         GameInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFadingIn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDuration;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.ShowCanopyEffect
struct UNimbusBlueprintLibraryVR_ShowCanopyEffect_Params
{
	class APlayerPlane*                                PlayerPlane;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldShow;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DropletIntensityScalar;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RainIntensityScalar;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              IceBlendScalar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              IceIntensityScalar;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.SetWorldBlackFade
struct UNimbusBlueprintLibraryVR_SetWorldBlackFade_Params
{
	bool                                               IsClear;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.SetVRFlatCaptureMode
struct UNimbusBlueprintLibraryVR_SetVRFlatCaptureMode_Params
{
	bool                                               bCaptureEnable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.SetRainSpeedScalarParameterValue
struct UNimbusBlueprintLibraryVR_SetRainSpeedScalarParameterValue_Params
{
	class APlayerPlane*                                PlayerPlane;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.SetRainScalarParameterValue
struct UNimbusBlueprintLibraryVR_SetRainScalarParameterValue_Params
{
	class APlayerPlane*                                PlayerPlane;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.SetNimbusVFXComponentParam
struct UNimbusBlueprintLibraryVR_SetNimbusVFXComponentParam_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.SetNimbusStereoLayers
struct UNimbusBlueprintLibraryVR_SetNimbusStereoLayers_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.SetNimbusStereoLayerCurve
struct UNimbusBlueprintLibraryVR_SetNimbusStereoLayerCurve_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              curve0to1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.SetNimbusDefaultGravityZ
struct UNimbusBlueprintLibraryVR_SetNimbusDefaultGravityZ_Params
{
	float                                              gravityZ;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              prevGravityZ;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.SetEnableHUDTestMode
struct UNimbusBlueprintLibraryVR_SetEnableHUDTestMode_Params
{
	bool                                               Flag;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.SetDropletScalarParameterValue
struct UNimbusBlueprintLibraryVR_SetDropletScalarParameterValue_Params
{
	class APlayerPlane*                                PlayerPlane;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.SetCurrentGraphicsSetteingsForDevelop
struct UNimbusBlueprintLibraryVR_SetCurrentGraphicsSetteingsForDevelop_Params
{
	EGraphicsSettings                                  Preset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.SetAutoDeactive
struct UNimbusBlueprintLibraryVR_SetAutoDeactive_Params
{
	class AGameObject*                                 GameObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.PostEventVR
struct UNimbusBlueprintLibraryVR_PostEventVR_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.PostEventAtLocationVR
struct UNimbusBlueprintLibraryVR_PostEventAtLocationVR_Params
{
	class UNimbusGameInstance*                         pGameInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.NimbusDelayGarbageCollection
struct UNimbusBlueprintLibraryVR_NimbusDelayGarbageCollection_Params
{
};

// Function Nimbus.NimbusBlueprintLibraryVR.IsVRDLCOwned
struct UNimbusBlueprintLibraryVR_IsVRDLCOwned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.IsSuperMode
struct UNimbusBlueprintLibraryVR_IsSuperMode_Params
{
	bool                                               bSuper;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.IsNimbusDialogOpen
struct UNimbusBlueprintLibraryVR_IsNimbusDialogOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.IsFreeFlight
struct UNimbusBlueprintLibraryVR_IsFreeFlight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.IsEnableNimbusOverlay
struct UNimbusBlueprintLibraryVR_IsEnableNimbusOverlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.IsEnableLocalToViewForCockpit
struct UNimbusBlueprintLibraryVR_IsEnableLocalToViewForCockpit_Params
{
	class APlayerPlane*                                PlayerPlane;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.GetVRFlatCaptureMode
struct UNimbusBlueprintLibraryVR_GetVRFlatCaptureMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.GetPhaseNoAndElapsedTime
struct UNimbusBlueprintLibraryVR_GetPhaseNoAndElapsedTime_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                PhaseNo;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PhaseElapsedTime;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.GetNoInputElapsedTime
struct UNimbusBlueprintLibraryVR_GetNoInputElapsedTime_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.GetMFDColorType
struct UNimbusBlueprintLibraryVR_GetMFDColorType_Params
{
	class UNimbusUserWidget*                           Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ANimbusHUD*                                  nimbus_hud;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EMFDColorType                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.GetHitActor
struct UNimbusBlueprintLibraryVR_GetHitActor_Params
{
	class APlayerPlane*                                PlayerPlane;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.GetFocusedMenuWidget
struct UNimbusBlueprintLibraryVR_GetFocusedMenuWidget_Params
{
	class UMenuBaseWidget*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.GetFocusedMenuID
struct UNimbusBlueprintLibraryVR_GetFocusedMenuID_Params
{
	EMenuIDs                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.GetEnvironmentDamageType
struct UNimbusBlueprintLibraryVR_GetEnvironmentDamageType_Params
{
	class APlayerPlane*                                PlayerPlane;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerSystemDamageType                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.GetDefaultCameraRelativeTransform
struct UNimbusBlueprintLibraryVR_GetDefaultCameraRelativeTransform_Params
{
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
	class APlayerPlane*                                PlayerPlane;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.GetCurrentScene
struct UNimbusBlueprintLibraryVR_GetCurrentScene_Params
{
	bool                                               bMission;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHangar;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAirshow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.GetConsoleVariable
struct UNimbusBlueprintLibraryVR_GetConsoleVariable_Params
{
	struct FString                                     consoleName;                                              // (Parm, ZeroConstructor)
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                valueInt;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              valueFloat;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.GetChildSceneComponents
struct UNimbusBlueprintLibraryVR_GetChildSceneComponents_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USceneComponent*>                     ComponentList;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.EnablePostEventVR
struct UNimbusBlueprintLibraryVR_EnablePostEventVR_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.EnableLocalToViewForCockpit
struct UNimbusBlueprintLibraryVR_EnableLocalToViewForCockpit_Params
{
	class APlayerPlane*                                PlayerPlane;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInEnabled;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.EnableIGCSkipModeVR
struct UNimbusBlueprintLibraryVR_EnableIGCSkipModeVR_Params
{
	bool                                               bSkip;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.DrawWidgetToTarget
struct UNimbusBlueprintLibraryVR_DrawWidgetToTarget_Params
{
	class UTextureRenderTarget2D*                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 WidgetToRender;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   DrawSize;                                                 // (Parm, IsPlainOldData)
	bool                                               UseGamma;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.CreateRenderTarget2DVR
struct UNimbusBlueprintLibraryVR_CreateRenderTarget2DVR_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ClearColor;                                               // (Parm, IsPlainOldData)
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.CreateAndCopyStaticMeshForVR
struct UNimbusBlueprintLibraryVR_CreateAndCopyStaticMeshForVR_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Base;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.ClearStereoLayerBuffer
struct UNimbusBlueprintLibraryVR_ClearStereoLayerBuffer_Params
{
};

// Function Nimbus.NimbusBlueprintLibraryVR.ClearMiniMapData
struct UNimbusBlueprintLibraryVR_ClearMiniMapData_Params
{
	class UMiniMapLayerWidget*                         TargetMiniMap;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.ClearHUDMessage
struct UNimbusBlueprintLibraryVR_ClearHUDMessage_Params
{
	class ANimbusHUD*                                  NimbusHUD;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusBlueprintLibraryVR.CheckAndApplyVrRenderSetting
struct UNimbusBlueprintLibraryVR_CheckAndApplyVrRenderSetting_Params
{
};

// Function Nimbus.NimbusCachedWorldContainer.OnPostWorldCleanupHandler
struct UNimbusCachedWorldContainer_OnPostWorldCleanupHandler_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSessionEnded;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCleanupResources;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCachedWorldContainer.OnPostGarbageCollectHandler
struct UNimbusCachedWorldContainer_OnPostGarbageCollectHandler_Params
{
};

// Function Nimbus.NimbusCheatManager.ViewSelf
struct UNimbusCheatManager_ViewSelf_Params
{
};

// Function Nimbus.NimbusCheatManager.ViewActor
struct UNimbusCheatManager_ViewActor_Params
{
	struct FName                                       ActorName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.UpdateDebugCondition
struct UNimbusCheatManager_UpdateDebugCondition_Params
{
	uint32_t                                           ConditionId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.UpdateConditionAction
struct UNimbusCheatManager_UpdateConditionAction_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockVRAircraftTree
struct UNimbusCheatManager_UnlockVRAircraftTree_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockSceneViewer
struct UNimbusCheatManager_UnlockSceneViewer_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.UnlockPilotData
struct UNimbusCheatManager_UnlockPilotData_Params
{
	int                                                PilotDataID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.UnlockParts
struct UNimbusCheatManager_UnlockParts_Params
{
	int                                                PartsID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.UnlockOnlineNicknameByID
struct UNimbusCheatManager_UnlockOnlineNicknameByID_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.UnlockNickname
struct UNimbusCheatManager_UnlockNickname_Params
{
	int                                                NicknameID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.UnlockMultiplayAircraftTree
struct UNimbusCheatManager_UnlockMultiplayAircraftTree_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockMedal
struct UNimbusCheatManager_UnlockMedal_Params
{
	int                                                MedalID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.UnlockFeatures
struct UNimbusCheatManager_UnlockFeatures_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockEntry
struct UNimbusCheatManager_UnlockEntry_Params
{
	int                                                EntryId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.UnlockEmblem
struct UNimbusCheatManager_UnlockEmblem_Params
{
	int                                                EmblemID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.UnlockDLC
struct UNimbusCheatManager_UnlockDLC_Params
{
	struct FString                                     DLCID;                                                    // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.UnlockAllWithMaxData
struct UNimbusCheatManager_UnlockAllWithMaxData_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockAllSceneViewer
struct UNimbusCheatManager_UnlockAllSceneViewer_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockAllPilotData
struct UNimbusCheatManager_UnlockAllPilotData_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockAllParts
struct UNimbusCheatManager_UnlockAllParts_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockAllNicknames
struct UNimbusCheatManager_UnlockAllNicknames_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockAllMedals
struct UNimbusCheatManager_UnlockAllMedals_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockAllEmblems
struct UNimbusCheatManager_UnlockAllEmblems_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockAllDLCs
struct UNimbusCheatManager_UnlockAllDLCs_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockAllAircraftSkins
struct UNimbusCheatManager_UnlockAllAircraftSkins_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockAllAchievements
struct UNimbusCheatManager_UnlockAllAchievements_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockAll
struct UNimbusCheatManager_UnlockAll_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockAircraftTree
struct UNimbusCheatManager_UnlockAircraftTree_Params
{
};

// Function Nimbus.NimbusCheatManager.UnlockAircraftSkin
struct UNimbusCheatManager_UnlockAircraftSkin_Params
{
	int                                                SkinID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.UnlockAircraft
struct UNimbusCheatManager_UnlockAircraft_Params
{
	struct FString                                     PlaneStringID;                                            // (Parm, ZeroConstructor)
	int                                                WeaponNo;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.UnlockAchievement
struct UNimbusCheatManager_UnlockAchievement_Params
{
	struct FString                                     AchievementID;                                            // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.ToggleWeaponProcess
struct UNimbusCheatManager_ToggleWeaponProcess_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleWeaponMovingLocus
struct UNimbusCheatManager_ToggleWeaponMovingLocus_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleWeaponDebugContainer
struct UNimbusCheatManager_ToggleWeaponDebugContainer_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleWeaponCollision
struct UNimbusCheatManager_ToggleWeaponCollision_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleWeaponAxis
struct UNimbusCheatManager_ToggleWeaponAxis_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleWeaponAalysis
struct UNimbusCheatManager_ToggleWeaponAalysis_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleVRTestMissionMenu
struct UNimbusCheatManager_ToggleVRTestMissionMenu_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleVREquipGunTrackingParts
struct UNimbusCheatManager_ToggleVREquipGunTrackingParts_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleUnlockLogOnScreen
struct UNimbusCheatManager_ToggleUnlockLogOnScreen_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleUnlockDLC
struct UNimbusCheatManager_ToggleUnlockDLC_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleUnitDebugContainer
struct UNimbusCheatManager_ToggleUnitDebugContainer_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleUnitAalysis
struct UNimbusCheatManager_ToggleUnitAalysis_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleUI
struct UNimbusCheatManager_ToggleUI_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleTimeOutTravelMap
struct UNimbusCheatManager_ToggleTimeOutTravelMap_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleTimeOutTransitionMap
struct UNimbusCheatManager_ToggleTimeOutTransitionMap_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleSurroundPursietTargetPoint
struct UNimbusCheatManager_ToggleSurroundPursietTargetPoint_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleSoundViewerDebugInfo
struct UNimbusCheatManager_ToggleSoundViewerDebugInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleSoundEventRequestInfo
struct UNimbusCheatManager_ToggleSoundEventRequestInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleSoundEventInfo
struct UNimbusCheatManager_ToggleSoundEventInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleSonobuoyProgressIcon
struct UNimbusCheatManager_ToggleSonobuoyProgressIcon_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleSkipScenarioRadio
struct UNimbusCheatManager_ToggleSkipScenarioRadio_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleSkipPlayByPlayRadio
struct UNimbusCheatManager_ToggleSkipPlayByPlayRadio_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleSkipChatterRadio
struct UNimbusCheatManager_ToggleSkipChatterRadio_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowUnitRange
struct UNimbusCheatManager_ToggleShowUnitRange_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowSoundPauseInfo
struct UNimbusCheatManager_ToggleShowSoundPauseInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowSoundManagerInfo
struct UNimbusCheatManager_ToggleShowSoundManagerInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowRibbonCollectionInfo
struct UNimbusCheatManager_ToggleShowRibbonCollectionInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowReplayInfo
struct UNimbusCheatManager_ToggleShowReplayInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowRaycastTest
struct UNimbusCheatManager_ToggleShowRaycastTest_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowRadioPortrait
struct UNimbusCheatManager_ToggleShowRadioPortrait_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowPlayerLandingAOA
struct UNimbusCheatManager_ToggleShowPlayerLandingAOA_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowPlayerEnvCollisionLines
struct UNimbusCheatManager_ToggleShowPlayerEnvCollisionLines_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowPlayByPlayRadioConditionLog
struct UNimbusCheatManager_ToggleShowPlayByPlayRadioConditionLog_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowPauseInfo
struct UNimbusCheatManager_ToggleShowPauseInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowMissionObjectInfoUsually
struct UNimbusCheatManager_ToggleShowMissionObjectInfoUsually_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowMissionHitchInfo
struct UNimbusCheatManager_ToggleShowMissionHitchInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowMissionDebugInfo
struct UNimbusCheatManager_ToggleShowMissionDebugInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowMiniGameRadioGuideCourse
struct UNimbusCheatManager_ToggleShowMiniGameRadioGuideCourse_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowMapChangeInfo
struct UNimbusCheatManager_ToggleShowMapChangeInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowLevelDebugInfo
struct UNimbusCheatManager_ToggleShowLevelDebugInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowAssetLoaderInfo
struct UNimbusCheatManager_ToggleShowAssetLoaderInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShowAnalyzedNodes
struct UNimbusCheatManager_ToggleShowAnalyzedNodes_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleShortMapChangeTimeOut
struct UNimbusCheatManager_ToggleShortMapChangeTimeOut_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleScenarioRadioEnabled
struct UNimbusCheatManager_ToggleScenarioRadioEnabled_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleSaveReplayFile
struct UNimbusCheatManager_ToggleSaveReplayFile_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleSaveLoadUIIgnore
struct UNimbusCheatManager_ToggleSaveLoadUIIgnore_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleSaveLoadSingleThread
struct UNimbusCheatManager_ToggleSaveLoadSingleThread_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleSaveLoadSimulatedMode
struct UNimbusCheatManager_ToggleSaveLoadSimulatedMode_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleReplayRecording
struct UNimbusCheatManager_ToggleReplayRecording_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleRecordRadioReport
struct UNimbusCheatManager_ToggleRecordRadioReport_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleRadioSkipEnabled
struct UNimbusCheatManager_ToggleRadioSkipEnabled_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleRadioSilentGroup
struct UNimbusCheatManager_ToggleRadioSilentGroup_Params
{
	int                                                GroupIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.ToggleRadioRequeueingWaitGroupInfo
struct UNimbusCheatManager_ToggleRadioRequeueingWaitGroupInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleRadioPotentializeAllTables
struct UNimbusCheatManager_ToggleRadioPotentializeAllTables_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleRadioPlayLimitOneTime
struct UNimbusCheatManager_ToggleRadioPlayLimitOneTime_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleRadioForceOfflineEnabled
struct UNimbusCheatManager_ToggleRadioForceOfflineEnabled_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleRadioEnemyTensionEnabled
struct UNimbusCheatManager_ToggleRadioEnemyTensionEnabled_Params
{
	int                                                Tension;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.ToggleRadioDebugInfo
struct UNimbusCheatManager_ToggleRadioDebugInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleRadioContinuousPlay
struct UNimbusCheatManager_ToggleRadioContinuousPlay_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleRadioAlwaysPlay
struct UNimbusCheatManager_ToggleRadioAlwaysPlay_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleRadioAllyTensionEnabled
struct UNimbusCheatManager_ToggleRadioAllyTensionEnabled_Params
{
	int                                                Tension;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.TogglePlayerWeaponUnlimited
struct UNimbusCheatManager_TogglePlayerWeaponUnlimited_Params
{
};

// Function Nimbus.NimbusCheatManager.TogglePlayerWeaponQuickReload
struct UNimbusCheatManager_TogglePlayerWeaponQuickReload_Params
{
};

// Function Nimbus.NimbusCheatManager.TogglePlayerUpgradePartsInfo
struct UNimbusCheatManager_TogglePlayerUpgradePartsInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.TogglePlayerInvincible
struct UNimbusCheatManager_TogglePlayerInvincible_Params
{
};

// Function Nimbus.NimbusCheatManager.TogglePlayerDebugInfo
struct UNimbusCheatManager_TogglePlayerDebugInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.TogglePlayerAttackTargetsException
struct UNimbusCheatManager_TogglePlayerAttackTargetsException_Params
{
};

// Function Nimbus.NimbusCheatManager.TogglePlayByPlayRadioEnabled
struct UNimbusCheatManager_TogglePlayByPlayRadioEnabled_Params
{
};

// Function Nimbus.NimbusCheatManager.TogglePassSoundDebugInfo
struct UNimbusCheatManager_TogglePassSoundDebugInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleParticleSystemDebugInfo
struct UNimbusCheatManager_ToggleParticleSystemDebugInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleOutOfCockpitWarning
struct UNimbusCheatManager_ToggleOutOfCockpitWarning_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleObjectAxis
struct UNimbusCheatManager_ToggleObjectAxis_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleNimbusUserDebugMode
struct UNimbusCheatManager_ToggleNimbusUserDebugMode_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleMultiplayerDebugMode
struct UNimbusCheatManager_ToggleMultiplayerDebugMode_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleMissileCloudWavering
struct UNimbusCheatManager_ToggleMissileCloudWavering_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleMiniGameAllDemoCamera
struct UNimbusCheatManager_ToggleMiniGameAllDemoCamera_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleLogStreamingTexture
struct UNimbusCheatManager_ToggleLogStreamingTexture_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleInvisibleFade
struct UNimbusCheatManager_ToggleInvisibleFade_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleGameObjectProcess
struct UNimbusCheatManager_ToggleGameObjectProcess_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleForceSkipMiniGame
struct UNimbusCheatManager_ToggleForceSkipMiniGame_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleForceSkipIGC
struct UNimbusCheatManager_ToggleForceSkipIGC_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleForcePlayerPlaneInSand
struct UNimbusCheatManager_ToggleForcePlayerPlaneInSand_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleForcePlayerPlaneInJamming
struct UNimbusCheatManager_ToggleForcePlayerPlaneInJamming_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleForcePlayerPlaneInCloud
struct UNimbusCheatManager_ToggleForcePlayerPlaneInCloud_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleEquipUpgardParts
struct UNimbusCheatManager_ToggleEquipUpgardParts_Params
{
	int                                                PartsID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.ToggleDisableVibration
struct UNimbusCheatManager_ToggleDisableVibration_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDisableUnlimitedGunDueToDifficulty
struct UNimbusCheatManager_ToggleDisableUnlimitedGunDueToDifficulty_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDisableReplayPassCameraMultiTargets
struct UNimbusCheatManager_ToggleDisableReplayPassCameraMultiTargets_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDisableReplayPassCameraMissile
struct UNimbusCheatManager_ToggleDisableReplayPassCameraMissile_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDisableReplayPassCameraHorizon
struct UNimbusCheatManager_ToggleDisableReplayPassCameraHorizon_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDisableRadioRequeueingWait
struct UNimbusCheatManager_ToggleDisableRadioRequeueingWait_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDisableRadioQueueLimitLife
struct UNimbusCheatManager_ToggleDisableRadioQueueLimitLife_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDisableMiniGameSkip
struct UNimbusCheatManager_ToggleDisableMiniGameSkip_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDisableEventTrigger
struct UNimbusCheatManager_ToggleDisableEventTrigger_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDisableDrawVapor
struct UNimbusCheatManager_ToggleDisableDrawVapor_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDisableDrawMissileTrail
struct UNimbusCheatManager_ToggleDisableDrawMissileTrail_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDisabledPreloadTransitionMap
struct UNimbusCheatManager_ToggleDisabledPreloadTransitionMap_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDebugShowBreakConstraint
struct UNimbusCheatManager_ToggleDebugShowBreakConstraint_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDebugObjectMapRadioSearchEnemyRange
struct UNimbusCheatManager_ToggleDebugObjectMapRadioSearchEnemyRange_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDebugObjectMap
struct UNimbusCheatManager_ToggleDebugObjectMap_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDebugMenu
struct UNimbusCheatManager_ToggleDebugMenu_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDebugLog
struct UNimbusCheatManager_ToggleDebugLog_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDebugDisableWeaponDisabling
struct UNimbusCheatManager_ToggleDebugDisableWeaponDisabling_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDebugContainer
struct UNimbusCheatManager_ToggleDebugContainer_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDebugCanopyState
struct UNimbusCheatManager_ToggleDebugCanopyState_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleDamageStateDebugMode
struct UNimbusCheatManager_ToggleDamageStateDebugMode_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleCooldownDebugDisplay
struct UNimbusCheatManager_ToggleCooldownDebugDisplay_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleCollectLoadedTexturePhase
struct UNimbusCheatManager_ToggleCollectLoadedTexturePhase_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleCollectLoadedTextureIGC
struct UNimbusCheatManager_ToggleCollectLoadedTextureIGC_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleCollectLoadedTexture
struct UNimbusCheatManager_ToggleCollectLoadedTexture_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleChatterRadioEnabled
struct UNimbusCheatManager_ToggleChatterRadioEnabled_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleBuildInformationPeak
struct UNimbusCheatManager_ToggleBuildInformationPeak_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleBuildInformation
struct UNimbusCheatManager_ToggleBuildInformation_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleBGMEventRequestInfo
struct UNimbusCheatManager_ToggleBGMEventRequestInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleAutoDumpReplayDataBuffer
struct UNimbusCheatManager_ToggleAutoDumpReplayDataBuffer_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleApplyMultiplayerParametersToCampaign
struct UNimbusCheatManager_ToggleApplyMultiplayerParametersToCampaign_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleAllExtraMeshVisibility
struct UNimbusCheatManager_ToggleAllExtraMeshVisibility_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleAircraftLoadingTest
struct UNimbusCheatManager_ToggleAircraftLoadingTest_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleAIPlaneDebugInfo
struct UNimbusCheatManager_ToggleAIPlaneDebugInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleAIDebugInfo
struct UNimbusCheatManager_ToggleAIDebugInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ToggleAheadLoadIGCPlane
struct UNimbusCheatManager_ToggleAheadLoadIGCPlane_Params
{
};

// Function Nimbus.NimbusCheatManager.ThreeTimesFaster
struct UNimbusCheatManager_ThreeTimesFaster_Params
{
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.TeleportToTarget
struct UNimbusCheatManager_TeleportToTarget_Params
{
};

// Function Nimbus.NimbusCheatManager.SuperF5
struct UNimbusCheatManager_SuperF5_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.StopImpactCamera
struct UNimbusCheatManager_StopImpactCamera_Params
{
};

// Function Nimbus.NimbusCheatManager.StartConditions
struct UNimbusCheatManager_StartConditions_Params
{
};

// Function Nimbus.NimbusCheatManager.SoftReset
struct UNimbusCheatManager_SoftReset_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_UnlockLocalSkin
struct UNimbusCheatManager_SNL_UnlockLocalSkin_Params
{
	int                                                SkinID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_UnlockLocalNickname
struct UNimbusCheatManager_SNL_UnlockLocalNickname_Params
{
	int                                                NicknameID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_UnlockLocalMedal
struct UNimbusCheatManager_SNL_UnlockLocalMedal_Params
{
	int                                                MedalID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_UnlockLocalEmblem
struct UNimbusCheatManager_SNL_UnlockLocalEmblem_Params
{
	int                                                EmblemID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_UnlockAndEquipLocalNickname
struct UNimbusCheatManager_SNL_UnlockAndEquipLocalNickname_Params
{
	int                                                NicknameID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_UnlockAllNicknames
struct UNimbusCheatManager_SNL_UnlockAllNicknames_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_ToggleForceHostMigrationFailure
struct UNimbusCheatManager_SNL_ToggleForceHostMigrationFailure_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_TestProgressionDataCheat
struct UNimbusCheatManager_SNL_TestProgressionDataCheat_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_TestMRPDataTableCheat
struct UNimbusCheatManager_SNL_TestMRPDataTableCheat_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_TestMissionScoreDataTableCheat
struct UNimbusCheatManager_SNL_TestMissionScoreDataTableCheat_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_TestMedalEvaluationResultCheat
struct UNimbusCheatManager_SNL_TestMedalEvaluationResultCheat_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_TestGameSettingsCheat
struct UNimbusCheatManager_SNL_TestGameSettingsCheat_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_TestGameRulesCheat
struct UNimbusCheatManager_SNL_TestGameRulesCheat_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_TestGameResultCheat
struct UNimbusCheatManager_SNL_TestGameResultCheat_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_TestCheatWeaponDamage
struct UNimbusCheatManager_SNL_TestCheatWeaponDamage_Params
{
	bool                                               bEnableCheating;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_TestCheatPlaneLocation
struct UNimbusCheatManager_SNL_TestCheatPlaneLocation_Params
{
	int                                                ClientIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_TestCheatPlaneHealth
struct UNimbusCheatManager_SNL_TestCheatPlaneHealth_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_TestCheatPlaneAmmoCount
struct UNimbusCheatManager_SNL_TestCheatPlaneAmmoCount_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_TestCheatOnCheatingProperty
struct UNimbusCheatManager_SNL_TestCheatOnCheatingProperty_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_TestCheatLocalPlaneLocation
struct UNimbusCheatManager_SNL_TestCheatLocalPlaneLocation_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_TeleportToHost
struct UNimbusCheatManager_SNL_TeleportToHost_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_TeleportToAirCurrentVolume
struct UNimbusCheatManager_SNL_TeleportToAirCurrentVolume_Params
{
	int                                                AirCurrentVolumeIndex;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SimulateNetworkLibInitFailure
struct UNimbusCheatManager_SNL_SimulateNetworkLibInitFailure_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_ShowVCMemberList
struct UNimbusCheatManager_SNL_ShowVCMemberList_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_ShowSimpleVoiceChatPanel
struct UNimbusCheatManager_SNL_ShowSimpleVoiceChatPanel_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetVoiceChatMinLightUpTime
struct UNimbusCheatManager_SNL_SetVoiceChatMinLightUpTime_Params
{
	float                                              TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetRoomMMRValue
struct UNimbusCheatManager_SNL_SetRoomMMRValue_Params
{
	int                                                NewMMRValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetRetrySaveAutoKickDurationInSeconds
struct UNimbusCheatManager_SNL_SetRetrySaveAutoKickDurationInSeconds_Params
{
	float                                              TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetRedBootShowTime
struct UNimbusCheatManager_SNL_SetRedBootShowTime_Params
{
	int                                                Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetRedBootKickedPlayersThreshold
struct UNimbusCheatManager_SNL_SetRedBootKickedPlayersThreshold_Params
{
	int                                                Players;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetRedBootExpiryTime
struct UNimbusCheatManager_SNL_SetRedBootExpiryTime_Params
{
	int                                                Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetPreventRejoinSessionTime
struct UNimbusCheatManager_SNL_SetPreventRejoinSessionTime_Params
{
	int                                                Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetPlaneModel
struct UNimbusCheatManager_SNL_SetPlaneModel_Params
{
	int                                                PlaneID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponNo;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetMinimumRequiredBandwidthBPS
struct UNimbusCheatManager_SNL_SetMinimumRequiredBandwidthBPS_Params
{
	float                                              MinimumRequiredBandwidthBPS;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetLocalRankExp
struct UNimbusCheatManager_SNL_SetLocalRankExp_Params
{
	uint32_t                                           RankExperience;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetLocalRank
struct UNimbusCheatManager_SNL_SetLocalRank_Params
{
	unsigned char                                      RankID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetLocalPlayerScore
struct UNimbusCheatManager_SNL_SetLocalPlayerScore_Params
{
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetLocalOnlineCreditValue
struct UNimbusCheatManager_SNL_SetLocalOnlineCreditValue_Params
{
	int                                                MMRP;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetLocalMMRValue
struct UNimbusCheatManager_SNL_SetLocalMMRValue_Params
{
	int                                                MMRValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetFlightFormation
struct UNimbusCheatManager_SNL_SetFlightFormation_Params
{
	int                                                FlightFormationType;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetErrorDelayDuration
struct UNimbusCheatManager_SNL_SetErrorDelayDuration_Params
{
	float                                              DurationInSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SetCustomFlightFormation
struct UNimbusCheatManager_SNL_SetCustomFlightFormation_Params
{
	struct FString                                     FlightFormation;                                          // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.SNL_SetAutoKickThreshold
struct UNimbusCheatManager_SNL_SetAutoKickThreshold_Params
{
	int                                                Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_SendTestMessage
struct UNimbusCheatManager_SNL_SendTestMessage_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_SendAircraftSetsToAllClients
struct UNimbusCheatManager_SNL_SendAircraftSetsToAllClients_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_ResetLocalMMRValue
struct UNimbusCheatManager_SNL_ResetLocalMMRValue_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_KillLocalPlayer
struct UNimbusCheatManager_SNL_KillLocalPlayer_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_KickPlayerByID
struct UNimbusCheatManager_SNL_KickPlayerByID_Params
{
	int                                                KickedClientID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_KickManagerDebugToggle
struct UNimbusCheatManager_SNL_KickManagerDebugToggle_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_InitializeNetworkEmulator
struct UNimbusCheatManager_SNL_InitializeNetworkEmulator_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_ForceCompleteMission
struct UNimbusCheatManager_SNL_ForceCompleteMission_Params
{
	int                                                SecondToWait;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_ForceAbortMission
struct UNimbusCheatManager_SNL_ForceAbortMission_Params
{
	bool                                               bShouldAbortMission;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_EnableUAVLaserPE
struct UNimbusCheatManager_SNL_EnableUAVLaserPE_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_EnableSessionTimeoutDetection
struct UNimbusCheatManager_SNL_EnableSessionTimeoutDetection_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_EnableResetPlayerControllerOnPause
struct UNimbusCheatManager_SNL_EnableResetPlayerControllerOnPause_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_EnableProgressionDebug
struct UNimbusCheatManager_SNL_EnableProgressionDebug_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_EnablePlaneSync
struct UNimbusCheatManager_SNL_EnablePlaneSync_Params
{
	bool                                               bEnablePlaneSync;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_EnableNetworkLOD
struct UNimbusCheatManager_SNL_EnableNetworkLOD_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_EnableNetworkGodMode
struct UNimbusCheatManager_SNL_EnableNetworkGodMode_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_EnableFlightEngine
struct UNimbusCheatManager_SNL_EnableFlightEngine_Params
{
	bool                                               bEnableFlightEngine;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_EnableDebugFakeSession
struct UNimbusCheatManager_SNL_EnableDebugFakeSession_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_EnableAutoWeapon
struct UNimbusCheatManager_SNL_EnableAutoWeapon_Params
{
	bool                                               bMGEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMainWeaponEnabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSpecialWeapon;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_EnableAirCurrentReplication
struct UNimbusCheatManager_SNL_EnableAirCurrentReplication_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_DisplayStats
struct UNimbusCheatManager_SNL_DisplayStats_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_DisplayLocalAircraftCost
struct UNimbusCheatManager_SNL_DisplayLocalAircraftCost_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_DisplayDebugBox
struct UNimbusCheatManager_SNL_DisplayDebugBox_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_DisplayAllHUDElements
struct UNimbusCheatManager_SNL_DisplayAllHUDElements_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_CheckOnlineDataStatus
struct UNimbusCheatManager_SNL_CheckOnlineDataStatus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_CheckOnlineCreditValue
struct UNimbusCheatManager_SNL_CheckOnlineCreditValue_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_CheckLocalRankInfo
struct UNimbusCheatManager_SNL_CheckLocalRankInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_CheckLocalPlayerScore
struct UNimbusCheatManager_SNL_CheckLocalPlayerScore_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_CheckLocalMMRValue
struct UNimbusCheatManager_SNL_CheckLocalMMRValue_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_CameraSideTargetFollow
struct UNimbusCheatManager_SNL_CameraSideTargetFollow_Params
{
	int                                                ClientIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_CameraSideSetOffset
struct UNimbusCheatManager_SNL_CameraSideSetOffset_Params
{
	float                                              Right;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Up;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_CameraSide
struct UNimbusCheatManager_SNL_CameraSide_Params
{
	int                                                ClientIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_CameraMovePlayer
struct UNimbusCheatManager_SNL_CameraMovePlayer_Params
{
	int                                                ClientIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_CameraFree
struct UNimbusCheatManager_SNL_CameraFree_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_CameraFollowClient
struct UNimbusCheatManager_SNL_CameraFollowClient_Params
{
	int                                                ClientIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SNL_CameraDisable
struct UNimbusCheatManager_SNL_CameraDisable_Params
{
};

// Function Nimbus.NimbusCheatManager.SNL_ArrangeWindows
struct UNimbusCheatManager_SNL_ArrangeWindows_Params
{
};

// Function Nimbus.NimbusCheatManager.SkipToPhase
struct UNimbusCheatManager_SkipToPhase_Params
{
	int                                                PhaseNo;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SimulateSaveDataMinSizeKB
struct UNimbusCheatManager_SimulateSaveDataMinSizeKB_Params
{
	int                                                KiloByteSize;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SimulateSaveDataMinSize
struct UNimbusCheatManager_SimulateSaveDataMinSize_Params
{
	int                                                ByteSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SimulateMissileDeath
struct UNimbusCheatManager_SimulateMissileDeath_Params
{
};

// Function Nimbus.NimbusCheatManager.SimulateCorruptedSaveDataInMemory
struct UNimbusCheatManager_SimulateCorruptedSaveDataInMemory_Params
{
	bool                                               bIsCorruptedSave;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.ShutdownAutomationTest
struct UNimbusCheatManager_ShutdownAutomationTest_Params
{
};

// Function Nimbus.NimbusCheatManager.ShowWeatherParticleLocation
struct UNimbusCheatManager_ShowWeatherParticleLocation_Params
{
};

// Function Nimbus.NimbusCheatManager.ShowTunnelInfo
struct UNimbusCheatManager_ShowTunnelInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ShowSnapPositionDebug
struct UNimbusCheatManager_ShowSnapPositionDebug_Params
{
};

// Function Nimbus.NimbusCheatManager.ShowSearchLightDebug
struct UNimbusCheatManager_ShowSearchLightDebug_Params
{
};

// Function Nimbus.NimbusCheatManager.ShowImpactCameraInfo
struct UNimbusCheatManager_ShowImpactCameraInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.ShowDialogStack
struct UNimbusCheatManager_ShowDialogStack_Params
{
};

// Function Nimbus.NimbusCheatManager.ShowAIASSeaExplosionDebug
struct UNimbusCheatManager_ShowAIASSeaExplosionDebug_Params
{
};

// Function Nimbus.NimbusCheatManager.SetWeaponDebugContainerDisplayMode
struct UNimbusCheatManager_SetWeaponDebugContainerDisplayMode_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRWidgetDistance
struct UNimbusCheatManager_SetVRWidgetDistance_Params
{
	float                                              DistanceOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRWeaponInfoYaw
struct UNimbusCheatManager_SetVRWeaponInfoYaw_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRWeaponInfoScale
struct UNimbusCheatManager_SetVRWeaponInfoScale_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRWeaponInfoPosition
struct UNimbusCheatManager_SetVRWeaponInfoPosition_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRWeaponInfoPitch
struct UNimbusCheatManager_SetVRWeaponInfoPitch_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRVelocityVectorScale
struct UNimbusCheatManager_SetVRVelocityVectorScale_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRTextInfoYaw
struct UNimbusCheatManager_SetVRTextInfoYaw_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRTextInfoScale
struct UNimbusCheatManager_SetVRTextInfoScale_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRTextInfoPosition
struct UNimbusCheatManager_SetVRTextInfoPosition_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRTextInfoPitch
struct UNimbusCheatManager_SetVRTextInfoPitch_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRSubtitlePosition
struct UNimbusCheatManager_SetVRSubtitlePosition_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRRadarYaw
struct UNimbusCheatManager_SetVRRadarYaw_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRRadarScale
struct UNimbusCheatManager_SetVRRadarScale_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRRadarPosition
struct UNimbusCheatManager_SetVRRadarPosition_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRRadarPitch
struct UNimbusCheatManager_SetVRRadarPitch_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRPlaneInfoYaw
struct UNimbusCheatManager_SetVRPlaneInfoYaw_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRPlaneInfoScale
struct UNimbusCheatManager_SetVRPlaneInfoScale_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRPlaneInfoPosition
struct UNimbusCheatManager_SetVRPlaneInfoPosition_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRPlaneInfoPitch
struct UNimbusCheatManager_SetVRPlaneInfoPitch_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRPitchMeterScale
struct UNimbusCheatManager_SetVRPitchMeterScale_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRPitchMeterDepth
struct UNimbusCheatManager_SetVRPitchMeterDepth_Params
{
	float                                              Depth;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVROverlayGlow
struct UNimbusCheatManager_SetVROverlayGlow_Params
{
	float                                              R;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              G;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVROverlayCurve
struct UNimbusCheatManager_SetVROverlayCurve_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              curveParam;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRHangarCameraRotationYaw
struct UNimbusCheatManager_SetVRHangarCameraRotationYaw_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRHangarCameraRotationRoll
struct UNimbusCheatManager_SetVRHangarCameraRotationRoll_Params
{
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRHangarCameraRotationPitch
struct UNimbusCheatManager_SetVRHangarCameraRotationPitch_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRHangarCameraRotation
struct UNimbusCheatManager_SetVRHangarCameraRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRHangarCameraPositionZ
struct UNimbusCheatManager_SetVRHangarCameraPositionZ_Params
{
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRHangarCameraPositionY
struct UNimbusCheatManager_SetVRHangarCameraPositionY_Params
{
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRHangarCameraPositionX
struct UNimbusCheatManager_SetVRHangarCameraPositionX_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRHangarCameraPosition
struct UNimbusCheatManager_SetVRHangarCameraPosition_Params
{
	struct FVector                                     Position;                                                 // (Parm, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRCompassScale
struct UNimbusCheatManager_SetVRCompassScale_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRCompassHeight
struct UNimbusCheatManager_SetVRCompassHeight_Params
{
	float                                              Depth;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRCompassDepth
struct UNimbusCheatManager_SetVRCompassDepth_Params
{
	float                                              Depth;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRCampaignMRP
struct UNimbusCheatManager_SetVRCampaignMRP_Params
{
	uint64_t                                           NewMRP;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRCameraPositionZ
struct UNimbusCheatManager_SetVRCameraPositionZ_Params
{
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRCameraPositionY
struct UNimbusCheatManager_SetVRCameraPositionY_Params
{
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVRCameraPositionX
struct UNimbusCheatManager_SetVRCameraPositionX_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVoiceLanguage
struct UNimbusCheatManager_SetVoiceLanguage_Params
{
	int                                                Languange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetVibrationScalar
struct UNimbusCheatManager_SetVibrationScalar_Params
{
	float                                              Scalar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetTrueSkyEnabled
struct UNimbusCheatManager_SetTrueSkyEnabled_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetTransitionAsyncLoadingTimeLimit
struct UNimbusCheatManager_SetTransitionAsyncLoadingTimeLimit_Params
{
	float                                              TimeLimit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetTeleportDistance
struct UNimbusCheatManager_SetTeleportDistance_Params
{
	float                                              DistanceUU;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetTargetSelectionWideMode
struct UNimbusCheatManager_SetTargetSelectionWideMode_Params
{
	bool                                               bWideMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetTargetSelectionAngleFirst
struct UNimbusCheatManager_SetTargetSelectionAngleFirst_Params
{
	bool                                               bAngleFirst;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetSubtitleLanguage
struct UNimbusCheatManager_SetSubtitleLanguage_Params
{
	int                                                Languange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetStreamingInstallProgress
struct UNimbusCheatManager_SetStreamingInstallProgress_Params
{
	int                                                Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetStreamingInstallChunk
struct UNimbusCheatManager_SetStreamingInstallChunk_Params
{
	int                                                FinishedChunkNo;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetStereoDepthDirectly
struct UNimbusCheatManager_SetStereoDepthDirectly_Params
{
	float                                              Depth;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetStereoDepth
struct UNimbusCheatManager_SetStereoDepth_Params
{
	float                                              Depth;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetSearchEnemyRangeDisplayMode
struct UNimbusCheatManager_SetSearchEnemyRangeDisplayMode_Params
{
	int                                                DisplayMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetSaveLoadThreadMinDelay
struct UNimbusCheatManager_SetSaveLoadThreadMinDelay_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetSaveLoadSimulatedStatus
struct UNimbusCheatManager_SetSaveLoadSimulatedStatus_Params
{
	int                                                StatusValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetSaveLoadDialogMinDelay
struct UNimbusCheatManager_SetSaveLoadDialogMinDelay_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetReplaySlowMotionSpeed
struct UNimbusCheatManager_SetReplaySlowMotionSpeed_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetReplayFastForwardSpeed
struct UNimbusCheatManager_SetReplayFastForwardSpeed_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetPlayerTickRate
struct UNimbusCheatManager_SetPlayerTickRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetPlayerSpecialWeapon
struct UNimbusCheatManager_SetPlayerSpecialWeapon_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetPlayerSkin
struct UNimbusCheatManager_SetPlayerSkin_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetPlayerMissilePowerCoefficient
struct UNimbusCheatManager_SetPlayerMissilePowerCoefficient_Params
{
	float                                              Coefficient;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetPlayerJamming
struct UNimbusCheatManager_SetPlayerJamming_Params
{
	bool                                               bIsJamming;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetPlayerEmblem
struct UNimbusCheatManager_SetPlayerEmblem_Params
{
	int                                                EmblemID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetPlayerControlType
struct UNimbusCheatManager_SetPlayerControlType_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetPlayerBrakingForce
struct UNimbusCheatManager_SetPlayerBrakingForce_Params
{
	float                                              Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetNimbusUserState
struct UNimbusCheatManager_SetNimbusUserState_Params
{
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetMissionSetupPauseFrame
struct UNimbusCheatManager_SetMissionSetupPauseFrame_Params
{
	int                                                frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetMissionPhaseTimeLeft
struct UNimbusCheatManager_SetMissionPhaseTimeLeft_Params
{
	float                                              TimeLeftSeconds;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetLoadingTips
struct UNimbusCheatManager_SetLoadingTips_Params
{
	int                                                TipsID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetLanguage
struct UNimbusCheatManager_SetLanguage_Params
{
	int                                                Languange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetIsInJammingArea
struct UNimbusCheatManager_SetIsInJammingArea_Params
{
	bool                                               bIsJamming;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetIdleIconWaitingTime
struct UNimbusCheatManager_SetIdleIconWaitingTime_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetHudMADParameter
struct UNimbusCheatManager_SetHudMADParameter_Params
{
	float                                              Peak;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaveNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaveOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetHUDDistortionScale
struct UNimbusCheatManager_SetHUDDistortionScale_Params
{
	float                                              NewScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetHealthPercentage
struct UNimbusCheatManager_SetHealthPercentage_Params
{
	float                                              Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetGamma
struct UNimbusCheatManager_SetGamma_Params
{
	int                                                OptionsValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetForceSandDensity
struct UNimbusCheatManager_SetForceSandDensity_Params
{
	float                                              Density;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetForceEquipUpgradeParts
struct UNimbusCheatManager_SetForceEquipUpgradeParts_Params
{
	struct FString                                     PartsIDs;                                                 // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.SetForceEmblemID
struct UNimbusCheatManager_SetForceEmblemID_Params
{
	int                                                EmblemID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetForceCloudDensity
struct UNimbusCheatManager_SetForceCloudDensity_Params
{
	float                                              Density;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetDistanceUnit
struct UNimbusCheatManager_SetDistanceUnit_Params
{
	int                                                UnitType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetDisableRadioGroupFilter
struct UNimbusCheatManager_SetDisableRadioGroupFilter_Params
{
	struct FString                                     RadioGroups;                                              // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.SetDebugObjectMapMode
struct UNimbusCheatManager_SetDebugObjectMapMode_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetDebugContainerVisibilityDistance
struct UNimbusCheatManager_SetDebugContainerVisibilityDistance_Params
{
	float                                              DistanceUU;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetDebugContainerDisplayMode
struct UNimbusCheatManager_SetDebugContainerDisplayMode_Params
{
	int                                                DisplayMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetDebugAssistAngleForRemotePlayer
struct UNimbusCheatManager_SetDebugAssistAngleForRemotePlayer_Params
{
	float                                              AssistAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetCollectLoadedTextureIncreaseInMipLevel
struct UNimbusCheatManager_SetCollectLoadedTextureIncreaseInMipLevel_Params
{
	int                                                InMipLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetCollectLoadedTextureIGCNo
struct UNimbusCheatManager_SetCollectLoadedTextureIGCNo_Params
{
	int                                                InIGCNo;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetCampaignMRP
struct UNimbusCheatManager_SetCampaignMRP_Params
{
	uint64_t                                           NewMRP;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetAllAttackTargetsException
struct UNimbusCheatManager_SetAllAttackTargetsException_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetAIWeaponFilter
struct UNimbusCheatManager_SetAIWeaponFilter_Params
{
	struct FString                                     WeaponLabel;                                              // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.SetAIPlaneTickRateDuringMission
struct UNimbusCheatManager_SetAIPlaneTickRateDuringMission_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SetAIPlaneTickRate
struct UNimbusCheatManager_SetAIPlaneTickRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.SelectRandomMenuItem
struct UNimbusCheatManager_SelectRandomMenuItem_Params
{
};

// Function Nimbus.NimbusCheatManager.SelectNextMenuItem
struct UNimbusCheatManager_SelectNextMenuItem_Params
{
};

// Function Nimbus.NimbusCheatManager.SaveSigmaData
struct UNimbusCheatManager_SaveSigmaData_Params
{
};

// Function Nimbus.NimbusCheatManager.SaveAllGameData
struct UNimbusCheatManager_SaveAllGameData_Params
{
};

// Function Nimbus.NimbusCheatManager.ReturnToBoot
struct UNimbusCheatManager_ReturnToBoot_Params
{
};

// Function Nimbus.NimbusCheatManager.RestockEquipment
struct UNimbusCheatManager_RestockEquipment_Params
{
};

// Function Nimbus.NimbusCheatManager.ResetUserSetting
struct UNimbusCheatManager_ResetUserSetting_Params
{
};

// Function Nimbus.NimbusCheatManager.ResetSigmaSaveData
struct UNimbusCheatManager_ResetSigmaSaveData_Params
{
};

// Function Nimbus.NimbusCheatManager.ResetRadioPlayCounts
struct UNimbusCheatManager_ResetRadioPlayCounts_Params
{
};

// Function Nimbus.NimbusCheatManager.ResetFPSTracking
struct UNimbusCheatManager_ResetFPSTracking_Params
{
};

// Function Nimbus.NimbusCheatManager.ResetAutomaticSpeakerIDs
struct UNimbusCheatManager_ResetAutomaticSpeakerIDs_Params
{
};

// Function Nimbus.NimbusCheatManager.ResetAllSaveData
struct UNimbusCheatManager_ResetAllSaveData_Params
{
};

// Function Nimbus.NimbusCheatManager.ResetAchievements
struct UNimbusCheatManager_ResetAchievements_Params
{
};

// Function Nimbus.NimbusCheatManager.ReplayRandomCameraCondition
struct UNimbusCheatManager_ReplayRandomCameraCondition_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.ReloadSoundBank
struct UNimbusCheatManager_ReloadSoundBank_Params
{
};

// Function Nimbus.NimbusCheatManager.ReloadLevel
struct UNimbusCheatManager_ReloadLevel_Params
{
};

// Function Nimbus.NimbusCheatManager.RadioSuspendToMiniGame
struct UNimbusCheatManager_RadioSuspendToMiniGame_Params
{
};

// Function Nimbus.NimbusCheatManager.RadioResumeFromMiniGame
struct UNimbusCheatManager_RadioResumeFromMiniGame_Params
{
};

// Function Nimbus.NimbusCheatManager.QueryUIStatus
struct UNimbusCheatManager_QueryUIStatus_Params
{
};

// Function Nimbus.NimbusCheatManager.QueryStorageInfo
struct UNimbusCheatManager_QueryStorageInfo_Params
{
};

// Function Nimbus.NimbusCheatManager.PrintVRSubtitlePosition
struct UNimbusCheatManager_PrintVRSubtitlePosition_Params
{
};

// Function Nimbus.NimbusCheatManager.PrintConditionActionMap
struct UNimbusCheatManager_PrintConditionActionMap_Params
{
};

// Function Nimbus.NimbusCheatManager.PlaySavedReplay
struct UNimbusCheatManager_PlaySavedReplay_Params
{
	struct FString                                     ReplayName;                                               // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.PlayRadioTable
struct UNimbusCheatManager_PlayRadioTable_Params
{
	struct FString                                     RadioTableName;                                           // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.PlayImpactCamera
struct UNimbusCheatManager_PlayImpactCamera_Params
{
	struct FName                                       CameraName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.PlayIGC
struct UNimbusCheatManager_PlayIGC_Params
{
	int                                                IGCNumber;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.PlayerStruckByLightning
struct UNimbusCheatManager_PlayerStruckByLightning_Params
{
};

// Function Nimbus.NimbusCheatManager.PingTargettedEnemyInRadar
struct UNimbusCheatManager_PingTargettedEnemyInRadar_Params
{
};

// Function Nimbus.NimbusCheatManager.PingHelpInRadar
struct UNimbusCheatManager_PingHelpInRadar_Params
{
};

// Function Nimbus.NimbusCheatManager.OpenDialog
struct UNimbusCheatManager_OpenDialog_Params
{
	int                                                DialogID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.NearClip_NotTouch
struct UNimbusCheatManager_NearClip_NotTouch_Params
{
};

// Function Nimbus.NimbusCheatManager.NearClip_AlwaysReset
struct UNimbusCheatManager_NearClip_AlwaysReset_Params
{
};

// Function Nimbus.NimbusCheatManager.MoreFireworksPlease
struct UNimbusCheatManager_MoreFireworksPlease_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.MissionTimeLeftToExpire
struct UNimbusCheatManager_MissionTimeLeftToExpire_Params
{
	float                                              RemainingTimeInSeconds;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.LockVRAircraftTree
struct UNimbusCheatManager_LockVRAircraftTree_Params
{
};

// Function Nimbus.NimbusCheatManager.LockMultiplayAircraftTree
struct UNimbusCheatManager_LockMultiplayAircraftTree_Params
{
};

// Function Nimbus.NimbusCheatManager.LockAircraftTree
struct UNimbusCheatManager_LockAircraftTree_Params
{
};

// Function Nimbus.NimbusCheatManager.LockAircraft
struct UNimbusCheatManager_LockAircraft_Params
{
	struct FString                                     PlaneStringID;                                            // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.LoadSigmaSaveData
struct UNimbusCheatManager_LoadSigmaSaveData_Params
{
};

// Function Nimbus.NimbusCheatManager.LoadAllSaveData
struct UNimbusCheatManager_LoadAllSaveData_Params
{
};

// Function Nimbus.NimbusCheatManager.KillTGT
struct UNimbusCheatManager_KillTGT_Params
{
};

// Function Nimbus.NimbusCheatManager.KillTarget
struct UNimbusCheatManager_KillTarget_Params
{
};

// Function Nimbus.NimbusCheatManager.KillSelf
struct UNimbusCheatManager_KillSelf_Params
{
};

// Function Nimbus.NimbusCheatManager.KillNonTGT
struct UNimbusCheatManager_KillNonTGT_Params
{
};

// Function Nimbus.NimbusCheatManager.KillNextTarget
struct UNimbusCheatManager_KillNextTarget_Params
{
};

// Function Nimbus.NimbusCheatManager.KillLockedOnTargets
struct UNimbusCheatManager_KillLockedOnTargets_Params
{
};

// Function Nimbus.NimbusCheatManager.KillCameraChangeMode
struct UNimbusCheatManager_KillCameraChangeMode_Params
{
};

// Function Nimbus.NimbusCheatManager.KillAllies
struct UNimbusCheatManager_KillAllies_Params
{
};

// Function Nimbus.NimbusCheatManager.ItsOver9000
struct UNimbusCheatManager_ItsOver9000_Params
{
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.IsConnectedToOnlineService
struct UNimbusCheatManager_IsConnectedToOnlineService_Params
{
	bool                                               bForceCheck;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.IsConnectedToNetwork
struct UNimbusCheatManager_IsConnectedToNetwork_Params
{
	bool                                               bForceCheck;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.ImpactCameraForcedPlayCameraName
struct UNimbusCheatManager_ImpactCameraForcedPlayCameraName_Params
{
	struct FName                                       CameraName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.ImpactCameraForcedEmergencyMode
struct UNimbusCheatManager_ImpactCameraForcedEmergencyMode_Params
{
};

// Function Nimbus.NimbusCheatManager.ImpactCameraChangeMode
struct UNimbusCheatManager_ImpactCameraChangeMode_Params
{
};

// Function Nimbus.NimbusCheatManager.ImpactCameraChangeDebugSphereMode
struct UNimbusCheatManager_ImpactCameraChangeDebugSphereMode_Params
{
};

// Function Nimbus.NimbusCheatManager.HideStaticMesh
struct UNimbusCheatManager_HideStaticMesh_Params
{
	struct FString                                     FilterStr;                                                // (Parm, ZeroConstructor)
	bool                                               bHide;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.HideDebugInfo
struct UNimbusCheatManager_HideDebugInfo_Params
{
	bool                                               bHide;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.GundariumUpgrade
struct UNimbusCheatManager_GundariumUpgrade_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.GodAI
struct UNimbusCheatManager_GodAI_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.GetOnlineConnectivity
struct UNimbusCheatManager_GetOnlineConnectivity_Params
{
	bool                                               bForceCheck;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.ForceStaticMeshLOD
struct UNimbusCheatManager_ForceStaticMeshLOD_Params
{
	struct FString                                     FilterStr;                                                // (Parm, ZeroConstructor)
	int                                                InForcedLOD;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.ForceMultiplayerSortie
struct UNimbusCheatManager_ForceMultiplayerSortie_Params
{
};

// Function Nimbus.NimbusCheatManager.ForceMapChange
struct UNimbusCheatManager_ForceMapChange_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.ForceFailSave
struct UNimbusCheatManager_ForceFailSave_Params
{
	bool                                               bFail;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.ForceDisableHUD
struct UNimbusCheatManager_ForceDisableHUD_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.FindDevelopersAssetReference
struct UNimbusCheatManager_FindDevelopersAssetReference_Params
{
};

// Function Nimbus.NimbusCheatManager.FillVRCampaignMissionRecords
struct UNimbusCheatManager_FillVRCampaignMissionRecords_Params
{
	struct FString                                     DifficultyLevel;                                          // (Parm, ZeroConstructor)
	EMissionRank                                       ClearRank;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeSec;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipLastMission;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.FillMissionRecord
struct UNimbusCheatManager_FillMissionRecord_Params
{
	struct FString                                     MissionStringID;                                          // (Parm, ZeroConstructor)
	struct FString                                     DifficultyLevel;                                          // (Parm, ZeroConstructor)
	EMissionRank                                       ClearRank;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeSec;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.FillCampaignMissionRecords
struct UNimbusCheatManager_FillCampaignMissionRecords_Params
{
	struct FString                                     DifficultyLevel;                                          // (Parm, ZeroConstructor)
	EMissionRank                                       ClearRank;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeSec;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipLastMission;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.FadeOut
struct UNimbusCheatManager_FadeOut_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.FadeIn
struct UNimbusCheatManager_FadeIn_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.EULAFlow
struct UNimbusCheatManager_EULAFlow_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.EnableWeaponExtrapolation
struct UNimbusCheatManager_EnableWeaponExtrapolation_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.EnableWeaponDebugPath
struct UNimbusCheatManager_EnableWeaponDebugPath_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.EnableNimbusUserManagerListeningEvent
struct UNimbusCheatManager_EnableNimbusUserManagerListeningEvent_Params
{
};

// Function Nimbus.NimbusCheatManager.EnableNewTargetSelectionAlgorithm
struct UNimbusCheatManager_EnableNewTargetSelectionAlgorithm_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.EnableMiniMapRadar
struct UNimbusCheatManager_EnableMiniMapRadar_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.EnableHudMAD
struct UNimbusCheatManager_EnableHudMAD_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.EnableHUDDistortion
struct UNimbusCheatManager_EnableHUDDistortion_Params
{
};

// Function Nimbus.NimbusCheatManager.DumpReplayDataBuffer
struct UNimbusCheatManager_DumpReplayDataBuffer_Params
{
};

// Function Nimbus.NimbusCheatManager.DumpMemoryStats
struct UNimbusCheatManager_DumpMemoryStats_Params
{
};

// Function Nimbus.NimbusCheatManager.DumpDependencedPackages
struct UNimbusCheatManager_DumpDependencedPackages_Params
{
	struct FString                                     ObjectName;                                               // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.DisableSound
struct UNimbusCheatManager_DisableSound_Params
{
};

// Function Nimbus.NimbusCheatManager.DisableReplayExit
struct UNimbusCheatManager_DisableReplayExit_Params
{
	bool                                               Disabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.DisableProhibitionBlock
struct UNimbusCheatManager_DisableProhibitionBlock_Params
{
	struct FString                                     BlockType;                                                // (Parm, ZeroConstructor)
	bool                                               bShouldDisable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.DisablePlayerAirCurrent
struct UNimbusCheatManager_DisablePlayerAirCurrent_Params
{
};

// Function Nimbus.NimbusCheatManager.DisableHUDDistortion
struct UNimbusCheatManager_DisableHUDDistortion_Params
{
};

// Function Nimbus.NimbusCheatManager.DisableAIAttack
struct UNimbusCheatManager_DisableAIAttack_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.DeleteSigmaSaveFile
struct UNimbusCheatManager_DeleteSigmaSaveFile_Params
{
};

// Function Nimbus.NimbusCheatManager.DeleteDebugSaveFile
struct UNimbusCheatManager_DeleteDebugSaveFile_Params
{
};

// Function Nimbus.NimbusCheatManager.DeleteAllSaveFiles
struct UNimbusCheatManager_DeleteAllSaveFiles_Params
{
};

// Function Nimbus.NimbusCheatManager.DebugShowTLSLength
struct UNimbusCheatManager_DebugShowTLSLength_Params
{
};

// Function Nimbus.NimbusCheatManager.DebugShowRainLineParameter
struct UNimbusCheatManager_DebugShowRainLineParameter_Params
{
};

// Function Nimbus.NimbusCheatManager.DebugShowPathPointTimeout
struct UNimbusCheatManager_DebugShowPathPointTimeout_Params
{
};

// Function Nimbus.NimbusCheatManager.DebugShowImageEffectParameter
struct UNimbusCheatManager_DebugShowImageEffectParameter_Params
{
};

// Function Nimbus.NimbusCheatManager.DebugShowAirCurrent
struct UNimbusCheatManager_DebugShowAirCurrent_Params
{
};

// Function Nimbus.NimbusCheatManager.DebugDummyAirCurrent
struct UNimbusCheatManager_DebugDummyAirCurrent_Params
{
};

// Function Nimbus.NimbusCheatManager.DataviewerSortieRandomAircraft
struct UNimbusCheatManager_DataviewerSortieRandomAircraft_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.DataviewerSortieMPAircraft
struct UNimbusCheatManager_DataviewerSortieMPAircraft_Params
{
	int                                                PlaneID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Sortie;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StageNum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SWPNo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                KillSWP;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Aircraft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           UAV;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ground;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Vessel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           FlightTimeMS;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           FlightDistanceMeters;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MRP;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBestPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PerformanceEvaluID;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PerformanceEvaluIDCount;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.DataviewerSortieAircraft
struct UNimbusCheatManager_DataviewerSortieAircraft_Params
{
	int                                                PlaneID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Sortie;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SWPNo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                KillSWP;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Aircraft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           UAV;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ground;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Vessel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           FlightTimeMS;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           FlightDistanceMeters;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MRP;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.CreateGarbageUObject
struct UNimbusCheatManager_CreateGarbageUObject_Params
{
	int                                                ObjectSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.CrashDump
struct UNimbusCheatManager_CrashDump_Params
{
};

// Function Nimbus.NimbusCheatManager.CompleteVRCampaign
struct UNimbusCheatManager_CompleteVRCampaign_Params
{
};

// Function Nimbus.NimbusCheatManager.CompleteSaveLoadSimulatedTask
struct UNimbusCheatManager_CompleteSaveLoadSimulatedTask_Params
{
};

// Function Nimbus.NimbusCheatManager.CompleteMission
struct UNimbusCheatManager_CompleteMission_Params
{
};

// Function Nimbus.NimbusCheatManager.CompleteCampaign
struct UNimbusCheatManager_CompleteCampaign_Params
{
};

// Function Nimbus.NimbusCheatManager.CloseDialog
struct UNimbusCheatManager_CloseDialog_Params
{
	int                                                DialogID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.CloseAllDialogs
struct UNimbusCheatManager_CloseAllDialogs_Params
{
};

// Function Nimbus.NimbusCheatManager.ClearPhase
struct UNimbusCheatManager_ClearPhase_Params
{
};

// Function Nimbus.NimbusCheatManager.CheatPause
struct UNimbusCheatManager_CheatPause_Params
{
	int                                                ChannelIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.ChangeMenuByIndex
struct UNimbusCheatManager_ChangeMenuByIndex_Params
{
	int                                                MenuIDIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.ChangeMenu
struct UNimbusCheatManager_ChangeMenu_Params
{
	struct FString                                     MenuIDStringName;                                         // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.CameraShakeIntermittent
struct UNimbusCheatManager_CameraShakeIntermittent_Params
{
};

// Function Nimbus.NimbusCheatManager.BowToSlimForAmmo
struct UNimbusCheatManager_BowToSlimForAmmo_Params
{
	int                                                WeaponNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.BowToPPForAmmo
struct UNimbusCheatManager_BowToPPForAmmo_Params
{
};

// Function Nimbus.NimbusCheatManager.AUTOM_StopRecording
struct UNimbusCheatManager_AUTOM_StopRecording_Params
{
};

// Function Nimbus.NimbusCheatManager.AUTOM_StopPlaying
struct UNimbusCheatManager_AUTOM_StopPlaying_Params
{
};

// Function Nimbus.NimbusCheatManager.AUTOM_StopLoopingPlayback
struct UNimbusCheatManager_AUTOM_StopLoopingPlayback_Params
{
};

// Function Nimbus.NimbusCheatManager.AUTOM_StartRecording
struct UNimbusCheatManager_AUTOM_StartRecording_Params
{
	struct FString                                     InSaveFileName;                                           // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.AUTOM_SetSaveFileType
struct UNimbusCheatManager_AUTOM_SetSaveFileType_Params
{
	bool                                               bBinary;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.AUTOM_SetPaused
struct UNimbusCheatManager_AUTOM_SetPaused_Params
{
	bool                                               bIsPaused;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.AUTOM_SetLoopCountLimit
struct UNimbusCheatManager_AUTOM_SetLoopCountLimit_Params
{
	int                                                LoopCountLimist;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.AUTOM_SetDisplayLog
struct UNimbusCheatManager_AUTOM_SetDisplayLog_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.AUTOM_SaveToFile
struct UNimbusCheatManager_AUTOM_SaveToFile_Params
{
	struct FString                                     InSaveFileName;                                           // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.AUTOM_PlayFilesInSubFolderRandom
struct UNimbusCheatManager_AUTOM_PlayFilesInSubFolderRandom_Params
{
	struct FString                                     SubDirectoryName;                                         // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.AUTOM_PlayFilesInSubFolder
struct UNimbusCheatManager_AUTOM_PlayFilesInSubFolder_Params
{
	struct FString                                     SubDirectoryName;                                         // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.AUTOM_PlaybackFileLoop
struct UNimbusCheatManager_AUTOM_PlaybackFileLoop_Params
{
	struct FString                                     InLoadFileName;                                           // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.AUTOM_PlaybackFile
struct UNimbusCheatManager_AUTOM_PlaybackFile_Params
{
	struct FString                                     InLoadFileName;                                           // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusCheatManager.AUTOM_PlaybackCurrentLoop
struct UNimbusCheatManager_AUTOM_PlaybackCurrentLoop_Params
{
};

// Function Nimbus.NimbusCheatManager.AUTOM_PlaybackCurrent
struct UNimbusCheatManager_AUTOM_PlaybackCurrent_Params
{
};

// Function Nimbus.NimbusCheatManager.AUTOM_PlayAllFilesRandom
struct UNimbusCheatManager_AUTOM_PlayAllFilesRandom_Params
{
};

// Function Nimbus.NimbusCheatManager.AUTOM_PlayAllFiles
struct UNimbusCheatManager_AUTOM_PlayAllFiles_Params
{
};

// Function Nimbus.NimbusCheatManager.AUTOM_OutputLog
struct UNimbusCheatManager_AUTOM_OutputLog_Params
{
};

// Function Nimbus.NimbusCheatManager.AUTOM_MemReport
struct UNimbusCheatManager_AUTOM_MemReport_Params
{
	bool                                               bFull;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.AUTOM_ListPlaybackFiles
struct UNimbusCheatManager_AUTOM_ListPlaybackFiles_Params
{
};

// Function Nimbus.NimbusCheatManager.ApplyDamageToPlayer
struct UNimbusCheatManager_ApplyDamageToPlayer_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.AddFlightDistanceAndKillCount
struct UNimbusCheatManager_AddFlightDistanceAndKillCount_Params
{
	EMissionCategory                                   MissionCategory;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           FlightDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           KillCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.AddCompletedMission
struct UNimbusCheatManager_AddCompletedMission_Params
{
	int                                                CompletedMission;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.ActivateDebugMenuMode
struct UNimbusCheatManager_ActivateDebugMenuMode_Params
{
};

// Function Nimbus.NimbusCheatManager.ActivateDebugCondition
struct UNimbusCheatManager_ActivateDebugCondition_Params
{
	uint32_t                                           ConditionId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusCheatManager.ActivateAllConditionActionEntries
struct UNimbusCheatManager_ActivateAllConditionActionEntries_Params
{
};

// Function Nimbus.NimbusControllerVibration.SetXBoxControllerVibrationScalar
struct UNimbusControllerVibration_SetXBoxControllerVibrationScalar_Params
{
	float                                              Scalar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusControllerVibration.SetPSControllerVibrationScalar
struct UNimbusControllerVibration_SetPSControllerVibrationScalar_Params
{
	float                                              Scalar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.NimbusControllerVibration.OnStopControllerVibration__DelegateSignature
struct UNimbusControllerVibration_OnStopControllerVibration__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.NimbusControllerVibration.OnStartControllerVibration__DelegateSignature
struct UNimbusControllerVibration_OnStartControllerVibration__DelegateSignature_Params
{
	float                                              intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusDebugInfoLayerWidget.OnEnableHud
struct UNimbusDebugInfoLayerWidget_OnEnableHud_Params
{
};

// Function Nimbus.NimbusDebugInfoLayerWidget.OnDisableHud
struct UNimbusDebugInfoLayerWidget_OnDisableHud_Params
{
};

// Function Nimbus.NimbusDebugInfoLayerWidget.OnDetectedMissionHitch
struct UNimbusDebugInfoLayerWidget_OnDetectedMissionHitch_Params
{
	struct FMissionHitchInfo                           InMissionHitchInfo;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.NimbusDLCInformation.IsDLCOwned
struct UNimbusDLCInformation_IsDLCOwned_Params
{
	struct FString                                     DLCID;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Nimbus.NimbusDLCInformation.DLCsUpdatedDelegate__DelegateSignature
struct UNimbusDLCInformation_DLCsUpdatedDelegate__DelegateSignature_Params
{
};

// Function Nimbus.NimbusEventParser.OnPreRestartPhaseEvent
struct ANimbusEventParser_OnPreRestartPhaseEvent_Params
{
};

// Function Nimbus.NimbusEventParser.OnIGCEnableEvent
struct ANimbusEventParser_OnIGCEnableEvent_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.NimbusEventParser.MultiAbort__DelegateSignature
struct ANimbusEventParser_MultiAbort__DelegateSignature_Params
{
};

// Function Nimbus.NimbusGameInformation.PlaneStringIDToPlaneID
struct UNimbusGameInformation_PlaneStringIDToPlaneID_Params
{
	struct FString                                     PlaneStringID;                                            // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInformation.PlaneIDToPlaneStringID
struct UNimbusGameInformation_PlaneIDToPlaneStringID_Params
{
	int                                                PlaneID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.NimbusGameInstance.SetShowWeaponsInHangar
struct UNimbusGameInstance_SetShowWeaponsInHangar_Params
{
	bool                                               bShouldShowWeaponsInHangar;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.SetShowWeaponOnPlaneInHangar
struct UNimbusGameInstance_SetShowWeaponOnPlaneInHangar_Params
{
	bool                                               bShouldShowWeaponOnPlaneInHangar;                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.SetShowPlaneInHangar
struct UNimbusGameInstance_SetShowPlaneInHangar_Params
{
	bool                                               bShouldShowPlaneInHangar;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.SetShowPilotInHangar
struct UNimbusGameInstance_SetShowPilotInHangar_Params
{
	bool                                               bShouldShowPilotInHangar;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.SetShowHangar
struct UNimbusGameInstance_SetShowHangar_Params
{
	bool                                               bShouldShowHangar;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.SetSelectedPlaneSkinNo
struct UNimbusGameInstance_SetSelectedPlaneSkinNo_Params
{
	int                                                SelectedPlaneSkinNo;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.SetSelectedPlaneEmblemID
struct UNimbusGameInstance_SetSelectedPlaneEmblemID_Params
{
	int                                                SelectedPlaneEmblemID;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.SetSelectedHangarCameraType
struct UNimbusGameInstance_SetSelectedHangarCameraType_Params
{
	EHangarCameraType                                  HangarCameraType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.SetPlaneAndSWP
struct UNimbusGameInstance_SetPlaneAndSWP_Params
{
	int                                                SelectedPlaneType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SelectedPlaneSWP;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.SetMissionID
struct UNimbusGameInstance_SetMissionID_Params
{
	int                                                MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.SetCurrentGameSaveSlot
struct UNimbusGameInstance_SetCurrentGameSaveSlot_Params
{
	EGameSaveSlot                                      NewGameSaveSlot;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.IsVRUIMode
struct UNimbusGameInstance_IsVRUIMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.IsVRMode
struct UNimbusGameInstance_IsVRMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.IsVRGameMode
struct UNimbusGameInstance_IsVRGameMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.IsStereoMode
struct UNimbusGameInstance_IsStereoMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.IsShippingMode
struct UNimbusGameInstance_IsShippingMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.GetShowWeaponsInHangar
struct UNimbusGameInstance_GetShowWeaponsInHangar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.GetShowWeaponOnPlaneInHangar
struct UNimbusGameInstance_GetShowWeaponOnPlaneInHangar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.GetShowPlaneInHangar
struct UNimbusGameInstance_GetShowPlaneInHangar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.GetShowPilotInHangar
struct UNimbusGameInstance_GetShowPilotInHangar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.GetShowHangar
struct UNimbusGameInstance_GetShowHangar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.GetSelectedPlaneSWP
struct UNimbusGameInstance_GetSelectedPlaneSWP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.GetSelectedPlaneSkinNo
struct UNimbusGameInstance_GetSelectedPlaneSkinNo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.GetSelectedPlaneID
struct UNimbusGameInstance_GetSelectedPlaneID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.GetSelectedPlaneEmblemID
struct UNimbusGameInstance_GetSelectedPlaneEmblemID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.GetSelectedHangarCameraType
struct UNimbusGameInstance_GetSelectedHangarCameraType_Params
{
	EHangarCameraType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.GetPhysicalMaterialName
struct UNimbusGameInstance_GetPhysicalMaterialName_Params
{
	EPhysicalMaterialType                              MaterialType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.NimbusGameInstance.GetMissionID
struct UNimbusGameInstance_GetMissionID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.GetCurrentGameSaveSlot
struct UNimbusGameInstance_GetCurrentGameSaveSlot_Params
{
	EGameSaveSlot                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.AsyncSaveOnlineData
struct UNimbusGameInstance_AsyncSaveOnlineData_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.AsyncSaveGameplaySettings
struct UNimbusGameInstance_AsyncSaveGameplaySettings_Params
{
	EGameSaveSlot                                      GameSaveSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.AsyncSaveAccountSettings
struct UNimbusGameInstance_AsyncSaveAccountSettings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.AsyncLoadOnlineData
struct UNimbusGameInstance_AsyncLoadOnlineData_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.AsyncLoadGameplaySettings
struct UNimbusGameInstance_AsyncLoadGameplaySettings_Params
{
	EGameSaveSlot                                      GameSaveSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameInstance.AsyncLoadAccountSettings
struct UNimbusGameInstance_AsyncLoadAccountSettings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusGameUserSettings.IsShowPlayByPlayRadioConditionLog
struct UNimbusGameUserSettings_IsShowPlayByPlayRadioConditionLog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Nimbus.NimbusFadeManager.OnStartFadingDelegate__DelegateSignature
struct UNimbusFadeManager_OnStartFadingDelegate__DelegateSignature_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusFadeManager.OnPreLoadMap
struct UNimbusFadeManager_OnPreLoadMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusFadeManager.OnPostLoadMap
struct UNimbusFadeManager_OnPostLoadMap_Params
{
	class UWorld*                                      LoadedWorld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusFadeManager.OnLoadingScreenShowHandler
struct UNimbusFadeManager_OnLoadingScreenShowHandler_Params
{
};

// Function Nimbus.NimbusFadeManager.OnLoadingScreenHideHandler
struct UNimbusFadeManager_OnLoadingScreenHideHandler_Params
{
};

// Function Nimbus.NimbusFadeManager.OnFadeOutHandler
struct UNimbusFadeManager_OnFadeOutHandler_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusFadeManager.OnFadeInHandler
struct UNimbusFadeManager_OnFadeInHandler_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusFadeManager.OnFadedOutHandler
struct UNimbusFadeManager_OnFadedOutHandler_Params
{
};

// Function Nimbus.NimbusFadeManager.OnFadedInHandler
struct UNimbusFadeManager_OnFadedInHandler_Params
{
};

// DelegateFunction Nimbus.NimbusFadeManager.OnFadedDelegate__DelegateSignature
struct UNimbusFadeManager_OnFadedDelegate__DelegateSignature_Params
{
};

// Function Nimbus.NimbusHangarMeshManager.OnHangarVisibilityChanged
struct ANimbusHangarMeshManager_OnHangarVisibilityChanged_Params
{
};

// Function Nimbus.NimbusHangarMeshManager.OnHangarChanged
struct ANimbusHangarMeshManager_OnHangarChanged_Params
{
};

// Function Nimbus.NimbusHangarMeshManager.HangarLevelsStreamComplete
struct ANimbusHangarMeshManager_HangarLevelsStreamComplete_Params
{
};

// Function Nimbus.NimbusHangarMeshManager.GetHangarSubLevels
struct ANimbusHangarMeshManager_GetHangarSubLevels_Params
{
	struct FHangarSubLevelSettings                     PreviousSublevels;                                        // (Parm, OutParm)
	struct FHangarSubLevelSettings                     CurrentSublevels;                                         // (Parm, OutParm)
};

// Function Nimbus.NimbusHUD.ShowMovieEmblem
struct ANimbusHUD_ShowMovieEmblem_Params
{
	TArray<class UTexture2D*>                          ImageTextures;                                            // (ConstParm, Parm, ZeroConstructor)
};

// Function Nimbus.NimbusHUD.SetHUDDistortionScale
struct ANimbusHUD_SetHUDDistortionScale_Params
{
	float                                              NewDistortionScale;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.ResetCameraSensitivePosition
struct ANimbusHUD_ResetCameraSensitivePosition_Params
{
	bool                                               bIsPlaneBodyVisible;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.PlayMiniMapScanningEffect
struct ANimbusHUD_PlayMiniMapScanningEffect_Params
{
};

// Function Nimbus.NimbusHUD.OpenDebugMenu
struct ANimbusHUD_OpenDebugMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.OnEndLanding
struct ANimbusHUD_OnEndLanding_Params
{
};

// Function Nimbus.NimbusHUD.OnEndAerialRefueling
struct ANimbusHUD_OnEndAerialRefueling_Params
{
};

// Function Nimbus.NimbusHUD.OnBeginLanding
struct ANimbusHUD_OnBeginLanding_Params
{
};

// Function Nimbus.NimbusHUD.OnBeginAerialRefueling
struct ANimbusHUD_OnBeginAerialRefueling_Params
{
};

// Function Nimbus.NimbusHUD.IsDebugMode
struct ANimbusHUD_IsDebugMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.IsBehindMiniMap
struct ANimbusHUD_IsBehindMiniMap_Params
{
	struct FVector2D                                   InScreenPosition;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.HideMovieEmblem
struct ANimbusHUD_HideMovieEmblem_Params
{
};

// Function Nimbus.NimbusHUD.HideGuideMessage
struct ANimbusHUD_HideGuideMessage_Params
{
};

// Function Nimbus.NimbusHUD.GetScreenSize
struct ANimbusHUD_GetScreenSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.GetMiniMapSize
struct ANimbusHUD_GetMiniMapSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.GetHUDFont
struct ANimbusHUD_GetHUDFont_Params
{
	class UFont*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.GetHUDEnabled
struct ANimbusHUD_GetHUDEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.GetCurrentMiniMapType
struct ANimbusHUD_GetCurrentMiniMapType_Params
{
	EMiniMapType                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.EndHUDDistortion
struct ANimbusHUD_EndHUDDistortion_Params
{
};

// Function Nimbus.NimbusHUD.DrawWidgetTextWorldSpace
struct ANimbusHUD_DrawWidgetTextWorldSpace_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	struct FLinearColor                                TextColor;                                                // (Parm, IsPlainOldData)
	struct FVector                                     WldPos;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ScreenOffset;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.DrawWidgetTextureWorldSpace
struct ANimbusHUD_DrawWidgetTextureWorldSpace_Params
{
	class UTexture2D*                                  InTexture;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WldPos;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ScreenOffset;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedDrawAccurately;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              inScale;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.DrawWidgetTexture
struct ANimbusHUD_DrawWidgetTexture_Params
{
	class UTexture2D*                                  InTexture;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Pos;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.DrawWidgetText
struct ANimbusHUD_DrawWidgetText_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	struct FLinearColor                                TextColor;                                                // (Parm, IsPlainOldData)
	struct FVector2D                                   Pos;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Alignment;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.DrawWidgetMaterialWorldSpace
struct ANimbusHUD_DrawWidgetMaterialWorldSpace_Params
{
	class UMaterialInterface*                          InMaterial;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WldPos;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ScreenOffset;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedDrawAccurately;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              inScale;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.DrawWidgetMaterial
struct ANimbusHUD_DrawWidgetMaterial_Params
{
	class UMaterialInterface*                          InMaterial;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Pos;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.DrawWidgetLineWorldSpace
struct ANimbusHUD_DrawWidgetLineWorldSpace_Params
{
	struct FVector                                     StartWldPos;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndWldPos;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                SegmentCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.DrawWidgetLineVectorWorldSpace
struct ANimbusHUD_DrawWidgetLineVectorWorldSpace_Params
{
	struct FVector                                     StartWldPos;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              LengthOnScreen;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SegmentCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.DrawWidgetLine
struct ANimbusHUD_DrawWidgetLine_Params
{
	struct FVector2D                                   StartPos;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   EndPos;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                SegmentCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.DrawWidgetEllipseWorldSpace
struct ANimbusHUD_DrawWidgetEllipseWorldSpace_Params
{
	struct FVector                                     Center;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HorizontalExtent;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     VerticalExtent;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     SegmentXAxis;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                SegmentCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.DrawWidgetEllipse
struct ANimbusHUD_DrawWidgetEllipse_Params
{
	struct FVector2D                                   Center;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              HorizontalRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VerticalRadius;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SegmentOrientation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SegmentCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.DrawWidgetCircleWorldSpace
struct ANimbusHUD_DrawWidgetCircleWorldSpace_Params
{
	struct FVector                                     Center;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SegmentXAxis;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                SegmentCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.DrawWidgetCircle
struct ANimbusHUD_DrawWidgetCircle_Params
{
	struct FVector2D                                   Center;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SegmentOrientation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SegmentCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.DrawSimpleWidgetCircleWorldSpace
struct ANimbusHUD_DrawSimpleWidgetCircleWorldSpace_Params
{
	struct FVector                                     Center;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Up;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SegmentCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bDottedLine;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.DisplayGuideMessage
struct ANimbusHUD_DisplayGuideMessage_Params
{
	EGuideMessageType                                  MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.CloseDebugMenu
struct ANimbusHUD_CloseDebugMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.ChangeHUDMode
struct ANimbusHUD_ChangeHUDMode_Params
{
	ENimbusHUDMode                                     NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.BeginHUDDistortion
struct ANimbusHUD_BeginHUDDistortion_Params
{
	float                                              MinDistortionScale;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistortionScale;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HideContainerDuration;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShowContainerDuration;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusHUD.AddChildToHudWidget
struct ANimbusHUD_AddChildToHudWidget_Params
{
	class UWidget*                                     Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanelSlot*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.NimbusLevelScriptActor.StopAllLatentTask
struct ANimbusLevelScriptActor_StopAllLatentTask_Params
{
};

// Function Nimbus.NimbusLevelScriptActor.OnReadyToPlay
struct ANimbusLevelScriptActor_OnReadyToPlay_Params
{
};

// Function Nimbus.NimbusLevelScriptActor.OnIntroAnimationStart
struct ANimbusLevelScriptActor_OnIntroAnimationStart_Params
{
};

// Function Nimbus.NimbusLevelScriptActor.OnBattleNavigationComplete
struct ANimbusLevelScriptActor_OnBattleNavigationComplete_Params
{
	int                                                OutBattleNavigationID;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusMapChangeManager.OnWorldCleanupHandler
struct UNimbusMapChangeManager_OnWorldCleanupHandler_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSessionEnded;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCleanupResources;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusMapChangeManager.OnPostWorldCleanupHandler
struct UNimbusMapChangeManager_OnPostWorldCleanupHandler_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSessionEnded;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCleanupResources;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusMusicPlayer.Stop
struct UNimbusMusicPlayer_Stop_Params
{
};

// Function Nimbus.NimbusMusicPlayer.Play
struct UNimbusMusicPlayer_Play_Params
{
	struct FString                                     in_EventName;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusMusicPlayer.Pause
struct UNimbusMusicPlayer_Pause_Params
{
	bool                                               Pause;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Nimbus.NimbusMusicPlayer.MusicPlayerOnEndOfMusic__DelegateSignature
struct UNimbusMusicPlayer_MusicPlayerOnEndOfMusic__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.NimbusMusicPlayer.MusicPlayerOnDuration__DelegateSignature
struct UNimbusMusicPlayer_MusicPlayerOnDuration__DelegateSignature_Params
{
};

// Function Nimbus.NimbusMusicPlayer.IsPlaying
struct UNimbusMusicPlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusMusicPlayer.IsPause
struct UNimbusMusicPlayer_IsPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusMusicPlayer.IsEndPlay
struct UNimbusMusicPlayer_IsEndPlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusMusicPlayer.GetPlayPosition
struct UNimbusMusicPlayer_GetPlayPosition_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusMusicPlayer.GetDuration
struct UNimbusMusicPlayer_GetDuration_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusMusicPlayer.GetAudioSpectrum
struct UNimbusMusicPlayer_GetAudioSpectrum_Params
{
	TArray<float>                                      arry;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Nimbus.NimbusPlayerCameraManager.TestLoopCameraShakePlayAddScale
struct ANimbusPlayerCameraManager_TestLoopCameraShakePlayAddScale_Params
{
	float                                              inScale;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusPlayerCameraManager.TestLoopCameraShakePlay
struct ANimbusPlayerCameraManager_TestLoopCameraShakePlay_Params
{
};

// Function Nimbus.NimbusPlayerController.UnpauseAllControllerVibrations
struct ANimbusPlayerController_UnpauseAllControllerVibrations_Params
{
};

// Function Nimbus.NimbusPlayerController.TogglePlayerDebugInfo
struct ANimbusPlayerController_TogglePlayerDebugInfo_Params
{
};

// Function Nimbus.NimbusPlayerController.ToggleHUD
struct ANimbusPlayerController_ToggleHUD_Params
{
};

// Function Nimbus.NimbusPlayerController.StopControllerVibrationTypes
struct ANimbusPlayerController_StopControllerVibrationTypes_Params
{
	EControllerVibrationType                           Type1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerVibrationType                           Type2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusPlayerController.StopControllerVibrationType
struct ANimbusPlayerController_StopControllerVibrationType_Params
{
	EControllerVibrationType                           Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusPlayerController.StopAllControllerVibrationImmediately
struct ANimbusPlayerController_StopAllControllerVibrationImmediately_Params
{
};

// Function Nimbus.NimbusPlayerController.StartControllerVibration
struct ANimbusPlayerController_StartControllerVibration_Params
{
	float                                              intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusPlayerController.SetXBoxControllerVibrationScalar
struct ANimbusPlayerController_SetXBoxControllerVibrationScalar_Params
{
	float                                              Scalar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusPlayerController.SetPSControllerVibrationScalar
struct ANimbusPlayerController_SetPSControllerVibrationScalar_Params
{
	float                                              Scalar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusPlayerController.SetIsSkipIGC
struct ANimbusPlayerController_SetIsSkipIGC_Params
{
	bool                                               bSkipIGC;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusPlayerController.SetControllerVibrationScales
struct ANimbusPlayerController_SetControllerVibrationScales_Params
{
	EControllerVibrationType                           Type1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerVibrationType                           Type2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusPlayerController.SetControllerVibrationScale
struct ANimbusPlayerController_SetControllerVibrationScale_Params
{
	EControllerVibrationType                           Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusPlayerController.PauseAllControllerVibrations
struct ANimbusPlayerController_PauseAllControllerVibrations_Params
{
};

// Function Nimbus.NimbusPlayerController.ForceStopControllerVibration
struct ANimbusPlayerController_ForceStopControllerVibration_Params
{
};

// Function Nimbus.NimbusPlayerController.ControllerVibrationNotify_OnIGC
struct ANimbusPlayerController_ControllerVibrationNotify_OnIGC_Params
{
	EControllerVibrationType                           Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusPlayerController.ControllerVibrationNotify
struct ANimbusPlayerController_ControllerVibrationNotify_Params
{
	EControllerVibrationType                           Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusReplayPlayTimeManager.OnSystemStartFrameHandler
struct UNimbusReplayPlayTimeManager_OnSystemStartFrameHandler_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusRibbonCollectionActor.OnPreRestartPhaseEvent
struct ANimbusRibbonCollectionActor_OnPreRestartPhaseEvent_Params
{
};

// Function Nimbus.NimbusRibbonCollectionActor.OnIGCEnableEvent
struct ANimbusRibbonCollectionActor_OnIGCEnableEvent_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusSoundManager.UnloadBank
struct UNimbusSoundManager_UnloadBank_Params
{
	class UAkAudioBank*                                Bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusSoundManager.StopAll
struct UNimbusSoundManager_StopAll_Params
{
};

// Function Nimbus.NimbusSoundManager.StopActor
struct UNimbusSoundManager_StopActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusSoundManager.SetSwitch
struct UNimbusSoundManager_SetSwitch_Params
{
	struct FName                                       SwitchGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SwitchState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusSoundManager.SetState
struct UNimbusSoundManager_SetState_Params
{
	struct FName                                       StateGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusSoundManager.SetRTPCValue
struct UNimbusSoundManager_SetRTPCValue_Params
{
	struct FName                                       RTPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InterpolationTimeMs;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusSoundManager.SetOutputMode
struct UNimbusSoundManager_SetOutputMode_Params
{
	ENimbusSoundOutputMode                             OutputMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusSoundManager.SetOcclusionRefreshInterval
struct UNimbusSoundManager_SetOcclusionRefreshInterval_Params
{
	float                                              RefreshInterval;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusSoundManager.PostEventAtLocation
struct UNimbusSoundManager_PostEventAtLocation_Params
{
	class UAkAudioEvent*                               akevent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	ENimbusSoundType                                   SoundType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusSoundManager.PostEvent
struct UNimbusSoundManager_PostEvent_Params
{
	class UAkAudioEvent*                               akevent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	ENimbusSoundType                                   SoundType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusSoundManager.LoadInitBank
struct UNimbusSoundManager_LoadInitBank_Params
{
};

// Function Nimbus.NimbusSoundManager.LoadBanks
struct UNimbusSoundManager_LoadBanks_Params
{
	TArray<class UAkAudioBank*>                        SoundBanks;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               SynchronizeSoundBanks;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusSoundManager.LoadBank
struct UNimbusSoundManager_LoadBank_Params
{
	class UAkAudioBank*                                Bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusSoundManager.LoadAllFilePackages
struct UNimbusSoundManager_LoadAllFilePackages_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusSoundManager.GetOutputMode
struct UNimbusSoundManager_GetOutputMode_Params
{
	ENimbusSoundOutputMode                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusSoundManager.ClearBanks
struct UNimbusSoundManager_ClearBanks_Params
{
};

// Function Nimbus.NimbusSubLevelManager.OnLoadedSubLevel
struct UNimbusSubLevelManager_OnLoadedSubLevel_Params
{
};

// Function Nimbus.NimbusTriggerBase.IsNimbusOverlappingActor
struct ANimbusTriggerBase_IsNimbusOverlappingActor_Params
{
	class AActor*                                      Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusTriggerBase.GetNimbusOverlappingActors
struct ANimbusTriggerBase_GetNimbusOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusTriggerBase.EnableTriggerVolume
struct ANimbusTriggerBase_EnableTriggerVolume_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusUILayer.OnTransitionOutStart
struct UNimbusUILayer_OnTransitionOutStart_Params
{
};

// Function Nimbus.NimbusUILayer.OnTransitionOutEnd
struct UNimbusUILayer_OnTransitionOutEnd_Params
{
};

// Function Nimbus.NimbusUILayer.OnTransitionInStart
struct UNimbusUILayer_OnTransitionInStart_Params
{
};

// Function Nimbus.NimbusUILayer.OnTransitionInEnd
struct UNimbusUILayer_OnTransitionInEnd_Params
{
};

// Function Nimbus.NimbusUILayer.OnPushButtonCancel
struct UNimbusUILayer_OnPushButtonCancel_Params
{
};

// Function Nimbus.NimbusUILayer.OnPushButtonAccept
struct UNimbusUILayer_OnPushButtonAccept_Params
{
};

// Function Nimbus.NimbusUILayer.OnLayerLinkButtonUnfocused
struct UNimbusUILayer_OnLayerLinkButtonUnfocused_Params
{
	class UUILayerLinkButton*                          Btn;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Nimbus.NimbusUILayer.OnLayerLinkButtonFocused
struct UNimbusUILayer_OnLayerLinkButtonFocused_Params
{
	class UUILayerLinkButton*                          Btn;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Nimbus.NimbusUILayer.IsCurrentLayer
struct UNimbusUILayer_IsCurrentLayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusUILayer.GotoPreviousLayer
struct UNimbusUILayer_GotoPreviousLayer_Params
{
};

// Function Nimbus.NimbusUILayer.GotoNextLayer
struct UNimbusUILayer_GotoNextLayer_Params
{
};

// Function Nimbus.NimbusUILayer.GetUILayerManager
struct UNimbusUILayer_GetUILayerManager_Params
{
	class UNimbusUILayerManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.NimbusUILayerManager.OnLevelUnloded
struct UNimbusUILayerManager_OnLevelUnloded_Params
{
};

// Function Nimbus.NimbusUILayerManager.OnLevelLoaded
struct UNimbusUILayerManager_OnLevelLoaded_Params
{
};

// Function Nimbus.NimbusVRDebugGameMode.SetNextPlayerPawnClass
struct ANimbusVRDebugGameMode_SetNextPlayerPawnClass_Params
{
	struct FString                                     nextPawnClass;                                            // (Parm, ZeroConstructor)
};

// Function Nimbus.NimbusWidgetComponent.FitToCamera
struct UNimbusWidgetComponent_FitToCamera_Params
{
	float                                              FOVAngle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.ObjectMapper.OnPreRestartPhaseEvent
struct AObjectMapper_OnPreRestartPhaseEvent_Params
{
};

// Function Nimbus.ObjectMapper.OnCombatZoneUpdatedEvent
struct AObjectMapper_OnCombatZoneUpdatedEvent_Params
{
};

// Function Nimbus.MultiResultRewardsWidget.ProceedToNextAnimationPhase
struct UMultiResultRewardsWidget_ProceedToNextAnimationPhase_Params
{
};

// Function Nimbus.MultiResultRewardsWidget.OnRankUpAnimationFinished
struct UMultiResultRewardsWidget_OnRankUpAnimationFinished_Params
{
};

// Function Nimbus.PersistentUserWidget.OnWeaponActivatorInitialize
struct UPersistentUserWidget_OnWeaponActivatorInitialize_Params
{
};

// Function Nimbus.PersistentUserWidget.OnSpecialWeaponChanged
struct UPersistentUserWidget_OnSpecialWeaponChanged_Params
{
};

// Function Nimbus.PersistentUserWidget.OnHUDEnabled
struct UPersistentUserWidget_OnHUDEnabled_Params
{
};

// Function Nimbus.PersistentUserWidget.OnCurrentHUDAlertColorUpdated
struct UPersistentUserWidget_OnCurrentHUDAlertColorUpdated_Params
{
	struct FLinearColor                                NewColor;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsDefaultColor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PitchMeterWidget.CurrentHUDAlertColorUpdated
struct UPitchMeterWidget_CurrentHUDAlertColorUpdated_Params
{
	struct FLinearColor                                NewColor;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsDefaultColor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlaneVFXComponent.ResetParameters
struct UPlaneVFXComponent_ResetParameters_Params
{
};

// Function Nimbus.PlaneVFXComponent.OnRestored
struct UPlaneVFXComponent_OnRestored_Params
{
};

// Function Nimbus.PlaneVFXComponent.OnReposition
struct UPlaneVFXComponent_OnReposition_Params
{
};

// Function Nimbus.PlaneVFXComponent.OnOwnerVisibilityChanged
struct UPlaneVFXComponent_OnOwnerVisibilityChanged_Params
{
	bool                                               bVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlaneVFXComponent.IGCUpdateParams
struct UPlaneVFXComponent_IGCUpdateParams_Params
{
	float                                              WingTipVapor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShoulderVapor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WingSurfaceVapor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WingOverVapor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WingOverVaporHighGTurn;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AfterBurner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerHUDModeManager.OnTransitionToMiniGameHandler
struct UPlayerHUDModeManager_OnTransitionToMiniGameHandler_Params
{
	bool                                               bIsTransitingIn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerHUDModeManager.OnReferencedActorEndPlayHandler
struct UPlayerHUDModeManager_OnReferencedActorEndPlayHandler_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerHUDModeManager.OnPreStartMiniGamePhaseHandler
struct UPlayerHUDModeManager_OnPreStartMiniGamePhaseHandler_Params
{
	bool                                               bIsRetry;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerHUDModeManager.OnPreRestartPhaseHandler
struct UPlayerHUDModeManager_OnPreRestartPhaseHandler_Params
{
};

// Function Nimbus.PlayerHUDModeManager.OnMultiAbortHandler
struct UPlayerHUDModeManager_OnMultiAbortHandler_Params
{
};

// Function Nimbus.PlayerHUDModeManager.OnDebugStateChangeHandler
struct UPlayerHUDModeManager_OnDebugStateChangeHandler_Params
{
	EDebugModeState                                    State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.UpdateThrusterAnimation
struct APlayerPlane_UpdateThrusterAnimation_Params
{
	class UAnimInstance*                               AnimInst;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CloseShapeName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OpenShapeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LoopMagnitude;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LoopFrequency;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.ToggleMiniMapRadar
struct APlayerPlane_ToggleMiniMapRadar_Params
{
};

// Function Nimbus.PlayerPlane.TargetLostJammer
struct APlayerPlane_TargetLostJammer_Params
{
};

// Function Nimbus.PlayerPlane.StartTargetLostJammerCheck
struct APlayerPlane_StartTargetLostJammerCheck_Params
{
};

// Function Nimbus.PlayerPlane.StartSeekerJammerCheck
struct APlayerPlane_StartSeekerJammerCheck_Params
{
};

// Function Nimbus.PlayerPlane.SetStallAltitude
struct APlayerPlane_SetStallAltitude_Params
{
	float                                              altStall;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.SetSandVFXMaxTransparency
struct APlayerPlane_SetSandVFXMaxTransparency_Params
{
	float                                              TargetTransparency;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SwitchingTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.SetSandVFXMaxDensity
struct APlayerPlane_SetSandVFXMaxDensity_Params
{
	float                                              TargetDensity;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SwitchingTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.SetRestrictedAltitude
struct APlayerPlane_SetRestrictedAltitude_Params
{
	float                                              AltitudeMeters;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.SetMaxPursuitAttackers
struct APlayerPlane_SetMaxPursuitAttackers_Params
{
	int                                                NewMax;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewMaxPursuitAttackers;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.SetMaxNonpursuitAttackers
struct APlayerPlane_SetMaxNonpursuitAttackers_Params
{
	int                                                NewMax;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.SetMaxEnemyMissileNum
struct APlayerPlane_SetMaxEnemyMissileNum_Params
{
	int                                                PursuitAttackerMissileNum;                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NonPursuitAttackerMissileNum;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.SetHudWarningMessageDisplayTime
struct APlayerPlane_SetHudWarningMessageDisplayTime_Params
{
	float                                              DisplayTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.SetFELocationAndRotation
struct APlayerPlane_SetFELocationAndRotation_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.SetFakeGroundHeightOnlyForAirShow
struct APlayerPlane_SetFakeGroundHeightOnlyForAirShow_Params
{
	float                                              FakeHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnableFake;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.SetEnableCheckCockpitCameraOutOfBound
struct APlayerPlane_SetEnableCheckCockpitCameraOutOfBound_Params
{
	bool                                               IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.SetControlType
struct APlayerPlane_SetControlType_Params
{
	bool                                               bIsExpert;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.SetCatapultShuttleActor
struct APlayerPlane_SetCatapultShuttleActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.SetCameraLocationAndOrientation
struct APlayerPlane_SetCameraLocationAndOrientation_Params
{
	class UCameraComponent*                            CamComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshComp;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.SetCameraAndTargetLocation
struct APlayerPlane_SetCameraAndTargetLocation_Params
{
	class UCameraComponent*                            CamComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TargetComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshComp;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetBoneName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.SetBattleMode
struct APlayerPlane_SetBattleMode_Params
{
	EBattleMode                                        NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.RestoreWeaponFromCheckpoint
struct APlayerPlane_RestoreWeaponFromCheckpoint_Params
{
	int                                                WeaponSet;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GunCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MainWeaponCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpecialWeaponCount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.ResetTargetLostJammer
struct APlayerPlane_ResetTargetLostJammer_Params
{
};

// Function Nimbus.PlayerPlane.ResetStallAltitude
struct APlayerPlane_ResetStallAltitude_Params
{
};

// Function Nimbus.PlayerPlane.PlayVRSound
struct APlayerPlane_PlayVRSound_Params
{
	EVRSoundActor                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.OnWeaponSwitch
struct APlayerPlane_OnWeaponSwitch_Params
{
};

// Function Nimbus.PlayerPlane.OnWeaponFireReleased
struct APlayerPlane_OnWeaponFireReleased_Params
{
};

// Function Nimbus.PlayerPlane.OnWeaponFirePressed
struct APlayerPlane_OnWeaponFirePressed_Params
{
};

// Function Nimbus.PlayerPlane.OnWeaponFireMissileReleased
struct APlayerPlane_OnWeaponFireMissileReleased_Params
{
};

// Function Nimbus.PlayerPlane.OnWeaponFireMissilePressed
struct APlayerPlane_OnWeaponFireMissilePressed_Params
{
};

// Function Nimbus.PlayerPlane.OnWeaponFireMissile
struct APlayerPlane_OnWeaponFireMissile_Params
{
	bool                                               pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.OnWeaponFire
struct APlayerPlane_OnWeaponFire_Params
{
	bool                                               pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.OnUnpauseHandler
struct APlayerPlane_OnUnpauseHandler_Params
{
};

// Function Nimbus.PlayerPlane.OnTargetSelectReleased
struct APlayerPlane_OnTargetSelectReleased_Params
{
};

// Function Nimbus.PlayerPlane.OnTargetSelectPressed
struct APlayerPlane_OnTargetSelectPressed_Params
{
};

// Function Nimbus.PlayerPlane.OnReplayCameraChanged
struct APlayerPlane_OnReplayCameraChanged_Params
{
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.OnPlaneEndOverlap
struct APlayerPlane_OnPlaneEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.OnPlaneBeginOverlap
struct APlayerPlane_OnPlaneBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.OnPauseHandler
struct APlayerPlane_OnPauseHandler_Params
{
};

// Function Nimbus.PlayerPlane.OnInputViewPressed
struct APlayerPlane_OnInputViewPressed_Params
{
};

// Function Nimbus.PlayerPlane.OnFlareActivationRightReleased
struct APlayerPlane_OnFlareActivationRightReleased_Params
{
};

// Function Nimbus.PlayerPlane.OnFlareActivationRightPressed
struct APlayerPlane_OnFlareActivationRightPressed_Params
{
};

// Function Nimbus.PlayerPlane.OnFlareActivationLeftReleased
struct APlayerPlane_OnFlareActivationLeftReleased_Params
{
};

// Function Nimbus.PlayerPlane.OnFlareActivationLeftPressed
struct APlayerPlane_OnFlareActivationLeftPressed_Params
{
};

// Function Nimbus.PlayerPlane.OnFlareActivation
struct APlayerPlane_OnFlareActivation_Params
{
	bool                                               pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.OnExitCloud
struct APlayerPlane_OnExitCloud_Params
{
};

// Function Nimbus.PlayerPlane.OnEnterCloud
struct APlayerPlane_OnEnterCloud_Params
{
};

// DelegateFunction Nimbus.PlayerPlane.OnEndTakeoff__DelegateSignature
struct APlayerPlane_OnEndTakeoff__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.PlayerPlane.OnEndLanding__DelegateSignature
struct APlayerPlane_OnEndLanding__DelegateSignature_Params
{
};

// Function Nimbus.PlayerPlane.OnDeactivateMADComponent
struct APlayerPlane_OnDeactivateMADComponent_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.OnCombatZoneUpdatedEvent
struct APlayerPlane_OnCombatZoneUpdatedEvent_Params
{
};

// Function Nimbus.PlayerPlane.OnChangeViewReleased
struct APlayerPlane_OnChangeViewReleased_Params
{
};

// Function Nimbus.PlayerPlane.OnChangeViewPressed
struct APlayerPlane_OnChangeViewPressed_Params
{
};

// Function Nimbus.PlayerPlane.OnCameraViewChanged
struct APlayerPlane_OnCameraViewChanged_Params
{
	ECameraType                                        CameraViewType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.PlayerPlane.OnBeginTakeoff__DelegateSignature
struct APlayerPlane_OnBeginTakeoff__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.PlayerPlane.OnBeginLanding__DelegateSignature
struct APlayerPlane_OnBeginLanding__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.PlayerPlane.OnBeginCatapultTakeoff__DelegateSignature
struct APlayerPlane_OnBeginCatapultTakeoff__DelegateSignature_Params
{
};

// Function Nimbus.PlayerPlane.OnActivateMADComponent
struct APlayerPlane_OnActivateMADComponent_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.IsWeaponSystemDisabled
struct APlayerPlane_IsWeaponSystemDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.IsSpecialWeaponTGTP
struct APlayerPlane_IsSpecialWeaponTGTP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.IsSpecialWeaponArmed
struct APlayerPlane_IsSpecialWeaponArmed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.IsPulseGunArmed
struct APlayerPlane_IsPulseGunArmed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.IsOverRestrictedAltitude
struct APlayerPlane_IsOverRestrictedAltitude_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.IsOnGround
struct APlayerPlane_IsOnGround_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.IsInTunnel
struct APlayerPlane_IsInTunnel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.IsInSpaceElevator
struct APlayerPlane_IsInSpaceElevator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.IsInSearchLight
struct APlayerPlane_IsInSearchLight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.IsInRadarArea
struct APlayerPlane_IsInRadarArea_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.IsInJammingArea
struct APlayerPlane_IsInJammingArea_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.IsInImpactArea
struct APlayerPlane_IsInImpactArea_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.IsInCloud
struct APlayerPlane_IsInCloud_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.IsExpertControlType
struct APlayerPlane_IsExpertControlType_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.IsBeyondPulloutLine
struct APlayerPlane_IsBeyondPulloutLine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.InitializeWeaponSystem
struct APlayerPlane_InitializeWeaponSystem_Params
{
	int                                                WeaponSet;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.InitializeTargetLostJammer
struct APlayerPlane_InitializeTargetLostJammer_Params
{
	TArray<class AAIGameObject*>                       InJammerTargets;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InMinLostTargetTime;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMaxLostTargetTime;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InLostTargetWaveingTime;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.InitializeSeekerJammer
struct APlayerPlane_InitializeSeekerJammer_Params
{
	TArray<class AAIGameObject*>                       InJammerTargets;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InSeekerJammerRangeInMeter;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.HitTest
struct APlayerPlane_HitTest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.GetSpaceElevatorHeightRatio
struct APlayerPlane_GetSpaceElevatorHeightRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.GetSelectedTarget
struct APlayerPlane_GetSelectedTarget_Params
{
	class AGameObject*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.GetNimbusHUDEnabled
struct APlayerPlane_GetNimbusHUDEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.GetNimbusHUD
struct APlayerPlane_GetNimbusHUD_Params
{
	class ANimbusHUD*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.GetMaxSpeedKmph
struct APlayerPlane_GetMaxSpeedKmph_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.GetLockedOnTarget
struct APlayerPlane_GetLockedOnTarget_Params
{
	class AGameObject*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.GetFirstCameraLocation
struct APlayerPlane_GetFirstCameraLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.GetDirectionMove
struct APlayerPlane_GetDirectionMove_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.GetCockpitPartsAnimation
struct APlayerPlane_GetCockpitPartsAnimation_Params
{
	struct FNimbusCockpitPartsAnim                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Nimbus.PlayerPlane.GetBodyPartsAnimation
struct APlayerPlane_GetBodyPartsAnimation_Params
{
	struct FNimbusBodyPartsAnim                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Nimbus.PlayerPlane.GetAllLockedOnTargets
struct APlayerPlane_GetAllLockedOnTargets_Params
{
	TArray<class AGameObject*>                         ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.PlayerPlane.FrameUpdate
struct APlayerPlane_FrameUpdate_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.ForcedInvalidSeekers
struct APlayerPlane_ForcedInvalidSeekers_Params
{
};

// Function Nimbus.PlayerPlane.EndTargetLostJammerCheck
struct APlayerPlane_EndTargetLostJammerCheck_Params
{
};

// Function Nimbus.PlayerPlane.EndSeekerJammerCheck
struct APlayerPlane_EndSeekerJammerCheck_Params
{
};

// Function Nimbus.PlayerPlane.EnableTakeoffInput
struct APlayerPlane_EnableTakeoffInput_Params
{
	bool                                               bInEnable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.EnablePullupWarning
struct APlayerPlane_EnablePullupWarning_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.EnablePlayerInput
struct APlayerPlane_EnablePlayerInput_Params
{
	bool                                               bInEnable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.EnableAllExcludingCameraInput
struct APlayerPlane_EnableAllExcludingCameraInput_Params
{
	bool                                               bInEnable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.DisableWeaponSystem
struct APlayerPlane_DisableWeaponSystem_Params
{
	bool                                               bIsDisabled;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.CameraViewChangedEvent
struct APlayerPlane_CameraViewChangedEvent_Params
{
	ECameraType                                        CameraViewType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.BeginTakeoff
struct APlayerPlane_BeginTakeoff_Params
{
	bool                                               bCarrier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AutoTakeoffDelay;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CatapultTakeoffEndTime;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GearUpTakeoffEndTime;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.BeginLanding
struct APlayerPlane_BeginLanding_Params
{
	bool                                               bCarrier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.ApplySystemDamage
struct APlayerPlane_ApplySystemDamage_Params
{
	EPlayerSystemDamageType                            SystemDamageType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerPlane.AddSeaSprayTrigger
struct APlayerPlane_AddSeaSprayTrigger_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	struct FSeaExplosionInfo                           SeaExplosionInfo;                                         // (Parm)
};

// Function Nimbus.PlayerPlane.AddKillBountyScore
struct APlayerPlane_AddKillBountyScore_Params
{
	class AGameObject*                                 Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayHUDMessage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlaneSoundComponent.SetPlayerSpeedKmph
struct UPlayerPlaneSoundComponent_SetPlayerSpeedKmph_Params
{
	float                                              SpeedKmph;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlaneSoundComponent.SetPlayerObstacleDistance
struct UPlayerPlaneSoundComponent_SetPlayerObstacleDistance_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlaneSoundComponent.SetPlayerManeuver
struct UPlayerPlaneSoundComponent_SetPlayerManeuver_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlaneSoundComponent.SetHighGTurn
struct UPlayerPlaneSoundComponent_SetHighGTurn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlaneSoundComponent.SetEnginePower
struct UPlayerPlaneSoundComponent_SetEnginePower_Params
{
	float                                              EnginePower;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlaneSoundComponent.SetCloudDensity
struct UPlayerPlaneSoundComponent_SetCloudDensity_Params
{
	float                                              CloudDensity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlaneSoundComponent.SetAltitudeMeters
struct UPlayerPlaneSoundComponent_SetAltitudeMeters_Params
{
	float                                              AltitudeMeters;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlaneSoundComponent.SetAirCurrentDirection
struct UPlayerPlaneSoundComponent_SetAirCurrentDirection_Params
{
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerPlaneSoundComponent.OnRestored
struct UPlayerPlaneSoundComponent_OnRestored_Params
{
};

// Function Nimbus.PlaneRadioStateComponent.Restore
struct UPlaneRadioStateComponent_Restore_Params
{
};

// Function Nimbus.PlaneRadioStateComponent.HandlerObjectFireWeapon
struct UPlaneRadioStateComponent_HandlerObjectFireWeapon_Params
{
	class AGameObject*                                 Causer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 WeaponTarget;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase*                                 Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.PlayerWeaponActivator.ToggleSpecial
struct UPlayerWeaponActivator_ToggleSpecial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerWeaponActivator.ReleaseWeaponInput
struct UPlayerWeaponActivator_ReleaseWeaponInput_Params
{
};

// Function Nimbus.PlayerWeaponActivator.MainWeaponReleased
struct UPlayerWeaponActivator_MainWeaponReleased_Params
{
};

// Function Nimbus.PlayerWeaponActivator.MainWeaponPressed
struct UPlayerWeaponActivator_MainWeaponPressed_Params
{
};

// Function Nimbus.PlayerWeaponActivator.MachineGunReleased
struct UPlayerWeaponActivator_MachineGunReleased_Params
{
};

// Function Nimbus.PlayerWeaponActivator.MachineGunPressed
struct UPlayerWeaponActivator_MachineGunPressed_Params
{
};

// Function Nimbus.PlayerWeaponActivator.GetWeaponNameString
struct UPlayerWeaponActivator_GetWeaponNameString_Params
{
	EWeaponNumber                                      WeaponNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.PlayerWeaponActivator.GetSpecialWeaponNameString
struct UPlayerWeaponActivator_GetSpecialWeaponNameString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.PlayerWeaponActivator.GetSpecialWeaponCount
struct UPlayerWeaponActivator_GetSpecialWeaponCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerWeaponActivator.GetMainWeaponNameString
struct UPlayerWeaponActivator_GetMainWeaponNameString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.PlayerWeaponActivator.GetMainWeaponCount
struct UPlayerWeaponActivator_GetMainWeaponCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerWeaponActivator.GetGunWeaponNameString
struct UPlayerWeaponActivator_GetGunWeaponNameString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.PlayerWeaponActivator.GetGunCount
struct UPlayerWeaponActivator_GetGunCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerWeaponActivator.GetFlareCount
struct UPlayerWeaponActivator_GetFlareCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerWeaponActivator.GetArmedWeaponParameters
struct UPlayerWeaponActivator_GetArmedWeaponParameters_Params
{
	class UWeaponParameters*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerWeaponActivator.GetArmedWeapon
struct UPlayerWeaponActivator_GetArmedWeapon_Params
{
	class AWeaponBase*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.PlayerWeaponActivator.FlareReleased
struct UPlayerWeaponActivator_FlareReleased_Params
{
};

// Function Nimbus.PlayerWeaponActivator.FlarePressed
struct UPlayerWeaponActivator_FlarePressed_Params
{
};

// Function Nimbus.Radio.PlayMessage
struct ARadio_PlayMessage_Params
{
	struct FString                                     MessageID;                                                // (Parm, ZeroConstructor)
};

// DelegateFunction Nimbus.Radio.OnMessageShow__DelegateSignature
struct ARadio_OnMessageShow__DelegateSignature_Params
{
	struct FString                                     MessageID;                                                // (Parm, ZeroConstructor)
};

// DelegateFunction Nimbus.Radio.OnMessageHide__DelegateSignature
struct ARadio_OnMessageHide__DelegateSignature_Params
{
	struct FString                                     MessageID;                                                // (Parm, ZeroConstructor)
};

// DelegateFunction Nimbus.Radio.OnMessageEnd__DelegateSignature
struct ARadio_OnMessageEnd__DelegateSignature_Params
{
	struct FString                                     MessageID;                                                // (Parm, ZeroConstructor)
};

// DelegateFunction Nimbus.Radio.OnMessageBegin__DelegateSignature
struct ARadio_OnMessageBegin__DelegateSignature_Params
{
	struct FString                                     MessageID;                                                // (Parm, ZeroConstructor)
};

// Function Nimbus.Radio.IsPlaying
struct ARadio_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Radio.GetCurrentSpeaker
struct ARadio_GetCurrentSpeaker_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.Radio.GetCurrentMessageID
struct ARadio_GetCurrentMessageID_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.Radio.GetCurrentMessage
struct ARadio_GetCurrentMessage_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.Radio.ClearAllMessages
struct ARadio_ClearAllMessages_Params
{
	bool                                               bFireCurrentMessageEndEvent;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.RadioManager.UpdateSubtitleEventDelegate__DelegateSignature
struct ARadioManager_UpdateSubtitleEventDelegate__DelegateSignature_Params
{
	struct FRadioText                                  Subtitle;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.RadioManager.SetSilentGroupEnabled_S
struct ARadioManager_SetSilentGroupEnabled_S_Params
{
	int                                                SilentGroupIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.SetRadioTypeEnabled_S
struct ARadioManager_SetRadioTypeEnabled_S_Params
{
	ERadioType                                         RadioType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.SetRadioTypeEnabled
struct ARadioManager_SetRadioTypeEnabled_Params
{
	ERadioType                                         RadioType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.SetRadioSkipEnabled_S
struct ARadioManager_SetRadioSkipEnabled_S_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.SetPlayByPlayRadioGroupIDPostfixes_S
struct ARadioManager_SetPlayByPlayRadioGroupIDPostfixes_S_Params
{
	TArray<struct FRadioGroupIDPostfix>                InRadioGroupIDPostfixes;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Nimbus.RadioManager.SetPlayByPlayAllowRadius_S
struct ARadioManager_SetPlayByPlayAllowRadius_S_Params
{
	float                                              RadiusInMeters;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.SetForceOfflineEnabled_S
struct ARadioManager_SetForceOfflineEnabled_S_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.SetEnemyTensionEnabled_S
struct ARadioManager_SetEnemyTensionEnabled_S_Params
{
	ERadioTension                                      Tension;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.SetAllyTensionEnabled_S
struct ARadioManager_SetAllyTensionEnabled_S_Params
{
	ERadioTension                                      Tension;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.ResetPlayCount_S
struct ARadioManager_ResetPlayCount_S_Params
{
	struct FString                                     RadioGroupID;                                             // (Parm, ZeroConstructor)
};

// Function Nimbus.RadioManager.ResetPlayByPlayRadioGroupIDPostfixes_S
struct ARadioManager_ResetPlayByPlayRadioGroupIDPostfixes_S_Params
{
};

// DelegateFunction Nimbus.RadioManager.RequeueingWaitTimeQueueUpdateEventDelegate__DelegateSignature
struct ARadioManager_RequeueingWaitTimeQueueUpdateEventDelegate__DelegateSignature_Params
{
	ERadioManagerChannel                               Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.RequestPlayRadioWithKeySpeaker_S
struct ARadioManager_RequestPlayRadioWithKeySpeaker_S_Params
{
	struct FString                                     RadioGroupID;                                             // (Parm, ZeroConstructor)
	int                                                RequestID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 KeySpeaker;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.RadioManager.RequestPlayRadioWithKeySpeaker
struct ARadioManager_RequestPlayRadioWithKeySpeaker_Params
{
	struct FString                                     RadioGroupID;                                             // (Parm, ZeroConstructor)
	int                                                RequestID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 KeySpeaker;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.RadioManager.RequestPlayRadio_S
struct ARadioManager_RequestPlayRadio_S_Params
{
	struct FString                                     RadioGroupID;                                             // (Parm, ZeroConstructor)
	int                                                RequestID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     KeySpeakerID;                                             // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.RadioManager.RequestPlayRadio
struct ARadioManager_RequestPlayRadio_Params
{
	struct FString                                     RadioGroupID;                                             // (Parm, ZeroConstructor)
	int                                                RequestID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     KeySpeakerID;                                             // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.RadioManager.ReplaceRadioSpeakerName_S
struct ARadioManager_ReplaceRadioSpeakerName_S_Params
{
	struct FString                                     SpeakerID;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReplaceSpeakerID;                                         // (Parm, ZeroConstructor)
};

// Function Nimbus.RadioManager.ReplaceEnvseID_S
struct ARadioManager_ReplaceEnvseID_S_Params
{
	struct FString                                     EnvseID;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReplaceEnvseID;                                           // (Parm, ZeroConstructor)
};

// Function Nimbus.RadioManager.RemoveRadioRequest_S
struct ARadioManager_RemoveRadioRequest_S_Params
{
	struct FString                                     RadioGroupID;                                             // (Parm, ZeroConstructor)
};

// Function Nimbus.RadioManager.RemoveRadioRequest
struct ARadioManager_RemoveRadioRequest_Params
{
	struct FString                                     RadioGroupID;                                             // (Parm, ZeroConstructor)
};

// Function Nimbus.RadioManager.RemoveAllRadioRequestAndRemainingRadio_S
struct ARadioManager_RemoveAllRadioRequestAndRemainingRadio_S_Params
{
};

// Function Nimbus.RadioManager.RemoveAllRadioRequest_S
struct ARadioManager_RemoveAllRadioRequest_S_Params
{
};

// Function Nimbus.RadioManager.RemoveAllRadioRequest
struct ARadioManager_RemoveAllRadioRequest_Params
{
};

// DelegateFunction Nimbus.RadioManager.RadioQueueUpdateEventDelegate__DelegateSignature
struct ARadioManager_RadioQueueUpdateEventDelegate__DelegateSignature_Params
{
	ERadioManagerChannel                               Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.PushRequeueingWait_S
struct ARadioManager_PushRequeueingWait_S_Params
{
	struct FString                                     RadioGroupID;                                             // (Parm, ZeroConstructor)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShrink;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.OnPreStopBusEvent
struct ARadioManager_OnPreStopBusEvent_Params
{
	ENimbusSoundType                                   BusType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.OnPreStartMiniGamePhaseEvent
struct ARadioManager_OnPreStartMiniGamePhaseEvent_Params
{
	bool                                               bIsRetry;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.OnPreRestartPhaseEvent
struct ARadioManager_OnPreRestartPhaseEvent_Params
{
};

// Function Nimbus.RadioManager.OnPhaseEndEvent
struct ARadioManager_OnPhaseEndEvent_Params
{
};

// DelegateFunction Nimbus.RadioManager.OnMessageEnd__DelegateSignature
struct ARadioManager_OnMessageEnd__DelegateSignature_Params
{
	struct FString                                     GroupID;                                                  // (Parm, ZeroConstructor)
	struct FString                                     VoiceID;                                                  // (Parm, ZeroConstructor)
	bool                                               bGroupEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.RadioManager.OnMessageBegin__DelegateSignature
struct ARadioManager_OnMessageBegin__DelegateSignature_Params
{
	struct FString                                     GroupID;                                                  // (Parm, ZeroConstructor)
	struct FString                                     VoiceID;                                                  // (Parm, ZeroConstructor)
};

// Function Nimbus.RadioManager.OnIGCEnableEvent
struct ARadioManager_OnIGCEnableEvent_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.IsRadioSkipEnabled_S
struct ARadioManager_IsRadioSkipEnabled_S_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.RadioManager.IsChannelPlaying_S
struct ARadioManager_IsChannelPlaying_S_Params
{
	ERadioManagerChannel                               Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.RadioManager.IsChannelPlaying
struct ARadioManager_IsChannelPlaying_Params
{
	ERadioManagerChannel                               Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.RadioManager.IsChannelEnabled_S
struct ARadioManager_IsChannelEnabled_S_Params
{
	ERadioManagerChannel                               Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.RadioManager.IsChannelEnabled
struct ARadioManager_IsChannelEnabled_Params
{
	ERadioManagerChannel                               Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.RadioManager.GetRadioGroupIDs
struct ARadioManager_GetRadioGroupIDs_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.RadioManager.EnableAllRadio_S
struct ARadioManager_EnableAllRadio_S_Params
{
};

// Function Nimbus.RadioManager.EnableAllRadio
struct ARadioManager_EnableAllRadio_Params
{
};

// DelegateFunction Nimbus.RadioManager.EditorVolumeChangeEventDelegate__DelegateSignature
struct ARadioManager_EditorVolumeChangeEventDelegate__DelegateSignature_Params
{
};

// DelegateFunction Nimbus.RadioManager.EditorRadioDataTableUpdateEventDelegate__DelegateSignature
struct ARadioManager_EditorRadioDataTableUpdateEventDelegate__DelegateSignature_Params
{
};

// Function Nimbus.RadioManager.DisableRadioAfterRequest_S
struct ARadioManager_DisableRadioAfterRequest_S_Params
{
	int                                                RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.DisableRadioAfterRequest
struct ARadioManager_DisableRadioAfterRequest_Params
{
	int                                                RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.RadioManager.ClearReplacedRadioSpeakerNames_S
struct ARadioManager_ClearReplacedRadioSpeakerNames_S_Params
{
};

// Function Nimbus.RadioManager.ClearReplacedRadioSpeakerName_S
struct ARadioManager_ClearReplacedRadioSpeakerName_S_Params
{
	struct FString                                     SpeakerID;                                                // (Parm, ZeroConstructor)
};

// Function Nimbus.RadioManager.ClearAllReplacedEnvseID_S
struct ARadioManager_ClearAllReplacedEnvseID_S_Params
{
};

// Function Nimbus.RadioManager.AddPlayByPlayRadioGroupIDPostfix_S
struct ARadioManager_AddPlayByPlayRadioGroupIDPostfix_S_Params
{
	struct FString                                     KeySpeakerID;                                             // (Parm, ZeroConstructor)
	struct FString                                     RadioGroupIDPostfix;                                      // (Parm, ZeroConstructor)
};

// Function Nimbus.RailgunControliComponent.PlayChargeSound
struct URailgunControliComponent_PlayChargeSound_Params
{
};

// Function Nimbus.RailgunControliComponent.GetHitResult_AndReset
struct URailgunControliComponent_GetHitResult_AndReset_Params
{
	ERailgunControliResult                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.RailgunControliComponent.EndChargeSound
struct URailgunControliComponent_EndChargeSound_Params
{
};

// Function Nimbus.RectennaBarrierEffect.OnRingMove
struct ARectennaBarrierEffect_OnRingMove_Params
{
};

// Function Nimbus.RectennaBarrierEffect.OnBarrierIn
struct ARectennaBarrierEffect_OnBarrierIn_Params
{
};

// Function Nimbus.RectennaBarrierEffect.OnBarrierFade
struct ARectennaBarrierEffect_OnBarrierFade_Params
{
};

// Function Nimbus.RectennaBarrierEffect.OnBarrierActive
struct ARectennaBarrierEffect_OnBarrierActive_Params
{
};

// DelegateFunction Nimbus.RectennaBarrier.OnReleaseBarrierWeapon__DelegateSignature
struct ARectennaBarrier_OnReleaseBarrierWeapon__DelegateSignature_Params
{
};

// Function Nimbus.RectennaBarrier.IsActiveBarrier
struct ARectennaBarrier_IsActiveBarrier_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.RectennaBarrier.GetBarrierRippleSurfaceRadiusMeters
struct ARectennaBarrier_GetBarrierRippleSurfaceRadiusMeters_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.RectennaBarrier.GetBarrierDamageRadiusMeters
struct ARectennaBarrier_GetBarrierDamageRadiusMeters_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.RectennaBarrier.GetBarrierChargeDuration
struct ARectennaBarrier_GetBarrierChargeDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.RectennaBarrier.GetBarrierActiveDuration
struct ARectennaBarrier_GetBarrierActiveDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.RectennaBarrier.BarrierEndOpacity
struct ARectennaBarrier_BarrierEndOpacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.ReplayCameraInfoWidget.OnCameraSettingsUpdate
struct UReplayCameraInfoWidget_OnCameraSettingsUpdate_Params
{
	unsigned char                                      CameraId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCameraSettings                             CameraSettings;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.ReplayManager.IsIGCPlaybackAllowed
struct UReplayManager_IsIGCPlaybackAllowed_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.ReplayPassCameraComponent.GetCameraView
struct UReplayPassCameraComponent_GetCameraView_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMinimalViewInfo                            DesiredView;                                              // (Parm, OutParm)
};

// Function Nimbus.ReplayPassCameraComponent.Deactivate
struct UReplayPassCameraComponent_Deactivate_Params
{
};

// Function Nimbus.ReplayPassCameraComponent.Activate
struct UReplayPassCameraComponent_Activate_Params
{
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.NimbusReplayPawn.OnPlayerReposition
struct ANimbusReplayPawn_OnPlayerReposition_Params
{
};

// DelegateFunction Nimbus.NimbusReplayPawn.OnCameraSettingsUpdated__DelegateSignature
struct ANimbusReplayPawn_OnCameraSettingsUpdated__DelegateSignature_Params
{
	unsigned char                                      CameraId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCameraSettings                             CameraSettings;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction Nimbus.NimbusReplayPawn.OnCameraChanged__DelegateSignature
struct ANimbusReplayPawn_OnCameraChanged__DelegateSignature_Params
{
	unsigned char                                      CameraId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SoundChannelActor.MakeAdditionalSoundParams
struct ASoundChannelActor_MakeAdditionalSoundParams_Params
{
	float                                              InCloudDensity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAdditionalSoundChannelParams               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Nimbus.SoundChannelActor.GetIsPlaying
struct ASoundChannelActor_GetIsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.SoundChannelManager.PlaySoundAttached
struct ASoundChannelManager_PlaySoundAttached_Params
{
	ESoundChannelType                                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttachActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FAdditionalSoundChannelParams               Params;                                                   // (Parm)
};

// Function Nimbus.SoundChannelManager.PlaySoundAtLocationWithSwitch
struct ASoundChannelManager_PlaySoundAtLocationWithSwitch_Params
{
	ESoundChannelType                                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FAdditionalSoundChannelParams               Params;                                                   // (Parm)
	struct FName                                       SwitchGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SwitchState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SoundChannelManager.PlaySoundAtLocation
struct ASoundChannelManager_PlaySoundAtLocation_Params
{
	ESoundChannelType                                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FAdditionalSoundChannelParams               Params;                                                   // (Parm)
};

// Function Nimbus.SoundChannelManager.OnPreRestartPhaseEvent
struct ASoundChannelManager_OnPreRestartPhaseEvent_Params
{
};

// Function Nimbus.SoundChannelManager.GetSoundChannelManager
struct ASoundChannelManager_GetSoundChannelManager_Params
{
	class ASoundChannelManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.StandaloneTextStatWidget.OnWeaponActivatorInitialize
struct UStandaloneTextStatWidget_OnWeaponActivatorInitialize_Params
{
};

// Function Nimbus.SubmarineDamagedState.OnVisibilityChanged
struct USubmarineDamagedState_OnVisibilityChanged_Params
{
	bool                                               bVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SubmarineDamagedState.OnRestored
struct USubmarineDamagedState_OnRestored_Params
{
};

// Function Nimbus.SubmarineDamagedState.OnComponentHitSurface
struct USubmarineDamagedState_OnComponentHitSurface_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.SubmarineBarrierDroneComponent.StartBarrierDroneDefenceBySocketInfo
struct USubmarineBarrierDroneComponent_StartBarrierDroneDefenceBySocketInfo_Params
{
	TArray<struct FBarrierDroneSocketInfo>             InBarrierDroneSocketInfoList;                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Nimbus.SubmarineBarrierDroneComponent.StartBarrierDroneDefence
struct USubmarineBarrierDroneComponent_StartBarrierDroneDefence_Params
{
	TArray<class AAIHeli*>                             InBarrierDroneList;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Nimbus.SubmarineBarrierDroneComponent.OnRestored
struct USubmarineBarrierDroneComponent_OnRestored_Params
{
};

// Function Nimbus.SubmarineBarrierDroneComponent.EndBarrierDroneDefence
struct USubmarineBarrierDroneComponent_EndBarrierDroneDefence_Params
{
};

// Function Nimbus.SubmarineMoveComponent.StartBreakDownProgress
struct USubmarineMoveComponent_StartBreakDownProgress_Params
{
};

// Function Nimbus.SubmarineMoveComponent.OnRestored
struct USubmarineMoveComponent_OnRestored_Params
{
};

// Function Nimbus.SurveillanceComponent.OnPlayerEngaged
struct USurveillanceComponent_OnPlayerEngaged_Params
{
};

// Function Nimbus.SurveillanceComponent.OnPlayerDetected
struct USurveillanceComponent_OnPlayerDetected_Params
{
};

// Function Nimbus.SurveillanceComponent.OnDroneSpawned
struct USurveillanceComponent_OnDroneSpawned_Params
{
};

// Function Nimbus.SurveillanceComponent.OnDroneDestroyed
struct USurveillanceComponent_OnDroneDestroyed_Params
{
};

// Function Nimbus.SubtitleWidget.RadioMessageReceived
struct USubtitleWidget_RadioMessageReceived_Params
{
	struct FRadioText                                  RadioText;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.SubtitleWidget.OnHUDEnabled
struct USubtitleWidget_OnHUDEnabled_Params
{
};

// Function Nimbus.SubtitleWidget.OnHUDDisabled
struct USubtitleWidget_OnHUDDisabled_Params
{
};

// Function Nimbus.SubtitleWidget.OnHUDAlertEnd
struct USubtitleWidget_OnHUDAlertEnd_Params
{
};

// Function Nimbus.SubtitleWidget.OnHUDAlertBegin
struct USubtitleWidget_OnHUDAlertBegin_Params
{
};

// Function Nimbus.SubtitleWidget.OnCurrentHUDAlertColorUpdated
struct USubtitleWidget_OnCurrentHUDAlertColorUpdated_Params
{
	struct FLinearColor                                NewColor;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsDefaultColor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SubtitleWidget.OnCameraViewChanged
struct USubtitleWidget_OnCameraViewChanged_Params
{
	ECameraType                                        CameraType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SubtitleWidget.OnAnalyzeAnimationStart
struct USubtitleWidget_OnAnalyzeAnimationStart_Params
{
};

// Function Nimbus.SubtitleWidget.OnAnalyzeAnimationShow
struct USubtitleWidget_OnAnalyzeAnimationShow_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SubtitleWidget.OnAnalyzeAnimationEnd
struct USubtitleWidget_OnAnalyzeAnimationEnd_Params
{
};

// Function Nimbus.SubtitleWidget.DebugSetVRLocation
struct USubtitleWidget_DebugSetVRLocation_Params
{
	struct FVector2D                                   NewLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.SubtitleWidget.DebugPrintVRLocation
struct USubtitleWidget_DebugPrintVRLocation_Params
{
};

// Function Nimbus.SystemObjectImpactArea.SetAreaModeShrinking
struct ASystemObjectImpactArea_SetAreaModeShrinking_Params
{
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InWaitTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SystemObjectImpactArea.SetAreaModeExpansion
struct ASystemObjectImpactArea_SetAreaModeExpansion_Params
{
	float                                              InFallDelaySeconds;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InHeliosRadioForeWarnTime;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SystemObjectLightning.OnLightningStrike
struct ASystemObjectLightning_OnLightningStrike_Params
{
};

// Function Nimbus.SystemObjectLightning.IsPositionInRange
struct ASystemObjectLightning_IsPositionInRange_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.SystemObjectLightning.IsEnableVFX
struct ASystemObjectLightning_IsEnableVFX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.SystemObjectLightning.InitializeVariablesFromBP
struct ASystemObjectLightning_InitializeVariablesFromBP_Params
{
	float                                              MinDelay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDelay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinLifeTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxLifetime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LightIntensityMultiplier;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceFromCamera;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SystemObjectLightning.EnableVFX
struct ASystemObjectLightning_EnableVFX_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SystemObjectLine.OnCombatZoneUpdatedEvent
struct ASystemObjectLine_OnCombatZoneUpdatedEvent_Params
{
};

// Function Nimbus.SystemObjectSE.StopAmbientSound
struct ASystemObjectSE_StopAmbientSound_Params
{
};

// Function Nimbus.SystemObjectSE.SetVolume
struct ASystemObjectSE_SetVolume_Params
{
	float                                              InVolume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SystemObjectSE.PlayAmbientSound
struct ASystemObjectSE_PlayAmbientSound_Params
{
};

// Function Nimbus.SystemObjectSearchLight.TurnOn
struct ASystemObjectSearchLight_TurnOn_Params
{
};

// Function Nimbus.SystemObjectSearchLight.TurnOff
struct ASystemObjectSearchLight_TurnOff_Params
{
};

// Function Nimbus.SystemObjectSearchLight.StopAmbientSound
struct ASystemObjectSearchLight_StopAmbientSound_Params
{
};

// Function Nimbus.SystemObjectSearchLight.PlayAmbientSound
struct ASystemObjectSearchLight_PlayAmbientSound_Params
{
};

// DelegateFunction Nimbus.SystemObjectSearchLight.OnReached__DelegateSignature
struct ASystemObjectSearchLight_OnReached__DelegateSignature_Params
{
	class AGameObject*                                 Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SystemObjectSearchLight.OnEndOverlap
struct ASystemObjectSearchLight_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.SystemObjectSearchLight.OnCaptured__DelegateSignature
struct ASystemObjectSearchLight_OnCaptured__DelegateSignature_Params
{
	class AGameObject*                                 Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCaptured;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SystemObjectSearchLight.OnBeginOverlap
struct ASystemObjectSearchLight_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OverlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Nimbus.SystemObjectSearchLight.IsTurnOn
struct ASystemObjectSearchLight_IsTurnOn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.SystemObjectSearchLight.IsTracking
struct ASystemObjectSearchLight_IsTracking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.SystemObjectSearchLight.GetTrackingTarget
struct ASystemObjectSearchLight_GetTrackingTarget_Params
{
	class AGameObject*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.SystemObjectSonobuoy.Scan
struct ASystemObjectSonobuoy_Scan_Params
{
};

// DelegateFunction Nimbus.SystemObjectSonobuoy.OnSonobuoyEventOccurred__DelegateSignature
struct ASystemObjectSonobuoy_OnSonobuoyEventOccurred__DelegateSignature_Params
{
	class ASystemObjectSonobuoy*                       Sonobuoy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESonobuoyEvent                                     Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SystemObjectSonobuoy.Drop
struct ASystemObjectSonobuoy_Drop_Params
{
	class AGameObject*                                 Dropper;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SystemObjectSubmarineSearchArea.SetSearchArea
struct ASystemObjectSubmarineSearchArea_SetSearchArea_Params
{
	struct FVector                                     NewPosition;                                              // (ConstParm, Parm, IsPlainOldData)
	float                                              InRadius;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SystemObjectSubmarineSearchArea.SetRadius
struct ASystemObjectSubmarineSearchArea_SetRadius_Params
{
	float                                              InRadius;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SystemObjectSubmarineSearchArea.SetEnable
struct ASystemObjectSubmarineSearchArea_SetEnable_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SystemObjectSubmarineSearchArea.PlaySonarEffect
struct ASystemObjectSubmarineSearchArea_PlaySonarEffect_Params
{
};

// Function Nimbus.SystemObjectVFX.OnSpawnLensEffectActor
struct ASystemObjectVFX_OnSpawnLensEffectActor_Params
{
	class AActor*                                      InLensEffectActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InLifeTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SystemObjectVFX.OnEnablePostProcess
struct ASystemObjectVFX_OnEnablePostProcess_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.SystemObjectVFX.EnableVFX
struct ASystemObjectVFX_EnableVFX_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.TargetContainerWidget.OnHUDAlertEnd
struct UTargetContainerWidget_OnHUDAlertEnd_Params
{
};

// Function Nimbus.TargetContainerWidget.OnHUDAlertBegin
struct UTargetContainerWidget_OnHUDAlertBegin_Params
{
};

// Function Nimbus.TargetContainerWidget.OnCurrentHUDAlertColorUpdated
struct UTargetContainerWidget_OnCurrentHUDAlertColorUpdated_Params
{
	struct FLinearColor                                NewColor;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsDefaultColor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.TargetSelectionComponent.StartSelectTarget
struct UTargetSelectionComponent_StartSelectTarget_Params
{
};

// Function Nimbus.TargetSelectionComponent.SetJammed
struct UTargetSelectionComponent_SetJammed_Params
{
	bool                                               bJammed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.TargetSelectionComponent.SetIsWideMode
struct UTargetSelectionComponent_SetIsWideMode_Params
{
	bool                                               bWideMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.TargetSelectionComponent.SetIsAngleFirst
struct UTargetSelectionComponent_SetIsAngleFirst_Params
{
	bool                                               bIsAngleFirst;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.TargetSelectionComponent.SelectTarget
struct UTargetSelectionComponent_SelectTarget_Params
{
	bool                                               bForcedSelect;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameObject*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TargetSelectionComponent.Reset
struct UTargetSelectionComponent_Reset_Params
{
	float                                              LockonRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResetLockOnRange;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LockonHeight;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.TargetSelectionComponent.OverrideCloudParameters
struct UTargetSelectionComponent_OverrideCloudParameters_Params
{
	TArray<struct FCloudVisibilityTime>                VisibilityTimeSettings;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FCloudVisibilityTime>                SWPVisibilityTimeSettings;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FCloudVisibilityDistance>            VisibilityDistanceSettings;                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FCloudVisibilityDistance>            SWPVisibilityDistanceSettings;                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Nimbus.TargetSelectionComponent.OnToggleWeapon
struct UTargetSelectionComponent_OnToggleWeapon_Params
{
	class AWeaponBase*                                 Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UWeaponParameters*                           WeaponParam;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsWeaponSpecial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.TargetSelectionComponent.GetSelectionAssistTarget
struct UTargetSelectionComponent_GetSelectionAssistTarget_Params
{
	class AGameObject*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TargetSelectionComponent.GetSelectedTarget
struct UTargetSelectionComponent_GetSelectedTarget_Params
{
	class AGameObject*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TargetSelectionComponent.GetFirstLockedOnTarget
struct UTargetSelectionComponent_GetFirstLockedOnTarget_Params
{
	class AGameObject*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TargetSelectionComponent.GetAllLockedOnTargets
struct UTargetSelectionComponent_GetAllLockedOnTargets_Params
{
	TArray<class AGameObject*>                         ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Nimbus.TeamDeathMatchResult.DisplayResults
struct UTeamDeathMatchResult_DisplayResults_Params
{
	TArray<struct FString>                             Team1PlayerNames;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Team1PlayerScores;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             Team2PlayerNames;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Team2PlayerScores;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Team1Score;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team2Score;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LocalTeamIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.TimeScoreStatBaseWidget.OnCurrentHUDAlertColorUpdated
struct UTimeScoreStatBaseWidget_OnCurrentHUDAlertColorUpdated_Params
{
	struct FLinearColor                                NewColor;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsDefaultColor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.SetTrueSkyVisible
struct UTrueSkyWrapper_SetTrueSkyVisible_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.SetTime
struct UTrueSkyWrapper_SetTime_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.SetShadowBase
struct UTrueSkyWrapper_SetShadowBase_Params
{
	float                                              ShadowBaseUU;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.SandPointTest
struct UTrueSkyWrapper_SandPointTest_Params
{
	int                                                QueryID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos;                                                      // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.SandLineTest
struct UTrueSkyWrapper_SandLineTest_Params
{
	int                                                QueryID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartPos;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.GetSunRotation
struct UTrueSkyWrapper_GetSunRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.GetSunOrMoonRotation
struct UTrueSkyWrapper_GetSunOrMoonRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.GetSunColor
struct UTrueSkyWrapper_GetSunColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.GetShadowBase
struct UTrueSkyWrapper_GetShadowBase_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.GetNextModifiableCloudKeyframe
struct UTrueSkyWrapper_GetNextModifiableCloudKeyframe_Params
{
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.GetMoonRotation
struct UTrueSkyWrapper_GetMoonRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.GetKeyframeFloat
struct UTrueSkyWrapper_GetKeyframeFloat_Params
{
	int                                                KeyframeUid;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.GetCloudMinAltitude
struct UTrueSkyWrapper_GetCloudMinAltitude_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.GetCloudMaxAltitude
struct UTrueSkyWrapper_GetCloudMaxAltitude_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.CloudPointTest
struct UTrueSkyWrapper_CloudPointTest_Params
{
	int                                                QueryID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos;                                                      // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.TrueSkyWrapper.CloudLineTest
struct UTrueSkyWrapper_CloudLineTest_Params
{
	int                                                QueryID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartPos;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.UI3DWidgetActor.GetWidgetComponent
struct AUI3DWidgetActor_GetWidgetComponent_Params
{
	class UWidgetComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Nimbus.UIVRPawn.TurnAtRate
struct AUIVRPawn_TurnAtRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.UIVRPawn.MoveUp_World
struct AUIVRPawn_MoveUp_World_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.UIVRPawn.MoveRight
struct AUIVRPawn_MoveRight_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.UIVRPawn.MoveForward
struct AUIVRPawn_MoveForward_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.UIVRPawn.LookUpAtRate
struct AUIVRPawn_LookUpAtRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.UndockChildActorUAVs
struct AUnit_UndockChildActorUAVs_Params
{
};

// Function Nimbus.Unit.SkipOutOfWoldCheck
struct AUnit_SkipOutOfWoldCheck_Params
{
	bool                                               bSkip;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetWeaponSpecialBehavior
struct AUnit_SetWeaponSpecialBehavior_Params
{
	EWeaponNumber                                      WeaponNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponSpecialBehaviorType                         BehaviorType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetWeaponSettings
struct AUnit_SetWeaponSettings_Params
{
	bool                                               bInCanDamageTGT;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInCanFireNoCollisionWeapon;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetShowHudBox
struct AUnit_SetShowHudBox_Params
{
	bool                                               bShowHUDBox;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetRadiusMeters
struct AUnit_SetRadiusMeters_Params
{
	float                                              RadiusInMeters;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetPathParameter
struct AUnit_SetPathParameter_Params
{
	float                                              InSpeedKmph;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InAccelerationMpss;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRotationSpeedDegree;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetMinHealth
struct AUnit_SetMinHealth_Params
{
	float                                              InHealth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetMinAltitudeMeters
struct AUnit_SetMinAltitudeMeters_Params
{
	float                                              MinAltitudeMeters;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetMaxAltitudeMeters
struct AUnit_SetMaxAltitudeMeters_Params
{
	float                                              MaxAltitudeMeters;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetIsTGT
struct AUnit_SetIsTGT_Params
{
	bool                                               bIsTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetIsInvincible
struct AUnit_SetIsInvincible_Params
{
	bool                                               bInvincible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetIsCosmetic
struct AUnit_SetIsCosmetic_Params
{
};

// Function Nimbus.Unit.SetIsAttackTargetsException
struct AUnit_SetIsAttackTargetsException_Params
{
	bool                                               bAttackTargetsException;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetHudBoxVisibilityRange
struct AUnit_SetHudBoxVisibilityRange_Params
{
	float                                              RadiusMeters;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetHudBoxAttribute
struct AUnit_SetHudBoxAttribute_Params
{
	EHudBoxAttribute                                   Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetGameObjectCurrentSpeed
struct AUnit_SetGameObjectCurrentSpeed_Params
{
	float                                              SpeedKmph;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetFaction
struct AUnit_SetFaction_Params
{
	EFaction                                           NewFaction;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetExceptionTarget
struct AUnit_SetExceptionTarget_Params
{
	class AGameObject*                                 ExceptionTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetEnemySearchType
struct AUnit_SetEnemySearchType_Params
{
	ETargetType                                        InType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.SetCommonAttributes
struct AUnit_SetCommonAttributes_Params
{
	bool                                               bShowHUDBox;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInvincible;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTGT;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.RestoreUnit
struct AUnit_RestoreUnit_Params
{
};

// Function Nimbus.Unit.RequestSpecialAction
struct AUnit_RequestSpecialAction_Params
{
	struct FAISpecialActionRequestInfo                 SpecialActionRequestInfo;                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Nimbus.Unit.RepositionUnit
struct AUnit_RepositionUnit_Params
{
	EUnitActivationType                                RepositionType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	class AActor*                                      TransformReferenceActor;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddHeightOfGroundToZ;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.RemoveAIGameObject
struct AUnit_RemoveAIGameObject_Params
{
	class AAIGameObject*                               Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.Unit.OnStartedMovingOnPath__DelegateSignature
struct AUnit_OnStartedMovingOnPath__DelegateSignature_Params
{
	class AAIPath*                                     Path;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.OnRestored
struct AUnit_OnRestored_Params
{
};

// DelegateFunction Nimbus.Unit.OnResetPath__DelegateSignature
struct AUnit_OnResetPath__DelegateSignature_Params
{
	class AAIPath*                                     Path;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.Unit.OnReachedPathPoint__DelegateSignature
struct AUnit_OnReachedPathPoint__DelegateSignature_Params
{
	class AAIPathPoint*                                PathPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.Unit.OnReachedPathEntryPoint__DelegateSignature
struct AUnit_OnReachedPathEntryPoint__DelegateSignature_Params
{
	class AAIPath*                                     Path;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.Unit.OnFinishedMovingOnPath__DelegateSignature
struct AUnit_OnFinishedMovingOnPath__DelegateSignature_Params
{
	class AAIPath*                                     Path;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.OnDeath
struct AUnit_OnDeath_Params
{
	class AUnit*                                       DeadUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.OnActivation
struct AUnit_OnActivation_Params
{
	class AUnit*                                       ActivatedUnit;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.ModifyHealth
struct AUnit_ModifyHealth_Params
{
	EHPModifier                                        ModType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCauseDamageEvent;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.K2_DestroyActor
struct AUnit_K2_DestroyActor_Params
{
};

// Function Nimbus.Unit.IsDestroyed
struct AUnit_IsDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Unit.IsActivated
struct AUnit_IsActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Unit.HasAliveGameObject
struct AUnit_HasAliveGameObject_Params
{
	bool                                               bIncludeChild;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Unit.GetUnitDamagePercentage
struct AUnit_GetUnitDamagePercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Unit.GetTotalGameObjectNum
struct AUnit_GetTotalGameObjectNum_Params
{
	bool                                               bIncludeChild;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Unit.GetSubFaction
struct AUnit_GetSubFaction_Params
{
	ESubFaction                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Unit.GetRadiusMeters
struct AUnit_GetRadiusMeters_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Unit.GetFaction
struct AUnit_GetFaction_Params
{
	EFaction                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Unit.GetDeadGameObjectNum
struct AUnit_GetDeadGameObjectNum_Params
{
	bool                                               bIncludeChild;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Unit.GetAliveGameObjectNum
struct AUnit_GetAliveGameObjectNum_Params
{
	bool                                               bIncludeChild;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Unit.GetAIGameObjectsCopy
struct AUnit_GetAIGameObjectsCopy_Params
{
	class UClass*                                      SubClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AAIGameObject*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Nimbus.Unit.EngagementOrder
struct AUnit_EngagementOrder_Params
{
	EEngagement                                        Order;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetEnemy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EEnemySearchPriority                               SearchPriority;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EEnemySearchPriorityExtension                      SearchPriorityExtension;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreUnidentifiedObject;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreAttackQuota;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanFireWeapon1;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanFireWeapon2;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanFireWeapon3;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.EnableKDSMode
struct AUnit_EnableKDSMode_Params
{
	bool                                               bInEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.DockUAVsToActor
struct AUnit_DockUAVsToActor_Params
{
	class AGameObject*                                 ParentObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DockSocketName;                                           // (Parm, ZeroConstructor)
	int                                                FirstSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LastSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.DockChildActorUAVs
struct AUnit_DockChildActorUAVs_Params
{
};

// Function Nimbus.Unit.DeactivateUnit
struct AUnit_DeactivateUnit_Params
{
};

// Function Nimbus.Unit.AreAllUnitsUAVDocked
struct AUnit_AreAllUnitsUAVDocked_Params
{
	TArray<class AUnit*>                               Units;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Unit.AreAllUAVDocked
struct AUnit_AreAllUAVDocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.Unit.AddAIGameObject
struct AUnit_AddAIGameObject_Params
{
	class AAIGameObject*                               Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.Unit.Activate
struct AUnit_Activate_Params
{
	bool                                               bActivate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.VRMenuBaseWidget.PlayViewerFrameOutAnimBP
struct UVRMenuBaseWidget_PlayViewerFrameOutAnimBP_Params
{
};

// Function Nimbus.VRMenuBaseWidget.PlayViewerFrameInAnimBP
struct UVRMenuBaseWidget_PlayViewerFrameInAnimBP_Params
{
};

// Function Nimbus.VRMenuBaseWidget.PlayFrameOutAnimBP
struct UVRMenuBaseWidget_PlayFrameOutAnimBP_Params
{
};

// Function Nimbus.VRMenuBaseWidget.PlayFrameInAnimBP
struct UVRMenuBaseWidget_PlayFrameInAnimBP_Params
{
};

// Function Nimbus.VRMenuBaseWidget.OnFrameOutAnimationEndBP
struct UVRMenuBaseWidget_OnFrameOutAnimationEndBP_Params
{
};

// Function Nimbus.VRAircraftViewerWidget.OnFrameInAnimationFinished
struct UVRAircraftViewerWidget_OnFrameInAnimationFinished_Params
{
};

// Function Nimbus.VRAircraftViewerWidget.OnFadeOutStarted
struct UVRAircraftViewerWidget_OnFadeOutStarted_Params
{
};

// Function Nimbus.VRBriefingWidget.PlayMapAnimationBP
struct UVRBriefingWidget_PlayMapAnimationBP_Params
{
	int                                                Mission;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.VRDebriefingWidget.OnInitializedCustom
struct UVRDebriefingWidget_OnInitializedCustom_Params
{
};

// Function Nimbus.VRDescriptionTextWidget.InitializeAnimate
struct UVRDescriptionTextWidget_InitializeAnimate_Params
{
};

// Function Nimbus.VRDialogWidget.PlayFrameOutAnimBP
struct UVRDialogWidget_PlayFrameOutAnimBP_Params
{
};

// Function Nimbus.VRDialogWidget.PlayFrameInAnimBP
struct UVRDialogWidget_PlayFrameInAnimBP_Params
{
};

// Function Nimbus.VRDialogWidget.OnFrameOutAnimationEndBP
struct UVRDialogWidget_OnFrameOutAnimationEndBP_Params
{
};

// Function Nimbus.VREdWidget.PlaySubtitleAnimationBP
struct UVREdWidget_PlaySubtitleAnimationBP_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.VRHangarCockpitWidget.OnInitializedCustom
struct UVRHangarCockpitWidget_OnInitializedCustom_Params
{
};

// Function Nimbus.VRHangarWidget.SkipVisorAnimation
struct UVRHangarWidget_SkipVisorAnimation_Params
{
};

// Function Nimbus.VRHangarWidget.OnVRFadingCompletedCustom
struct UVRHangarWidget_OnVRFadingCompletedCustom_Params
{
	bool                                               IsFadeIn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.VRHangarWidget.OnVisorStartupAnimFinishedBP
struct UVRHangarWidget_OnVisorStartupAnimFinishedBP_Params
{
};

// Function Nimbus.VRHangarWidget.ChangeNextMenu
struct UVRHangarWidget_ChangeNextMenu_Params
{
};

// Function Nimbus.VRHudPauseWidget.PlayFrameOutAnimBP
struct UVRHudPauseWidget_PlayFrameOutAnimBP_Params
{
};

// Function Nimbus.VRHudPauseWidget.PlayFrameInAnimBP
struct UVRHudPauseWidget_PlayFrameInAnimBP_Params
{
};

// Function Nimbus.VRHudPauseWidget.OnFrameOutAnimationEndBP
struct UVRHudPauseWidget_OnFrameOutAnimationEndBP_Params
{
};

// DelegateFunction Nimbus.VRKeyEventActor.OnKeyRepeated__DelegateSignature
struct AVRKeyEventActor_OnKeyRepeated__DelegateSignature_Params
{
	EUIKeys                                            Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.VRKeyEventActor.OnKeyJustPressed__DelegateSignature
struct AVRKeyEventActor_OnKeyJustPressed__DelegateSignature_Params
{
	EUIKeys                                            Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.VRKeyEventActor.IsKeyDown
struct AVRKeyEventActor_IsKeyDown_Params
{
	EUIKeys                                            Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.VRMissionLoadWidget.PlayFrameOutAnimBP
struct UVRMissionLoadWidget_PlayFrameOutAnimBP_Params
{
};

// Function Nimbus.VRMissionLoadWidget.PlayFrameInAnimBP
struct UVRMissionLoadWidget_PlayFrameInAnimBP_Params
{
};

// Function Nimbus.VRMissionLoadWidget.OnFrameOutAnimationEndBP
struct UVRMissionLoadWidget_OnFrameOutAnimationEndBP_Params
{
};

// Function Nimbus.VRMissionSelectWidget.SetVRMissionSelectBgAlreadyFrameInFlag
struct UVRMissionSelectWidget_SetVRMissionSelectBgAlreadyFrameInFlag_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.VRMissionSelectWidget.IsToPlayFrameInAnimation
struct UVRMissionSelectWidget_IsToPlayFrameInAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.VRPlaneHealthWarningLight.SetPlayerPlane
struct AVRPlaneHealthWarningLight_SetPlayerPlane_Params
{
	class APlayerPlane*                                Plane;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.VRRetryWidget.PlayFrameOutAnimBP
struct UVRRetryWidget_PlayFrameOutAnimBP_Params
{
};

// Function Nimbus.VRRetryWidget.PlayFrameInAnimBP
struct UVRRetryWidget_PlayFrameInAnimBP_Params
{
};

// Function Nimbus.VRRetryWidget.OnFrameOutAnimationEndBP
struct UVRRetryWidget_OnFrameOutAnimationEndBP_Params
{
};

// Function Nimbus.VRPrologueWidget.PlaySubtitleAnimationBP
struct UVRPrologueWidget_PlaySubtitleAnimationBP_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.VRPrologueWidget.IsToPlayFrameInAnimation
struct UVRPrologueWidget_IsToPlayFrameInAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.VRPlaneSubActor.IsKeyDown
struct AVRPlaneSubActor_IsKeyDown_Params
{
	EUIKeys                                            Key;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Nimbus.VRSimpleUserWidget.OnKeyRepeated__DelegateSignature
struct UVRSimpleUserWidget_OnKeyRepeated__DelegateSignature_Params
{
	EUIKeys                                            Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Nimbus.VRSimpleUserWidget.OnKeyJustPressed__DelegateSignature
struct UVRSimpleUserWidget_OnKeyJustPressed__DelegateSignature_Params
{
	EUIKeys                                            Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nimbus.VRSimpleUserWidget.IsKeyDown
struct UVRSimpleUserWidget_IsKeyDown_Params
{
	EUIKeys                                            Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Nimbus.WeaponMeshManager.SetAllExtraMeshesMasterVisibility
struct UWeaponMeshManager_SetAllExtraMeshesMasterVisibility_Params
{
	bool                                               bShowAllMeshes;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceOperation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
