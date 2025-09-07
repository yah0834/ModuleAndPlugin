﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void ATestActor::BeginPlay()
{
	Super::BeginPlay();

	UKismetSystemLibrary::PrintString(this, TEXT("ATestActor::BeginPlay()"));
}
