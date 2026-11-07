#pragma once

#include "CoreMinimal.h"
#include "AITypes.h"
#include "TimerManager.h"
#include "Components/ActorComponent.h"
#include "Navigation/PathFollowingComponent.h"
#include "RenegadeSplineAITypes.h"
#include "RenegadeSplineFollowerComponent.generated.h"

class AAIController;
class APawn;
class ARenegadeSplinePath;
class URenegadeCharacterVehicleComponent;

/**
 * NavMesh-driven spline route follower for combat AI.
 *
 * Add this component to any Pawn/Character blueprint possessed by an AIController.
 * It repeatedly asks the controller to move toward short look-ahead points on a spline.
 * Combat or any other AI system can claim movement ownership, use the controller, then release
 * ownership so the follower reacquires the route from the pawn's current world location.
 */
UCLASS(ClassGroup = (AI), BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class RENEGADESPLINEAI_API URenegadeSplineFollowerComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    URenegadeSplineFollowerComponent();

    // -------------------- Route assignment --------------------

    /** Route used when auto-starting. Can also be assigned at runtime. */
    UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Replicated, Category = "Renegade Spline AI|Route")
    TObjectPtr<ARenegadeSplinePath> AssignedPath;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Route")
    bool bAutoStart = false;

    /** Game-defined team ID. A path with an empty AllowedTeamIds array accepts every team. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Route")
    int32 TeamId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Route")
    ERenegadeSplineTravelDirection TravelDirection = ERenegadeSplineTravelDirection::Forward;

    /** Lateral offset from the spline, useful for several soldiers or vehicles sharing a route. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Route", meta = (ClampMin = "-2000.0", ClampMax = "2000.0", Units = "cm"))
    float LaneOffset = 0.0f;

    // -------------------- Movement --------------------

    /** Distance ahead of current route progress used as the next NavMesh goal. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement", meta = (ClampMin = "100.0", Units = "cm"))
    float LookAheadDistance = 600.0f;

    /** Minimum look-ahead used while recovering from failed move requests. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement", meta = (ClampMin = "50.0", Units = "cm"))
    float MinimumLookAheadDistance = 150.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement", meta = (ClampMin = "1.0", Units = "cm"))
    float AcceptanceRadius = 90.0f;

    /** Distance from the end of an open route at which it is considered complete. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement", meta = (ClampMin = "1.0", Units = "cm"))
    float RouteEndTolerance = 120.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement")
    bool bUsePathfinding = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement")
    bool bProjectGoalsToNavigation = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement")
    bool bAllowPartialPaths = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement")
    bool bCanStrafe = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement")
    bool bStopOnOverlap = true;

    /** Small delay between successful route segments. Zero gives continuous movement. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement", meta = (ClampMin = "0.0", Units = "s"))
    float SegmentDelay = 0.0f;

    // -------------------- Character vehicle integration --------------------

    /** Detect RenegadeCharacterVehicleComponent and automatically use its route-distance overrides. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle")
    bool bAutoDetectCharacterVehicle = true;

    /** Vehicle Character Blueprints are forced to non-strafing path requests. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle")
    bool bForceNoStrafeForCharacterVehicles = true;

    // -------------------- Recovery --------------------

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Recovery")
    ERenegadeSplineResumePolicy ResumePolicy = ERenegadeSplineResumePolicy::PreserveProgress;

    /** Maximum backwards route loss allowed by PreserveProgress on an open route. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Recovery", meta = (ClampMin = "0.0", Units = "cm"))
    float MaximumResumeBacktrack = 600.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Recovery", meta = (ClampMin = "0.05", Units = "s"))
    float FailedMoveRetryDelay = 0.35f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Recovery", meta = (ClampMin = "0", ClampMax = "100"))
    int32 MaximumConsecutiveMoveFailures = 5;

    // -------------------- Combat and external AI ownership --------------------

    /** Delay used when SetCombatActive(false) receives a negative ResumeDelayOverride. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Combat", meta = (ClampMin = "0.0", Units = "s"))
    float DefaultCombatResumeDelay = 0.6f;

    /** Default delay used when a non-combat external movement claim is released. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|External AI", meta = (ClampMin = "0.0", Units = "s"))
    float DefaultExternalResumeDelay = 0.35f;

    /** Automatically resume when the supplied combat target actor is destroyed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Combat")
    bool bResumeWhenCombatTargetDestroyed = true;

    /**
     * Optional fallback for plugins that interrupt MoveTo without claiming movement first.
     * Disabled by default because explicit claims are safer for long-running combat branches.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|External AI")
    bool bAutoResumeAfterUnexpectedExternalMove = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|External AI", meta = (EditCondition = "bAutoResumeAfterUnexpectedExternalMove", ClampMin = "0.0", Units = "s"))
    float UnexpectedExternalMoveResumeDelay = 0.5f;

    // -------------------- Debug and runtime state --------------------

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Debug")
    bool bDrawDebug = false;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_FollowState, Category = "Renegade Spline AI|State")
    ERenegadeSplineFollowState FollowState = ERenegadeSplineFollowState::Idle;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Renegade Spline AI|State")
    float CurrentDistanceAlongSpline = 0.0f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Renegade Spline AI|State")
    FVector CurrentMoveGoal = FVector::ZeroVector;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Renegade Spline AI|State")
    int32 ExternalMovementClaimCount = 0;

    UPROPERTY(BlueprintAssignable, Category = "Renegade Spline AI|Events")
    FRenegadeSplineStateChangedSignature OnFollowStateChanged;

    UPROPERTY(BlueprintAssignable, Category = "Renegade Spline AI|Events")
    FRenegadeSplineProgressSignature OnRouteProgress;

    UPROPERTY(BlueprintAssignable, Category = "Renegade Spline AI|Events")
    FRenegadeSplinePathSignature OnRouteCompleted;

    UPROPERTY(BlueprintAssignable, Category = "Renegade Spline AI|Events")
    FRenegadeSplineMoveFailureSignature OnMoveFailure;

    UPROPERTY(BlueprintAssignable, Category = "Renegade Spline AI|Events")
    FRenegadeSplineExternalControlSignature OnExternalMovementControlChanged;

    // -------------------- Blueprint API --------------------

    /** Assign and begin following a route. Runs on the authority/server. */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Control")
    bool StartFollowing(ARenegadeSplinePath* NewPath, bool bReacquireFromCurrentLocation = true);

    /** Stops issuing movement without entering combat. Assigned route is retained unless requested. */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Control")
    void StopFollowing(bool bClearAssignedPath = false);

    /** Immediately yields movement to combat logic. */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Combat")
    void PauseForCombat(AActor* CombatTarget = nullptr);

    /** Resumes route following, normally after combat or another external action ends. */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Control")
    bool ResumeFollowing(bool bReacquireFromCurrentLocation = true);

    /**
     * Convenience combat bridge used by RenegadeSoldierCombat, Behavior Trees, State Trees, or Blueprint AI.
     * Call true when an enemy is acquired. Call false when combat ends.
     * A negative ResumeDelayOverride uses DefaultCombatResumeDelay.
     */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Combat")
    void SetCombatActive(bool bCombatActive, AActor* CombatTarget = nullptr, float ResumeDelayOverride = -1.0f);

    /**
     * Claim controller movement for any external AI system. Claims are named and nest safely:
     * the route resumes only after every active source releases its claim.
     */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|External AI")
    bool AcquireExternalMovementClaim(FName SourceName, bool bStopCurrentMovement = true);

    /** Release one named external claim. A negative delay uses DefaultExternalResumeDelay. */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|External AI")
    bool ReleaseExternalMovementClaim(FName SourceName, bool bResumeWhenAllClaimsReleased = true, float ResumeDelayOverride = -1.0f);

    /** Convenience wrapper for Blueprint systems that expose one external-control boolean. */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|External AI")
    void SetExternalMovementActive(bool bExternalActive, FName SourceName, bool bStopCurrentMovement = true, float ResumeDelayOverride = -1.0f);

    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|External AI")
    bool HasExternalMovementClaims() const { return ExternalMovementClaims.Num() > 0; }

    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|External AI")
    TArray<FName> GetExternalMovementClaims() const;

    /** Projects the pawn's current location onto the assigned spline and updates progress. */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Recovery")
    bool ReacquireRouteFromCurrentLocation();

    /** Explicitly set progress, useful for spawning waves part-way along a route. */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Control")
    bool SetRouteDistance(float NewDistanceAlongSpline, bool bImmediatelyMove = true);

    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|State")
    bool IsActivelyFollowing() const;

    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|State")
    float GetNormalizedRouteProgress() const;

    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|State")
    AActor* GetCombatTarget() const { return ActiveCombatTarget.Get(); }

    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|Character Vehicle")
    URenegadeCharacterVehicleComponent* GetCharacterVehicleComponent() const;

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    static const FName CombatMovementClaimName;
    static const FName DefaultExternalMovementClaimName;

    TWeakObjectPtr<APawn> OwnerPawn;
    TWeakObjectPtr<AAIController> CachedAIController;
    TWeakObjectPtr<AActor> ActiveCombatTarget;
    mutable TWeakObjectPtr<URenegadeCharacterVehicleComponent> CachedCharacterVehicle;

    FDelegateHandle MoveFinishedDelegateHandle;
    FAIRequestID ActiveMoveRequestId;
    FTimerHandle NextMoveTimerHandle;
    FTimerHandle ResumeTimerHandle;
    FTimerHandle AutoStartTimerHandle;

    TSet<FName> ExternalMovementClaims;

    float LastCommittedDistance = 0.0f;
    float PendingTargetDistance = 0.0f;
    int32 ConsecutiveMoveFailures = 0;
    float AutoStartElapsed = 0.0f;
    bool bHasCommittedProgress = false;
    bool bRouteFollowingRequested = false;

    bool ResolveOwnerAndController();
    void BindMoveFinishedDelegate();
    void UnbindMoveFinishedDelegate();
    void ClearRuntimeTimers();
    void ScheduleNextMove(float DelaySeconds);
    void ScheduleResume(float DelaySeconds);
    void TryAutoStart();
    void IssueNextMove();
    void HandleMoveRequestFailure();
    void CompleteRoute();
    void SetFollowState(ERenegadeSplineFollowState NewState);
    void BroadcastProgress();
    void UnbindCombatTarget();
    void UpdatePausedStateFromClaims();
    FName NormalizeExternalSourceName(FName SourceName) const;
    bool HasCombatMovementClaim() const;
    void ClearVehicleSteeringTarget();
    void UpdateVehicleSteeringTarget();
    float GetEffectiveLookAheadDistance() const;
    float GetEffectiveAcceptanceRadius() const;
    float GetEffectiveRouteEndTolerance() const;
    float AdvanceDistance(float FromDistance, float DeltaDistance) const;
    bool IsAtEndOfOpenRoute(float DistanceAlongSpline) const;
    bool IsControllerMovementIdle() const;

    UFUNCTION()
    void HandleCombatTargetDestroyed(AActor* DestroyedActor);

    UFUNCTION()
    void ResumeAfterPauseDelay();

    UFUNCTION()
    void OnRep_FollowState(ERenegadeSplineFollowState PreviousState);

    void HandleMoveFinished(FAIRequestID RequestId, const FPathFollowingResult& Result);
};
