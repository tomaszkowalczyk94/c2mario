#pragma once
#include "AbstractMapBlock.h"
class BushBlock :
	public AbstractMapBlock
{
public:
	BushBlock();
	BushBlock(int x, int y);
	~BushBlock();

	sf::Sprite* getSprite();
protected:
	sf::Texture *texture;
	sf::Sprite *sprite;
};

