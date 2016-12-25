#include <SFML/Graphics.hpp>

class AbstractMapBlock
{
public:
	AbstractMapBlock();
	virtual ~AbstractMapBlock();

	int width = 25;
	int height = 25;

	int posX = 0;
	int posY = 0;

	virtual sf::Sprite* getSprite() = 0;
};
