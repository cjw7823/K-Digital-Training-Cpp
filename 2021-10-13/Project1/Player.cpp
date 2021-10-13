#include "Player.h"
#include<iostream>

APlayer::APlayer()
{
}

APlayer::~APlayer()
{
}

//void APlayer::Input()
//{
//}
//
void APlayer::Render()
{
	AActor::Render();
	//Ãâ·Â
	std::cout << "P" << std::endl;
}
//
//void APlayer::Tick()
//{
//}
