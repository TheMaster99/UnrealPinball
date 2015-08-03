// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/SceneComponent.h"
#include "GameCamera.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UNREALPINBALL_API UGameCamera : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGameCamera();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

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
