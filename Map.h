#pragma once
#include "Character.h"

class Map
{
public:
	Map();
	~Map();
	Character character;

	int widthMap;
	int characterPositionMapX = 40;
	int characterPositionMapY = 40;
};

