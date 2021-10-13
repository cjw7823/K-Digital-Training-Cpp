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
	//Ãâ·Â
	std::cout << " " << std::endl;
}