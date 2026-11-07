#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "RenegadeHarvesterCombatTypes.h"
#include "RenegadeHarvestPoint.h"
#include "RenegadeRefineryDockPoint.h"
#include "TimerManager.h"
#include "RenegadeHarvesterCombatComponent.generated.h"

class AActor;
class AController;
class AAIController;
class ARenegadeHarvesterWreck;
class ARenegadeHarvestPoint;
class ARenegadeRefineryDockPoint;
class ARenegadeTeamCreditsManager;
class UMaterialInterface;
class UNiagaraSystem;
class UParticleSystem;
class URenegadeBuildingCombatComponent;
class URenegadeSoldierCombatComponent;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USoundBase;
class UStaticMesh;
class UStaticMeshComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRenegadeHarvesterHealthChangedSignature, float, PreviousHealth, float, NewHealth, AActor*, DamageCauser, AController*, InstigatedBy);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRenegadeHarvesterUnderAttackSignature, AActor*, Attacker, float, Damage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRenegadeHarvesterDestroyedSignature, AActor*, Destroyer);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRenegadeHarvesterTargetChangedSignature, AActor*, PreviousTarget, AActor*, NewTarget);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRenegadeHarvesterTurretFiredSignature, AActor*, Target, FVector, TraceStart, FVector, TraceEnd);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRenegadeHarvesterLifecycleChangedSignature, ERenegadeHarvesterLifecycleState, PreviousState, ERenegadeHarvesterLifecycleState, NewState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRenegadeHarvesterCargoChangedSignature, float, PreviousCargo, float, NewCargo);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRenegadeHarvesterCreditsDeliveredSignature, int32, CreditsAdded, int32, NewTeamCredits);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRenegadeHarvesterSimpleLifecycleSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRenegadeHarvesterHarvestPointSignature, ARenegadeHarvestPoint*, HarvestPoint);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRenegadeHarvesterDockPointSignature, ARenegadeRefineryDockPoint*, DockPoint);

struct FRenegadeHarvesterBulletVisualState
{
    FVector StartLocation = FVector::ZeroVector;
    FVector EndLocation = FVector::ZeroVector;
    FRotator TravelRotation = FRotator::ZeroRotator;
    float ElapsedSeconds = 0.0f;
    float DurationSeconds = 0.0f;
    bool bActive = false;
    bool bSpawnImpactOnArrival = false;
};

/**
 * Add to a GDI or Nod Harvester Character Blueprint. Spline AI owns normal route travel.
 * This component owns health, defensive turret combat, EVA, cargo/economy, wrecks/refinery integration,
 * and short final Harvest Point / Refinery-dock MoveTo approaches using a cooperative Spline AI external movement claim.
 */
