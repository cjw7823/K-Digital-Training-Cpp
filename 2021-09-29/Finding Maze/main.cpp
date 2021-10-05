#include<iostream>
#include<conio.h>
#include<Windows.h>

using namespace std;

char PlayerKey();
void Display();
void Process();	
void MovePlayer(int XDirection, int YDirection);
void ChangeColor(int Color);


int PlayerX = 1;
int PlayerY = 8;
bool bGameState = 1;
int MapType = 0;
int Meg = 0;
char Map[2][10][10] = {
	{{1,1,1,1,1,1,1,1,1,1},
	 {1,0,0,0,0,0,0,1,0,1},
	 {1,0,1,1,1,0,0,0,0,1},
	 {1,0,0,1,0,0,1,0,0,1},
	 {1,1,0,1,1,1,1,0,0,1},
	 {1,0,0,1,0,0,0,0,0,1},
	 {1,0,1,1,0,0,0,1,0,1},
	 {1,0,1,0,0,1,1,1,1,1},
	 {1,0,1,0,0,0,0,0,9,1},
	 {1,1,1,1,1,1,1,1,1,1}},

	{{1,1,1,1,1,1,1,1,1,1},
	 {1,0,0,0,0,0,0,0,0,1},
     {1,0,1,1,1,1,1,1,0,1},
	 {1,0,1,0,0,0,0,1,0,1},
	 {1,0,1,0,0,1,0,1,0,1},
   	 {1,0,1,0,0,1,0,1,0,1},
 	 {1,0,1,0,0,0,0,1,0,1},
	 {1,0,1,0,0,0,0,1,0,1},
 	 {1,8,0,0,0,0,0,1,0,1},
	 {1,1,1,1,1,1,1,1,1,1}}
};


int main()
{

	Display();
	while(bGameState)
	{
		Process();
		system("cls");
		Display();
	}
}

char PlayerKey()
{
	char key;
	key = _getch();
	return key;
}

void Display()
{

	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (PlayerX == x && PlayerY == y)
			{
				ChangeColor(13);
				cout << "P";
				cout << " ";
			}
			else if (Map[MapType][y][x] == 1)
			{
				ChangeColor(7);
				cout << "X" << " ";
			}
			else if (Map[MapType][y][x] == 9)
			{
				ChangeColor(14);
				cout << "O" << " ";
			}
			else if (Map[MapType][y][x] == 8)
			{
				ChangeColor(3);
				cout << "G" << " ";
			}

			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	if (Meg == 1)
	{
		cout << "축하합니다!" << endl;
	}
}

void Process()
{
	switch (PlayerKey())
	{
		case 'W':
		case 'w':
		{
			MovePlayer(0, -1);
			break;
		}
		case 'S':
		case 's':
		{
			MovePlayer(0, 1);
			break;
		}
		case 'A':
		case 'a':
		{
			MovePlayer(-1, 0);

			break;
		}
		case 'D':
		case 'd':
		{
			MovePlayer(1, 0);
			break;
		}
		case 'Q':
		case 'q':
			{
				bGameState = 0;
			}
	}
}

void MovePlayer(int XDirection, int YDirection)
{
	int NewPlayerX = PlayerX + XDirection;
	int NewPlayerY = PlayerY + YDirection;

	if (Map[MapType][NewPlayerY][NewPlayerX] == 0)
	{
		PlayerX = NewPlayerX;
		PlayerY = NewPlayerY;
	}
	else if (Map[MapType][NewPlayerY][NewPlayerX] == 9)
	{
		PlayerX = NewPlayerX;
		PlayerY = NewPlayerY;
		MapType = 1;
	}
	else if (Map[MapType][NewPlayerY][NewPlayerX] == 8)
	{
		PlayerX = NewPlayerX;
		PlayerY = NewPlayerY;
		bGameState = 0;
		Meg = 1;
	}
}

void ChangeColor(int Color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}

