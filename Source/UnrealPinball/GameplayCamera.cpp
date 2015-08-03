// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealPinball.h"
#include "GameplayCamera.h"


// Sets default values
AGameplayCamera::AGameplayCamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create and set the Root Component
	BaseComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = BaseComponent;

	//Create and set up the Camera Boom
	MainCameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("MainCamera"));
	MainCameraBoom->AttachTo(RootComponent);
	MainCameraBoom->bAbsoluteRotation = true; //Ensure rotation is always exact
	MainCameraBoom->TargetArmLength = 1200.0f;
}

// Called when the game starts or when spawned
void AGameplayCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameplayCamera::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

