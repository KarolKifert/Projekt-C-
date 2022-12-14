#include "Movement.h"
AMovement::AMovement()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMovement::BeginPlay()
{
	Super::BeginPlay();
}

void AMovement::MoveRight(float AxisValue)
{
	addMovementInput(GetActorRightVector() * AxisValue);
}

void AMovement::MoveLeft(float AxisValue)
{
	addMovementInput(GetActorLeftVector() * AxisValue);
}

void AMovement::MoveUp(float AxisValue)
{
	addMovementInput(GetActorUpVector() * AxisValue);
}

void AMovement::MoveDown(float AxisValue)
{
	addMovementInput(GetActorDownVector() * AxisValue);
}

void AMovement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMovement::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AMovement::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("MoveLeft"), this, &AMovement::MoveLeft);
	PlayerInputComponent->BindAxis(TEXT("MoveUp"), this, &AMovement::MoveUp);
	PlayerInputComponent->BindAxis(TEXT("MoveDown"), this, &AMovement::MoveDown);

}