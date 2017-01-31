#pragma once
#include "stdafx.h"
#include "StoneBlock.h"
#include <SFML/Graphics.hpp>

StoneBlock::StoneBlock()
{
	this->constructor();
}


StoneBlock::~StoneBlock()
{
	
}

sf::Sprite* StoneBlock::getSprite()
{
	return this->sprite;
}

void StoneBlock::constructor()
{
	this->texture = new sf::Texture;
	this->texture->loadFromFile("stoneBlock.png");

	this->sprite = new sf::Sprite;
	this->sprite->setTexture(*this->texture);

	this->width = 70;
	this->height = 70;
}
