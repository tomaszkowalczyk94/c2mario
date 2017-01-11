#include "DisplayMapManager.h"

#define GRAVITY_STATUS_NORMAL 0
#define GRAVITY_STATUS_JUMP 10
#define GRAVITY_STATUS_FALL 20


class Gravity
{
public:
	Gravity(DisplayMapManager * displayMapManager);
	~Gravity();
	void interactGravity();
	void characterJump();
	void stopJump();
	

protected:
	DisplayMapManager *displayMapManager;
	sf::Time startJump;
	sf::Clock clock;
	
};

