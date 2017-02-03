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


	GroundBlock *groundBlock1 = new GroundBlock(25, 615); this->blockList.push_front(groundBlock1);
	Block *block1 = new Block(25, 685); this->blockList.push_front(block1);

	GroundBlock *groundBlock2 = new GroundBlock(95, 615); this->blockList.push_front(groundBlock2);
	Block *block2 = new Block(95, 685); this->blockList.push_front(block2);

	GroundBlock *groundBlock3 = new GroundBlock(165, 615); this->blockList.push_front(groundBlock3);
	Block *block3 = new Block(165, 685); this->blockList.push_front(block3);

	GroundBlock *groundBlock6 = new GroundBlock(430, 685); this->blockList.push_front(groundBlock6);

	GroundBlock *groundBlock7 = new GroundBlock(500, 615); this->blockList.push_front(groundBlock7);
	Block *block7 = new Block(500, 685); this->blockList.push_front(block7);
	
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
