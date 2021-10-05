#include<iostream>
#include <windows.h> //windows 헤더파일 include
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

