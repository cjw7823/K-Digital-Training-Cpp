#pragma once
#include <windows.h>
#include "Vector_2D.h"
#include <string>
#include <fstream>

using namespace std;

class Mesh
{
public:
	Mesh();
	virtual ~Mesh();

	void Gotoxy(Vector_2D Location);

	virtual void Render() = 0;
	virtual void Save(ofstream& writeFile) = 0;
	virtual Mesh* Load(ifstream& readFile) = 0;

	virtual void SetLocation(int NewX,int NewY);
	inline Vector_2D GetLocation(){ return Location; }

	inline std::string GetName(){ return Name; }

protected:
	Vector_2D Location;
	std::string Name;
};