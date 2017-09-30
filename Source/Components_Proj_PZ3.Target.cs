// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Components_Proj_PZ3Target : TargetRules
{
	public Components_Proj_PZ3Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Components_Proj_PZ3" } );
	}
}
