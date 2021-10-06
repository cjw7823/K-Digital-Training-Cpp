#include<iostream>
#include "Actor.h"

using namespace std;

Actor::Actor()
{
	cout << "	Actor:생성" << endl;
	//BeingPlay();
}

Actor::~Actor()
{
	cout << "	Actor:파괴" << endl;
}

void Actor::Input()
{
	cout << "	Actor: Input" << endl;
}

void Actor::BeginOverlap()
{
	cout << "	Actor: 충돌 처리하기" << endl;
}

void Actor::Render()
{
	cout << "	Actor: 렌더링" << endl;
}

void Actor::BeingPlay()
{
	cout << "	Actor BeginPlay" << endl;
}

void Actor::Tick()
{
	cout << "	Actor Tick" << endl;
}
