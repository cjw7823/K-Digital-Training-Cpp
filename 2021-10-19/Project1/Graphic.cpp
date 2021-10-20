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
	writeFile.open("Editor.sav");    //���� ����(������ ������ �������)

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
	writeFile.close();    //�� �ݾ��ֱ�
}

void Graphic::Load()
{
	ifstream readFile;
	readFile.open("Editor.sav");

	std::string line;

	while (getline(readFile, line))
	{
		if (line == "����")
		{
			Mesh* T = new Tri();
			AddMesh(T->Load(readFile));
			
		}
		else if (line == "�׸�")
		{
			Rec* T = new Rec();
			AddMesh(T->Load(readFile));
			
		}
		else if (line == "���׶��")
		{
			Cir* T = new Cir();
			AddMesh(T->Load(readFile));

		}
		else if (line == "��")
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
	cout << "���ϴ� ������ ��ǥ�� �Է��ϼ���.(�ﰢ��: 1, �簢��: 2, ��:3)" << endl<< "����) 1 3 5" << endl;
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
