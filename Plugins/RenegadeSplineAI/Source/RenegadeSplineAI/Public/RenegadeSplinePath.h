#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RenegadeSplinePath.generated.h"

class USplineComponent;

/**
 * An authored route for infantry, Character-based vehicles, or other AI-controlled pawns.
 * The spline is only a route guide. Followers navigate on the NavMesh and are never attached to it.
 */
UCLASS(BlueprintType, Blueprintable)
class RENEGADESPLINEAI_API ARenegadeSplinePath : public AActor
{
    GENERATED_BODY()

public:
    ARenegadeSplinePath();

    /** Editable route spline. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Renegade Spline AI")
    TObjectPtr<USplineComponent> Spline;

    /** Optional logical group, such as GDI_MainLane, Nod_Tunnel, or Neutral_Defence. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Routing")
    FName RouteGroup = NAME_None;

    /** Empty means all teams are allowed. Team IDs are game-defined integers. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Routing")
    TArray<int32> AllowedTeamIds;

    /** Disable a route without deleting it or changing follower blueprints. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Routing")
    bool bRouteEnabled = true;

    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|Path")
    USplineComponent* GetSplineComponent() const { return Spline; }

    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|Path")
    float GetRouteLength() const;

    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|Path")
    bool IsClosedLoop() const;

    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|Path")
    bool IsTeamAllowed(int32 TeamId) const;

    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|Path")
    float GetClosestDistanceAlongRoute(const FVector& WorldLocation) const;

    /** Returns a route location with an optional lateral lane offset. */
    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|Path")
    FVector GetRouteLocationAtDistance(float DistanceAlongSpline, float LateralOffset = 0.0f) const;
};
