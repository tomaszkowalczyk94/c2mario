#pragma once
#include "AbstractMapBlock.h"

/**
* Blok reprezentujacy kolce. Jesli gracz na nie wejdzie, przegrywa
*/
class SpikesBlock :
	public AbstractMapBlock
{
public:
	/**
	* Konstruktr bez parametrow, nie moze byc wywolywany!
	*/
	SpikesBlock();

	/**
	* Konstruktr, z parametrami x i y danego bloku, wzgledem mapy
	*/
	SpikesBlock(int x, int y);

	/**
	* Destruktor
	*/
	~SpikesBlock();

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

