#include "Cir.h"
#include<iostream>

Cir::Cir()
{
	SetLocation(0,0);
	SetRadius(0);
	Name = "���׶��";
}

Cir::Cir(int NewX, int NewY, int Radius)
{
	SetLocation(NewX, NewY);
	SetRadius(Radius);
	Name = "���׶��";
}

Cir::~Cir()
{
}

void Cir::Render()
{
	//Gotoxy(GetLocation());
	std::cout << "��" << std::endl;
}

void Cir::Save(std::ofstream& writeFile)
{
	writeFile << GetName() << std::endl;
	writeFile << GetLocation().X << std::endl;
	writeFile << GetLocation().Y << std::endl;
	writeFile << GetRadius() << std::endl;
}

Mesh* Cir::Load(std::ifstream& readFile)
{
	string line;

	getline(readFile, line);//x��
	int X = stoi(line);
	getline(readFile, line);//y��
	int Y = stoi(line);
	getline(readFile, line);//Radius
	int Radius = stoi(line);

	SetLocation(X, Y);
	SetRadius(Radius);

	return this;
}