UCLASS(ClassGroup=(RenegadeNXT), BlueprintType, Blueprintable, meta=(BlueprintSpawnableComponent))
class RENEGADESOLDIERCOMBAT_API URenegadeHarvesterCombatComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    URenegadeHarvesterCombatComponent();

    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TeamId, Category="Renegade NXT|Harvester|Team")
    FName TeamId = TEXT("GDI");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Team")
    bool bDifferentNonNeutralTeamsAreEnemies = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Networking")
    bool bEnsureOwnerReplicates = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Networking", meta=(EditCondition="bEnsureOwnerReplicates"))
    bool bEnsureOwnerReplicateMovement = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Health")
    FRenegadeHarvesterHealthSettings HealthSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Target")
    FRenegadeHarvesterTargetSettings TargetSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Target", meta=(UseComponentPicker, AllowedClasses="/Script/Engine.SceneComponent"))
    FComponentReference TargetPointComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Target")
    FName TargetPointComponentTag = TEXT("HarvesterTarget");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Target")
    FVector TargetPointRelativeOffset = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret")
    FRenegadeHarvesterTurretSettings TurretSettings;

    /** Preferred existing static/skeletal/scene component that rotates in yaw toward the defensive target. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret|Components", meta=(UseComponentPicker, AllowedClasses="/Script/Engine.SceneComponent"))
    FComponentReference TurretYawComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret|Components")
    FName TurretYawComponentTag = TEXT("HarvesterTurret");

    /** Optional child component for independent gun pitch. Leave empty to pitch the yaw component itself. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret|Components", meta=(UseComponentPicker, AllowedClasses="/Script/Engine.SceneComponent"))
    FComponentReference TurretPitchComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret|Components")
    FName TurretPitchComponentTag = TEXT("HarvesterGunPitch");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret|Components", meta=(UseComponentPicker, AllowedClasses="/Script/Engine.SceneComponent"))
    FComponentReference TurretMuzzleComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret|Components")
    FName TurretMuzzleComponentTag = TEXT("HarvesterMuzzle");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret|Components")
    FVector TurretMuzzleRelativeOffset = FVector::ZeroVector;

    /**
     * Optional muzzle socket on the assigned/generated Turret Skeletal Mesh.
     * When set and valid, this takes priority over the Scene Component / component-tag muzzle path.
     * Turret Muzzle Relative Offset is applied in socket-local space.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret|Generated Mesh")
    FName TurretMuzzleSocketName = NAME_None;

    /** Optional generated turret visual asset. It can attach beneath existing yaw/pitch pivots or become the controllable turret when no authored pivot exists. Skeletal takes priority when both are assigned. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret|Generated Mesh")
    TObjectPtr<UStaticMesh> TurretStaticMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret|Generated Mesh")
    TObjectPtr<USkeletalMesh> TurretSkeletalMesh;

    /** When a separate Pitch pivot exists, attach the generated visual below it so the mesh inherits pitch as well as yaw. Disable for a yaw-only turret base visual. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret|Generated Mesh")
    bool bAttachGeneratedTurretVisualToPitch = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret|Generated Mesh")
    FName TurretAttachSocket = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret|Generated Mesh")
    FVector TurretRelativeLocation = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret|Generated Mesh")
    FRotator TurretRelativeRotation = FRotator::ZeroRotator;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Turret|Generated Mesh")
    FVector TurretRelativeScale = FVector::OneVector;

    /** Terrain-following visual suspension. The Character capsule/root stays upright; only this visual body component pitches and rolls. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Ground Alignment")
    FRenegadeHarvesterGroundAlignmentSettings GroundAlignmentSettings;

    /** Optional visual body to pitch/roll over terrain. Leave empty to use a component tagged HarvesterBody, then the Character Mesh fallback. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Ground Alignment", meta=(UseComponentPicker, AllowedClasses="/Script/Engine.SceneComponent"))
    FComponentReference GroundAlignmentVisualComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Ground Alignment")
    FName GroundAlignmentVisualComponentTag = TEXT("HarvesterBody");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Economy")
    FRenegadeHarvesterEconomySettings EconomySettings;

    /** Automatic field/refinery approach and timing controls. Spline AI still owns normal travel. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Cycle")
    FRenegadeHarvesterCycleSettings CycleSettings;

    /** Optional explicit level Harvest Point. A Refinery spawner can assign this automatically after spawning. */
    UPROPERTY(EditInstanceOnly, BlueprintReadWrite, ReplicatedUsing=OnRep_AssignedHarvestPoint, Category="Renegade NXT|Harvester|Cycle|Harvest Point")
    TObjectPtr<ARenegadeHarvestPoint> AssignedHarvestPoint;

    /** If no Harvest Point was assigned by the Refinery, search the level for the nearest compatible point. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Cycle|Harvest Point")
    bool bAutoFindNearestHarvestPoint = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Cycle|Harvest Point", meta=(ClampMin="100.0", EditCondition="bAutoFindNearestHarvestPoint", Units="cm"))
    float HarvestPointSearchRadius = 50000.0f;

    /** Optional group filter when auto-selecting a Harvest Point. None accepts any group. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Cycle|Harvest Point", meta=(EditCondition="bAutoFindNearestHarvestPoint"))
    FName RequiredHarvestPointGroup = NAME_None;

    /** Optional explicit level Refinery Dock Point. A Refinery spawner assigns this automatically when configured. */
    UPROPERTY(EditInstanceOnly, BlueprintReadWrite, ReplicatedUsing=OnRep_AssignedRefineryDockPoint, Category="Renegade NXT|Harvester|Cycle|Refinery Dock Point")
    TObjectPtr<ARenegadeRefineryDockPoint> AssignedRefineryDockPoint;

    /** If no Dock Point was assigned by the Refinery, search the level for the nearest compatible point. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Cycle|Refinery Dock Point")
    bool bAutoFindNearestRefineryDockPoint = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Cycle|Refinery Dock Point", meta=(ClampMin="100.0", EditCondition="bAutoFindNearestRefineryDockPoint", Units="cm"))
    float RefineryDockPointSearchRadius = 50000.0f;

    /** Optional group filter when auto-selecting a Dock Point. None accepts any group. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Cycle|Refinery Dock Point", meta=(EditCondition="bAutoFindNearestRefineryDockPoint"))
    FName RequiredRefineryDockPointGroup = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Audio")
    FRenegadeHarvesterAudioSettings AudioSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Destruction")
    FRenegadeHarvesterDestructionSettings DestructionSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Renegade NXT|Harvester|Destruction")
    TSubclassOf<ARenegadeHarvesterWreck> WreckActorClass;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CurrentHealth, Category="Renegade NXT|Harvester|Runtime")
    float CurrentHealth = 1200.0f;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Destroyed, Category="Renegade NXT|Harvester|Runtime")
    bool bIsDestroyed = false;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CriticalHealth, Category="Renegade NXT|Harvester|Runtime")
    bool bIsCriticalHealth = false;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_TurretTarget, Category="Renegade NXT|Harvester|Runtime")
    TObjectPtr<AActor> CurrentTurretTarget;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_LifecycleState, Category="Renegade NXT|Harvester|Runtime")
    ERenegadeHarvesterLifecycleState LifecycleState = ERenegadeHarvesterLifecycleState::Idle;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CurrentCargo, Category="Renegade NXT|Harvester|Runtime")
    float CurrentCargo = 0.0f;

    UPROPERTY(BlueprintReadOnly, Replicated, Category="Renegade NXT|Harvester|Runtime")
    TObjectPtr<AActor> OwningRefineryActor;

    UPROPERTY(BlueprintReadOnly, Category="Renegade NXT|Harvester|Runtime")
    bool bHasSplineMovementClaim = false;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events")
    FRenegadeHarvesterHealthChangedSignature OnHarvesterHealthChanged;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events")
    FRenegadeHarvesterUnderAttackSignature OnHarvesterUnderAttack;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events")
    FRenegadeHarvesterDestroyedSignature OnHarvesterDestroyed;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events")
    FRenegadeHarvesterTargetChangedSignature OnTurretTargetChanged;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events")
    FRenegadeHarvesterTurretFiredSignature OnTurretFired;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events")
    FRenegadeHarvesterLifecycleChangedSignature OnLifecycleStateChanged;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events")
    FRenegadeHarvesterCargoChangedSignature OnCargoChanged;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events")
    FRenegadeHarvesterCreditsDeliveredSignature OnCreditsDelivered;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events|Lifecycle")
    FRenegadeHarvesterSimpleLifecycleSignature OnHarvestingStarted;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events|Lifecycle")
    FRenegadeHarvesterSimpleLifecycleSignature OnHarvestingEnded;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events|Lifecycle")
    FRenegadeHarvesterSimpleLifecycleSignature OnRefineryDockingStarted;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events|Lifecycle")
    FRenegadeHarvesterSimpleLifecycleSignature OnRefineryDocked;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events|Lifecycle")
    FRenegadeHarvesterSimpleLifecycleSignature OnRefineryUnloadingStarted;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events|Lifecycle")
    FRenegadeHarvesterSimpleLifecycleSignature OnRefineryUnloadingEnded;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events|Lifecycle")
    FRenegadeHarvesterSimpleLifecycleSignature OnRefineryUndocked;


    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events|Lifecycle")
    FRenegadeHarvesterHarvestPointSignature OnHarvestPointApproachStarted;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events|Lifecycle")
    FRenegadeHarvesterHarvestPointSignature OnHarvestPointArrived;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events|Lifecycle")
    FRenegadeHarvesterDockPointSignature OnRefineryDockPointApproachStarted;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events|Lifecycle")
    FRenegadeHarvesterDockPointSignature OnRefineryDockPointArrived;

    /** Useful Blueprint hook for selecting/starting the return spline after field harvesting completes. */
    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events|Lifecycle")
    FRenegadeHarvesterSimpleLifecycleSignature OnReturnToRefineryRouteRequested;

    /** Useful Blueprint hook for starting/reacquiring the outbound spline after unloading/undocking. */
    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Harvester|Events|Lifecycle")
    FRenegadeHarvesterSimpleLifecycleSignature OnOutboundHarvestRouteRequested;

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Team")
    void SetTeamId(FName NewTeamId);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvester|Team")
    bool IsHostileToActor(const AActor* OtherActor) const;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvester|Health")
    float GetHealthPercent() const;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvester|Health")
    bool IsOperational() const { return !bIsDestroyed && CurrentHealth > 0.0f; }

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Health")
    void RepairHarvester(float Amount);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Health")
    void ForceDestroyHarvester(AActor* Destroyer);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvester|Target")
    FVector GetTargetAimLocation() const;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvester|Turret")
    FVector GetTurretMuzzleLocation() const;

    /** Socket names available on the assigned generated skeletal turret mesh. Blueprint utility only; Turret Muzzle Socket Name remains freely editable in Details. */
    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvester|Turret|Generated Mesh")
    TArray<FString> GetGeneratedTurretSocketNames() const;

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Turret")
    void ForceTurretTargetRefresh();

    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Harvester|Turret")
    void SetRuntimeTurretComponents(USceneComponent* YawComponent, USceneComponent* PitchComponent, USceneComponent* MuzzleComponent);

    /** Re-resolve presentation components and rebuild the optional generated turret visual. Useful after changing component references at runtime. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Harvester|Visuals")
    void RefreshHarvesterPresentation();

    /** Runtime override for the visual body that receives terrain-following pitch/roll. Pass null to restore automatic resolution. */
    UFUNCTION(BlueprintCallable, Category="Renegade NXT|Harvester|Ground Alignment")
    void SetRuntimeGroundAlignmentVisualComponent(USceneComponent* VisualComponent);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvester|Ground Alignment")
    USceneComponent* GetGroundAlignmentVisualComponent() const { return RuntimeGroundAlignmentVisualComponent; }

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Refinery")
    void SetOwningRefinery(URenegadeBuildingCombatComponent* RefineryComponent);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvester|Refinery")
    URenegadeBuildingCombatComponent* GetOwningRefinery() const;


    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Cycle|Harvest Point")
    void SetAssignedHarvestPoint(ARenegadeHarvestPoint* NewHarvestPoint);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvester|Cycle|Harvest Point")
    ARenegadeHarvestPoint* GetAssignedHarvestPoint() const { return AssignedHarvestPoint; }

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Cycle|Harvest Point")
    ARenegadeHarvestPoint* FindNearestCompatibleHarvestPoint();

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Cycle|Harvest Point")
    bool BeginHarvestPointApproach();

    /** Explicitly drive this Harvester to its assigned/auto-found Harvest Point. Useful from Blueprint route-complete or spawn logic. */
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Cycle|Movement", meta=(DisplayName="Go To Harvest Point"))
    bool GoToHarvestPoint();

    /** Explicitly mark this Harvester as physically arrived at its assigned Harvest Point. This advances into the arrival delay and automatic harvesting lifecycle. */
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Cycle|Movement", meta=(DisplayName="Arrived At Harvest Point"))
    void ArrivedAtHarvestPoint();

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Cycle|Refinery Dock Point")
    void SetAssignedRefineryDockPoint(ARenegadeRefineryDockPoint* NewDockPoint);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvester|Cycle|Refinery Dock Point")
    ARenegadeRefineryDockPoint* GetAssignedRefineryDockPoint() const { return AssignedRefineryDockPoint; }

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Cycle|Refinery Dock Point")
    ARenegadeRefineryDockPoint* FindNearestCompatibleRefineryDockPoint();

    /** Explicitly drive this Harvester to its assigned/auto-found Refinery Dock Point. Useful from Blueprint route-complete logic. */
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Cycle|Movement", meta=(DisplayName="Go To Refinery Dock Point"))
    bool GoToRefineryDockPoint();

    /** Explicitly mark this Harvester as physically arrived at its assigned Refinery Dock Point. This advances into docked/unloading lifecycle timing. */
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Cycle|Movement", meta=(DisplayName="Arrived At Refinery Dock Point"))
    void ArrivedAtRefineryDockPoint();

    /** True when a RenegadeSplineFollower component has an assigned route/path that can own long-distance travel. */
    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvester|Cycle|Movement")
    bool HasUsableSplineRoute() const;

    /** Call from your field/route Blueprint when the Harvester reaches the Tiberium collection point. */
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Lifecycle")
    void StartHarvesting();

    /** Call when collection finishes and the Harvester starts the return trip. */
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Lifecycle")
    void EndHarvesting();

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Lifecycle")
    void MarkReturningToRefinery();

    /** Call when the Harvester begins its final approach/docking movement into the Refinery. */
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Lifecycle")
    void StartRefineryDocking();

    /** Call when docking completes. This also begins the unloading state. */
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Lifecycle")
    void HarvesterDockedAtRefinery();

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Lifecycle")
    void StartRefineryUnloading();

    /** Ends unloading, deposits any remaining cargo, and enters the leaving-refinery state. */
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Lifecycle")
    void EndRefineryUnloading();

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Lifecycle")
    void HarvesterUndockedFromRefinery();

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Economy")
    float AddHarvestedCargo(float Amount);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Economy")
    void SetCurrentCargo(float NewCargo);

    /** Converts cargo into the global replicated team-credit resource. Pass a negative value to deposit all cargo. */
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Harvester|Economy")
    int32 DepositCargoToTeamCredits(float CargoUnits = -1.0f);

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Harvester|Economy")
    ARenegadeTeamCreditsManager* GetTeamCreditsManager() const;

