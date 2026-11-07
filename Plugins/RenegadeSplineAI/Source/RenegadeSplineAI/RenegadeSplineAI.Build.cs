using UnrealBuildTool;

public class RenegadeSplineAI : ModuleRules
{
    public RenegadeSplineAI(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "AIModule",
            "NavigationSystem"
        });

        PrivateDependencyModuleNames.AddRange(new[]
        {
            "GameplayTasks"
        });
    }
}
