#include "Rec.h"
#include<iostream>

Rec::Rec()
{
	SetLocation(0,0);
	SetWidth(0);
	SetHeight(0);
	Name = "네모";
}

Rec::Rec(int NewX, int NewY, int NewWidth, int NewHeight)
{
	SetLocation(NewX, NewY);
	SetWidth(NewWidth);
	SetHeight(NewHeight);
	Name = "네모";
}

Rec::~Rec()
{
}

void Rec::Render()
{
	//Gotoxy(GetLocation());
	std::cout << "□" << std::endl;
}

void Rec::Save(std::ofstream& writeFile)
{
	writeFile << GetName() << std::endl;
	writeFile << GetLocation().X << std::endl;
	writeFile << GetLocation().Y << std::endl;
	writeFile << GetWidth() << std::endl;
	writeFile << GetHeight() << std::endl;
}

Mesh* Rec::Load(std::ifstream& readFile)
{
	string line;

	getline(readFile, line);//x값
	int X = stoi(line);
	getline(readFile, line);//y값
	int Y = stoi(line);
	getline(readFile, line);//Width
	int Width = stoi(line);
	getline(readFile, line);//Height
	int Height = stoi(line);

	SetLocation(X, Y);
	SetWidth(Width);
	SetHeight(Height);

	return this;
}
