

#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Map.h"
#include "Gravity.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(WINDOWS_WIDTH, WINDOWS_HEIGHT), "C2projekt");
	window.setVerticalSyncEnabled(true);
	window.setFramerateLimit(60);

	Map map;
	DisplayMapManager displayMapManager(&map, &window);
	Gravity gravity(&displayMapManager);
	
	
	while (window.isOpen())
	{


		
		gravity.interactGravity();

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			displayMapManager.moveCharacterLeft();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			displayMapManager.moveCharacterRight();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			gravity.characterJump();
			sound.setBuffer(buffer);
			sound.play();
		}
		else {
			gravity.stopJump();
		}




		window.clear(sf::Color(0, 0, 0));

		displayMapManager.display(map.characterPositionMapX, map.characterPositionMapY);
		window.display();
	}
}

