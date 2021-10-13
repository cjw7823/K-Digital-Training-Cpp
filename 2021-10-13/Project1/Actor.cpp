#include "Actor.h"
#include<iostream>
#include <windows.h>

AActor::AActor()
{
}

AActor::~AActor()
{
}

void AActor::Input()
{
}

void AActor::Tick()
{
}

void AActor::Render()
{
	//위치 지정
	COORD Cur;
	Cur.X = Location.X;
	Cur.Y = Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	
}

void AActor::SetLocation(FVector2D NewLocation)
{
	Location.X = NewLocation.X;
	Location.Y = NewLocation.Y;
}

FVector2D AActor::GetLocation()
{
	return Location;
}