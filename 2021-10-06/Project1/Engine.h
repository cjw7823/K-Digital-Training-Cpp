#pragma once

//Collection Java
//Collection C#
//STL, C++
#include<vector>
#include<algorithm>


using namespace std;

class Actor;

class Engine
{
public:
	Engine();	//엔진 시작
	~Engine();	//엔진 종료

	void Run();	//엔진 실행

	void SpawnActor();
	void DestroyActor(int Index);

private:
	void Initialize();	//엔진 초기화
	void Input();		//입력 받기.
	void Tick();		//엔진 처리. (종료키 입력, 충돌 처리 등..)
	void Render();		//엔진 그림 그리기.
	void Terminalize();	//엔진 정리

	void BeginPlay();	//엔진 최초 실행시 이벤트
	void BeginOverlap();//충돌 처리 이벤트

	vector<Actor*> Actors;
	//Actor* Actors[1000];
	//int CountOfActors = 0;

	bool blsRunning = true;
	bool bFirstRun = true;
};

