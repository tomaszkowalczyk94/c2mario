#include <SFML/Graphics.hpp>

class Character
{
public:
	Character();
	~Character();
	int width = 40;
	int height = 95;
	sf::Texture characterTexture;
	sf::Sprite characterSprite;
	int gravityStatus = 0;

};

