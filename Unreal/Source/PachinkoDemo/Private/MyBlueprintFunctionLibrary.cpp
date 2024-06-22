// Fill out your copyright notice in the Description page of Project Settings.

//#include "PachinkoDemo.h"
#include "MyBlueprintFunctionLibrary.h"
#include "Misc/Paths.h"

bool UMyBlueprintFunctionLibrary::ReadCSV(const FString& FilePath, TArray<FString>& OutRows)
{
    return FFileHelper::LoadFileToStringArray(OutRows, *FilePath);
}

FString UMyBlueprintFunctionLibrary::GetConfigPath()
{
    return FPaths::ProjectConfigDir();
}