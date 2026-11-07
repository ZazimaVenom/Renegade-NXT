#include "RenegadeHarvesterWreck.h"

#include "Components/PrimitiveComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystem.h"

ARenegadeHarvesterWreck::ARenegadeHarvesterWreck()
{
    bReplicates = true;
    bAlwaysRelevant = true;
    SetReplicateMovement(false);

    WreckRoot = CreateDefaultSubobject<USceneComponent>(TEXT("WreckRoot"));
    SetRootComponent(WreckRoot);

    WreckStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WreckStaticMesh"));
    WreckStaticMeshComponent->SetupAttachment(WreckRoot);
    WreckStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    WreckStaticMeshComponent->SetGenerateOverlapEvents(false);

    WreckSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WreckSkeletalMesh"));
    WreckSkeletalMeshComponent->SetupAttachment(WreckRoot);
    WreckSkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    WreckSkeletalMeshComponent->SetGenerateOverlapEvents(false);
    WreckSkeletalMeshComponent->SetComponentTickEnabled(false);
}

void ARenegadeHarvesterWreck::BeginPlay()
{
    Super::BeginPlay();
    ApplyWreckPresentation();
    SpawnSmokePresentation();

    if (HasAuthority() && CleanupSeconds > 0.0f)
    {
        SetLifeSpan(CleanupSeconds);
    }
}

void ARenegadeHarvesterWreck::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(ARenegadeHarvesterWreck, WreckStaticMesh);
    DOREPLIFETIME(ARenegadeHarvesterWreck, WreckSkeletalMesh);
    DOREPLIFETIME(ARenegadeHarvesterWreck, WreckRelativeLocation);
    DOREPLIFETIME(ARenegadeHarvesterWreck, WreckRelativeRotation);
    DOREPLIFETIME(ARenegadeHarvesterWreck, WreckScale);
    DOREPLIFETIME(ARenegadeHarvesterWreck, bEnableWreckCollision);
    DOREPLIFETIME(ARenegadeHarvesterWreck, WreckCollisionProfileName);
    DOREPLIFETIME(ARenegadeHarvesterWreck, SmokeCascade);
    DOREPLIFETIME(ARenegadeHarvesterWreck, SmokeNiagara);
    DOREPLIFETIME(ARenegadeHarvesterWreck, SmokeRelativeLocation);
    DOREPLIFETIME(ARenegadeHarvesterWreck, CleanupSeconds);
}

void ARenegadeHarvesterWreck::ApplyWreckPresentation()
{
    const bool bUseSkeletal = IsValid(WreckSkeletalMesh);
    WreckSkeletalMeshComponent->SetVisibility(bUseSkeletal, true);
    WreckStaticMeshComponent->SetVisibility(!bUseSkeletal && IsValid(WreckStaticMesh), true);

    if (bUseSkeletal)
    {
        WreckSkeletalMeshComponent->SetSkeletalMeshAsset(WreckSkeletalMesh);
    }
    else
    {
        WreckStaticMeshComponent->SetStaticMesh(WreckStaticMesh);
    }

    UPrimitiveComponent* ActiveMesh = bUseSkeletal
        ? static_cast<UPrimitiveComponent*>(WreckSkeletalMeshComponent.Get())
        : static_cast<UPrimitiveComponent*>(WreckStaticMeshComponent.Get());

    if (IsValid(ActiveMesh))
    {
        ActiveMesh->SetRelativeLocation(WreckRelativeLocation);
        ActiveMesh->SetRelativeRotation(WreckRelativeRotation);
        ActiveMesh->SetRelativeScale3D(WreckScale);
        if (bEnableWreckCollision)
        {
            ActiveMesh->SetCollisionProfileName(WreckCollisionProfileName);
            ActiveMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        }
        else
        {
            ActiveMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        }
    }
}

void ARenegadeHarvesterWreck::SpawnSmokePresentation()
{
    if (GetNetMode() == NM_DedicatedServer)
    {
        return;
    }

    if (IsValid(SmokeCascade))
    {
        UGameplayStatics::SpawnEmitterAttached(
            SmokeCascade,
            WreckRoot,
            NAME_None,
            SmokeRelativeLocation,
            FRotator::ZeroRotator,
            FVector::OneVector,
            EAttachLocation::KeepRelativeOffset,
            true);
    }

    if (IsValid(SmokeNiagara))
    {
        UNiagaraFunctionLibrary::SpawnSystemAttached(
            SmokeNiagara,
            WreckRoot,
            NAME_None,
            SmokeRelativeLocation,
            FRotator::ZeroRotator,
            EAttachLocation::KeepRelativeOffset,
            true,
            true,
            ENCPoolMethod::AutoRelease,
            true);
    }
}
