#include "stdafx.h"
#include "GroundBlock.h"
#include <SFML/Graphics.hpp>

GroundBlock::GroundBlock()
{

}

GroundBlock::GroundBlock(int x, int y)
{
	this->posX = x;
	this->posY = y;

	this->texture = new sf::Texture;
	this->texture->loadFromFile("img/ground.png");

	this->sprite = new sf::Sprite;
	this->sprite->setTexture(*this->texture);

	this->width = 70;
	this->height = 70;
}


GroundBlock::~GroundBlock()
{
}

sf::Sprite* GroundBlock::getSprite()
{
	return this->sprite;
}

