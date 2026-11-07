#include "RenegadeRefineryDockPoint.h"

#include "RenegadeBuildingCombatComponent.h"
#include "RenegadeHarvesterCombatComponent.h"

#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

ARenegadeRefineryDockPoint::ARenegadeRefineryDockPoint()
{
    bReplicates = true;
    SetReplicateMovement(false);

    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    RootComponent = SceneRoot;

    InteractionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionSphere"));
    InteractionSphere->SetupAttachment(SceneRoot);
    InteractionSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    InteractionSphere->SetGenerateOverlapEvents(false);
    InteractionSphere->SetSphereRadius(InteractionRadius);
}

void ARenegadeRefineryDockPoint::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
    if (InteractionSphere)
    {
        InteractionSphere->SetSphereRadius(FMath::Max(25.0f, InteractionRadius));
    }
}

void ARenegadeRefineryDockPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(ARenegadeRefineryDockPoint, TeamId);
    DOREPLIFETIME(ARenegadeRefineryDockPoint, bDockPointEnabled);
    DOREPLIFETIME(ARenegadeRefineryDockPoint, OwningRefineryActor);
    DOREPLIFETIME(ARenegadeRefineryDockPoint, ReservedHarvester);
}

FTransform ARenegadeRefineryDockPoint::GetDockTransform() const
{
    const FTransform BaseTransform = GetActorTransform();
    const FVector WorldLocation = BaseTransform.TransformPositionNoScale(DockLocationOffset);
    const FRotator WorldRotation = (BaseTransform.GetRotation() * DockRotationOffset.Quaternion()).Rotator();
    return FTransform(WorldRotation, WorldLocation, FVector::OneVector);
}

bool ARenegadeRefineryDockPoint::IsCompatibleWithTeam(const FName HarvesterTeamId) const
{
    if (!bDockPointEnabled)
    {
        return false;
    }
    const bool bPointNeutral = TeamId.IsNone() || TeamId.IsEqual(FName(TEXT("Neutral")), ENameCase::IgnoreCase);
    const bool bHarvesterNeutral = HarvesterTeamId.IsNone() || HarvesterTeamId.IsEqual(FName(TEXT("Neutral")), ENameCase::IgnoreCase);
    return bPointNeutral || (!bHarvesterNeutral && TeamId.IsEqual(HarvesterTeamId, ENameCase::IgnoreCase));
}

bool ARenegadeRefineryDockPoint::CanBeUsedByHarvester(const AActor* Harvester) const
{
    if (!bDockPointEnabled || !IsValid(Harvester))
    {
        return false;
    }
    return !bExclusiveReservation || !IsValid(ReservedHarvester) || ReservedHarvester == Harvester;
}

bool ARenegadeRefineryDockPoint::TryReserve(AActor* Harvester)
{
    if (!HasAuthority() || !CanBeUsedByHarvester(Harvester))
    {
        return false;
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

void ARenegadeRefineryDockPoint::ReleaseReservation(AActor* Harvester)
{
    if (!HasAuthority() || !IsValid(ReservedHarvester) || (IsValid(Harvester) && ReservedHarvester != Harvester))
    {
        return;
    }
    AActor* Previous = ReservedHarvester;
    ReservedHarvester = nullptr;
    OnReservationChanged.Broadcast(Previous, nullptr);
    ForceNetUpdate();
}

void ARenegadeRefineryDockPoint::SetOwningRefineryActor(AActor* NewRefineryActor)
{
    if (!HasAuthority())
    {
        return;
    }
    OwningRefineryActor = NewRefineryActor;
    ForceNetUpdate();
}

void ARenegadeRefineryDockPoint::NotifyHarvesterApproachStarted(AActor* Harvester)
{
    if (HasAuthority() && IsValid(Harvester))
    {
        OnHarvesterApproachStarted.Broadcast(Harvester);
    }
}

void ARenegadeRefineryDockPoint::NotifyHarvesterDocked(AActor* Harvester)
{
    if (!HasAuthority() || !IsValid(Harvester))
    {
        return;
    }

    if (URenegadeHarvesterCombatComponent* HarvesterCombat = Harvester->FindComponentByClass<URenegadeHarvesterCombatComponent>())
    {
        HarvesterCombat->SetAssignedRefineryDockPoint(this);
        if (!IsValid(HarvesterCombat->GetOwningRefinery()) && IsValid(OwningRefineryActor))
        {
            if (URenegadeBuildingCombatComponent* RefineryCombat = OwningRefineryActor->FindComponentByClass<URenegadeBuildingCombatComponent>())
            {
                HarvesterCombat->SetOwningRefinery(RefineryCombat);
            }
        }
        HarvesterCombat->ArrivedAtRefineryDockPoint();
        return;
    }

    OnHarvesterDocked.Broadcast(Harvester);
}

void ARenegadeRefineryDockPoint::NotifyHarvesterUndocked(AActor* Harvester)
{
    if (HasAuthority() && IsValid(Harvester))
    {
        OnHarvesterUndocked.Broadcast(Harvester);
    }
}

void ARenegadeRefineryDockPoint::OnRep_ReservedHarvester(AActor* PreviousHarvester)
{
    OnReservationChanged.Broadcast(PreviousHarvester, ReservedHarvester);
}
