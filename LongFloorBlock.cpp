#pragma once
#include "stdafx.h"
#include "LongFloorBlock.h"
#include <SFML/Graphics.hpp>

LongFloorBlock::LongFloorBlock()
{
	this->texture = new sf::Texture;
	this->texture->loadFromFile("longFloor.png");

	this->sprite = new sf::Sprite;
	this->sprite->setTexture(*this->texture);

	this->width = 800;
	this->height = 32;

	this->posX = 5;
	this->posY = 420;
}


LongFloorBlock::~LongFloorBlock()
{
}

sf::Sprite * LongFloorBlock::getSprite()
{
	return this->sprite;
}
