#include "stdafx.h"
#include "Map.h"
#include "StoneBlock.h"
#include <iostream>
Map::Map()
{
	this->backgroundTexture.loadFromFile("background.png");
	this->backgroundSprite.setTexture(this->backgroundTexture);

	this->characterPositionMapX = 25;
	this->characterPositionMapY = 25;

	StoneBlock *stoneBlock = new StoneBlock;
	this->blockList.push_front(stoneBlock);

}


Map::~Map()
{
	//@todo dealokacja listy
}


/*
bool isCollision(Box b1, Box b2)
{
Vector2 p1 = b1.position;
Vector2 p2 = b2.position;

if (p1.x > p2.x + b2.width || p1.x + b1.width < p2.x ||
p1.y > p2.y + b2.height || p1.y + b1.height < p2.y)
return false;

else
return true;
}

*/
bool Map::canMove(float x, float y)
{
	for (AbstractMapBlock *block : this->blockList) {
		if (!(x > block->posX + block->width || x + this->character.width < block->posX || y > block->posY + block->height || y + this->character.height < block->posY)) {
			return false;
		}		
	}

	return true;
}
