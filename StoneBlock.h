#pragma once
#include "AbstractMapBlock.h"
#include <SFML/Graphics.hpp>

/**
* Blok reprezentujacy kamien w grze
*/
class StoneBlock :
	public AbstractMapBlock
{
public:

	StoneBlock();
	/**
	* Konstruktr bez parametrow, nie moze byc wywolywany!
	*/
	StoneBlock(int x, int y);

	/**
	* Destruktor
	*/
	~StoneBlock();

	sf::Sprite* getSprite();

	/**
	* Konstruktr, z parametrami x i y danego bloku, wzgledem mapy
	*/
	void constructor();

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

