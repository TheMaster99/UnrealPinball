// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealPinball.h"
#include "GameCamera.h"


// Sets default values for this component's properties
UGameCamera::UGameCamera()
{
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	//Create and set the Root Component
	BaseComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	//Create and set up the Camera Boom
	MainCameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("MainCamera"));
}


// Called when the game starts
void UGameCamera::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGameCamera::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

