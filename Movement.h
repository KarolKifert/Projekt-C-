#pragma once

UCLASS()
class ProjektCPP_API AMovement : public ACharacter
{
	GENERATED_BODY()

public:
	AMovement();

protected:
	virtual void BeginPlay() override;

	void MoveRight(float AxisValue);
	void MoveLeft(float AxisValue);
	void MoveUp(float AxisValue);
	void MoveDown(float AxisValue);

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UinputComponent* PlayerInputComponent) override;

};