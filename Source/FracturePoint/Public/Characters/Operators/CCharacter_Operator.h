#pragma once

#include "CoreMinimal.h"
#include "Characters/CCharacter.h"
#include "CCharacter_Operator.generated.h"

class USpringArmComponent;
class UCameraComponent;

/**
 * 
 */
UCLASS(Blueprintable)
class FRACTUREPOINT_API ACCharacter_Operator : public ACCharacter
{
	GENERATED_BODY()
	
public:
	ACCharacter_Operator();

private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> Camera;
};
