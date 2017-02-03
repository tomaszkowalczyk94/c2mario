#pragma once
#include "AbstractMapBlock.h"

/**
* Blok reprezentujacy drewniany mostek w grze
*/
class BridgeBlock :
	public AbstractMapBlock
{
public:
	/**
	* Konstruktr bez parametrow, nie moze byc wywolywany!
	*/
	BridgeBlock();

	/**
	* Konstruktr, z parametrami x i y danego bloku, wzgledem mapy
	*/
	BridgeBlock(int x, int y);

	/**
	* Destruktor
	*/
	~BridgeBlock();

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

