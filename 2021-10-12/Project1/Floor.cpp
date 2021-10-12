#include "Floor.h"
#include<iostream>
#include <windows.h>

AFloor::AFloor()
{

}

AFloor::~AFloor()
{

}

void AFloor::Render()
{
	//위치 지정
	COORD Cur;
	Cur.X = Location.X;
	Cur.Y = Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	//출력
	std::cout << " " << std::endl;
}