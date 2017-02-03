#include <SFML/Graphics.hpp>

class Character
{
public:
	Character();
	~Character();
	int width = 75;
	int height = 95;
	sf::Texture characterTexture;
	sf::Sprite characterSprite;
	sf::IntRect rectSourceSprite;
	sf::FloatRect textRect;
	int gravityStatus = 0;

};

