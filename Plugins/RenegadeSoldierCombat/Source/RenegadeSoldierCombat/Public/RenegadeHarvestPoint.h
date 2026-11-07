#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RenegadeHarvestPoint.generated.h"

class USceneComponent;
class USphereComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRenegadeHarvestPointReservationChangedSignature, AActor*, PreviousHarvester, AActor*, NewHarvester);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRenegadeHarvestPointHarvesterSignature, AActor*, Harvester);

/**
 * Placeable Tiberium/resource-field destination for Renegade NXT Harvesters.
 * The Harvester remains on its spline until it enters ApproachRadius, then its combat component can
 * temporarily claim movement and drive to this actor's interaction point for the timed harvest cycle.
 */
UCLASS(BlueprintType, Blueprintable)
class RENEGADESOLDIERCOMBAT_API ARenegadeHarvestPoint : public AActor
{
    GENERATED_BODY()

public:
    ARenegadeHarvestPoint();

    virtual void OnConstruction(const FTransform& Transform) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Renegade NXT|Harvest Point")
    TObjectPtr<USceneComponent> SceneRoot;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Renegade NXT|Harvest Point")
    TObjectPtr<USphereComponent> InteractionSphere;

    /** None/Neutral accepts any Harvester team. Otherwise only matching TeamId Harvesters use this point. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category="Renegade NXT|Harvest Point|Team")
    FName TeamId = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category="Renegade NXT|Harvest Point")
    bool bHarvestPointEnabled = true;

    /** Harvester stays on the spline until it comes within this radius. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvest Point|Movement", meta=(ClampMin="100.0", Units="cm"))
    float ApproachRadius = 1600.0f;

    /** Distance at which the Harvester is considered physically at the field and may begin its arrival delay. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvest Point|Movement", meta=(ClampMin="25.0", Units="cm"))
    float InteractionRadius = 180.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvest Point|Movement")
    FVector HarvestLocationOffset = FVector::ZeroVector;

    /** Optional logical tag used when a Harvester/Refinery auto-selects a field. None accepts any tag. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvest Point|Selection")
    FName HarvestPointGroup = NAME_None;

    /** Prevents several Harvesters from trying to occupy the same interaction location simultaneously. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvest Point|Reservation")
    bool bExclusiveReservation = true;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ReservedHarvester, Category="Renegade NXT|Harvest Point|Runtime")
    TObjectPtr<AActor> ReservedHarvester;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvest Point|Events")
    FRenegadeHarvestPointReservationChangedSignature OnReservationChanged;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvest Point|Events")
    FRenegadeHarvestPointHarvesterSignature OnHarvesterArrived;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvest Point|Events")
    FRenegadeHarvestPointHarvesterSignature OnHarvestingStarted;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvest Point|Events")
    FRenegadeHarvestPointHarvesterSignature OnHarvestingEnded;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvest Point")
    FVector GetHarvestLocation() const;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvest Point")
    bool IsCompatibleWithTeam(FName HarvesterTeamId) const;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvest Point")
    bool CanBeUsedByHarvester(const AActor* Harvester) const;

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvest Point|Reservation")
    bool TryReserve(AActor* Harvester);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvest Point|Reservation")
    void ReleaseReservation(AActor* Harvester);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvest Point|Lifecycle")
    void NotifyHarvesterArrived(AActor* Harvester);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvest Point|Lifecycle")
    void NotifyHarvestingStarted(AActor* Harvester);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvest Point|Lifecycle")
    void NotifyHarvestingEnded(AActor* Harvester);

protected:
    UFUNCTION()
    void OnRep_ReservedHarvester(AActor* PreviousHarvester);
};
