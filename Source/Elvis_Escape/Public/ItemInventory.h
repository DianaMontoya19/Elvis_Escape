// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemInventory.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum EItemType
{
	GoldKeys UMETA(DisplayName = "GoldKeys"),
	SilverKeys UMETA(DisplayName = "SilverKeys"),
	BronzeKeys UMETA(DisplayName = "BronzeKeys"),
	PotionGreen UMETA(DisplayName = "PotionGreen"),
	PotionBlue UMETA(DisplayName = "PotionBlue")
	
	
};
UCLASS()
class ELVIS_ESCAPE_API UItemInventory : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	TEnumAsByte<EItemType>TypeItem;
	
	
	
};
