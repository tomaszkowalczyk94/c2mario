#pragma once
#include "AbstractMapBlock.h"

/**
* Blok reprezentujacy ziemie z trawa w grze
*/
class GroundBlock :
	public AbstractMapBlock
{
public:

	/**
	* Konstruktr bez parametrow, nie moze byc wywolywany!
	*/
	GroundBlock();

	/**
	* Konstruktr, z parametrami x i y danego bloku, wzgledem mapy
	*/
	GroundBlock(int x, int y);

	/**
	* Destruktor
	*/
	~GroundBlock();

	sf::Sprite* getSprite();

protected:

	/**
	* Tekstura danego bloku
	*/
	sf::Texture *texture;

	/**
	* Sprite danego bloku
	*/
	sf::Sprite *sprite;
};

