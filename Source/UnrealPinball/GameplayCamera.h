// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "GameplayCamera.generated.h"

UCLASS()
class UNREALPINBALL_API AGameplayCamera : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameplayCamera();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	//Empty Root Component for Attaching
	UPROPERTY(VisibleDefaultsOnly, Category = "Camera")
	class USceneComponent* BaseComponent;

	//Main Camera Component
	UPROPERTY(VisibleDefaultsOnly, Category = "Camera")
	class UCameraCOmponent* MainCamera;

	//Camera Boom (Positioning)
	UPROPERTY(VisibleDefaultsOnly, Category = "Camera")
	class USpringArmComponent* MainCameraBoom;
	
};
