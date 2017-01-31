#pragma once
#include "AbstractMapBlock.h"

class GroundBlock :
	public AbstractMapBlock
{
public:
	GroundBlock();
	~GroundBlock();

	sf::Sprite* getSprite();
	void constructor();

protected:
	sf::Texture *texture;
	sf::Sprite *sprite;
};

