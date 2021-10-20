#include "Star.h"
#include <iostream>

Star::Star()
{
	SetLocation(0,0);
	Setcolor("");
	Name = "��";
}

Star::Star(int NewX, int NewY, string color)
{
	SetLocation(NewX, NewY);
	Setcolor(color);
	Name = "��";
}

Star::~Star()
{
}

void Star::Render()
{
	cout << "��" << endl;
}

Mesh* Star::Load(std::ifstream& readFile)
{
	string line;

	getline(readFile, line);//x��
	int X = stoi(line);
	getline(readFile, line);//y��
	int Y = stoi(line);
	getline(readFile, line);//Color
	string Color = line;

	SetLocation(X, Y);
	Setcolor(Color);

	return this;
}
