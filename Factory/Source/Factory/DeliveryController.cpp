#include "DeliveryController.h"

void ADeliveryController::BeginPlay()
{
	Super::BeginPlay();
}

void ADeliveryController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADeliveryController::MoveToTarget()
{
	UE_LOG(LogTemp, Warning, TEXT("MoveToTarget"));
	SetMove(true);

	EPathFollowingRequestResult::Type MoveResult = MoveToLocation(TargetPos, 5.0f);
}

void ADeliveryController::SetReady(bool Ready)
{
	bReady = Ready;
}

void ADeliveryController::SetMove(bool Move)
{
	bMove = Move;
}