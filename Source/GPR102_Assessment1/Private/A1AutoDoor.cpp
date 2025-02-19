// Fill out your copyright notice in the Description page of Project Settings.


#include "A1AutoDoor.h"

// Sets default values
AA1AutoDoor::AA1AutoDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Create and set the scene component as root.
    SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("cpp_SceneRoot"));
    RootComponent = SceneComponent;

    // Create the DoorWall and attach it to the SceneComponent.
    DoorWall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("cpp_DoorWall"));
    DoorWall->SetupAttachment(SceneComponent);

    // Create the DoorLeafR and attach it to the aabbox.
    DoorLeafR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("cpp_DoorLeafR"));
    DoorLeafR->SetupAttachment(SceneComponent);

    // Create the aabbox and attach it to the DoorLeafR.
    aabbox = CreateDefaultSubobject<UBoxComponent>(TEXT("cpp_AABB"));
    aabbox->SetupAttachment(DoorLeafR);

}

// Called when the game starts or when spawned
void AA1AutoDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AA1AutoDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

