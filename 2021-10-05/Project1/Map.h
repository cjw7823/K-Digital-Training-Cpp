#pragma once

//플레이어가 이동 할 수 있으면 크기는 10X10이다.
class Map
{
public:
	Map();
	~Map();

	int Data[10][10];

	void Draw();
};

