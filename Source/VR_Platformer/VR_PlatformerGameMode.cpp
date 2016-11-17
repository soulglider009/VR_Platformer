// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "VR_Platformer.h"
#include "VR_PlatformerGameMode.h"
#include "VR_PlatformerCharacter.h"

AVR_PlatformerGameMode::AVR_PlatformerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Player/Player_Troll/Player_Troll"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
