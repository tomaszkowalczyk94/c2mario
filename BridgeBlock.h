#pragma once
#include "AbstractMapBlock.h"
class BridgeBlock :
	public AbstractMapBlock
{
public:
	BridgeBlock();
	BridgeBlock(int x, int y);
	~BridgeBlock();

	sf::Sprite* getSprite();
protected:
	sf::Texture *texture;
	sf::Sprite *sprite;
};

