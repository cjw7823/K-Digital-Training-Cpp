#pragma once
#include "Mesh.h"

using namespace std;

class Star :
    public Mesh
{
public:
	Star();
	Star(int NewX, int NewY, string color);
	virtual ~Star() override;
	virtual void Render() override;
	virtual void Save(std::ofstream& writeFile) override
	{
		writeFile << GetName() << std::endl;
		writeFile << GetLocation().X << std::endl;
		writeFile << GetLocation().Y << std::endl;
		writeFile << Getcolor() << std::endl;
	}
	virtual Mesh* Load(std::ifstream& readFile) override;

	inline string Getcolor() const { return color; }
	inline void Setcolor(string Newcolor) { color = Newcolor; }

private:
	string color;
};

