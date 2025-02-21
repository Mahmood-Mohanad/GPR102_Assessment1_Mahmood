// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/BoxComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "A1DoorSwitch.generated.h"

UCLASS()
class GPR102_ASSESSMENT1_API AA1DoorSwitch : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AA1DoorSwitch();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "scene")
	TObjectPtr<USceneComponent> SceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "box")
	TObjectPtr<UBoxComponent> aabbox;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "mesh")
	TObjectPtr<UStaticMeshComponent> Switch;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "mesh")
	TObjectPtr<UStaticMeshComponent> Housing;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
