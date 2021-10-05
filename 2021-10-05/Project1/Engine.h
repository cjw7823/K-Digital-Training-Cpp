#pragma once//중복 선언하지 마라.

class Player;
class Map;

//맵을 초기화 한다.
//사용자에게 입력 값을 받는다.
//플레이어를 이동시킨다.
//충돌 처리한다.
//종료키 입력 전까지 계속 구동한다.
//처리 결과를 화면에 출력한다.

//엔진은 유저의 입력을 받고 처리하고 화면에 그린다.
//우리 엔진은 플레이어를 가지고 있고 맵도 가지고 있다.(has a)
//0. 초기화 한다.			Initialize();
//1. 입력을 받는다.			Input();
//2. 정보를 처리한다.		Process();
//3. 화면에 그린다.			Render();
//4. 정리한다.(종료한다.)	Terminalize();

class Engine
{
public:
	Engine();	//Default Construtor
	~Engine();	//Destructor

	Player* player;
	Map* map;
	void Run();
	

private:
	void Initialize();
	void Input();
	void Process();
	void Render();
	void Terminalize();
};