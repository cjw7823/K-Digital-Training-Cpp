#include "AWall.h"
#include<iostream>
#include <windows.h>

AWall::AWall()
{
}

AWall::~AWall()
{
}

void AWall::Render()
{
	//��ġ ����
	COORD Cur;
	Cur.X = Location.X;
	Cur.Y = Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	//���
	std::cout << "#" << std::endl;
}

