#include "stdafx.h"
#include "PlankBlock.h"


PlankBlock::PlankBlock()
{
}

PlankBlock::PlankBlock(int x, int y)
{
	this->posX = x;
	this->posY = y;

	this->texture = new sf::Texture;
	this->texture->loadFromFile("img/plank.png");

	this->sprite = new sf::Sprite;
	this->sprite->setTexture(*this->texture);

	this->width = 70;
	this->height = 21;
}


PlankBlock::~PlankBlock()
{
}

sf::Sprite* PlankBlock::getSprite()
{
	return this->sprite;
}
