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

	/**
	* Konstruktr bez parametrow, nie moze byc wywolywany!
	*/
	StoneBlock();

	/**
	* Konstruktr, z parametrami x i y danego bloku, wzgledem mapy
	*/
	~StoneBlock();

	sf::Sprite* getSprite();

	/**
	* Destruktor
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

