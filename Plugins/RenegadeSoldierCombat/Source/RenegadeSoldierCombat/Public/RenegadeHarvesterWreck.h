#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RenegadeHarvesterWreck.generated.h"

class UNiagaraSystem;
class UParticleSystem;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

/** Replicated lightweight Harvester wreck that persists independently of the respawned vehicle. */
UCLASS(BlueprintType)
class RENEGADESOLDIERCOMBAT_API ARenegadeHarvesterWreck : public AActor
{
    GENERATED_BODY()

public:
    ARenegadeHarvesterWreck();

    virtual void BeginPlay() override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Renegade NXT|Harvester Wreck")
    TObjectPtr<USceneComponent> WreckRoot;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Renegade NXT|Harvester Wreck")
    TObjectPtr<UStaticMeshComponent> WreckStaticMeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Renegade NXT|Harvester Wreck")
    TObjectPtr<USkeletalMeshComponent> WreckSkeletalMeshComponent;

    UPROPERTY(Replicated, BlueprintReadOnly, Category="Renegade NXT|Harvester Wreck")
    TObjectPtr<UStaticMesh> WreckStaticMesh;

    UPROPERTY(Replicated, BlueprintReadOnly, Category="Renegade NXT|Harvester Wreck")
    TObjectPtr<USkeletalMesh> WreckSkeletalMesh;

    UPROPERTY(Replicated, BlueprintReadOnly, Category="Renegade NXT|Harvester Wreck")
    FVector WreckRelativeLocation = FVector::ZeroVector;

    UPROPERTY(Replicated, BlueprintReadOnly, Category="Renegade NXT|Harvester Wreck")
    FRotator WreckRelativeRotation = FRotator::ZeroRotator;

    UPROPERTY(Replicated, BlueprintReadOnly, Category="Renegade NXT|Harvester Wreck")
    FVector WreckScale = FVector::OneVector;

    UPROPERTY(Replicated, BlueprintReadOnly, Category="Renegade NXT|Harvester Wreck")
    bool bEnableWreckCollision = false;

    UPROPERTY(Replicated, BlueprintReadOnly, Category="Renegade NXT|Harvester Wreck")
    FName WreckCollisionProfileName = TEXT("BlockAll");

    UPROPERTY(Replicated, BlueprintReadOnly, Category="Renegade NXT|Harvester Wreck|Smoke")
    TObjectPtr<UParticleSystem> SmokeCascade;

    UPROPERTY(Replicated, BlueprintReadOnly, Category="Renegade NXT|Harvester Wreck|Smoke")
    TObjectPtr<UNiagaraSystem> SmokeNiagara;

    UPROPERTY(Replicated, BlueprintReadOnly, Category="Renegade NXT|Harvester Wreck|Smoke")
    FVector SmokeRelativeLocation = FVector(0.0f, 0.0f, 80.0f);

    UPROPERTY(Replicated, BlueprintReadOnly, Category="Renegade NXT|Harvester Wreck", meta=(Units="s"))
    float CleanupSeconds = 90.0f;

private:
    void ApplyWreckPresentation();
    void SpawnSmokePresentation();
};
