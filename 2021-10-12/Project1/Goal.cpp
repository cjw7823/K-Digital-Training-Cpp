#include "Goal.h"
#include<iostream>
#include <windows.h>

AGoal::AGoal()
{
}

AGoal::~AGoal()
{
}

void AGoal::Render()
{
	//위치 지정
	COORD Cur;
	Cur.X = Location.X;
	Cur.Y = Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	//출력
	std::cout << "G" << std::endl;
}
