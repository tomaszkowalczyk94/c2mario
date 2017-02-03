#pragma once
#include "stdafx.h"
#include "StoneBlock.h"
#include <SFML/Graphics.hpp>


StoneBlock::StoneBlock(int x, int y)
{
	this->posX = x;
	this->posY = y;
	this->isWall = false;

	this->texture = new sf::Texture;
	this->texture->loadFromFile("img/key_yellow.png");

	this->sprite = new sf::Sprite;
	this->sprite->setTexture(*this->texture);

	this->width = 70;
	this->height = 24;
}


StoneBlock::~StoneBlock()
{
}

sf::Sprite * StoneBlock::getSprite()
{
	return this->sprite;
}
