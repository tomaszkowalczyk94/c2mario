#include "stdafx.h"
#include "Block.h"
#include <SFML/Graphics.hpp>

Block::Block() 
{

}

/*
* Konstruktr, z parametrami x i y danego bloku, wzgledem mapy
*/
Block::Block(int x, int y)
{
	this->posX = x;
	this->posY = y;

	this->texture = new sf::Texture;
	this->texture->loadFromFile("img/ground_dirt.png");

	this->sprite = new sf::Sprite;
	this->sprite->setTexture(*this->texture);

	this->width = 70;
	this->height = 70;
}


Block::~Block()
{
}

sf::Sprite* Block::getSprite()
{
	return this->sprite;
}

