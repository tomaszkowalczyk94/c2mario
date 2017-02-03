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
	*	@todo
	*/
	int gravityStatus = 0;

};

