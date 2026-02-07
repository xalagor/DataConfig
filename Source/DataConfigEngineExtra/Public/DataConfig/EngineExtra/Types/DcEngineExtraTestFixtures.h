#pragma once

#include "CoreMinimal.h"
#include "DataConfig/Extra/Types/DcExtraTestFixtures.h"
#include "DcEngineExtraTestFixtures.generated.h"

UCLASS()
class UDcEngineExtraInstancedObjectDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:

	        UPROPERTY(EditAnywhere, Instanced)
	        TObjectPtr<UDcBaseShape> ShapeField1;
	
	        UPROPERTY(EditAnywhere, Instanced)
	        TObjectPtr<UDcBaseShape> ShapeField2;};


