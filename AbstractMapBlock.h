#pragma once
#include <SFML/Graphics.hpp>

/**
 * Abstrakcyjna klasa bloku, po ktorej dziedzicza wszystkie mozliwe elementy ktore mozna umiescic na mapie
*/
class AbstractMapBlock
{
public:

	/**
	* Konstruktr bez parametrow, nie moze byc wywolywany!
	*/
	AbstractMapBlock();

	/**
	* Konstruktr, z parametrami x i y danego bloku, wzgledem mapy
	*/
	AbstractMapBlock(int x, int y);

	/**
	* Destruktor
	*/
	virtual ~AbstractMapBlock();

	/**
	* szerokosc obiektu
	*/
	int width = 25;

	/**
	* wysokosc obiektu
	*/
	int height = 25;

	/**
	* wsp x na mapie
	*/
	int posX = 0;

	/**
	* wsp y na mapie
	*/
	int posY = 0;

	/**
	* czy gracz moze przenikac przez blok
	*/
	bool isWall = true;

	/**
	* zwraca sprite-a
	*/
	virtual sf::Sprite* getSprite() = 0;
};

