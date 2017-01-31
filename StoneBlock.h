#pragma once
#include "AbstractMapBlock.h"
#include <SFML/Graphics.hpp>

class StoneBlock :
	public AbstractMapBlock
{
public:
	StoneBlock();
	~StoneBlock();

	sf::Sprite* getSprite();

	void constructor();

protected:
	sf::Texture *texture;
	sf::Sprite *sprite;
};

