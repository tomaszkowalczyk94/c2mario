#include "stdafx.h"
#include "StoneBlock.h"
#include <SFML/Graphics.hpp>

StoneBlock::StoneBlock()
{
	this->texture = new sf::Texture;
	this->texture->loadFromFile("stoneBlock.png");

	this->sprite = new sf::Sprite;
	this->sprite->setTexture(*this->texture);

	this->width = 25;
	this->height = 25;

	this->posX = 100;
	this->posY = 25;
}


StoneBlock::~StoneBlock()
{
	
}

sf::Sprite* StoneBlock::getSprite()
{
	return this->sprite;
}
