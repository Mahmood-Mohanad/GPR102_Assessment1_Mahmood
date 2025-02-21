// Fill out your copyright notice in the Description page of Project Settings.


#include "A1DoorSwitch.h"

// Sets default values
AA1DoorSwitch::AA1DoorSwitch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("cpp_SceneRoot"));
	RootComponent = SceneComponent;

	aabbox = CreateDefaultSubobject<UBoxComponent>(TEXT("cpp_AABB"));
	aabbox->SetupAttachment(SceneComponent);

	Switch = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("cpp_Switch"));
	Switch->SetupAttachment(SceneComponent);

	Housing = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("cpp_Housing"));
	Housing->SetupAttachment(SceneComponent);

}

// Called when the game starts or when spawned
void AA1DoorSwitch::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AA1DoorSwitch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

