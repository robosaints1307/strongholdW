#ifndef OI_H
#define OI_H

#include "WPILib.h"
//#include "Robot.h"

class OI
{
private:

	Joystick *stick;
	Joystick *lStick;
	Joystick *rStick;
	Button *lbutton_a;
	Button *lbutton_b;
	Button *lbutton_c;
	Button *rbutton_a;
	Button *rbutton_b;
	Button *rbutton_c;

public:
	OI();
	Joystick* getlStick();
	Joystick* getrStick();
	Joystick* getstick();
	Button* getlbutton_a();
	Button* getlbutton_b();
	Button* getlbutton_c();
	Button* getrbutton_a();
	Button* getrbutton_b();
	Button* getrbutton_c();
};

#endif
