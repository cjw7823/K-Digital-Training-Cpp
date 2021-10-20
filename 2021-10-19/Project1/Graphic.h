#pragma once
#include <vector>
#include "Vector_2D.h"

using namespace std;

class Mesh;

class Graphic
{
public:
	Graphic();
	virtual ~Graphic();

	void Run();
	void Tick();

	void Save();
	void Load();

	void Input();
	void Render();

	void AddMesh(Mesh* NewMesh);

private:
	vector<Mesh*> Meshes;

};

