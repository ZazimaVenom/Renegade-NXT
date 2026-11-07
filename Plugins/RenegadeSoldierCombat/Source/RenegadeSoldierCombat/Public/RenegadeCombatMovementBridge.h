#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RenegadeCombatMovementBridge.generated.h"

UINTERFACE(BlueprintType)
class RENEGADESOLDIERCOMBAT_API URenegadeCombatMovementBridge : public UInterface
{
    GENERATED_BODY()
};

class RENEGADESOLDIERCOMBAT_API IRenegadeCombatMovementBridge
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Renegade NXT|Combat|Spline Bridge")
    bool CanCombatTakeMovementControl() const;
    virtual bool CanCombatTakeMovementControl_Implementation() const { return true; }

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Renegade NXT|Combat|Spline Bridge")
    void CombatMovementInterrupted(AActor* CombatTarget);
    virtual void CombatMovementInterrupted_Implementation(AActor* CombatTarget) {}

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Renegade NXT|Combat|Spline Bridge")
    void CombatMovementResumed(FVector ResumeFromWorldLocation);
    virtual void CombatMovementResumed_Implementation(FVector ResumeFromWorldLocation) {}
};
