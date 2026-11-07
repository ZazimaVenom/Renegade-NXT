#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RenegadeCombatTypes.h"
#include "RenegadeCombatBlueprintLibrary.generated.h"

class URenegadeBuildingCombatComponent;
class URenegadeSoldierCombatComponent;
class URenegadeHarvesterCombatComponent;
class ARenegadeTeamCreditsManager;

UCLASS()
class RENEGADESOLDIERCOMBAT_API URenegadeCombatBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Renegade NXT|Combat")
    static URenegadeSoldierCombatComponent* GetRenegadeCombatComponent(const AActor* Actor);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Buildings")
    static URenegadeBuildingCombatComponent* GetRenegadeBuildingCombatComponent(const AActor* Actor);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvesters")
    static URenegadeHarvesterCombatComponent* GetRenegadeHarvesterCombatComponent(const AActor* Actor);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Combat")
    static bool AreRenegadeActorsHostile(const AActor* FirstActor, const AActor* SecondActor);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Combat")
    static FName GetRenegadeTeamId(const AActor* Actor);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Combat")
    static bool SetRenegadeTeamId(AActor* Actor, FName NewTeamId);


    UFUNCTION(BlueprintPure, Category="Renegade NXT|Economy", meta=(WorldContext="WorldContextObject"))
    static ARenegadeTeamCreditsManager* GetRenegadeTeamCreditsManager(const UObject* WorldContextObject);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Economy", meta=(WorldContext="WorldContextObject"))
    static int32 GetRenegadeTeamCredits(const UObject* WorldContextObject, FName TeamId);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Economy", meta=(WorldContext="WorldContextObject"))
    static int32 AddRenegadeTeamCredits(const UObject* WorldContextObject, FName TeamId, int32 Amount);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Economy", meta=(WorldContext="WorldContextObject"))
    static bool SpendRenegadeTeamCredits(const UObject* WorldContextObject, FName TeamId, int32 Amount, int32& RemainingCredits);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Weapon Presets")
    static FRenegadeWeaponSettings MakeAutomaticRiflePreset();

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Weapon Presets")
    static FRenegadeWeaponSettings MakePistolPreset();

    /** Returns a polished one-round infantry rocket-launcher preset. Assign mesh/effect/audio assets after applying it. */
    UFUNCTION(BlueprintPure, Category="Renegade NXT|Weapon Presets")
    static FRenegadeWeaponSettings MakeRocketLauncherPreset();

    /** Returns a Renegade-style 8-round ballistic Grenadier preset with impact splash. Assign mesh/effect/audio assets after applying it. */
    UFUNCTION(BlueprintPure, Category="Renegade NXT|Weapon Presets")
    static FRenegadeWeaponSettings MakeGrenadeLauncherPreset();
};
