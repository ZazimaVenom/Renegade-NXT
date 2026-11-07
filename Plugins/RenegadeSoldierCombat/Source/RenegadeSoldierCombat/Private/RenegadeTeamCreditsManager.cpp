#include "RenegadeTeamCreditsManager.h"

#include "Net/UnrealNetwork.h"

ARenegadeTeamCreditsManager::ARenegadeTeamCreditsManager()
{
    bReplicates = true;
    bAlwaysRelevant = true;
    NetDormancy = DORM_Never;
    SetReplicateMovement(false);
}

void ARenegadeTeamCreditsManager::BeginPlay()
{
    Super::BeginPlay();

    LastObservedCredits.Reset();
    for (const FRenegadeTeamCreditEntry& Entry : TeamCredits)
    {
        LastObservedCredits.Add(Entry.TeamId, Entry.Credits);
    }
}

void ARenegadeTeamCreditsManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(ARenegadeTeamCreditsManager, TeamCredits);
}

const FRenegadeTeamCreditEntry* ARenegadeTeamCreditsManager::FindEntry(const FName TeamId) const
{
    return TeamCredits.FindByPredicate([TeamId](const FRenegadeTeamCreditEntry& Entry)
    {
        return Entry.TeamId.IsEqual(TeamId, ENameCase::IgnoreCase);
    });
}

FRenegadeTeamCreditEntry* ARenegadeTeamCreditsManager::FindMutableEntry(const FName TeamId)
{
    return TeamCredits.FindByPredicate([TeamId](const FRenegadeTeamCreditEntry& Entry)
    {
        return Entry.TeamId.IsEqual(TeamId, ENameCase::IgnoreCase);
    });
}

int32 ARenegadeTeamCreditsManager::GetTeamCredits(const FName TeamId) const
{
    if (const FRenegadeTeamCreditEntry* Entry = FindEntry(TeamId))
    {
        return Entry->Credits;
    }
    return 0;
}

void ARenegadeTeamCreditsManager::BroadcastCreditChange(const FName TeamId, const int32 PreviousCredits, const int32 NewCredits)
{
    LastObservedCredits.Add(TeamId, NewCredits);
    OnTeamCreditsChanged.Broadcast(TeamId, PreviousCredits, NewCredits);
}

int32 ARenegadeTeamCreditsManager::AddTeamCredits(const FName TeamId, const int32 Amount)
{
    if (!HasAuthority() || TeamId.IsNone() || Amount <= 0)
    {
        return GetTeamCredits(TeamId);
    }

    FRenegadeTeamCreditEntry* Entry = FindMutableEntry(TeamId);
    if (!Entry)
    {
        FRenegadeTeamCreditEntry NewEntry;
        NewEntry.TeamId = TeamId;
        NewEntry.Credits = 0;
        const int32 Index = TeamCredits.Add(NewEntry);
        Entry = &TeamCredits[Index];
    }

    const int32 Previous = Entry->Credits;
    Entry->Credits = FMath::Max(0, Previous + Amount);
    BroadcastCreditChange(Entry->TeamId, Previous, Entry->Credits);
    ForceNetUpdate();
    return Entry->Credits;
}

bool ARenegadeTeamCreditsManager::TrySpendTeamCredits(const FName TeamId, const int32 Amount, int32& RemainingCredits)
{
    RemainingCredits = GetTeamCredits(TeamId);
    if (!HasAuthority() || TeamId.IsNone() || Amount <= 0 || RemainingCredits < Amount)
    {
        return false;
    }

    FRenegadeTeamCreditEntry* Entry = FindMutableEntry(TeamId);
    if (!Entry)
    {
        return false;
    }

    const int32 Previous = Entry->Credits;
    Entry->Credits = FMath::Max(0, Previous - Amount);
    RemainingCredits = Entry->Credits;
    BroadcastCreditChange(Entry->TeamId, Previous, Entry->Credits);
    ForceNetUpdate();
    return true;
}

void ARenegadeTeamCreditsManager::SetTeamCredits(const FName TeamId, const int32 NewCredits)
{
    if (!HasAuthority() || TeamId.IsNone())
    {
        return;
    }

    FRenegadeTeamCreditEntry* Entry = FindMutableEntry(TeamId);
    if (!Entry)
    {
        FRenegadeTeamCreditEntry NewEntry;
        NewEntry.TeamId = TeamId;
        NewEntry.Credits = 0;
        const int32 Index = TeamCredits.Add(NewEntry);
        Entry = &TeamCredits[Index];
    }

    const int32 Previous = Entry->Credits;
    Entry->Credits = FMath::Max(0, NewCredits);
    BroadcastCreditChange(Entry->TeamId, Previous, Entry->Credits);
    ForceNetUpdate();
}

void ARenegadeTeamCreditsManager::ResetAllTeamCredits()
{
    if (!HasAuthority())
    {
        return;
    }

    for (FRenegadeTeamCreditEntry& Entry : TeamCredits)
    {
        const int32 Previous = Entry.Credits;
        Entry.Credits = 0;
        if (Previous != 0)
        {
            BroadcastCreditChange(Entry.TeamId, Previous, 0);
        }
    }
    ForceNetUpdate();
}

void ARenegadeTeamCreditsManager::OnRep_TeamCredits()
{
    for (const FRenegadeTeamCreditEntry& Entry : TeamCredits)
    {
        const int32 Previous = LastObservedCredits.FindRef(Entry.TeamId);
        if (!LastObservedCredits.Contains(Entry.TeamId) || Previous != Entry.Credits)
        {
            BroadcastCreditChange(Entry.TeamId, Previous, Entry.Credits);
        }
    }
}
