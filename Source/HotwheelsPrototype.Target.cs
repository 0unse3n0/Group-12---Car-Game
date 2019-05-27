// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class HotwheelsPrototypeTarget : TargetRules
{
	public HotwheelsPrototypeTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "HotwheelsPrototype" } );
	}
}
