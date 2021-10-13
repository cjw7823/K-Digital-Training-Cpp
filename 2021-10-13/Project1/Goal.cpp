#include "Goal.h"
#include<iostream>

AGoal::AGoal()
{
}

AGoal::~AGoal()
{
}

void AGoal::Render()
{
	AActor::Render();
	//Ãâ·Â
	std::cout << "G" << std::endl;
}
