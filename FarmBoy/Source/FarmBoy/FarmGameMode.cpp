// Fill out your copyright notice in the Description page of Project Settings.


#include "FarmGameMode.h"
#include "Sanjikun/Sanjikun.h"
#include "UObject/ConstructorHelpers.h"

AFarmGameMode::AFarmGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprint/BP_Sanjikun"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}


