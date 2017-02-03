#include "stdafx.h"
#include "Character.h"
#include <SFML/Graphics.hpp>

Character::Character()
{
	
	this->characterTexture.loadFromFile("walk.png");
	this->characterSprite.setTexture(this->characterTexture);
	sf::FloatRect textRect = this->characterSprite.getGlobalBounds();
	this->characterSprite.setTextureRect(sf::IntRect(0, 0, 75, 96));
	this->characterSprite.setOrigin(75/2, 0);

}


Character::~Character()
{
}
