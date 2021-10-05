#pragma once//�ߺ� �������� ����.

class Player;
class Map;

//���� �ʱ�ȭ �Ѵ�.
//����ڿ��� �Է� ���� �޴´�.
//�÷��̾ �̵���Ų��.
//�浹 ó���Ѵ�.
//����Ű �Է� ������ ��� �����Ѵ�.
//ó�� ����� ȭ�鿡 ����Ѵ�.

//������ ������ �Է��� �ް� ó���ϰ� ȭ�鿡 �׸���.
//�츮 ������ �÷��̾ ������ �ְ� �ʵ� ������ �ִ�.(has a)
//0. �ʱ�ȭ �Ѵ�.			Initialize();
//1. �Է��� �޴´�.			Input();
//2. ������ ó���Ѵ�.		Process();
//3. ȭ�鿡 �׸���.			Render();
//4. �����Ѵ�.(�����Ѵ�.)	Terminalize();

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