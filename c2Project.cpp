

#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Map.h"
#include "Gravity.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(WINDOWS_WIDTH, WINDOWS_HEIGHT), "C2projekt", sf::Style::Fullscreen);
	window.setVerticalSyncEnabled(true);
	window.setFramerateLimit(60);

	Map map;
	DisplayMapManager displayMapManager(&map, &window);
	Gravity gravity(&displayMapManager);

	sf::SoundBuffer buffer;
	buffer.loadFromFile("music.ogg");
	sf::Sound sound;
	sound.setBuffer(buffer);
	sound.setLoop(true);
	sound.play();
	
	

	
	
	while (window.isOpen())
	{


		
		gravity.interactGravity();

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				window.close();
		}

			

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			displayMapManager.moveCharacterRight();
		}
		else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			displayMapManager.moveCharacterLeft();
		}
		else
			displayMapManager.stopAnimation();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			gravity.characterJump();			
		}
		else {
			gravity.stopJump();
		}




		window.clear(sf::Color(0, 0, 0));

		displayMapManager.display(map.characterPositionMapX, map.characterPositionMapY);
		window.display();
	}
}

