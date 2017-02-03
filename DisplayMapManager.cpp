#include "stdafx.h"
#include "DisplayMapManager.h"
#include "Map.h"
#include <SFML/Graphics.hpp>
#include "StoneBlock.h"
#include <SFML/Audio.hpp>
#include <windows.h>
#include <string>

DisplayMapManager::DisplayMapManager(Map *map, sf::RenderWindow *window)
{
	this->map = map;
	this->window = window;
	this->textSettings();
}

DisplayMapManager::~DisplayMapManager()
{
}

void DisplayMapManager::textSettings() 
{
	this->MyFont.loadFromFile("font.ttf");
	this->text.setFont(this->MyFont);
	this->text.setPosition(WINDOWS_WIDTH / 2, WINDOWS_HEIGHT / 2);
	this->text.setFillColor(sf::Color::Red);
	this->text.setCharacterSize(120);
	this->text.setString("Game Over!");
	sf::FloatRect textRect = this->text.getLocalBounds();
	this->text.setOrigin(textRect.width / 2, textRect.height / 2);
}

void DisplayMapManager::display(int x, int y)
{
	this->map->backgroundTexture.setRepeated(true);
	this->map->backgroundSprite.setPosition(
		0,0
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

	if (this->map->characterPositionMapY >= 700) {
		this->window->clear(sf::Color::Black);
		this->window->draw(this->text);
		this->window->display();
		
		Sleep(3000);
		this->map->characterPositionMapX = 25;
		this->map->characterPositionMapY = 420-97;
	}

	

	this->window->draw(this->map->character.characterSprite);
	
}


void DisplayMapManager::animateCharacter()
{

}

void DisplayMapManager::stopAnimation()
{
	this->map->character.rectSourceSprite.left = 0;
	this->map->character.characterSprite.setTextureRect(this->map->character.rectSourceSprite);
}

bool DisplayMapManager::moveCharacterRight()
{
	if (this->map->canMove(this->map->characterPositionMapX + 5, this->map->characterPositionMapY)) {
		this->map->characterPositionMapX += 5;
		//this->map->character.characterSprite.setTextureRect(sf::IntRect(0, 0, this->map->character.width, this->map->character.height));
		this->map->character.characterSprite.setScale(1.f, 1.f);
		this->map->character.characterSprite.setOrigin(0, 0);
		if (clock.getElapsedTime().asMilliseconds() > 100.f) {
			if (this->map->character.rectSourceSprite.left == 10 * 75)
				this->map->character.rectSourceSprite.left = 0;
			else
				this->map->character.rectSourceSprite.left += 75;

			this->map->character.characterSprite.setTextureRect(this->map->character.rectSourceSprite);
		}

		return true;
	}
	return false;
}

bool DisplayMapManager::moveCharacterLeft()
{
	if (this->map->canMove(this->map->characterPositionMapX - 5, this->map->characterPositionMapY)) {
		this->map->characterPositionMapX -= 5;
		this->map->character.characterSprite.setScale(-1.f, 1.f);
		this->map->character.characterSprite.setOrigin(75, 0);
		if (clock.getElapsedTime().asMilliseconds() > 100.f) {
			if (this->map->character.rectSourceSprite.left == 10 * 75)
				this->map->character.rectSourceSprite.left = 0;
			else
				this->map->character.rectSourceSprite.left += 75;

			this->map->character.characterSprite.setTextureRect(this->map->character.rectSourceSprite);
		}

		

		return true;
	}
	return false;
}

bool DisplayMapManager::moveCharacterUp()
{
	

	if (this->map->canMove(this->map->characterPositionMapX, this->map->characterPositionMapY-7)) {
		this->map->characterPositionMapY -= 7;
		return true;
	}
	return false;
}

bool DisplayMapManager::moveCharacterDown()
{
	if (this->map->canMove(this->map->characterPositionMapX, this->map->characterPositionMapY+7)) {
		this->map->characterPositionMapY += 7;
		return true;
	}
	return false;
}

float DisplayMapManager::getCharacterWindowX()
{
	return (float)(WINDOWS_WIDTH - this->map->character.width) / 2;
}

float DisplayMapManager::getCharacterWindowY()
{
	return (float)(WINDOWS_HEIGHT - this->map->character.height) / 1.3;
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
