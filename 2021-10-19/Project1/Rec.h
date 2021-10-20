#pragma once
#include"Mesh.h"
class Rec : public Mesh
{
public:
	Rec();
	Rec(int NewX, int NewY, int NewWidth, int NewHeight);
	virtual ~Rec() override;

	inline int GetWidth() const { return Width; }
	inline int GetHeight() const { return Height; }

	inline void SetWidth(int NewWidth) { Width = NewWidth; }
	inline void SetHeight(int NewHeight) { Height = NewHeight; }

	virtual void Render() override;
	virtual void Save(std::ofstream& writeFile) override;
	virtual Mesh* Load(std::ifstream& readFile) override;

private:
	int Width;
	int Height;
};

