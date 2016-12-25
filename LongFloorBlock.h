#pragma once
#include "AbstractMapBlock.h"
#include <SFML/Graphics.hpp>

class LongFloorBlock :
	public AbstractMapBlock
{
public:
	LongFloorBlock();
	~LongFloorBlock();

	sf::Sprite* getSprite();

protected:
	sf::Texture *texture;
	sf::Sprite *sprite;
};

