#include "Map.h"
#include <SFML/Graphics.hpp>


#define WINDOWS_WIDTH 1280
#define WINDOWS_HEIGHT 720


class DisplayMapManager
{
public:
	Map *map;
	sf::RenderWindow *window;
	sf::Clock clock;
	sf::Font MyFont;
	sf::String text;

	DisplayMapManager(Map * map, sf::RenderWindow * window);
	~DisplayMapManager();

	void display(int x, int y);
	bool moveCharacterLeft();
	bool moveCharacterRight();
	bool moveCharacterUp();
	bool moveCharacterDown();


protected:
	float getCharacterWindowX();
	float getCharacterWindowY();
	float getWindowXPostion(float mapXPostion);
	float getWindowYPostion(float mapYPostion);
	float getBackgroundWindowXPosition(float characterPositionMapX);
	float getBackgroundWindowYPosition(float characterPositionMapY);
	
};

