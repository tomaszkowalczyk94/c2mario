#include "stdafx.h"
#include "Character.h"
#include <SFML/Graphics.hpp>

Character::Character()
{
	this->characterTexture.loadFromFile("img/character/front.png");
	this->characterSprite.setTexture(this->characterTexture);
}


Character::~Character()
{
}
