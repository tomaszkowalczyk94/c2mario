#include "DisplayMapManager.h"
#include <SFML/Audio.hpp>

#define GRAVITY_STATUS_NORMAL 0
#define GRAVITY_STATUS_JUMP 10
#define GRAVITY_STATUS_FALL 20


class Gravity
{
public:
	Gravity(DisplayMapManager * displayMapManager);
	sf::SoundBuffer buffer;
	sf::Sound sound;
	~Gravity();
	void interactGravity();
	void characterJump();
	void stopJump();
	
	

protected:
	DisplayMapManager *displayMapManager;
	sf::Time startJump;
	sf::Clock clock;
	
};

