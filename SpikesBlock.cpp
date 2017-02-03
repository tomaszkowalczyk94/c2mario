#include "stdafx.h"
#include "SpikesBlock.h"


SpikesBlock::SpikesBlock()
{
}

SpikesBlock::SpikesBlock(int x, int y)
{
	this->posX = x;
	this->posY = y;

	this->texture = new sf::Texture;
	this->texture->loadFromFile("img/spikes.png");

	this->sprite = new sf::Sprite;
	this->sprite->setTexture(*this->texture);

	this->width = 70;
	this->height = 70;
}


SpikesBlock::~SpikesBlock()
{
}

sf::Sprite * SpikesBlock::getSprite()
{
	return this->sprite;
}
