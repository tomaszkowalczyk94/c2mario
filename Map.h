#pragma once
#include "Character.h"
#include <SFML/Graphics.hpp>
#include <list>
#include "StoneBlock.h"

class Map
{
public:

	Map();
	~Map();
	Character character;
	sf::Texture backgroundTexture;
	sf::Sprite backgroundSprite;

	int widthMap;
	float characterPositionMapX;
	float characterPositionMapY;
	std::list<AbstractMapBlock *> blockList;

	bool canMove(float x, float y);

};

