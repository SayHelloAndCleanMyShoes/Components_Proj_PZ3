// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Components_Proj_PZ3EditorTarget : TargetRules
{
	public Components_Proj_PZ3EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Components_Proj_PZ3" } );
	}
}
