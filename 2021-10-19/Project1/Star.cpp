#include "Star.h"
#include <iostream>

Star::Star()
{
	SetLocation(0,0);
	Setcolor("");
	Name = "별";
}

Star::Star(int NewX, int NewY, string color)
{
	SetLocation(NewX, NewY);
	Setcolor(color);
	Name = "별";
}

Star::~Star()
{
}

void Star::Render()
{
	cout << "☆" << endl;
}

Mesh* Star::Load(std::ifstream& readFile)
{
	string line;

	getline(readFile, line);//x값
	int X = stoi(line);
	getline(readFile, line);//y값
	int Y = stoi(line);
	getline(readFile, line);//Color
	string Color = line;

	SetLocation(X, Y);
	Setcolor(Color);

	return this;
}
