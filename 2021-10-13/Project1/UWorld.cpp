#include "UWorld.h"
#include"Player.h"
#include"Floor.h"
#include"Goal.h"
#include"Wall.h"
#include<iostream>

using namespace std;

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
	Term();
}

void UWorld::Init()
{
}

void UWorld::Term()
{
	for (size_t i = 0; i < Actors.size(); i++)
	{
		if (Actors[i] != nullptr)
		{
			delete Actors[i];
			Actors[i] = nullptr;
		}

	}
	Actors.clear();

}

void UWorld::Run()
{
	while (true)
	{
		for (AActor* CurrentActor : Actors)
		{
			CurrentActor->Render();
		}
	}
}

void UWorld::AddPlayer(APlayer* NewPlayer)
{
	//Player = NewPlayer;
	Actors.push_back(NewPlayer);
}

void UWorld::AddWall(AWall* NewWall)
{
	//Walls.push_back(NewWall);
	Actors.push_back(NewWall);
}

void UWorld::AddFloor(AFloor* NewFloor)
{
	//Floors.push_back(NewFloor);
	Actors.push_back(NewFloor);
}

void UWorld::AddGoal(AGoal* NewGoal)
{
	//Goal = NewGoal;
	Actors.push_back(NewGoal);
}


