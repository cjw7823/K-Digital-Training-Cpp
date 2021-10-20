#pragma once
#include"Mesh.h"

class Cir : public Mesh
{
public:
	Cir();
	Cir(int NewX, int NewY, int Radius);
	virtual ~Cir() override;
	virtual void Render() override;
	virtual void Save(std::ofstream& writeFile) override;
	virtual Mesh* Load(std::ifstream& readFile) override;

	inline int GetRadius() const { return Radius; }
	inline void SetRadius(int NewRadius) { Radius = NewRadius; }

private:
	int Radius;
};

