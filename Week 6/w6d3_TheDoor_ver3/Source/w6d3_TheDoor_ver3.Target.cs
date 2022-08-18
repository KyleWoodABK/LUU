// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class w6d3_TheDoor_ver3Target : TargetRules
{
	public w6d3_TheDoor_ver3Target( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "w6d3_TheDoor_ver3" } );
	}
}
