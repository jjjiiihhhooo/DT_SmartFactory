#include "Item.h"
#include "Components/SceneComponent.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItem::SetItemLocation(FVector Pos)
{
	SetActorLocation(Pos);
}

void AItem::SetItemRotation(FRotator Rot)
{
	SetActorRotation(Rot);
}

void AItem::SetItemAttach(AActor* Parent)
{
	AttachToActor(Parent, FAttachmentTransformRules::KeepWorldTransform);
}

TArray<FVector> AItem::GetLeftWheelPosArray()
{
	TArray<FVector> Array;

	for (USceneComponent* Comp : LeftWheelArray)
	{
		if (Comp)
		{
			Array.Add(Comp->GetComponentLocation());
		}
	}

	return Array;
}

TArray<FVector> AItem::GetRightWheelPosArray()
{
	TArray<FVector> Array;

	for (USceneComponent* Comp : RightWheelArray)
	{
		if (Comp)
		{
			Array.Add(Comp->GetComponentLocation());
		}
	}

	return Array;
}
