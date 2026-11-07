#include "RenegadeSplinePath.h"

#include "Components/SplineComponent.h"

ARenegadeSplinePath::ARenegadeSplinePath()
{
    PrimaryActorTick.bCanEverTick = false;

    Spline = CreateDefaultSubobject<USplineComponent>(TEXT("RouteSpline"));
    SetRootComponent(Spline);
    Spline->SetClosedLoop(false);
}

float ARenegadeSplinePath::GetRouteLength() const
{
    return IsValid(Spline) ? Spline->GetSplineLength() : 0.0f;
}

bool ARenegadeSplinePath::IsClosedLoop() const
{
    return IsValid(Spline) && Spline->IsClosedLoop();
}

bool ARenegadeSplinePath::IsTeamAllowed(const int32 TeamId) const
{
    return bRouteEnabled && (AllowedTeamIds.IsEmpty() || AllowedTeamIds.Contains(TeamId));
}

float ARenegadeSplinePath::GetClosestDistanceAlongRoute(const FVector& WorldLocation) const
{
    if (!IsValid(Spline))
    {
        return 0.0f;
    }

    return Spline->GetDistanceAlongSplineAtLocation(WorldLocation, ESplineCoordinateSpace::World);
}

FVector ARenegadeSplinePath::GetRouteLocationAtDistance(const float DistanceAlongSpline, const float LateralOffset) const
{
    if (!IsValid(Spline))
    {
        return GetActorLocation();
    }

    const float Length = Spline->GetSplineLength();
    float SafeDistance = DistanceAlongSpline;

    if (Spline->IsClosedLoop() && Length > UE_KINDA_SMALL_NUMBER)
    {
        SafeDistance = FMath::Fmod(SafeDistance, Length);
        if (SafeDistance < 0.0f)
        {
            SafeDistance += Length;
        }
    }
    else
    {
        SafeDistance = FMath::Clamp(SafeDistance, 0.0f, Length);
    }

    const FVector BaseLocation = Spline->GetLocationAtDistanceAlongSpline(
        SafeDistance,
        ESplineCoordinateSpace::World);

    const FVector RightVector = Spline->GetRightVectorAtDistanceAlongSpline(
        SafeDistance,
        ESplineCoordinateSpace::World);

    return BaseLocation + (RightVector * LateralOffset);
}
