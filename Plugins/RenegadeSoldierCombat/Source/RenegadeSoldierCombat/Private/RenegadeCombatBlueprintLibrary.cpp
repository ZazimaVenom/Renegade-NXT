#include "RenegadeCombatBlueprintLibrary.h"
#include "GameFramework/Actor.h"
#include "RenegadeBuildingCombatComponent.h"
#include "RenegadeHarvesterCombatComponent.h"
#include "RenegadeCombatRegistrySubsystem.h"
#include "RenegadeTeamCreditsManager.h"
#include "Engine/World.h"
#include "RenegadeSoldierCombatComponent.h"

URenegadeSoldierCombatComponent* URenegadeCombatBlueprintLibrary::GetRenegadeCombatComponent(const AActor* Actor)
{
    return Actor ? Actor->FindComponentByClass<URenegadeSoldierCombatComponent>() : nullptr;
}

URenegadeBuildingCombatComponent* URenegadeCombatBlueprintLibrary::GetRenegadeBuildingCombatComponent(const AActor* Actor)
{
    return Actor ? Actor->FindComponentByClass<URenegadeBuildingCombatComponent>() : nullptr;
}

URenegadeHarvesterCombatComponent* URenegadeCombatBlueprintLibrary::GetRenegadeHarvesterCombatComponent(const AActor* Actor)
{
    return Actor ? Actor->FindComponentByClass<URenegadeHarvesterCombatComponent>() : nullptr;
}

bool URenegadeCombatBlueprintLibrary::AreRenegadeActorsHostile(const AActor* FirstActor, const AActor* SecondActor)
{
    if (const URenegadeSoldierCombatComponent* FirstCombat = GetRenegadeCombatComponent(FirstActor))
    {
        return FirstCombat->IsHostileToActor(SecondActor);
    }

    if (const URenegadeHarvesterCombatComponent* FirstHarvester = GetRenegadeHarvesterCombatComponent(FirstActor))
    {
        return FirstHarvester->IsHostileToActor(SecondActor);
    }

    if (const URenegadeBuildingCombatComponent* FirstBuilding = GetRenegadeBuildingCombatComponent(FirstActor))
    {
        return FirstBuilding->IsHostileToActor(SecondActor);
    }

    return false;
}

FName URenegadeCombatBlueprintLibrary::GetRenegadeTeamId(const AActor* Actor)
{
    if (const URenegadeSoldierCombatComponent* Combat = GetRenegadeCombatComponent(Actor))
    {
        return Combat->TeamId;
    }

    if (const URenegadeHarvesterCombatComponent* Harvester = GetRenegadeHarvesterCombatComponent(Actor))
    {
        return Harvester->TeamId;
    }

    if (const URenegadeBuildingCombatComponent* Building = GetRenegadeBuildingCombatComponent(Actor))
    {
        return Building->TeamId;
    }

    return NAME_None;
}

bool URenegadeCombatBlueprintLibrary::SetRenegadeTeamId(AActor* Actor, FName NewTeamId)
{
    if (!Actor || !Actor->HasAuthority())
    {
        return false;
    }

    if (URenegadeSoldierCombatComponent* Combat = GetRenegadeCombatComponent(Actor))
    {
        Combat->SetTeamId(NewTeamId);
        return true;
    }

    if (URenegadeHarvesterCombatComponent* Harvester = GetRenegadeHarvesterCombatComponent(Actor))
    {
        Harvester->SetTeamId(NewTeamId);
        return true;
    }

    if (URenegadeBuildingCombatComponent* Building = GetRenegadeBuildingCombatComponent(Actor))
    {
        Building->SetTeamId(NewTeamId);
        return true;
    }

    return false;
}

ARenegadeTeamCreditsManager* URenegadeCombatBlueprintLibrary::GetRenegadeTeamCreditsManager(const UObject* WorldContextObject)
{
    UWorld* World = WorldContextObject ? WorldContextObject->GetWorld() : nullptr;
    if (!World)
    {
        return nullptr;
    }
    if (URenegadeCombatRegistrySubsystem* Registry = World->GetSubsystem<URenegadeCombatRegistrySubsystem>())
    {
        return Registry->GetTeamCreditsManager(World->GetNetMode() != NM_Client);
    }
    return nullptr;
}

int32 URenegadeCombatBlueprintLibrary::GetRenegadeTeamCredits(const UObject* WorldContextObject, const FName TeamId)
{
    if (ARenegadeTeamCreditsManager* Manager = GetRenegadeTeamCreditsManager(WorldContextObject))
    {
        return Manager->GetTeamCredits(TeamId);
    }
    return 0;
}

