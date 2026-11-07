#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RenegadeSplineAIBlueprintLibrary.generated.h"

class ARenegadeSplinePath;
class URenegadeCharacterVehicleComponent;
class URenegadeSplineFollowerComponent;

UCLASS()
class RENEGADESPLINEAI_API URenegadeSplineAIBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /**
     * Finds the nearest enabled route that accepts TeamId.
     * RequiredRouteGroup NAME_None accepts any route group.
     * MaxSearchDistance <= 0 means unlimited.
     */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Routing", meta = (WorldContext = "WorldContextObject"))
    static ARenegadeSplinePath* FindNearestCompatiblePath(
        const UObject* WorldContextObject,
        FVector WorldLocation,
        int32 TeamId,
        FName RequiredRouteGroup = NAME_None,
        float MaxSearchDistance = 0.0f);

    /** Finds the route follower on an Actor, avoiding Blueprint component-target wiring mistakes. */
    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|Components")
    static URenegadeSplineFollowerComponent* GetSplineFollowerComponent(AActor* Actor);

    /** Finds the Character-based vehicle adapter on an Actor. */
    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|Components")
    static URenegadeCharacterVehicleComponent* GetCharacterVehicleComponent(AActor* Actor);

    /**
     * Actor-level combat hand-off for RenegadeSoldierCombat or other combat systems.
     * Returns false when ControlledActor has no spline follower.
     */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Combat")
    static bool SetSplineCombatActiveForActor(
        AActor* ControlledActor,
        bool bCombatActive,
        AActor* CombatTarget = nullptr,
        float ResumeDelayOverride = -1.0f);

    /**
     * Actor-level named movement hand-off. Use one stable SourceName per external system.
     * The spline follower resumes only after all active sources release their claims.
     */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|External AI")
    static bool SetSplineExternalMovementActiveForActor(
        AActor* ControlledActor,
        bool bExternalActive,
        FName SourceName,
        bool bStopCurrentMovement = true,
        float ResumeDelayOverride = -1.0f);
};
