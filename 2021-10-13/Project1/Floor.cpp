#include "Floor.h"
#include<iostream>

AFloor::AFloor()
{

}

AFloor::~AFloor()
{

}

void AFloor::Render()
{
	AActor::Render();
	//���
	std::cout << " " << std::endl;
}