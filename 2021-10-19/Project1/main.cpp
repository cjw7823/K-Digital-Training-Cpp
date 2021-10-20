#include <iostream>
#include <fstream>
#include "Graphic.h"
#include "Rec.h"
#include "Tri.h"
#include "Cir.h"

int main()
{
	Graphic* Editer = new Graphic();

	Editer->Load();
	Editer->Run();

	/*Editer->AddMesh(new Tri(10, 20, 10));
	Editer->AddMesh(new Cir(10, 20, 10));
	Editer->AddMesh(new Rec(10, 20, 10, 20));


	Editer->Run();

	Editer->Save();*/

	delete Editer;
	
	return 0;
}