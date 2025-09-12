#include "Spawner.h"
#include "DeliveryController.h"
#include "GameFramework/CharacterMovementComponent.h"

ASpawner::ASpawner()
{
	PrimaryActorTick.bCanEverTick = true;

	Count = 10;
}

void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	
	InitPool();
}

void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawner::InitPool()
{
	for (int32 i = 0; i < Count; i++)
	{
		CreateDelivery();
	}
}

void ASpawner::CreateDelivery()
{
	ACharacter* Delivery = GetWorld()->SpawnActor<ACharacter>(DeliveryClass, FVector::ZeroVector, FRotator::ZeroRotator);

	ADeliveryController* Controller = GetWorld()->SpawnActor<ADeliveryController>(ADeliveryController::StaticClass());
	Controller->Possess(Delivery);

	AllPooled.Add(Delivery);

	DeliveryEnqueue(Delivery);
}

void ASpawner::DeliveryEnqueue(ACharacter* Delivery)
{
	if (UCharacterMovementComponent* MovementComp = Delivery->GetCharacterMovement())
	{
		MovementComp->StopMovementImmediately();
		MovementComp->GravityScale = 0.0f;
	}


	Delivery->SetActorEnableCollision(false);
	Delivery->SetActorHiddenInGame(true);
	Delivery->SetActorTickEnabled(false);
	Delivery->SetActorTransform(GetTransform());

	DeliveryQueue.Enqueue(Delivery);
}

ACharacter* ASpawner::GetDelivery()
{
	if (DeliveryQueue.IsEmpty())
	{
		CreateDelivery();
	}

	ACharacter* Delivery;
	DeliveryQueue.Dequeue(Delivery);

	Delivery->SetActorHiddenInGame(false);
	Delivery->SetActorEnableCollision(true);
	Delivery->SetActorTickEnabled(true);

	if (UCharacterMovementComponent* MovementComp = Delivery->GetCharacterMovement())
	{
		MovementComp->GravityScale = 1.0f;
	}

	UE_LOG(LogTemp, Warning, TEXT("GetDelivery"));

	return Delivery;
}

void ASpawner::ReturnDelivery(ACharacter* Delivery)
{
	DeliveryEnqueue(Delivery);
}

int32 ASpawner::GetCount()
{
	return Count;
}