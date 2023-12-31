#include "CPatrolPath.h"
#include "Global.h"
#include "Components/SplineComponent.h"
#include "Components/TextRenderComponent.h"

ACPatrolPath::ACPatrolPath()
{
	CHelpers::CreateSceneComponent(this, &Root, "Root");
	CHelpers::CreateSceneComponent(this, &Spline, "Spline", Root);
	CHelpers::CreateSceneComponent(this, &Text, "Text", Root);

	Spline->SetRelativeLocation(FVector(0, 0, 30));

	Text->SetRelativeLocation(FVector(0, 0, 120));
	Text->SetRelativeRotation(FRotator(0, 180, 0));
	Text->SetHorizontalAlignment(EHorizTextAligment::EHTA_Center);
	Text->SetTextRenderColor(FColor::Red);

	Spline->bShouldVisualizeScale = true;
	Spline->ScaleVisualizationWidth = 20.f;
}

void ACPatrolPath::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	Spline->SetClosedLoop(bClosedLoop);
	Text->SetText(GetActorLabel());
}

void ACPatrolPath::BeginPlay()
{
	Super::BeginPlay();

	Text->SetVisibility(false);
}