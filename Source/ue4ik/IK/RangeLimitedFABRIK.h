// Copyright (c) Henry Cooney 2017

#pragma once

#include "CoreMinimal.h"
#include "IK.h"

/*
	Range-limited FABRIK solver. Does not need to be in the context of a Skeleton; 
	this solver is designed to work with generic transforms (in component space).
*/


struct UE4IK_API FRangeLimitedFABRIK
{
public:

	static bool SolveRangeLimitedFABRIK(
		const TArray<FTransform>& InCSTransforms,
		const TArray<UIKBoneConstraint*>& Constraints,
		const FVector& EffectorTargetLocationCS,
		TArray<FTransform>& OutCSTransforms,
		float Precision = 0.01f,
		int32 MaxIterations = 20
	);
	
	static void UpdateParentRotation(
		FTransform& NewParentTransform,
		const FTransform& OldParentTransform,
		const FTransform& NewChildTransform,
		const FTransform& OldChildTransform
	);
	
private:
   	
};