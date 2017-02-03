#include "stdafx.h"
#include "BushBlock.h"


BushBlock::BushBlock()
{
}

BushBlock::BushBlock(int x, int y)
{
	this->posX = x;
	this->posY = y;

	this->texture = new sf::Texture;
	this->texture->loadFromFile("img/bush.png");

	this->sprite = new sf::Sprite;
	this->sprite->setTexture(*this->texture);

	this->width = 70;
	this->height = 26;

	this->isWall = false;
}


BushBlock::~BushBlock()
{
}

sf::Sprite* BushBlock::getSprite()
{
	return this->sprite;
}