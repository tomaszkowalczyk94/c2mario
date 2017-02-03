#pragma once
#include "AbstractMapBlock.h"
class SpikesBlock :
	public AbstractMapBlock
{
public:
	SpikesBlock();
	SpikesBlock(int x, int y);
	~SpikesBlock();

	sf::Sprite* getSprite();
protected:
	sf::Texture *texture;
	sf::Sprite *sprite;
};