protected:
    UFUNCTION()
    void HandleOwnerAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);

    UFUNCTION()
    void OnRep_TeamId();

    UFUNCTION()
    void OnRep_CurrentHealth(float PreviousHealth);

    UFUNCTION()
    void OnRep_Destroyed();

    UFUNCTION()
    void OnRep_CriticalHealth();

    UFUNCTION()
    void OnRep_TurretTarget(AActor* PreviousTarget);

    UFUNCTION()
    void OnRep_LifecycleState(ERenegadeHarvesterLifecycleState PreviousState);

    UFUNCTION()
    void OnRep_CurrentCargo(float PreviousCargo);


    UFUNCTION()
    void OnRep_AssignedHarvestPoint();

    UFUNCTION()
    void OnRep_AssignedRefineryDockPoint();

    UFUNCTION(NetMulticast, Unreliable)
    void MulticastHarvesterUnderAttack(AActor* Attacker, float Damage, FVector_NetQuantize SoundLocation);

    UFUNCTION(NetMulticast, Reliable)
    void MulticastHarvesterCritical(FVector_NetQuantize SoundLocation);

    UFUNCTION(NetMulticast, Reliable)
    void MulticastHarvesterDestroyed(AActor* Destroyer, FVector_NetQuantize EffectLocation);

    UFUNCTION(NetMulticast, Unreliable)
    void MulticastTurretFired(AActor* Target, FVector_NetQuantize TraceStart, FVector_NetQuantize TraceEnd, bool bSpawnImpactEffect);

