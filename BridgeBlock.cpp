#include "stdafx.h"
#include "BridgeBlock.h"


BridgeBlock::BridgeBlock()
{
}

BridgeBlock::BridgeBlock(int x, int y)
{
	this->posX = x;
	this->posY = y;

	this->texture = new sf::Texture;
	this->texture->loadFromFile("img/bridge.png");

	this->sprite = new sf::Sprite;
	this->sprite->setTexture(*this->texture);

	this->width = 70;
	this->height = 24;
}


BridgeBlock::~BridgeBlock()
{
}

sf::Sprite * BridgeBlock::getSprite()
{
	return this->sprite;
}