int32 URenegadeCombatBlueprintLibrary::AddRenegadeTeamCredits(const UObject* WorldContextObject, const FName TeamId, const int32 Amount)
{
    if (ARenegadeTeamCreditsManager* Manager = GetRenegadeTeamCreditsManager(WorldContextObject))
    {
        return Manager->AddTeamCredits(TeamId, Amount);
    }
    return 0;
}

bool URenegadeCombatBlueprintLibrary::SpendRenegadeTeamCredits(const UObject* WorldContextObject, const FName TeamId, const int32 Amount, int32& RemainingCredits)
{
    RemainingCredits = 0;
    if (ARenegadeTeamCreditsManager* Manager = GetRenegadeTeamCreditsManager(WorldContextObject))
    {
        return Manager->TrySpendTeamCredits(TeamId, Amount, RemainingCredits);
    }
    return false;
}

FRenegadeWeaponSettings URenegadeCombatBlueprintLibrary::MakeAutomaticRiflePreset()
{
    FRenegadeWeaponSettings Result;
    Result.WeaponClass = ERenegadeWeaponClass::AutomaticRifle;
    Result.DamagePerShot = 11.0f;
    Result.MaximumRange = 4500.0f;
    Result.RoundsPerMinute = 600.0f;
    Result.MinimumBurstShots = 3;
    Result.MaximumBurstShots = 7;
    Result.MinimumBurstPause = 0.20f;
    Result.MaximumBurstPause = 0.55f;
    Result.HipFireSpreadDegrees = 2.2f;
    Result.MovingSpreadPenaltyDegrees = 1.4f;
    Result.bUseMagazine = true;
    Result.MagazineSize = 30;
    Result.ReloadSeconds = 2.1f;
    return Result;
}

FRenegadeWeaponSettings URenegadeCombatBlueprintLibrary::MakePistolPreset()
{
    FRenegadeWeaponSettings Result;
    Result.WeaponClass = ERenegadeWeaponClass::Pistol;
    Result.DamagePerShot = 18.0f;
    Result.MaximumRange = 2800.0f;
    Result.RoundsPerMinute = 260.0f;
    Result.MinimumBurstShots = 1;
    Result.MaximumBurstShots = 2;
    Result.MinimumBurstPause = 0.25f;
    Result.MaximumBurstPause = 0.65f;
    Result.HipFireSpreadDegrees = 1.8f;
    Result.MovingSpreadPenaltyDegrees = 1.8f;
    Result.bUseMagazine = true;
    Result.MagazineSize = 12;
    Result.ReloadSeconds = 1.65f;
    return Result;
}


FRenegadeWeaponSettings URenegadeCombatBlueprintLibrary::MakeRocketLauncherPreset()
{
    FRenegadeWeaponSettings Result;
    Result.WeaponClass = ERenegadeWeaponClass::RocketLauncher;
    Result.DamagePerShot = 125.0f;
    Result.MaximumRange = 6000.0f;
    Result.RoundsPerMinute = 38.0f;
    Result.MinimumBurstShots = 1;
    Result.MaximumBurstShots = 1;
    Result.MinimumBurstPause = 0.0f;
    Result.MaximumBurstPause = 0.0f;
    Result.HipFireSpreadDegrees = 0.65f;
    Result.MovingSpreadPenaltyDegrees = 0.65f;
    Result.CriticalHitMultiplier = 1.0f;
    Result.CriticalBones.Reset();
    Result.MinimumLongRangeDamageMultiplier = 1.0f;
    Result.DamageFalloffStartFraction = 1.0f;
    Result.bUseMagazine = true;
    Result.MagazineSize = 1;
    Result.ReloadSeconds = 2.75f;
    Result.RocketLauncher = FRenegadeRocketLauncherSettings();
    return Result;
}

FRenegadeWeaponSettings URenegadeCombatBlueprintLibrary::MakeGrenadeLauncherPreset()
{
    FRenegadeWeaponSettings Result;
    Result.WeaponClass = ERenegadeWeaponClass::GrenadeLauncher;
    Result.DamagePerShot = 80.0f;
    Result.MaximumRange = 4500.0f;
    Result.RoundsPerMinute = 80.0f;
    Result.MinimumBurstShots = 1;
    Result.MaximumBurstShots = 1;
    Result.MinimumBurstPause = 0.0f;
    Result.MaximumBurstPause = 0.0f;
    Result.HipFireSpreadDegrees = 1.15f;
    Result.MovingSpreadPenaltyDegrees = 0.85f;
    Result.CriticalHitMultiplier = 1.0f;
    Result.CriticalBones.Reset();
    Result.MinimumLongRangeDamageMultiplier = 1.0f;
    Result.DamageFalloffStartFraction = 1.0f;
    Result.bUseMagazine = true;
    Result.MagazineSize = 8;
    Result.ReloadSeconds = 3.2f;
    Result.GrenadeLauncher = FRenegadeGrenadeLauncherSettings();
    return Result;
}
