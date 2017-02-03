#include "stdafx.h"
#include "Character.h"
#include <SFML/Graphics.hpp>
#include <iostream>

Character::Character()
{
	
	this->characterTexture.loadFromFile("walk.png");
	this->characterSprite.setTexture(this->characterTexture);
	this->rectSourceSprite = sf::IntRect(0, 0, 75, 96);
	this->characterSprite.setTextureRect(this->rectSourceSprite);
	
	

}


Character::~Character()
{
}
