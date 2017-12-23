using UnrealBuildTool;

public class AIPlayerState: ModuleRules
{
	public AIPlayerState( ReadOnlyTargetRules Target ) : base( Target )
	{
		PublicIncludePaths.AddRange(
			new string[] {
				"AIPlayerState/Public"
			}
			);

		PrivateIncludePaths.AddRange(
			new string[] {
				"AIPlayerState/Private",
			}
			);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"InputCore"
			}
			);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"AIModule"
			}
			);

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
			}
			);
	}
}
