#pragma once
#include "stdafx.h"
#include "Map.h"
#include "StoneBlock.h"
#include "Block.h"

#include <iostream>

Map::Map()
{
	this->backgroundTexture.loadFromFile("background.png");
	this->backgroundSprite.setTexture(this->backgroundTexture);
	

	this->characterPositionMapX = 25;
	this->characterPositionMapY = 420-26;

	StoneBlock *stoneBlock = new StoneBlock;
	StoneBlock *stoneBlock2 = new StoneBlock;
	stoneBlock2->posX = 25;
	stoneBlock2->posY = 1155;

	Block *block1 = new Block;
	block1->posX = 25;
	block1->posY = 615;
	this->blockList.push_front(block1);


	this->blockList.push_front(stoneBlock);
	this->blockList.push_front(stoneBlock2);
}


Map::~Map()
{
	//@todo dealokacja listy
}


bool Map::canMove(float x, float y)
{
	for (AbstractMapBlock *block : this->blockList) {
		if (!(x > block->posX + block->width || x + this->character.width < block->posX || y > block->posY + block->height || y + this->character.height < block->posY)) {
			return false;
		}		
	}

	return true;
}
