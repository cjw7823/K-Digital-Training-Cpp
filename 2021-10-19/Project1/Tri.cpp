#include "Tri.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Tri::Tri()
{
	SetLocation(0,0);
	SetEdge(0);
	Name = "����";
}

Tri::Tri(int NewX, int NewY, int NewEdge)
{
	SetLocation(NewX, NewY);
	SetEdge(NewEdge);
	Name = "����";
}

Tri::~Tri()
{
}

void Tri::Render()
{
	//Gotoxy(GetLocation());
	std::cout << "��" << std::endl;
}

void Tri::Save(std::ofstream& writeFile)
{
		writeFile << GetName() << std::endl;
		writeFile << GetLocation().X << std::endl;
		writeFile << GetLocation().Y << std::endl;
		writeFile << GetEdge() << std::endl;
}

Mesh* Tri::Load(std::ifstream& readFile)
{
	string line;

	getline(readFile, line);//x��
	int X = stoi(line);
	getline(readFile, line);//y��
	int Y = stoi(line);
	getline(readFile, line);//Edge
	int Edge = stoi(line);
	
	SetLocation(X,Y);
	SetEdge(Edge);

	return this;
}
