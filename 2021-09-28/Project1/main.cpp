#include<iostream>
#include <windows.h> //windows ������� include
#include"prac.h"

using namespace std;

int main()
{
	while (bGameState)
	{
		char Key = Input();
		Process(Key);
		Render();
	}
}

