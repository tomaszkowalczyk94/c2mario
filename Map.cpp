#pragma once
#include "stdafx.h"
#include "Map.h"
#include "StoneBlock.h"
#include "Block.h"
#include "GroundBlock.h"
#include "PlankBlock.h"
#include "BridgeBlock.h"
#include "CrateBlock.h"
#include "SpikesBlock.h"
#include <iostream>

Map::Map()
{
	this->backgroundTexture.loadFromFile("background.png");
	this->backgroundSprite.setTexture(this->backgroundTexture);
	

	this->characterPositionMapX = 25;
	this->characterPositionMapY = 420-97;


	// -- start
	GroundBlock *groundBlock0 = new GroundBlock(this->getXElemPos(0), this->getYElemPos(0)); this->blockList.push_front(groundBlock0);
	Block *block0 = new Block(this->getXElemPos(0), this->getYElemPos(-1)); this->blockList.push_front(block0);

	GroundBlock *groundBlock1 = new GroundBlock(this->getXElemPos(1), 615); this->blockList.push_front(groundBlock1);
	Block *block1 = new Block(this->getXElemPos(1), 685); this->blockList.push_front(block1);

	GroundBlock *groundBlock2 = new GroundBlock(this->getXElemPos(2), 615); this->blockList.push_front(groundBlock2);
	Block *block3 = new Block(this->getXElemPos(2), 685); this->blockList.push_front(block3);

	// --- schodki
	GroundBlock *groundBlock6 = new GroundBlock(this->getXElemPos(6), 685); this->blockList.push_front(groundBlock6);

	GroundBlock *groundBlock7 = new GroundBlock(this->getXElemPos(7), 615); this->blockList.push_front(groundBlock7);
	Block *block7 = new Block(this->getXElemPos(7), 685); this->blockList.push_front(block7);
	
	GroundBlock *groundBlock8 = new GroundBlock(this->getXElemPos(8), 545); this->blockList.push_front(groundBlock8);
	Block *block8a = new Block(this->getXElemPos(8), 615); this->blockList.push_front(block8a);
	Block *block8 = new Block(this->getXElemPos(8), 685); this->blockList.push_front(block8);

	GroundBlock *groundBlock9 = new GroundBlock(this->getXElemPos(9), 475); this->blockList.push_front(groundBlock9);
	Block *block9a = new Block(this->getXElemPos(9), 545); this->blockList.push_front(block9a);
	Block *block9b = new Block(this->getXElemPos(9), 615); this->blockList.push_front(block9b);
	Block *block9 = new Block(this->getXElemPos(9), 685); this->blockList.push_front(block9);

	GroundBlock *groundBlock10 = new GroundBlock(this->getXElemPos(10), 405); this->blockList.push_front(groundBlock10);
	Block *block10a = new Block(this->getXElemPos(10), 475); this->blockList.push_front(block10a);
	Block *block10b = new Block(this->getXElemPos(10), 545); this->blockList.push_front(block10b);
	Block *block10c = new Block(this->getXElemPos(10), 615); this->blockList.push_front(block10c);
	Block *block10 = new Block(this->getXElemPos(10), 685); this->blockList.push_front(block10);

	PlankBlock *plankBlock12 = new PlankBlock(this->getXElemPos(12), this->getYElemPos(4)); this->blockList.push_front(plankBlock12);



	PlankBlock *plankBlock14 = new PlankBlock(this->getXElemPos(14), this->getYElemPos(4)); this->blockList.push_front(plankBlock14);
	BridgeBlock *bridgeBlock14 = new BridgeBlock( this->getXElemPos(14), this->getYElemPos(0) ); this->blockList.push_front(bridgeBlock14);

	PlankBlock *plankBlock15 = new PlankBlock(this->getXElemPos(15), this->getYElemPos(4)); this->blockList.push_front(plankBlock15);
	BridgeBlock *bridgeBlock15 = new BridgeBlock(this->getXElemPos(15), this->getYElemPos(0)); this->blockList.push_front(bridgeBlock15);

	BridgeBlock *bridgeBlock16 = new BridgeBlock(this->getXElemPos(16), this->getYElemPos(0)); this->blockList.push_front(bridgeBlock16);

	BridgeBlock *bridgeBlock17 = new BridgeBlock(this->getXElemPos(17), this->getYElemPos(0)); this->blockList.push_front(bridgeBlock17);

	BridgeBlock *bridgeBlock18 = new BridgeBlock(this->getXElemPos(18), this->getYElemPos(0)); this->blockList.push_front(bridgeBlock18);


	BridgeBlock *bridgeBlock19 = new BridgeBlock(this->getXElemPos(19), this->getYElemPos(0)); this->blockList.push_front(bridgeBlock19);
	CrateBlock *crateBlock19a = new CrateBlock(this->getXElemPos(19), this->getYElemPos(3)); this->blockList.push_front(crateBlock19a);
	CrateBlock *crateBlock19b = new CrateBlock(this->getXElemPos(19), this->getYElemPos(4)); this->blockList.push_front(crateBlock19b);
	CrateBlock *crateBlock19c = new CrateBlock(this->getXElemPos(19), this->getYElemPos(5)); this->blockList.push_front(crateBlock19c);
	CrateBlock *crateBlock19d = new CrateBlock(this->getXElemPos(19), this->getYElemPos(6)); this->blockList.push_front(crateBlock19d);
	CrateBlock *crateBlock19e = new CrateBlock(this->getXElemPos(19), this->getYElemPos(7)); this->blockList.push_front(crateBlock19e);
	CrateBlock *crateBlock19f = new CrateBlock(this->getXElemPos(19), this->getYElemPos(8)); this->blockList.push_front(crateBlock19f);
	CrateBlock *crateBlock19g = new CrateBlock(this->getXElemPos(19), this->getYElemPos(9)); this->blockList.push_front(crateBlock19g);
	CrateBlock *crateBlock19h = new CrateBlock(this->getXElemPos(19), this->getYElemPos(10)); this->blockList.push_front(crateBlock19h);

	BridgeBlock *bridgeBlock20 = new BridgeBlock(this->getXElemPos(20), this->getYElemPos(0)); this->blockList.push_front(bridgeBlock20);

	BridgeBlock *bridgeBlock21 = new BridgeBlock(this->getXElemPos(21), this->getYElemPos(0)); this->blockList.push_front(bridgeBlock21);

	BridgeBlock *bridgeBlock23 = new BridgeBlock(this->getXElemPos(23), this->getYElemPos(0)); this->blockList.push_front(bridgeBlock23);

	BridgeBlock *bridgeBlock25 = new BridgeBlock(this->getXElemPos(25), this->getYElemPos(0)); this->blockList.push_front(bridgeBlock25);

	BridgeBlock *bridgeBlock27 = new BridgeBlock(this->getXElemPos(27), this->getYElemPos(0)); this->blockList.push_front(bridgeBlock27);



	// -- kolce
	int yKolcow = 800;
	for (int x = -10; x < 40; x++) 
	{
		this->blockList.push_front(new SpikesBlock(this->getXElemPos(x), yKolcow));
	}

}


Map::~Map()
{
	//@todo dealokacja listy
}


bool Map::canMove(float x, float y)
{
	for (AbstractMapBlock *block : this->blockList) {
		if (!(x+15 > block->posX + block->width || x-15 + this->character.width < block->posX || y > block->posY + block->height || y + this->character.height < block->posY)) {
			return false;
		}		
	}

	return true;
}

int Map::getXElemPos(int col)
{
	return 25 + 70 * col;
}

int Map::getYElemPos(int row)
{
	return 615 + 70* row*-1;
}
