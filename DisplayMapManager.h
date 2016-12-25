#include "Map.h"
#include <SFML/Graphics.hpp>


#define WINDOWS_WIDTH 1000
#define WINDOWS_HEIGHT 400


class DisplayMapManager
{
public:
	Map *map;
	sf::RenderWindow *window;

	DisplayMapManager(Map * map, sf::RenderWindow * window);
	~DisplayMapManager();

	void display();
	void moveCharacterLeft();
	void moveCharacterRight();

protected:
	float getCharacterWindowX();
	float getCharacterWindowY();
	float getWindowXPostion(float mapXPostion);
	float getWindowYPostion(float mapYPostion);
	float getBackgroundWindowXPosition(float characterPositionMapX);
	float getBackgroundWindowYPosition(float characterPositionMapY);
	
};

