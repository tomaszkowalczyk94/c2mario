#include "stdafx.h"
#include "GroundBlock.h"
#include <SFML/Graphics.hpp>

GroundBlock::GroundBlock()
{
	this->constructor();
}


GroundBlock::~GroundBlock()
{
}

sf::Sprite* GroundBlock::getSprite()
{
	return this->sprite;
}

void GroundBlock::constructor()
{
	this->texture = new sf::Texture;
	this->texture->loadFromFile("img/ground.png");

	this->sprite = new sf::Sprite;
	this->sprite->setTexture(*this->texture);

	this->width = 70;
	this->height = 70;
}

