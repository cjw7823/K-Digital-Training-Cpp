#pragma once
#include"Vector2D.h"

class AActor
{
public:
	AActor();
	~AActor();

	void Input();
	void Tick();
	void Render();

	//Accessor
	void SetLocation(FVector2D NewLocation);
	FVector2D GetLocation();

protected:
	FVector2D Location;
};

