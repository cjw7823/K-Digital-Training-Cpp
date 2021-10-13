#include "Wall.h"
#include<iostream>

AWall::AWall()
{
}

AWall::~AWall()
{
}

void AWall::Render()
{
	AActor::Render();
	//Ãâ·Â
	std::cout << "#" << std::endl;
}

