#include<iostream>
#include "Actor.h"

using namespace std;

Actor::Actor()
{
	cout << "	Actor:����" << endl;
	//BeingPlay();
}

Actor::~Actor()
{
	cout << "	Actor:�ı�" << endl;
}

void Actor::Input()
{
	cout << "	Actor: Input" << endl;
}

void Actor::BeginOverlap()
{
	cout << "	Actor: �浹 ó���ϱ�" << endl;
}

void Actor::Render()
{
	cout << "	Actor: ������" << endl;
}

void Actor::BeingPlay()
{
	cout << "	Actor BeginPlay" << endl;
}

void Actor::Tick()
{
	cout << "	Actor Tick" << endl;
}
