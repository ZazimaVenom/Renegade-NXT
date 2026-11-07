#pragma once

#include "CoreMinimal.h"
#include "RenegadeSplineAITypes.generated.h"

/** Runtime state of a spline follower. Existing values are kept stable for saved Blueprints. */
UENUM(BlueprintType)
enum class ERenegadeSplineFollowState : uint8
{
    Disabled        UMETA(DisplayName = "Disabled"),
    Idle            UMETA(DisplayName = "Idle"),
    Reacquiring     UMETA(DisplayName = "Reacquiring Route"),
    Following       UMETA(DisplayName = "Following Route"),
    CombatPaused    UMETA(DisplayName = "Paused For Combat"),
    Suspended       UMETA(DisplayName = "Suspended By External Movement"),
    Blocked         UMETA(DisplayName = "Blocked"),
    Completed       UMETA(DisplayName = "Completed"),
    ExternalPaused  UMETA(DisplayName = "Paused For External AI")
};

/** Direction in which a pawn travels along an authored spline. */
UENUM(BlueprintType)
enum class ERenegadeSplineTravelDirection : uint8
{
    Forward UMETA(DisplayName = "Forward"),
    Reverse UMETA(DisplayName = "Reverse")
};

/** How route progress is reconstructed after combat or displacement. */
UENUM(BlueprintType)
enum class ERenegadeSplineResumePolicy : uint8
{
    /** Resume from the geometrically closest point on the route. */
    ClosestPoint UMETA(DisplayName = "Closest Point"),

    /** Resume near the closest point, but limit accidental backwards progress on open routes. */
    PreserveProgress UMETA(DisplayName = "Preserve Progress")
};

/** Starting configurations for Character Blueprints that visually represent vehicles. */
UENUM(BlueprintType)
enum class ERenegadeCharacterVehiclePreset : uint8
{
    LightTracked UMETA(DisplayName = "Light Tracked Vehicle"),
    HeavyTracked UMETA(DisplayName = "Heavy Tank"),
    Harvester    UMETA(DisplayName = "Harvester / Heavy Utility"),
    Custom       UMETA(DisplayName = "Custom")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
    FRenegadeSplineStateChangedSignature,
    ERenegadeSplineFollowState, PreviousState,
    ERenegadeSplineFollowState, NewState);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
    FRenegadeSplineProgressSignature,
    float, DistanceAlongSpline,
    float, NormalizedProgress);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
    FRenegadeSplinePathSignature,
    class ARenegadeSplinePath*, Path);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
    FRenegadeSplineMoveFailureSignature,
    int32, ConsecutiveFailures,
    FVector, FailedGoalLocation);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
    FRenegadeSplineExternalControlSignature,
    FName, SourceName,
    bool, bActive,
    int32, ActiveClaimCount);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(
    FRenegadeCharacterVehicleDriveSignature,
    float, Throttle,
    float, Steering,
    float, SpeedKPH,
    bool, bPivotTurning);
