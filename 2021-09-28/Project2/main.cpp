#include<iostream>
#include<cstdlib>
#include<ctime>
#include"main.h"

using namespace std;

char Bingo[9];

int main()
{
	bool bGameState = true;
	Intialize();
	Shuffle();
	Render();

	while(bGameState)
	{
		char Key = Input();
		bGameState = Process(Key);
		Render();
		if (Check_Bingo() == 8)
		{
			bGameState = 0;
		}
	}
	Terminate();
}

void Intialize()
{
	for (int i = 0; i < 9; i++)
	{
		Bingo[i] = i + 49;
	}
}

void Shuffle()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	for (int i = 0; i < 50; i++)
	{
		int r = rand() % 9;
		int r2 = rand() % 9;
		int Temp = Bingo[r];
		Bingo[r] = Bingo[r2];
		Bingo[r2] = Temp;
	}
}

void Display()
{
	for (int i = 1; i <= 9; i++)
	{
		int j = i % 3;
		cout << Bingo[i - 1] << " ";

		if (j == 0)
		{
			cout << "\n";
		}
	}
}

void ProcessBingo(char Key)
{
	for (int i = 0; i < 9; i++)
	{
		if (Bingo[i] == Key)
		{
			Bingo[i] = 'X';
			Check_Bingo();
			break;
		}
	}

}

int Check_Bingo()
{//가로 체크
	int count = 0;

	if (Bingo[0] == 'X' && Bingo[1] == 'X' && Bingo[2] == 'X')
	{
		count++;
	}
	if (Bingo[3] == 'X' && Bingo[4] == 'X' && Bingo[5] == 'X')
	{
		count++;
	}
	if (Bingo[6] == 'X' && Bingo[7] == 'X' && Bingo[8] == 'X')
	{
		count++;
	}


//세로 체크
	if (Bingo[0] == 'X' && Bingo[3] == 'X' && Bingo[6] == 'X')
	{
		count++;
	}
	if (Bingo[1] == 'X' && Bingo[4] == 'X' && Bingo[7] == 'X')
	{
		count++;
	}
	if (Bingo[2] == 'X' && Bingo[5] == 'X' && Bingo[8] == 'X')
	{
		count++;
	}

//대각 체크
	if (Bingo[0] == 'X' && Bingo[4] == 'X' && Bingo[8] == 'X')
	{
		count++;
	}
	if (Bingo[2] == 'X' && Bingo[4] == 'X' && Bingo[6] == 'X')
	{
		count++;
	}

	return count;
}



char Input()
{
	char Key;
	cin >> Key;
	return Key;
}

bool Process(char Key)
{
	if (Key == 'q' || Key == 'Q')
	{
		return false;
	}
	Cprocess(Key);

	return true;
	
}

void Render()
{
	system("cls");
	Crender();
}

void Cprocess(char Key)
{
	ProcessBingo(Key);
}

void Crender()
{
	Display();
	if (Check_Bingo() != 0)
	{
		cout << "BINGO : " << Check_Bingo() << endl;
	}

}

void Terminate()
{

}
