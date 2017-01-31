#pragma once
#include "AbstractMapBlock.h"
class Block :
	public AbstractMapBlock
{
public:
	Block();
	~Block();

	sf::Sprite* getSprite();
	void constructor();
protected:
	sf::Texture *texture;
	sf::Sprite *sprite;
};

