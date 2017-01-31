#include "stdafx.h"
#include "Character.h"
#include <SFML/Graphics.hpp>

Character::Character()
{
	
	this->characterTexture.loadFromFile("walk.png");
	this->characterSprite.setTexture(this->characterTexture);
	this->characterSprite.setTextureRect(sf::IntRect(0, 0, 75, 96));

}


Character::~Character()
{
}
