#include "Mesh.h"

Mesh::Mesh()
{
}

Mesh::~Mesh()
{
}

void Mesh::Gotoxy(Vector_2D Location)
{
    COORD Cur;
    Cur.X = Location.X;
    Cur.Y = Location.Y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void Mesh::SetLocation(int NewX, int NewY)
{
    Location.X = NewX;
    Location.Y = NewY;
}