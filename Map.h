#pragma once
#include "Character.h"
#include <SFML/Graphics.hpp>
#include <list>
#include "StoneBlock.h"

/**
* Reprezentacja mapy w grze. Przechowuje wszyskie bloki jakie istniejan na mapie
*/
class Map
{
public:

	/**
	* konstruktor
	*/
	Map();

	/**
	* destruktor
	*/
	~Map();

	/**
	* Reprezentacja postaci w grze
	*/
	Character character;

	/**
	* tekstura tla mapy
	*/
	sf::Texture backgroundTexture;

	/**
	* sprite tla mapy
	*/
	sf::Sprite backgroundSprite;

	/**
	* szerokosc mapy
	*/
	int widthMap;

	/**
	* pozycja x gracza na mapie (zgledem lewego gornego rogu mapy)
	*/
	float characterPositionMapX;

	/**
	* pozycja y gracza na mapie (zgledem lewego gornego rogu mapy)
	*/
	float characterPositionMapY;

	/**
	* lista wszystkich blokow uzywanych w mapie
	*/
	std::list<AbstractMapBlock *> blockList;

	/**
	* sprawdza czy gracz moze sie przesunac do danej wsp mapy. Jesli dla danej wsp istnieje blok na mapie, zwraca false
	*/
	bool canMove(float x, float y);
public:

	/**
	* mapa podzielona jest na kolumny. Zwraca wsp x dla danej kolumny
	*/
	int getXElemPos(int col);

	/**
	* mapa podzielona jest na wiersze. Zwraca wsp y danego wiersza
	*/
	int getYElemPos(int row);

};

