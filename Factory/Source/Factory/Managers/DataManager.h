#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DataManager.generated.h"

class ASpawner;
class ADeliveryController;
class ASell;
class AItemPos;
class ATriggerBox;
class UBoxComponent;

UCLASS()
class FACTORY_API ADataManager : public AActor
{
	GENERATED_BODY()
	
public:	
	ADataManager();
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ASpawner* Spawner;

public:
	bool IsControllerExist();
	void SetReadyController();
	ADeliveryController* GetReadyController();
	void DeliverySetTarget(ASell* Sell, AItemPos* ItemPos);
	bool StartDeliveryProcess();


	ADeliveryController* ReadyController;

public:
	AItemPos* SelectItemPos();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AItemPos*> ItemPosArray;

public:
	ASell* SelectSell();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ASell*> SellArray;

public:
	UBoxComponent* GetEndAreaBoxComp();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	ATriggerBox* EndArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector IdlePos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector EndPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector EndOutPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector ReturnPos;

public:
	int32 GetOrderCount();
	int32 GetCurrentCount();
	int32 GetCompleteCount();

	void SetOrderCount(int32 Count);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Order")
	int32 OrderCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Order")
	int32 CurrentCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Order")
	int32 CompleteCount;
};
