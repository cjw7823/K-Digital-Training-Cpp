#include "Engine.h"
#include"UWorld.h"
#include"Player.h"
#include"Floor.h"
#include"Goal.h"
#include"Wall.h"

UEngine::UEngine()
{
	Init();
}

UEngine::~UEngine()
{
	Term();
}

void UEngine::Run()
{
	World->Run();
	
}

void UEngine::SpawnPlayer(FVector2D NewLocation)
{
	APlayer* NewPlayer = new APlayer();
	NewPlayer->SetLocation(NewLocation);

	World->AddPlayer(NewPlayer);
}

void UEngine::SpawnWall(FVector2D NewLocation)
{
	AWall* NewWall = new AWall();
	NewWall->SetLocation(NewLocation);

	World->AddWall(NewWall);
}

void UEngine::SpawnGoal(FVector2D NewLocation)
{
	AGoal* NewGoal = new AGoal();
	NewGoal->SetLocation(NewLocation);

	World->AddGoal(NewGoal);
}

void UEngine::SpawnFloor(FVector2D NewLocation)
{
	AFloor* NewFloor = new AFloor();
	NewFloor->SetLocation(NewLocation);

	World->AddFloor(NewFloor);
}

void UEngine::Init()
{
	World = new UWorld();
}

void UEngine::Term()
{
	if (World != nullptr)
	{
		delete World;
		World = nullptr;
	}
}

void UEngine::Input()
{

}

void UEngine::Tick()
{
}

void UEngine::Render()
{
}
