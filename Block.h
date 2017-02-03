#pragma once
#include "AbstractMapBlock.h"

/**
* Blok reprezentujacy zwykly bloczek w grze, nie spelniajacy zadnych specjalnych funkcji
*/
class Block :
	public AbstractMapBlock
{
public:

	/**
	* Konstruktr bez parametrow, nie moze byc wywolywany!
	*/
	Block();

	/*
	* Konstruktr, z parametrami x i y danego bloku, wzgledem mapy
	*/
	Block(int x, int y);

	/**
	* Destruktor
	*/
	~Block();

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

