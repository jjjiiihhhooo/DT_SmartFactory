#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Manager.generated.h"

class ASpawner;
class ADeliveryController;
class ASell;
class AItemPos;
class ATriggerBox;
class UBoxComponent;

UCLASS()
class FACTORY_API AManager : public AActor
{
	GENERATED_BODY()
	
public:	
	AManager();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ASpawner* Spawner;

public:
	UFUNCTION(BlueprintCallable)
	void Run(float DeltaTime);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Order")
	int32 OrderCount;

public:
	AItemPos* SelectItemPos();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AItemPos*> ItemPosArray;

public:
	ASell* SelectSell();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ASell*> SellArray;

public:
	FVector GetEndAreaClosestPoint(const FVector& InputPoint);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector IdlePos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector EndPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector EndOutPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector ReturnPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	ATriggerBox* EndArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TestSpeed;
	
public:
	void DeliverySetTarget(ASell* Sell, AItemPos* ItemPos);
	ADeliveryController* ReadyController;

public:
	UFUNCTION(BlueprintCallable)
	void SetReady(bool Ready);
	bool IsReady();

	bool bReady;

private:
	bool SpawnTime(float DeltaTime);

	float MaxTime;
	float CurTime;
};