private:
    bool HasAuthority() const;
    void RegisterWithCombatWorld();
    void UnregisterFromCombatWorld();
    void EnsureOwnerNetworking();

    USceneComponent* ResolveSceneComponent(const FComponentReference& Reference, FName ComponentTag, USceneComponent* RuntimeOverride) const;
    void ResolveOrCreateTurretComponents();
    USceneComponent* ResolveGroundAlignmentVisualComponent();
    void CacheGroundAlignmentBaseRotation();
    void UpdateGroundAlignment(float DeltaTime);
    bool TraceGroundProbe(const FVector& ProbeOffset, FVector& OutHitLocation) const;
    void CacheTurretBaseRotations();
    void UpdateTurretRotation(float DeltaTime);
    void RefreshTurretTargeting();
    AActor* FindBestTurretTarget() const;
    bool IsValidTurretTarget(const AActor* Candidate) const;
    bool HasLineOfSightToTarget(const AActor* Candidate, FVector* OutAimLocation = nullptr) const;
    FVector GetCombatAimLocation(const AActor* Target) const;
    void SetTurretTargetInternal(AActor* NewTarget);
    void TryFireTurret();
    void FireTurretShot();
    AActor* ResolveDamageActorFromHierarchy(AActor* HitActor) const;

    UStaticMeshComponent* AcquireBulletVisualComponent(int32& OutIndex);
    void SpawnBulletVisual(const FVector& Start, const FVector& End, bool bSpawnImpactEffect);
    void UpdateBulletVisuals(float DeltaTime);
    void DeactivateBulletVisual(int32 Index, bool bSpawnImpactEffect);
    void SpawnMuzzleEffects(const FVector& Location, const FRotator& Rotation) const;
    void SpawnImpactEffects(const FVector& Location, const FRotator& Rotation) const;

    void ApplyHealthDelta(float Delta, AController* InstigatedBy, AActor* DamageCauser);
    void RefreshCriticalHealthState(AActor* DamageCauser);
    void BeginHarvesterDestroyed(AController* InstigatedBy, AActor* Destroyer);
    void SpawnReplicatedWreck(const FTransform& DeathTransform);
    void DestroyOwnerAfterDeath();
    void RequestUnderAttackAnnouncement(AActor* Attacker, float Damage);
    FName ResolveLocalEvaListenerTeam() const;
    USoundBase* ResolveEvaSoundForLocalListener(const FRenegadeHarvesterEvaSoundSet& TeamSounds, USoundBase* FallbackSound) const;
    void TryPlayEvaAnnouncement(USoundBase* Sound, const FVector& Location, float Volume, int32 Priority) const;

    void SetLifecycleStateInternal(ERenegadeHarvesterLifecycleState NewState);
    void BroadcastLifecycleEvents(ERenegadeHarvesterLifecycleState PreviousState, ERenegadeHarvesterLifecycleState NewState);
    void UpdateEconomy(float DeltaTime);
    int32 ConvertAndDepositCargo(float CargoUnits);

    void UpdateAutomaticCycle(float DeltaTime);
    AAIController* EnsureCycleAIController();
    bool RequestCycleMoveTo(const FVector& Destination, float AcceptanceRadius);
    void StopCycleMovement();
    bool SetSplineExternalMovementClaim(bool bActive);
    void ReleaseHarvestPointReservation();
    void ReleaseRefineryDockReservation();
    float GetEffectiveHarvestApproachDistance() const;
    float GetEffectiveHarvestAcceptanceDistance() const;
    float GetEffectiveDockApproachDistance() const;
    float GetEffectiveDockAcceptanceDistance() const;
    FTransform GetEffectiveRefineryDockTransform() const;
    float GetPlanarDistanceToDestination(const FVector& Destination) const;
    float GetNavigationAcceptanceRadius(float DesiredInteractionRadius) const;
    bool CanUseDirectNavigationFallback() const;
    void HandleReachedHarvestPoint();
    void HandleReachedRefineryDock();

    UPROPERTY(Transient)
    TObjectPtr<USceneComponent> RuntimeTargetPointComponent;

    UPROPERTY(Transient)
    TObjectPtr<USceneComponent> RuntimeTurretYawComponent;

    UPROPERTY(Transient)
    TObjectPtr<USceneComponent> RuntimeTurretPitchComponent;

    UPROPERTY(Transient)
    TObjectPtr<USceneComponent> RuntimeTurretMuzzleComponent;

    UPROPERTY(Transient)
    TObjectPtr<USceneComponent> GeneratedTurretComponent;

    UPROPERTY(Transient)
    TObjectPtr<USceneComponent> RuntimeGroundAlignmentVisualComponent;

    FRotator GroundAlignmentBaseRelativeRotation = FRotator::ZeroRotator;
    float CurrentGroundAlignmentPitch = 0.0f;
    float CurrentGroundAlignmentRoll = 0.0f;
    bool bGroundAlignmentBaseRotationCached = false;

    FRotator TurretYawBaseRelativeRotation = FRotator::ZeroRotator;
    FRotator TurretPitchBaseRelativeRotation = FRotator::ZeroRotator;
    bool bTurretBaseRotationsCached = false;

    UPROPERTY(Transient)
    TObjectPtr<USceneComponent> CachedTurretYawBaseComponent;

    UPROPERTY(Transient)
    TObjectPtr<USceneComponent> CachedTurretPitchBaseComponent;

    UPROPERTY(Transient)
    TArray<TObjectPtr<UStaticMeshComponent>> BulletVisualComponents;

    TArray<FRenegadeHarvesterBulletVisualState> BulletVisualStates;

    float TargetRefreshAccumulator = 0.0f;
    float LastTargetSeenTime = -BIG_NUMBER;
    float LastUnderAttackRequestTime = -BIG_NUMBER;
    float NextTurretFireTime = 0.0f;
    float FractionalCreditRemainder = 0.0f;
    float EconomyUpdateAccumulator = 0.0f;
    float CyclePhaseReadyWorldTime = -1.0f;
    float CyclePhaseEndWorldTime = -1.0f;
    float LastCycleMoveRequestWorldTime = -BIG_NUMBER;
    float LastHarvestPointSearchWorldTime = -BIG_NUMBER;
    float LastRefineryDockPointSearchWorldTime = -BIG_NUMBER;
    float BeginPlayWorldTime = -BIG_NUMBER;
    bool bPendingSplineReleaseAfterHarvest = false;
    FTimerHandle DestroyOwnerTimer;
};
