#include<iostream>
#include "Engine.h"
#include"Actor.h"

using namespace std;

Engine::Engine()
{
	Initialize();
}

Engine::~Engine()
{
	Terminalize();
}

void Engine::Run()
{
	while (blsRunning)
	{
		Input();
		Tick();
		Render();
	}

}

void Engine::SpawnActor()
{
	Actors.push_back(new Actor());
	//Actors[CountOfActors++] = new Actor;
}

void Engine::DestroyActor(int Index)
{
	delete Actors[Index];
	Actors.erase(Actors.begin() + Index);
	//Actors[Index] = nullptr;

}

void Engine::Initialize()
{
	cout << "Engine: 초기화" << endl;
}

void Engine::Input()
{
	cout << "Engine: 사용자 입력 받기" << endl;

	for (size_t i = 0; i < Actors.size(); i++)
	{
		Actors[i]->Input();
	}

}

void Engine::Tick()
{
	if (bFirstRun)
	{
		bFirstRun = false;
		BeginPlay();
	}
	cout << "Engine: Tick" << endl;
	for (size_t i = 0; i < Actors.size(); i++)
	{
		Actors[i]->Tick();
	}
}

void Engine::Render()
{
	cout << "Engine: 그림 그리기" << endl;
	for (size_t i = 0; i < Actors.size(); i++)
	{
		Actors[i]->Render();
	}
	
}

void Engine::Terminalize()
{
	for (size_t i = 0; i < Actors.size(); i++)
	{
		delete Actors[i];
	}

	Actors.clear();

	cout << "Engine: 종료. 자료정리." << endl;
}

void Engine::BeginPlay()
{
	cout << "Engine: BeginPlay" << endl;
}

void Engine::BeginOverlap()
{
}
