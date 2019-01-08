// Fill out your copyright notice in the Description page of Project Settings.

// Not necessary
// #include "Gameframework/Actor.h"

#include "PositionReport.h"

// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();

	FString obj_name = GetOwner()->GetName();
	FVector obj_loc = GetOwner()->GetActorLocation();
	FString obj_pos = FString::Printf( TEXT("X=%f, Y=%f, Z=%f"), obj_loc.X, obj_loc.Y, obj_loc.Z);
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *obj_name, *obj_pos);
	
}


// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

