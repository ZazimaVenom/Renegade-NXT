#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RenegadeCombatTypes.h"
#include "RenegadeWeaponProfile.generated.h"

UCLASS(BlueprintType)
class RENEGADESOLDIERCOMBAT_API URenegadeWeaponProfile : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Renegade NXT|Weapon")
    FText DisplayName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Renegade NXT|Weapon")
    FRenegadeWeaponSettings Settings;
};
