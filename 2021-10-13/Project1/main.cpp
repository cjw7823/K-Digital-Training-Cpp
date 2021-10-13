#include<iostream>
#include"Engine.h"
#include<fstream>
#include<string>

using namespace std;

int main()
{
	UEngine Engine;

	bool Result= Engine.LoadLevel("map01.txt");

	if (!Result)
	{
		cout << "fail load map data." << endl;
		return 1;
	}

	Engine.Run();

}