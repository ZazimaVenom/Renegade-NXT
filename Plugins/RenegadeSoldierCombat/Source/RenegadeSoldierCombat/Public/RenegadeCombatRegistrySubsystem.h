#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RenegadeCombatRegistrySubsystem.generated.h"

class AActor;
class UAudioComponent;
class URenegadeBuildingCombatComponent;
class URenegadeSoldierCombatComponent;
class URenegadeHarvesterCombatComponent;
class ARenegadeTeamCreditsManager;
class USoundAttenuation;
class USoundBase;
class USoundConcurrency;

UCLASS()
class RENEGADESOLDIERCOMBAT_API URenegadeCombatRegistrySubsystem : public UWorldSubsystem
{
    GENERATED_BODY()

public:
    void RegisterCombatant(URenegadeSoldierCombatComponent* Combatant);
    void UnregisterCombatant(URenegadeSoldierCombatComponent* Combatant);
    void GetCombatants(TArray<URenegadeSoldierCombatComponent*>& OutCombatants);

    void RegisterBuilding(URenegadeBuildingCombatComponent* Building);
    void UnregisterBuilding(URenegadeBuildingCombatComponent* Building);
    void GetBuildings(TArray<URenegadeBuildingCombatComponent*>& OutBuildings);

    void RegisterHarvester(URenegadeHarvesterCombatComponent* Harvester);
    void UnregisterHarvester(URenegadeHarvesterCombatComponent* Harvester);
    void GetHarvesters(TArray<URenegadeHarvesterCombatComponent*>& OutHarvesters);

    /** Returns the one replicated match-wide credit bank. Authority may create it on demand. */
    ARenegadeTeamCreditsManager* GetTeamCreditsManager(bool bSpawnIfMissing = true);

    /** Returns true when at least one live team Power Plant exists, or when no Power Plant exists and the caller allows that fallback. */
    bool IsTeamPowerOnline(FName TeamId, bool bTreatMissingPowerPlantAsPowered) const;

    /**
     * Plays one serialized building EVA/CABAL announcement per listening world/client.
     * Higher-priority announcements (low health and destruction) may interrupt lower-priority warnings.
     */
    bool TryPlayGlobalBuildingEvaSound(
        USoundBase* Sound,
        const FVector& Location,
        float VolumeMultiplier,
        float PitchMultiplier,
        float QuietTimeAfterSound,
        USoundAttenuation* Attenuation,
        USoundConcurrency* Concurrency,
        AActor* OwningActor,
        int32 Priority,
        bool bInterruptLowerPriority = true);

    /** Backward-compatible under-attack wrapper. */
    bool TryPlayGlobalBuildingUnderAttackSound(
        USoundBase* Sound,
        const FVector& Location,
        float VolumeMultiplier,
        float PitchMultiplier,
        float QuietTimeAfterSound,
        USoundAttenuation* Attenuation,
        USoundConcurrency* Concurrency,
        AActor* OwningActor);

private:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<URenegadeSoldierCombatComponent>> RegisteredCombatants;

    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<URenegadeBuildingCombatComponent>> RegisteredBuildings;

    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<URenegadeHarvesterCombatComponent>> RegisteredHarvesters;

    UPROPERTY(Transient)
    TObjectPtr<ARenegadeTeamCreditsManager> CachedTeamCreditsManager;

    UPROPERTY(Transient)
    TObjectPtr<UAudioComponent> ActiveBuildingEvaAudio;

    double NextBuildingEvaAudioTime = -BIG_NUMBER;
    int32 ActiveBuildingEvaPriority = INDEX_NONE;
};
