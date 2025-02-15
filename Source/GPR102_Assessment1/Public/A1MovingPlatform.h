// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "A1MovingPlatform.generated.h"

UCLASS()
class GPR102_ASSESSMENT1_API AA1MovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AA1MovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="mesh"); //setting up meta specifiers
	TObjectPtr<UStaticMeshComponent> MeshComp;  //adding component

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
