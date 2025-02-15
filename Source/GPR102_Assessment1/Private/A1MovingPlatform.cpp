// Fill out your copyright notice in the Description page of Project Settings.


#include "A1MovingPlatform.h"

// Sets default values
AA1MovingPlatform::AA1MovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("cpp_mesh")); // the component "MeshComp" assigned to (child-component) type UStaticMeshComponent named cpp_mesh
	MeshComp->SetupAttachment(RootComponent); // attach MeshComp below RootComponent (aka default scene root component)

}

// Called when the game starts or when spawned
void AA1MovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AA1MovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
