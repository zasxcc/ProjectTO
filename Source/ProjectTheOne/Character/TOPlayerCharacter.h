// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TOCharacter.h"
#include "TOPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTTHEONE_API ATOPlayerCharacter : public ATOCharacter
{
	GENERATED_BODY()

public:
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return CameraComponent; }
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return SpringArmComponent; }

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = TheOne, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = TheOne, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArmComponent;
};
