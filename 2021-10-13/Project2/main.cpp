#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<vector>

using namespace std;

class Charater
{
public:
	Charater()
	{
		cout << "Charater ����" << endl;
	}
	virtual ~Charater()
	{
		cout << "Charater �ı�" << endl;
	}
	int HP;
	int MP;
	int Level;

	virtual void Move() = 0;
	//virtual void Atteck();

};

class Player : public Charater
{
public:
	Player()
	{
		cout << "Player ����" << endl;
	}
	virtual ~Player()
	{
		cout << "Player �ı�" << endl;
	}

	int Gold;

	virtual void Move() override
	{
		cout << "Player �̵�" << endl;
	}
	//virtual void Atteck() override;
};

class Monster : public Charater
{
public:
	Monster()
	{
		cout << "Monster ����" << endl;
	}
	virtual ~Monster()
	{
		cout << "Monster �ı�" << endl;
	}

	virtual void Move() override
	{
		cout << "Monster �̵�" << endl;
	}
	/*virtual void Atteck() override;
	virtual void Flee();*/
};

class Goblin : public Monster
{
public:
	Goblin()
	{
		cout << "Goblin ����" << endl;
	}
	virtual ~Goblin()
	{
		cout << "Goblin �ı�" << endl;
	}

	virtual void Move() override
	{
		cout << "Goblin �̵�" << endl;
	}
	/*virtual void Atteck() override;
	virtual void Flee() override;*/
};

class Wildpig : public Monster
{
public:
	Wildpig()
	{
		cout << "Wildpig ����" << endl;
	}
	virtual ~Wildpig()
	{
		cout << "Wildpig �ı�" << endl;
	}
	virtual void Move() override
	{
		cout << "Wildpig �̵�" << endl;
	}
	/*virtual void Atteck() override;
	virtual void Flee() override;*/
};

class Slime : public Monster
{
public:
	Slime()
	{
		cout << "slime ����" << endl;
	}
	virtual ~Slime()
	{
		cout << "slime �ı�" << endl;
	}
	virtual void Move() override
	{
		cout << "Slime �̵�" << endl;
	}
	/*virtual void Atteck() override;
	virtual void Flee() override;*/
};

int main()
{
	vector<Charater*> Characters;

	Characters.push_back(new Player());

	srand((unsigned int)time(nullptr));

	for (int i = 0; i < 10; i++)
	{
		int Type = rand() % 3;
		if (Type == 0)
		{
			Characters.push_back(new Goblin());
		}

		else if (Type == 1)
		{
			Characters.push_back(new Slime());
		}
		else
		{
			Characters.push_back(new Wildpig());
		}
	}

	for (size_t i = 0; i < Characters.size(); i++)
	{
		Characters[i]->Move();
	}
	for (auto PlayCharacter : Characters)
	{
		PlayCharacter->Move();
	}


}