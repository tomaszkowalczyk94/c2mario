#include "Map.h"
#include <SFML/Graphics.hpp>

/**
*	Szerokosc okna gry
*/
#define WINDOWS_WIDTH 1920

/**
*	Wysokosc okna gry
*/
#define WINDOWS_HEIGHT 1080

/**
* zarzadza wyswietlaniem, i poruszaniem sie elementow na mapie
*/
class DisplayMapManager
{
public:
	/**
	* wskaznik na obiekt mapy
	*/
	Map *map;

	/**
	* wskaznik na obiekt okna
	*/
	sf::RenderWindow *window;

	/**
	* wskaznik na obiekt zegara
	*/
	sf::Clock clock;

	/**
	* wskaznik na obiekt czcionki wykorzystywanej w grze
	*/
	sf::Font MyFont;

	/**
	* wskaznik na obiekt tekstu wykorzysywanego w grze
	*/
	sf::Text text;

	/**
	* konstruktor
	*/
	DisplayMapManager(Map * map, sf::RenderWindow * window);

	/**
	* destruktor
	*/
	~DisplayMapManager();

	/**
	* wyswietla wszystkie elementy na mapie
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
	*	zwraca pozycje x gracza na ekranie
	*/
	float getCharacterWindowX();

	/**
	*	zwraca pozycje y gracza na ekranie
	*/
	float getCharacterWindowY();

	/**
	*	konwertuje wsp x mapy, na wsp x okna gry
	*/
	float getWindowXPostion(float mapXPostion);

	/**
	*	konwertuje wsp y mapy, na wsp x okna gry
	*/
	float getWindowYPostion(float mapYPostion);

	/**
	*	zwraca wsp x tla
	*/
	float getBackgroundWindowXPosition(float characterPositionMapX);

	/**
	*	zwraca wsp y tla
	*/
	float getBackgroundWindowYPosition(float characterPositionMapY);
	
};

