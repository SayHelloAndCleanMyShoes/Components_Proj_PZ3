// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Barrack.h"
#include "Components_Proj_PZ3GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class COMPONENTS_PROJ_PZ3_API AComponents_Proj_PZ3GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
    virtual void BeginPlay()override;
    
    UPROPERTY()
    ABarrack* MainBarrack;
	
	
};
