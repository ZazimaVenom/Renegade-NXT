#include "RenegadeHarvestPoint.h"

#include "RenegadeHarvesterCombatComponent.h"

#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

namespace RenegadeHarvestPointPrivate
{
    bool IsNeutralTeam(const FName Team)
    {
        return Team.IsNone()
            || Team.IsEqual(FName(TEXT("Neutral")), ENameCase::IgnoreCase)
            || Team.IsEqual(FName(TEXT("None")), ENameCase::IgnoreCase);
    }
}

ARenegadeHarvestPoint::ARenegadeHarvestPoint()
{
    bReplicates = true;
    SetReplicateMovement(false);

    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    SetRootComponent(SceneRoot);

    InteractionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("HarvestInteraction"));
    InteractionSphere->SetupAttachment(SceneRoot);
    InteractionSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    InteractionSphere->SetGenerateOverlapEvents(false);
    InteractionSphere->SetSphereRadius(InteractionRadius);
}

void ARenegadeHarvestPoint::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
    if (IsValid(InteractionSphere))
    {
        InteractionSphere->SetSphereRadius(FMath::Max(25.0f, InteractionRadius));
    }
}

void ARenegadeHarvestPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(ARenegadeHarvestPoint, TeamId);
    DOREPLIFETIME(ARenegadeHarvestPoint, bHarvestPointEnabled);
    DOREPLIFETIME(ARenegadeHarvestPoint, ReservedHarvester);
}

FVector ARenegadeHarvestPoint::GetHarvestLocation() const
{
    return GetActorTransform().TransformPositionNoScale(HarvestLocationOffset);
}

bool ARenegadeHarvestPoint::IsCompatibleWithTeam(const FName HarvesterTeamId) const
{
    if (!bHarvestPointEnabled)
    {
        return false;
    }
    if (RenegadeHarvestPointPrivate::IsNeutralTeam(TeamId))
    {
        return true;
    }
    return !HarvesterTeamId.IsNone() && TeamId.IsEqual(HarvesterTeamId, ENameCase::IgnoreCase);
}

bool ARenegadeHarvestPoint::CanBeUsedByHarvester(const AActor* Harvester) const
{
    if (!bHarvestPointEnabled || !IsValid(Harvester))
    {
        return false;
    }
    return !bExclusiveReservation || !IsValid(ReservedHarvester) || ReservedHarvester == Harvester;
}

bool ARenegadeHarvestPoint::TryReserve(AActor* Harvester)
{
    if (!HasAuthority() || !CanBeUsedByHarvester(Harvester))
    {
        return false;
    }
    if (!bExclusiveReservation)
    {
        return true;
    }
    if (ReservedHarvester == Harvester)
    {
        return true;
    }

    AActor* Previous = ReservedHarvester;
    ReservedHarvester = Harvester;
    OnReservationChanged.Broadcast(Previous, ReservedHarvester);
    ForceNetUpdate();
    return true;
}

void ARenegadeHarvestPoint::ReleaseReservation(AActor* Harvester)
{
    if (!HasAuthority() || !bExclusiveReservation || !IsValid(ReservedHarvester))
    {
        return;
    }
    if (IsValid(Harvester) && ReservedHarvester != Harvester)
    {
        return;
    }

    AActor* Previous = ReservedHarvester;
    ReservedHarvester = nullptr;
    OnReservationChanged.Broadcast(Previous, nullptr);
    ForceNetUpdate();
}

void ARenegadeHarvestPoint::NotifyHarvesterArrived(AActor* Harvester)
{
    if (!HasAuthority() || !IsValid(Harvester))
    {
        return;
    }

    if (URenegadeHarvesterCombatComponent* HarvesterCombat = Harvester->FindComponentByClass<URenegadeHarvesterCombatComponent>())
    {
        HarvesterCombat->SetAssignedHarvestPoint(this);
        HarvesterCombat->ArrivedAtHarvestPoint();
        return;
    }

    OnHarvesterArrived.Broadcast(Harvester);
}

void ARenegadeHarvestPoint::NotifyHarvestingStarted(AActor* Harvester)
{
    if (HasAuthority() && IsValid(Harvester))
    {
        OnHarvestingStarted.Broadcast(Harvester);
    }
}

void ARenegadeHarvestPoint::NotifyHarvestingEnded(AActor* Harvester)
{
    if (HasAuthority() && IsValid(Harvester))
    {
        OnHarvestingEnded.Broadcast(Harvester);
    }
}

void ARenegadeHarvestPoint::OnRep_ReservedHarvester(AActor* PreviousHarvester)
{
    OnReservationChanged.Broadcast(PreviousHarvester, ReservedHarvester);
}
