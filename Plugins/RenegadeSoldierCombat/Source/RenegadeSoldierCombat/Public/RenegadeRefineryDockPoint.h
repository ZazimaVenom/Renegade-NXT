#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RenegadeRefineryDockPoint.generated.h"

class USceneComponent;
class USphereComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRenegadeRefineryDockReservationChangedSignature, AActor*, PreviousHarvester, AActor*, NewHarvester);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRenegadeRefineryDockHarvesterSignature, AActor*, Harvester);

/**
 * Placeable final docking destination for a Renegade NXT Refinery Harvester.
 * With Spline AI, the route remains responsible for long-distance travel and this actor owns only the final approach.
 * Without a usable spline route, Harvester Combat can navigate directly between this Dock Point and its Harvest Point.
 */
UCLASS(BlueprintType, Blueprintable)
class RENEGADESOLDIERCOMBAT_API ARenegadeRefineryDockPoint : public AActor
{
    GENERATED_BODY()

public:
    ARenegadeRefineryDockPoint();

    virtual void OnConstruction(const FTransform& Transform) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Renegade NXT|Refinery Dock Point")
    TObjectPtr<USceneComponent> SceneRoot;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Renegade NXT|Refinery Dock Point")
    TObjectPtr<USphereComponent> InteractionSphere;

    /** None/Neutral accepts any Harvester team. Otherwise only matching TeamId Harvesters use this dock. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category="Renegade NXT|Refinery Dock Point|Team")
    FName TeamId = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category="Renegade NXT|Refinery Dock Point")
    bool bDockPointEnabled = true;

    /** Long-route travel hands off to final dock movement when the Harvester enters this radius. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Refinery Dock Point|Movement", meta=(ClampMin="100.0", Units="cm"))
    float ApproachRadius = 1600.0f;

    /** Distance at which the Harvester is considered docked and may start its unload delay. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Refinery Dock Point|Movement", meta=(ClampMin="25.0", Units="cm"))
    float InteractionRadius = 180.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Refinery Dock Point|Movement")
    FVector DockLocationOffset = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Refinery Dock Point|Movement")
    FRotator DockRotationOffset = FRotator::ZeroRotator;

    /** Optional logical tag used by Refinery/Harvester automatic dock lookup. None accepts any group. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Refinery Dock Point|Selection")
    FName DockPointGroup = NAME_None;

    /** Normally enabled so two Harvesters do not attempt to occupy one unloading bay. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Refinery Dock Point|Reservation")
    bool bExclusiveReservation = true;

    /** Refinery that owns this dock. The Refinery spawner sets this automatically when it resolves the point. */
    UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Replicated, Category="Renegade NXT|Refinery Dock Point|Ownership")
    TObjectPtr<AActor> OwningRefineryActor;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ReservedHarvester, Category="Renegade NXT|Refinery Dock Point|Runtime")
    TObjectPtr<AActor> ReservedHarvester;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Refinery Dock Point|Events")
    FRenegadeRefineryDockReservationChangedSignature OnReservationChanged;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Refinery Dock Point|Events")
    FRenegadeRefineryDockHarvesterSignature OnHarvesterApproachStarted;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Refinery Dock Point|Events")
    FRenegadeRefineryDockHarvesterSignature OnHarvesterDocked;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Refinery Dock Point|Events")
    FRenegadeRefineryDockHarvesterSignature OnHarvesterUndocked;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Refinery Dock Point")
    FTransform GetDockTransform() const;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Refinery Dock Point")
    bool IsCompatibleWithTeam(FName HarvesterTeamId) const;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Refinery Dock Point")
    bool CanBeUsedByHarvester(const AActor* Harvester) const;

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Refinery Dock Point|Reservation")
    bool TryReserve(AActor* Harvester);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Refinery Dock Point|Reservation")
    void ReleaseReservation(AActor* Harvester);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Refinery Dock Point|Ownership")
    void SetOwningRefineryActor(AActor* NewRefineryActor);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Refinery Dock Point|Lifecycle")
    void NotifyHarvesterApproachStarted(AActor* Harvester);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Refinery Dock Point|Lifecycle")
    void NotifyHarvesterDocked(AActor* Harvester);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Refinery Dock Point|Lifecycle")
    void NotifyHarvesterUndocked(AActor* Harvester);

protected:
    UFUNCTION()
    void OnRep_ReservedHarvester(AActor* PreviousHarvester);
};
