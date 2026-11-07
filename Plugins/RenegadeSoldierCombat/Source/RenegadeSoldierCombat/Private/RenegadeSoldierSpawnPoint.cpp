#include "RenegadeSoldierSpawnPoint.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"

ARenegadeSoldierSpawnPoint::ARenegadeSoldierSpawnPoint()
{
    PrimaryActorTick.bCanEverTick = false;
    bReplicates = false;

    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    SetRootComponent(SceneRoot);

    FacingArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("FacingArrow"));
    FacingArrow->SetupAttachment(SceneRoot);
    FacingArrow->ArrowSize = 1.5f;
}
