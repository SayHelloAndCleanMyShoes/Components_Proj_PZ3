// Fill out your copyright notice in the Description page of Project Settings.

#include "Components_Proj_PZ3GameModeBase.h"


void AComponents_Proj_PZ3GameModeBase::BeginPlay() {
    FTransform transform;
    MainBarrack = (ABarrack*)GetWorld()->SpawnActor(ABarrack::StaticClass(), &transform);
}

