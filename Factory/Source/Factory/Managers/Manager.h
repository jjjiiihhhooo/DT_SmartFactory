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
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Order")
	int32 CurrentCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Order")
	int32 CompleteCount;


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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector IdlePos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector EndPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector EndOutPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ReturnPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ATriggerBox* EndArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TestSpeed;

public:
	UFUNCTION(BlueprintCallable)
	void SetReady(bool Ready);

private:
	bool IsReady();

	bool bReady;

	ADeliveryController* ReadyController;

private:
	bool SpawnTime(float DeltaTime);

	float MaxTime;
	float CurTime;
};
