#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RenegadeSoldierSpawnPoint.generated.h"

class UArrowComponent;
class USceneComponent;

UCLASS(Blueprintable)
class RENEGADESOLDIERCOMBAT_API ARenegadeSoldierSpawnPoint : public AActor
{
    GENERATED_BODY()

public:
    ARenegadeSoldierSpawnPoint();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
    TObjectPtr<USceneComponent> SceneRoot;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
    TObjectPtr<UArrowComponent> FacingArrow;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Spawn")
    FName TeamId = TEXT("GDI");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Spawn")
    bool bEnabled = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Spawn", meta=(ClampMin="0"))
    int32 Priority = 0;
};
