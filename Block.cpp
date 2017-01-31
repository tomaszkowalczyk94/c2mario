#include "stdafx.h"
#include "Block.h"
#include <SFML/Graphics.hpp>

Block::Block()
{
	this->constructor();
}


Block::~Block()
{
}

sf::Sprite* Block::getSprite()
{
	return this->sprite;
}

void Block::constructor()
{
	this->texture = new sf::Texture;
	this->texture->loadFromFile("img/block.png");

	this->sprite = new sf::Sprite;
	this->sprite->setTexture(*this->texture);

	this->width = 70;
	this->height = 70;
}
