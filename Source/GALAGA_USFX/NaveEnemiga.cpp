#include "NaveEnemiga.h"

ANaveEnemiga::ANaveEnemiga()
{
	PrimaryActorTick.bCanEverTick = true;

	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetupAttachment(RootComponent);
	RootComponent = mallaNaveEnemiga;

	//// Crear el componente de colisi�n
	//CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	//// Configurar el componente de colisi�n
	//CollisionBox->SetCollisionProfileName("BlockAllDynamic");
	//// Asignar el componente de colisi�n como el ra�z del actor
	//RootComponent = CollisionBox;
}

void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Angulo += Speed * DeltaTime;

	//float NuevaY = GetActorLocation().Y + Radio * FMath::Sin(Angulo) * DeltaTime;

	//FVector NewLocation = FVector(GetActorLocation().X, NuevaY, GetActorLocation().Z);
	//SetActorLocation(NewLocation);

}

