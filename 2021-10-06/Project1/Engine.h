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
	Engine();	//���� ����
	~Engine();	//���� ����

	void Run();	//���� ����

	void SpawnActor();
	void DestroyActor(int Index);

private:
	void Initialize();	//���� �ʱ�ȭ
	void Input();		//�Է� �ޱ�.
	void Tick();		//���� ó��. (����Ű �Է�, �浹 ó�� ��..)
	void Render();		//���� �׸� �׸���.
	void Terminalize();	//���� ����

	void BeginPlay();	//���� ���� ����� �̺�Ʈ
	void BeginOverlap();//�浹 ó�� �̺�Ʈ

	vector<Actor*> Actors;
	//Actor* Actors[1000];
	//int CountOfActors = 0;

	bool blsRunning = true;
	bool bFirstRun = true;
};

