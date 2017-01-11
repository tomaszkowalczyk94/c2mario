#include "stdafx.h"
#include "DisplayMapManager.h"
#include "Map.h"
#include <SFML/Graphics.hpp>
#include "StoneBlock.h"

DisplayMapManager::DisplayMapManager(Map *map, sf::RenderWindow *window)
{
	this->map = map;
	this->window = window;
}

DisplayMapManager::~DisplayMapManager()
{
}

void DisplayMapManager::display()
{
	this->map->backgroundSprite.setPosition(
		this->getBackgroundWindowXPosition(this->map->characterPositionMapX),
		this->getBackgroundWindowYPosition(this->map->characterPositionMapY)
	);

	this->map->character.characterSprite.setPosition(this->getCharacterWindowX(), this->getCharacterWindowY());

	this->window->draw(this->map->backgroundSprite);

	for (AbstractMapBlock *block : this->map->blockList) {
		block->getSprite()->setPosition(
			this->getWindowXPostion(block->posX),
			this->getWindowYPostion(block->posY)
		);

		this->window->draw(* block->getSprite());
	}

	this->window->draw(this->map->character.characterSprite);
}

void DisplayMapManager::moveCharacterLeft()
{
	if (this->map->canMove(this->map->characterPositionMapX + 1, this->map->characterPositionMapY)) {
		this->map->characterPositionMapX += 5;
	}
}

void DisplayMapManager::moveCharacterRight()
{
	if (this->map->canMove(this->map->characterPositionMapX - 1, this->map->characterPositionMapY)) {
		this->map->characterPositionMapX -= 5;
	}
}

void DisplayMapManager::moveCharacterUp()
{
	if (this->map->canMove(this->map->characterPositionMapX, this->map->characterPositionMapY-1)) {
		this->map->characterPositionMapY -= 7;
	}
}

void DisplayMapManager::moveCharacterDown()
{
	if (this->map->canMove(this->map->characterPositionMapX, this->map->characterPositionMapY+1)) {
		this->map->characterPositionMapY += 7;
	}
}

float DisplayMapManager::getCharacterWindowX()
{
	return (float)(WINDOWS_WIDTH - this->map->character.width) / 2;
}

float DisplayMapManager::getCharacterWindowY()
{
	return (float)(WINDOWS_HEIGHT - this->map->character.height) / 2;
}

float DisplayMapManager::getWindowXPostion(float mapXPostion)
{
	return mapXPostion - (-this->getBackgroundWindowXPosition(this->map->characterPositionMapX));
}

float DisplayMapManager::getWindowYPostion(float mapYPostion)
{
	return mapYPostion - (-this->getBackgroundWindowYPosition(this->map->characterPositionMapY));
}

float DisplayMapManager::getBackgroundWindowXPosition(float characterPositionMapX)
{
	return -(characterPositionMapX - this->getCharacterWindowX());
}

float DisplayMapManager::getBackgroundWindowYPosition(float characterPositionMapY)
{
	return -(characterPositionMapY - this->getCharacterWindowY());
}
