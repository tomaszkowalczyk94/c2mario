#pragma once
#include "AbstractMapBlock.h"
class CrateBlock :
	public AbstractMapBlock
{
public:
	CrateBlock();
	CrateBlock(int x, int y);
	~CrateBlock();

	sf::Sprite* getSprite();
protected:
	sf::Texture *texture;
	sf::Sprite *sprite;
};

