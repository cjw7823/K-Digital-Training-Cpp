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
	//���
	std::cout << "#" << std::endl;
}

