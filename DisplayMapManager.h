#include "Map.h"
#include <SFML/Graphics.hpp>

/**
*	Szerokosc okna gry
*/
#define WINDOWS_WIDTH 1280

/**
*	Wysokosc okna gry
*/
#define WINDOWS_HEIGHT 720


class DisplayMapManager
{
public:
	Map *map;
	sf::RenderWindow *window;
	sf::Clock clock;
	sf::Font MyFont;
	sf::Text text;

	DisplayMapManager(Map * map, sf::RenderWindow * window);
	~DisplayMapManager();

	/**
	*
	*/
	void display(int x, int y);
	/**
	*	Konfiguruje napis który wyswietla sie po przegranej
	*/
	void textSettings();

	/**
	*	Zatrzymuje wykonywanie animacji
	*/
	void stopAnimation();

	/**
	*	Porusza postac w lewo
	*/
	bool moveCharacterLeft();

	/**
	*	Porusza postac w prawo
	*/
	bool moveCharacterRight();

	/**
	*	Skok
	*/
	bool moveCharacterUp();

	/**
	*	Opadanie
	*/
	bool moveCharacterDown();


protected:

	/**
	*	@todo
	*/
	float getCharacterWindowX();

	/**
	*	@todo
	*/
	float getCharacterWindowY();

	/**
	*	@todo
	*/
	float getWindowXPostion(float mapXPostion);

	/**
	*	@todo
	*/
	float getWindowYPostion(float mapYPostion);

	/**
	*	@todo
	*/
	float getBackgroundWindowXPosition(float characterPositionMapX);

	/**
	*	@todo
	*/
	float getBackgroundWindowYPosition(float characterPositionMapY);
	
};

