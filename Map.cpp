#include "stdafx.h"
#include "Map.h"
#include "StoneBlock.h"
#include <iostream>
Map::Map()
{
	this->backgroundTexture.loadFromFile("background.png");
	this->backgroundSprite.setTexture(this->backgroundTexture);

	this->characterPositionMapX = 20;
	this->characterPositionMapY = 20;

	StoneBlock stoneBlock;;

	std::cout << &stoneBlock << std::endl;

	this->blockList.push_front(&stoneBlock);
}


Map::~Map()
{
}
