#pragma once
#include "AbstractMapBlock.h"
class Block :
	public AbstractMapBlock
{
public:
	Block();

	/*
	* Konstruktr, z parametrami x i y danego bloku, wzgledem mapy
	*/
	Block(int x, int y);
	~Block();

	sf::Sprite* getSprite();
protected:
	sf::Texture *texture;
	sf::Sprite *sprite;
};

