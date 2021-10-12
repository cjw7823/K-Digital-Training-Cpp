#include "Actor.h"
#include<iostream>

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
	std::cout << "Actor Render()" << std::endl;
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