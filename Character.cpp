#include "stdafx.h"
#include "Character.h"
#include <SFML/Graphics.hpp>

Character::Character()
{
	
	this->characterTexture.create(75,96);
	this->characterSprite.setColor(sf::Color(0, 255, 0));
	this->characterSprite.setTexture(this->characterTexture);
	
	this->characterSprite.setTextureRect(sf::IntRect(0, 0, 75, 96));

}


Character::~Character()
{
}
