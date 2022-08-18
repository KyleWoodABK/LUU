// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class w6d3_TheDoor_ver2EditorTarget : TargetRules
{
	public w6d3_TheDoor_ver2EditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "w6d3_TheDoor_ver2" } );
	}
}
