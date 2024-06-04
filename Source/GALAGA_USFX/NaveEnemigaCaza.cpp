#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere_3.Shape_Sphere_3'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    // Obtener la ubicaci�n actual del actor
    FVector NewLocation = OriginalLocation;

    // Crear un movimiento de salto usando una funci�n seno
    float RunningTime = GetGameTimeSinceCreation();
    float DeltaHeight = FMath::Sin(RunningTime * 2) * 100.0f; // Oscilaci�n de 300 unidades
    NewLocation.Z += DeltaHeight;

    // Establecer la nueva ubicaci�n del actor
    SetActorLocation(NewLocation);
}

void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();
        OriginalLocation = GetActorLocation();


}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{

}
