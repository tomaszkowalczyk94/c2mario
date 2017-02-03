#pragma once
#include "AbstractMapBlock.h"

/**
* Blok reprezentujacy krzak w grze, przez ktory gracz moze przechodzic (pojawia sie w tle)
*/
class BushBlock :
	public AbstractMapBlock
{
public:

	/**
	* Konstruktr bez parametrow, nie moze byc wywolywany!
	*/
	BushBlock();

	/**
	* Konstruktr, z parametrami x i y danego bloku, wzgledem mapy
	*/
	BushBlock(int x, int y);

	/**
	* Destruktor
	*/
	~BushBlock();

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

