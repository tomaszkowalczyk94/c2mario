#pragma once
#include "AbstractMapBlock.h"

/**
* Blok reprezentujacy drewniana platforme w grze
*/
class PlankBlock :
	public AbstractMapBlock
{
public:

	/**
	* Konstruktr bez parametrow, nie moze byc wywolywany!
	*/
	PlankBlock();

	/**
	* Konstruktr, z parametrami x i y danego bloku, wzgledem mapy
	*/
	PlankBlock(int x, int y);

	/**
	* Destruktor
	*/
	~PlankBlock();

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

