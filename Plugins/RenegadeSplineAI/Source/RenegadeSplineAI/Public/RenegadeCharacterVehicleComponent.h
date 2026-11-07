#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RenegadeSplineAITypes.h"
#include "RenegadeCharacterVehicleComponent.generated.h"

class ACharacter;
class UCharacterMovementComponent;

/**
 * Vehicle-like locomotion adapter for an ACharacter-based Blueprint.
 *
 * This is intentionally not a wheeled/Chaos vehicle. The owner remains a normal Character so it
 * can use NavMesh, AAIController MoveTo, CharacterMovement replication, and existing combat AI.
 * The adapter adds controlled yaw, acceleration/braking, corner speed reduction, pivot turning,
 * and lateral-slip damping so a tank or harvester does not move like an infantry character.
 */
UCLASS(ClassGroup = (AI), BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class RENEGADESPLINEAI_API URenegadeCharacterVehicleComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    URenegadeCharacterVehicleComponent();

    // -------------------- Profile --------------------

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle")
    ERenegadeCharacterVehiclePreset VehiclePreset = ERenegadeCharacterVehiclePreset::HeavyTracked;

    /** Apply the selected preset during BeginPlay. Custom preserves all manually entered values. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle")
    bool bAutoApplyPreset = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Renegade Spline AI|Character Vehicle")
    bool bDriveEnabled = true;

    /** Restore CharacterMovement and Character rotation settings when the component ends play. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle")
    bool bRestoreOriginalSettingsOnEndPlay = true;

    // -------------------- Speed and handling --------------------

    /** Maximum straight-line speed. 100 cm/s equals 3.6 km/h. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Handling", meta = (ClampMin = "1.0", Units = "cm/s"))
    float CruiseSpeed = 550.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Handling", meta = (ClampMin = "0.0", Units = "cm/s^2"))
    float Acceleration = 360.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Handling", meta = (ClampMin = "0.0", Units = "cm/s^2"))
    float BrakingDeceleration = 650.0f;

    /** Lower values feel heavier/slipperier. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Handling", meta = (ClampMin = "0.0"))
    float GroundFriction = 2.2f;

    /** Maximum body yaw rate during normal driving. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Steering", meta = (ClampMin = "1.0", Units = "deg/s"))
    float MaximumYawRate = 48.0f;

    /** Begin reducing speed when the requested path direction exceeds this heading error. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Steering", meta = (ClampMin = "0.0", ClampMax = "179.0", Units = "deg"))
    float TurnSlowdownStartAngle = 22.0f;

    /** Lowest speed allowed during an ordinary corner. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Steering", meta = (ClampMin = "0.0", Units = "cm/s"))
    float MinimumCornerSpeed = 120.0f;

    /** Tracked vehicles can rotate their body almost in place for severe heading errors. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Pivot Turn")
    bool bAllowPivotTurn = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Pivot Turn", meta = (EditCondition = "bAllowPivotTurn", ClampMin = "1.0", ClampMax = "179.0", Units = "deg"))
    float PivotTurnStartAngle = 68.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Pivot Turn", meta = (EditCondition = "bAllowPivotTurn", ClampMin = "1.0", Units = "deg/s"))
    float PivotYawRate = 62.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Pivot Turn", meta = (EditCondition = "bAllowPivotTurn", ClampMin = "0.0", Units = "cm/s"))
    float PivotMaximumSpeed = 45.0f;

    /** Permit reverse body motion. Disabled makes the Character turn before driving forward. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Handling")
    bool bAllowReverseMotion = false;

    /** Exponential damping applied to sideways velocity. Higher values remove infantry-style strafing faster. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Handling", meta = (ClampMin = "0.0"))
    float LateralGrip = 7.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Avoidance")
    bool bUseRVOAvoidance = true;

    // -------------------- Spline recommendations --------------------

    /** Let RenegadeSplineFollower automatically use these larger vehicle-friendly distances. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Spline")
    bool bOverrideSplineFollowerDistances = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Spline", meta = (ClampMin = "100.0", Units = "cm"))
    float RecommendedSplineLookAheadDistance = 1000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Spline", meta = (ClampMin = "1.0", Units = "cm"))
    float RecommendedAcceptanceRadius = 180.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Character Vehicle|Spline", meta = (ClampMin = "1.0", Units = "cm"))
    float RecommendedRouteEndTolerance = 260.0f;

    // -------------------- Runtime state --------------------

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Renegade Spline AI|Character Vehicle|State")
    float CurrentThrottle = 0.0f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Renegade Spline AI|Character Vehicle|State")
    float CurrentSteering = 0.0f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Renegade Spline AI|Character Vehicle|State")
    float CurrentSpeedKPH = 0.0f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Renegade Spline AI|Character Vehicle|State")
    bool bIsPivotTurning = false;

    /** Bind this to track scrolling, wheel rotation, engine sound, dust, or vehicle animation logic. */
    UPROPERTY(BlueprintAssignable, Category = "Renegade Spline AI|Character Vehicle|Events")
    FRenegadeCharacterVehicleDriveSignature OnVehicleDriveUpdated;

    // -------------------- Blueprint API --------------------

    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Character Vehicle")
    void ApplyVehiclePreset();

    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Character Vehicle")
    void SetDriveEnabled(bool bEnabled, bool bStopImmediately = true);

    /** Optional steering hint. Active AI path-following direction still has priority for obstacle detours. */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Character Vehicle")
    void SetSteeringTarget(FVector WorldTarget);

    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Character Vehicle")
    void ClearSteeringTarget();

    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|Character Vehicle")
    bool IsCharacterVehicleReady() const;

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    TWeakObjectPtr<ACharacter> OwnerCharacter;
    TWeakObjectPtr<UCharacterMovementComponent> CharacterMovement;

    FVector SteeringTarget = FVector::ZeroVector;
    bool bHasSteeringTarget = false;
    bool bOriginalSettingsCaptured = false;

    float OriginalMaxWalkSpeed = 0.0f;
    float OriginalMaxAcceleration = 0.0f;
    float OriginalBrakingDeceleration = 0.0f;
    float OriginalGroundFriction = 0.0f;
    float OriginalBrakingFriction = 0.0f;
    float OriginalBrakingFrictionFactor = 0.0f;
    bool bOriginalUseSeparateBrakingFriction = false;
    bool bOriginalRequestedMoveUseAcceleration = false;
    bool bOriginalOrientRotationToMovement = false;
    bool bOriginalUseControllerDesiredRotation = false;
    bool bOriginalUseRVOAvoidance = false;
    bool bOriginalUseControllerRotationYaw = false;

    bool ResolveCharacterAndMovement();
    void CaptureOriginalSettings();
    void ApplyMovementConfiguration();
    void RestoreOriginalSettings();
    FVector ResolveDesiredDriveDirection() const;
    float ComputeCornerLimitedSpeed(float AbsoluteHeadingError) const;
    void UpdateDriveTelemetry(float ForwardSpeed, float SteeringValue, bool bPivoting);
};
