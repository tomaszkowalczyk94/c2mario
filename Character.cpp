#include "stdafx.h"
#include "Character.h"
#include <SFML/Graphics.hpp>

Character::Character()
{
	this->characterTexture.loadFromFile("mushroom.png");
	this->characterSprite.setTexture(this->characterTexture);
}


Character::~Character()
{
}
