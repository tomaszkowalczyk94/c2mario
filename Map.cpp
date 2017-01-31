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
	this->characterPositionMapY = 420-94;

	StoneBlock *stoneBlock = new StoneBlock;
	StoneBlock *stoneBlock2 = new StoneBlock;
	stoneBlock2->posX = 25;
	stoneBlock2->posY = 1155;

	Block *block1 = new Block;
	this->addMapElem(block1, 25, 615);
	this->addMapElem(block1, 95, 615);
	this->addMapElem(block1, 165, 615);
	this->addMapElem(block1, 300, 615);
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

void Map::addMapElem(AbstractMapBlock *mapElem, int x, int y)
{
	AbstractMapBlock* newBlock = (AbstractMapBlock*) malloc (sizeof AbstractMapBlock);
	memcpy(newBlock, mapElem, sizeof AbstractMapBlock);

	newBlock->constructor();
	newBlock->posX = x;
	newBlock->posY = y;
	
	this->blockList.push_front(newBlock);
}
