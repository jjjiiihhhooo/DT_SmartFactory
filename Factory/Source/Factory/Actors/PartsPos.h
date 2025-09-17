#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PartsPos.generated.h"

UCLASS()
class FACTORY_API APartsPos : public AActor
{
	GENERATED_BODY()
	
public:	
	APartsPos();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	void SetParts(AActor* NewParts);
	void SetPartsLocation(FVector Pos);
	void SetPartsRotation(FRotator Rot);
	void SetPartsAttach(AActor* Parent);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SpawnPos;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector IdlePos;

public:
	void SetSelect(bool Select);
	bool IsSelect();
	bool IsReady();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Parts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSelect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReady;
};
