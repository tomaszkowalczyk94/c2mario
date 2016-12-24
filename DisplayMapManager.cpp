#include "stdafx.h"
#include "DisplayMapManager.h"
#include "Map.h"
#include <SFML/Graphics.hpp>

DisplayMapManager::DisplayMapManager(Map map, sf::RenderWindow *window)
{
	this->map = map;
	this->window = window;
}

DisplayMapManager::~DisplayMapManager()
{
}

void DisplayMapManager::display()
{

}
