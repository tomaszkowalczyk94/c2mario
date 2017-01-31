#pragma once
#include "stdafx.h"
#include "Map.h"
#include "StoneBlock.h"
#include "Block.h"
#include "GroundBlock.h"
#include <iostream>

Map::Map()
{
	this->backgroundTexture.loadFromFile("background.png");
	this->backgroundSprite.setTexture(this->backgroundTexture);
	

	this->characterPositionMapX = 25;
	this->characterPositionMapY = 420-97;


	Block *block = new Block;
	GroundBlock *groundBlock = new GroundBlock;

	this->addMapElem(groundBlock, 25, 615);
	this->addMapElem(block, 25, 685);

	this->addMapElem(groundBlock, 95, 615);
	this->addMapElem(block, 95, 685);

	this->addMapElem(groundBlock, 165, 615);
	this->addMapElem(block, 165, 685);

	this->addMapElem(groundBlock, 430, 685);

	this->addMapElem(groundBlock, 500, 615);
	this->addMapElem(block, 500, 685);
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
