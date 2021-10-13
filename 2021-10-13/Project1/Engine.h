#pragma once
#include"Vector2D.h"
#include<string>

class UEngine
{
public:
	UEngine();
	~UEngine();

	//엔진을 실행함
	void Run();

	bool LoadLevel(std::string filename);

	void SpawnPlayer(FVector2D NewLocation);
	void SpawnWall(FVector2D NewLocation);
	void SpawnGoal(FVector2D NewLocation);
	void SpawnFloor(FVector2D NewLocation);

private:

	//엔진이 실행 중이면 true, 아니면 false
	bool blsRunning = false;

	void Init();
	void Term();

	void Input();
	void Tick();
	void Render();
	
	class UWorld* World;

};

