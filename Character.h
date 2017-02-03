#include <SFML/Graphics.hpp>

/**
*	Klasa postaci
*/
class Character
{
public:
	/**
	*	Konstruktor
	*/
	Character();

	/**
	*	Destruktor
	*/
	~Character();

	/**
	*	Szerokosc postaci
	*/
	int width = 75;

	/**
	*	Wysokosc postaci
	*/
	int height = 95;

	/**
	*	Tekstura postaci
	*/
	sf::Texture characterTexture;

	/**
	*	Sprite postaci
	*/
	sf::Sprite characterSprite;

	/**
	*	Pozycja aktualnej klatki animacji postaci
	*/
	sf::IntRect rectSourceSprite;

	/**
	* status grawitacji gracza. Dostepne sa 3 statusy:
	* GRAVITY_STATUS_NORMAL = 0,
    * GRAVITY_STATUS_JUMP = 10,
    * GRAVITY_STATUS_FALL = 20
	*/
	int gravityStatus = 0;

};

