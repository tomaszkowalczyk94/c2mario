#include "stdafx.h"
#include "CrateBlock.h"


CrateBlock::CrateBlock()
{
}

CrateBlock::CrateBlock(int x, int y)
{
	this->posX = x;
	this->posY = y;

	this->texture = new sf::Texture;
	this->texture->loadFromFile("img/crate.png");

	this->sprite = new sf::Sprite;
	this->sprite->setTexture(*this->texture);

	this->width = 70;
	this->height = 70;
}


CrateBlock::~CrateBlock()
{
}

sf::Sprite * CrateBlock::getSprite()
{
	return this->sprite;
}
