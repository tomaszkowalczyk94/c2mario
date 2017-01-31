#include <SFML/Graphics.hpp>

class Character
{
public:
	Character();
	~Character();
	int width = 66;
	int height = 92;
	sf::Texture characterTexture;
	sf::Sprite characterSprite;
	int gravityStatus = 0;

};

