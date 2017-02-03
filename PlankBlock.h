#pragma once
#include "AbstractMapBlock.h"
class PlankBlock :
	public AbstractMapBlock
{
public:
	PlankBlock();
	PlankBlock(int x, int y);
	~PlankBlock();

	sf::Sprite* getSprite();
protected:
	sf::Texture *texture;
	sf::Sprite *sprite;
};

