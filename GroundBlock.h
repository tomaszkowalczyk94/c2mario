#pragma once
#include "AbstractMapBlock.h"

class GroundBlock :
	public AbstractMapBlock
{
public:
	GroundBlock();
	GroundBlock(int x, int y);
	~GroundBlock();

	sf::Sprite* getSprite();

protected:
	sf::Texture *texture;
	sf::Sprite *sprite;
};

