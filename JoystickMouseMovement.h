//	See main.cpp file header for credits

#ifndef __HelicopterProject__JoystickMouseMovement__
#define __HelicopterProject__JoystickMouseMovement__

#include "Command.h"
#include "Joystick.h"
#include "Configuration.h"

class Game;


class JoystickMouseMovement : public Command {
public:
	JoystickMouseMovement(Game *game, Joystick *joystick, float xCartesian, float yCartesian);
	virtual bool execute();
	
private:
	Game *game;
	Joystick *joystick;
	float xCartesian;
	float yCartesian;
};

#include "Game.h"
#endif /* defined(__HelicopterProject__JoystickMouseMovement__) */
