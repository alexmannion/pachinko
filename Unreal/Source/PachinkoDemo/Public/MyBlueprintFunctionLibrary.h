// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PACHINKODEMO_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "CSV")
	static bool ReadCSV(const FString& FilePath, TArray<FString>& OutRows);

public:
	UFUNCTION(BlueprintCallable, Category = "Paths")
	static FString GetConfigPath();
};
