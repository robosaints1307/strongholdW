#include "OI.h"
#include "RobotMap.h"
#include "Commands/Shoot.h"
#include "Commands/Push.h"
#include "Commands/Lift.h"
#include "Commands/Drive.h"
#include "Commands/Climb.h"
#include "Commands/Lift.h"
#include "Commands/WinchForward.h"
#include "Commands/WinchBack.h"

OI::OI()
{
	// Process operator interface input here.
	lStick = new Joystick(LSTICK);
	rStick = new Joystick(RSTICK);
	stick = new Joystick(STICK);

	lbutton_a = new JoystickButton(stick, 5);
	lbutton_b = new JoystickButton(stick, 4);
	lbutton_c = new JoystickButton(stick, 2);
	rbutton_a = new JoystickButton(stick, 6);
	rbutton_b = new JoystickButton(stick, 9);
	rbutton_c = new JoystickButton(stick, 1);

	lbutton_a->WhileHeld(new Push());
	lbutton_b->WhileHeld(new Shoot());
	lbutton_c->WhileHeld(new Lift());

	rbutton_a->WhileHeld(new Climb());
	rbutton_b->WhileHeld(new WinchForward());
	rbutton_c->WhileHeld(new WinchBack());
}

Joystick* OI::getlStick(){
	return lStick;
}

Joystick* OI::getrStick(){
	return rStick;
}

Joystick* OI::getstick(){
	return stick;
}

Button* OI::getlbutton_a(){
	return lbutton_a;
}

Button* OI::getlbutton_b(){
	return lbutton_b;
}

Button* OI::getlbutton_c(){
	return lbutton_c;
}

Button* OI::getrbutton_a(){
	return rbutton_a;
}

Button* OI::getrbutton_b(){
	return rbutton_b;
}

Button* OI::getrbutton_c(){
	return rbutton_c;
}
