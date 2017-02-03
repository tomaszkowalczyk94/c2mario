#include "DisplayMapManager.h"
#include <SFML/Audio.hpp>

#define GRAVITY_STATUS_NORMAL 0
#define GRAVITY_STATUS_JUMP 10
#define GRAVITY_STATUS_FALL 20

/**
 * klasa zarzadzajaca grawitacja w grze
 */
class Gravity
{
public:
	/**
	* konstruktor
	*/
	Gravity(DisplayMapManager * displayMapManager);

	/**
	* bufor dzwieku odtwarzanego podczas skoku
	*/
	sf::SoundBuffer buffer;

	/**
	* obiekt dzwieku odtwarzanego podczas skoku
	*/
	sf::Sound sound;

	/**
	* destruktor
	*/
	~Gravity();

	/**
	* obiekty na mapie, musza byc przyciagane do podloza, np podczas spdadania. Funkcja odpowiada za przyciaganie wszystkich
	* elementow na mapie do podloza
	*/
	void interactGravity();

	/**
	* wykonuje skok
	*/
	void characterJump();

	/**
	* konczy skok
	*/
	void stopJump();
	
	

protected:

	/**
	* wskaznik na obiekt DisplayMapManager
	*/
	DisplayMapManager *displayMapManager;

	/**
	* czas przechowujacy start skosku
	*/
	sf::Time startJump;
	
	/**
	* wskaznik na obiekt Clock
	*/
	sf::Clock clock;
	
};

