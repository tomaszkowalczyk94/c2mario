#pragma once
#include "AbstractMapBlock.h"

/**
* Blok reprezentujacy skrzynke w grze
*/
class CrateBlock :
	public AbstractMapBlock
{
public:

	/**
	* Konstruktr bez parametrow, nie moze byc wywolywany!
	*/
	CrateBlock();

	/**
	* Konstruktr, z parametrami x i y danego bloku, wzgledem mapy
	*/
	CrateBlock(int x, int y);

	/**
	* Destruktor
	*/
	~CrateBlock();

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

