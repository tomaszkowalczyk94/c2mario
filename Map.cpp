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


	// -- start
	GroundBlock *groundBlock1 = new GroundBlock(25, 615); this->blockList.push_front(groundBlock1);
	Block *block1 = new Block(25, 685); this->blockList.push_front(block1);

	GroundBlock *groundBlock2 = new GroundBlock(95, 615); this->blockList.push_front(groundBlock2);
	Block *block2 = new Block(95, 685); this->blockList.push_front(block2);

	GroundBlock *groundBlock3 = new GroundBlock(165, 615); this->blockList.push_front(groundBlock3);
	Block *block3 = new Block(165, 685); this->blockList.push_front(block3);

	// --- schodki
	GroundBlock *groundBlock6 = new GroundBlock(430, 685); this->blockList.push_front(groundBlock6);

	GroundBlock *groundBlock7 = new GroundBlock(500, 615); this->blockList.push_front(groundBlock7);
	Block *block7 = new Block(500, 685); this->blockList.push_front(block7);
	
	GroundBlock *groundBlock8 = new GroundBlock(570, 545); this->blockList.push_front(groundBlock8);
	Block *block8a = new Block(570, 615); this->blockList.push_front(block8a);
	Block *block8 = new Block(570, 685); this->blockList.push_front(block8);

	GroundBlock *groundBlock9 = new GroundBlock(640, 475); this->blockList.push_front(groundBlock9);
	Block *block9a = new Block(640, 545); this->blockList.push_front(block9a);
	Block *block9b = new Block(640, 615); this->blockList.push_front(block9b);
	Block *block9 = new Block(640, 685); this->blockList.push_front(block9);

	GroundBlock *groundBlock10 = new GroundBlock(710, 405); this->blockList.push_front(groundBlock10);
	Block *block10a = new Block(710, 475); this->blockList.push_front(block10a);
	Block *block10b = new Block(710, 545); this->blockList.push_front(block10b);
	Block *block10c = new Block(710, 615); this->blockList.push_front(block10c);
	Block *block10 = new Block(710, 685); this->blockList.push_front(block10);
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
