#include "stdafx.h"
#include "Gravity.h"
#include <SFML/Audio.hpp>

Gravity::Gravity(DisplayMapManager *displayMapManager)
{
	this->displayMapManager = displayMapManager;
}


Gravity::~Gravity()
{
}

void Gravity::interactGravity()
{
	Character *character = &this->displayMapManager->map->character;
	Map *map = this->displayMapManager->map;

	if (character->gravityStatus == GRAVITY_STATUS_NORMAL || character->gravityStatus == GRAVITY_STATUS_FALL) {
		if (map->canMove(map->characterPositionMapX, map->characterPositionMapY + 1)) {
			character->gravityStatus = GRAVITY_STATUS_FALL;
			this->displayMapManager->moveCharacterDown();
		}
		else {
			character->gravityStatus = GRAVITY_STATUS_NORMAL;
		}
	}
}

void Gravity::characterJump()
{
	sf::SoundBuffer buffer;
	buffer.loadFromFile("jump.ogg");
	sf::Sound sound;
	sound.setBuffer(buffer);


	sf::Time now = this->clock.getElapsedTime();

	Character *character = &this->displayMapManager->map->character;
	Map *map = this->displayMapManager->map;

	if (character->gravityStatus == GRAVITY_STATUS_FALL) {
		return;
	}

	if (character->gravityStatus == GRAVITY_STATUS_NORMAL) {
		sound.play();
		this->startJump = now;
		this->displayMapManager->moveCharacterUp();
		character->gravityStatus = GRAVITY_STATUS_JUMP;
		
			
		
	}

	if (character->gravityStatus == GRAVITY_STATUS_JUMP) {

		if (now.asMilliseconds() < this->startJump.asMilliseconds() + 200) {
			if (!this->displayMapManager->moveCharacterUp()) {
				this->stopJump();
			}
		}
		else {
			this->stopJump();
		}
	}
}

void Gravity::stopJump()
{
	Character *character = &this->displayMapManager->map->character;
	Map *map = this->displayMapManager->map;

	character->gravityStatus = GRAVITY_STATUS_NORMAL;
	this->startJump = this->startJump.Zero;
}
