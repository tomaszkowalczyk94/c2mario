#include <SFML/Graphics.hpp>

class Character
{
public:
	Character();
	~Character();
	int width = 25;
	int height = 25;
	sf::Texture characterTexture;
	sf::Sprite characterSprite;
	int gravityStatus = 0;

};

