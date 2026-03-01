using UnrealBuildTool;

public class FracturePoint : ModuleRules
{
	public FracturePoint(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",

			"EnhancedInput",

			"GameplayAbilities",
			"GameplayTags",
			"GameplayTasks",

			"Niagara",

			"UMG",

			"AIModule",
			"NavigationSystem"
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
		});
	}
}