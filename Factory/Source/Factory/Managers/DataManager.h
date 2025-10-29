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

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCountChanged);

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
	bool IsControllerExist() const;
	void SetReadyController();
	ADeliveryController* GetReadyController() const;
	void DeliverySetTarget(ASell* Sell, AItemPos* ItemPos);
	bool StartDeliveryProcess();

	UPROPERTY(BlueprintAssignable, Category = "DataManager IEvent")
	FOnCountChanged OnOrderCountUpdate;

	UPROPERTY(BlueprintAssignable, Category = "DataManager IEvent")
	FOnCountChanged OnDeliveryCountUpdate;

	UPROPERTY(BlueprintAssignable, Category = "DataManager IEvent")
	FOnCountChanged OnCompletedCountUpdate;

	ADeliveryController* ReadyController;

public:
	AItemPos* SelectItemPos() const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AItemPos*> ItemPosArray;

public:
	ASell* SelectSell() const;

	UFUNCTION(BlueprintCallable, Category = "Sell")
	ASell* GetSellAt(int32 Index) const;

	UFUNCTION(BlueprintCallable, Category = "Sell")
	void ToggleSellState(int32 Index) const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ASell*> SellArray;

public:
	UBoxComponent* GetEndAreaBoxComp() const;

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
	UFUNCTION(BlueprintPure, Category = "Count")
	int32 GetOrderCount() const;

	UFUNCTION(BlueprintPure, Category = "Count")
	int32 GetCompletedCount() const;

	UFUNCTION(BlueprintPure, Category = "Count")
	int32 GetDeliveryCount() const;

	int32 GetCurrentDeliveryCount() const;

	UFUNCTION(BlueprintCallable, Category = "Count")
	void IncreaseOrderCount();
	
	UFUNCTION(BlueprintCallable, Category = "Count")
	void DecreaseOrderCount();

	UFUNCTION(BlueprintCallable, Category = "Count")
	void IncreaseDeliveryCount();
	
	UFUNCTION(BlueprintCallable, Category = "Count")
	void DecreaseDeliveryCount();

	UFUNCTION(BlueprintCallable, Category = "Count")
	void IncreaseCompletedCount();

	void IncreaseCurrentDeliveryCount();
	void DecreaseCurrentDeliveryCount();
	
	void SetOrderCount(int32 Count);

	bool IsDeliveryFull() const;

	UPROPERTY(VisibleAnywhere, Category = "Count")
	int32 OrderCount;

	UPROPERTY(VisibleAnywhere, Category = "Count")
	int32 CompletedCount;

	UPROPERTY(VisibleAnywhere, Category = "Count")
	int32 DeliveryCount;

	int32 CurrentDeliveryCount;
};
