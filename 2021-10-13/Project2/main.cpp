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
		cout << "Charater 생성" << endl;
	}
	virtual ~Charater()
	{
		cout << "Charater 파괴" << endl;
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
		cout << "Player 생성" << endl;
	}
	virtual ~Player()
	{
		cout << "Player 파괴" << endl;
	}

	int Gold;

	virtual void Move() override
	{
		cout << "Player 이동" << endl;
	}
	//virtual void Atteck() override;
};

class Monster : public Charater
{
public:
	Monster()
	{
		cout << "Monster 생성" << endl;
	}
	virtual ~Monster()
	{
		cout << "Monster 파괴" << endl;
	}

	virtual void Move() override
	{
		cout << "Monster 이동" << endl;
	}
	/*virtual void Atteck() override;
	virtual void Flee();*/
};

class Goblin : public Monster
{
public:
	Goblin()
	{
		cout << "Goblin 생성" << endl;
	}
	virtual ~Goblin()
	{
		cout << "Goblin 파괴" << endl;
	}

	virtual void Move() override
	{
		cout << "Goblin 이동" << endl;
	}
	/*virtual void Atteck() override;
	virtual void Flee() override;*/
};

class Wildpig : public Monster
{
public:
	Wildpig()
	{
		cout << "Wildpig 생성" << endl;
	}
	virtual ~Wildpig()
	{
		cout << "Wildpig 파괴" << endl;
	}
	virtual void Move() override
	{
		cout << "Wildpig 이동" << endl;
	}
	/*virtual void Atteck() override;
	virtual void Flee() override;*/
};

class Slime : public Monster
{
public:
	Slime()
	{
		cout << "slime 생성" << endl;
	}
	virtual ~Slime()
	{
		cout << "slime 파괴" << endl;
	}
	virtual void Move() override
	{
		cout << "Slime 이동" << endl;
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