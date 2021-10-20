#pragma once
#include "Mesh.h"
#include <fstream>

class Tri : public Mesh
{
public:
	Tri();
	Tri(int NewX, int NewY, int NewEdge);
	virtual ~Tri() override;
	virtual void Render() override;
	virtual void Save(std::ofstream& writeFile) override;
	virtual Mesh* Load(std::ifstream& readFile) override;

	inline int GetEdge() const { return Edge; }
	inline void SetEdge(int NewEdge) { Edge = NewEdge; }

private:
	int Edge;
};

