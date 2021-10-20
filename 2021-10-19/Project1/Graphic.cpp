#include "Graphic.h"
#include <iostream>
#include <fstream>
#include "Mesh.h"
#include "Tri.h"
#include "Rec.h"
#include "Cir.h"
#include "Star.h"

Graphic::Graphic()
{
}

Graphic::~Graphic()
{
	for (auto Object : Meshes)
	{
		delete Object;
	}

	Meshes.clear();
}

void Graphic::Run()
{
	Tick();
}

void Graphic::Save()
{
	ofstream writeFile;
	writeFile.open("Editor.sav");    //파일 열기(파일이 없으면 만들어짐)

	for (auto Object : Meshes)
	{
		if (dynamic_cast<Tri*>(Object) != nullptr)
		{
			Tri* T = dynamic_cast<Tri*>(Object);
			T->Save(writeFile);
		}
		else if (dynamic_cast<Rec*>(Object) != nullptr)
		{
			Rec* T = dynamic_cast<Rec*>(Object);
			T->Save(writeFile);
		}
		else if (dynamic_cast<Cir*>(Object) != nullptr)
		{
			Cir* T = dynamic_cast<Cir*>(Object);
			T->Save(writeFile);
		}
		else if (dynamic_cast<Star*>(Object) != nullptr)
		{
			Star* T = dynamic_cast<Star*>(Object);
			T->Save(writeFile);
		}
	}
	writeFile.close();    //꼭 닫아주기
}

void Graphic::Load()
{
	ifstream readFile;
	readFile.open("Editor.sav");

	std::string line;

	while (getline(readFile, line))
	{
		if (line == "세모")
		{
			Mesh* T = new Tri();
			AddMesh(T->Load(readFile));
			
		}
		else if (line == "네모")
		{
			Rec* T = new Rec();
			AddMesh(T->Load(readFile));
			
		}
		else if (line == "동그라미")
		{
			Cir* T = new Cir();
			AddMesh(T->Load(readFile));

		}
		else if (line == "별")
		{
			Star* T = new Star();
			AddMesh(T->Load(readFile));
		}
	}

	readFile.close();
}

void Graphic::Tick()
{
	//Input();
	Render();
}

void Graphic::Input()
{
	cout << "원하는 도형과 좌표를 입력하세요.(삼각형: 1, 사각형: 2, 원:3)" << endl<< "예시) 1 3 5" << endl;
}

void Graphic::Render()
{
	for (auto Object : Meshes)
	{
		Object->Render();
	}
}

void Graphic::AddMesh(Mesh* NewMesh)
{
	Meshes.push_back(NewMesh);
}
