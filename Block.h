#pragma once
#include "AbstractMapBlock.h"
class Block :
	public AbstractMapBlock
{
public:
	Block();
	~Block();

	sf::Sprite* getSprite();

protected:
	sf::Texture *texture;
	sf::Sprite *sprite;
};

