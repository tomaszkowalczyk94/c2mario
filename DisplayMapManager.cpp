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
		this->getWindowXPostion(this->map->characterPositionMapX),
		this->getWindowYPostion(this->map->characterPositionMapY)
	);

	this->map->character.characterSprite.setPosition(this->getCharacterWindowX(), this->getCharacterWindowY());





	this->window->draw(this->map->backgroundSprite);

	for (AbstractMapBlock *block : this->map->blockList) {
		this->window->draw(block->getSprite());
	}

	this->window->draw(this->map->character.characterSprite);
}

void DisplayMapManager::moveCharacterLeft()
{
	this->map->characterPositionMapX++;
}

void DisplayMapManager::moveCharacterRight()
{
	this->map->characterPositionMapX--;
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
	return -(mapXPostion - this->getCharacterWindowX());
}

float DisplayMapManager::getWindowYPostion(float mapYPostion)
{
	return -(mapYPostion - this->getCharacterWindowY());
}
