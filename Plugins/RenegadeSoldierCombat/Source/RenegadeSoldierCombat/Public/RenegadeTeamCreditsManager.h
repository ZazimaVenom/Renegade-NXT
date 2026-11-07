#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "RenegadeTeamCreditsManager.generated.h"

USTRUCT(BlueprintType)
struct RENEGADESOLDIERCOMBAT_API FRenegadeTeamCreditEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Renegade NXT|Economy")
    FName TeamId = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Renegade NXT|Economy")
    int32 Credits = 0;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRenegadeTeamCreditsChangedSignature, FName, TeamId, int32, PreviousCredits, int32, NewCredits);

/**
 * One replicated match-wide credit bank. The combat world subsystem creates one automatically
 * on the authority when a Refinery or Harvester first needs the economy.
 */
UCLASS(BlueprintType)
class RENEGADESOLDIERCOMBAT_API ARenegadeTeamCreditsManager : public AInfo
{
    GENERATED_BODY()

public:
    ARenegadeTeamCreditsManager();

    virtual void BeginPlay() override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_TeamCredits, Category="Renegade NXT|Economy")
    TArray<FRenegadeTeamCreditEntry> TeamCredits;

    UPROPERTY(BlueprintAssignable, Category="Renegade NXT|Economy|Events")
    FRenegadeTeamCreditsChangedSignature OnTeamCreditsChanged;

    UFUNCTION(BlueprintPure, Category="Renegade NXT|Economy")
    int32 GetTeamCredits(FName TeamId) const;

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Economy")
    int32 AddTeamCredits(FName TeamId, int32 Amount);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Economy")
    bool TrySpendTeamCredits(FName TeamId, int32 Amount, int32& RemainingCredits);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Economy")
    void SetTeamCredits(FName TeamId, int32 NewCredits);

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Renegade NXT|Economy")
    void ResetAllTeamCredits();

private:
    UFUNCTION()
    void OnRep_TeamCredits();

    FRenegadeTeamCreditEntry* FindMutableEntry(FName TeamId);
    const FRenegadeTeamCreditEntry* FindEntry(FName TeamId) const;
    void BroadcastCreditChange(FName TeamId, int32 PreviousCredits, int32 NewCredits);

    TMap<FName, int32> LastObservedCredits;
};
