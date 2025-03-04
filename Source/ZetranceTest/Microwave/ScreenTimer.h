// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ScreenTimer.generated.h"

/**
 * 
 */
UCLASS()
class ZETRANCETEST_API UScreenTimer : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Timer;
};
