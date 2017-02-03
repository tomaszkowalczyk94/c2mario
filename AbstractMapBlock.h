#pragma once
#include <SFML/Graphics.hpp>

/**
 * Abstrakcyjna klasa bloku, po ktorej dziedzicza wszystkie mozliwe elementy ktore mozna umiescic na mapie
*/
class AbstractMapBlock
{
public:
	/*
	 * Domysny konstruktor, nigdy nie wywo³lywany
	 */
	AbstractMapBlock();

	
	AbstractMapBlock(int x, int y);
	virtual ~AbstractMapBlock();

	int width = 25;
	int height = 25;

	int posX = 0;
	int posY = 0;
	bool isWall = true;

	virtual sf::Sprite* getSprite() = 0;
};

