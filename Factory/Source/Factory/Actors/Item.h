#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class USceneComponent;

UCLASS()
class FACTORY_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	AItem();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Wheel")
	TArray<USceneComponent*> LeftWheelArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Wheel")
	TArray<USceneComponent*> RightWheelArray;

public:
	void SetItemLocation(FVector Pos);
	void SetItemRotation(FRotator Rot);
	void SetItemAttach(AActor* Parent);

	TArray<FVector> GetLeftWheelPosArray();
	TArray<FVector> GetRightWheelPosArray();
};
