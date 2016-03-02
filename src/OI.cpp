#include "OI.h"
#include "RobotMap.h"

#include "Commands/Shoot.h"
//#include "Commands/Push.h"
//#include "Commands/Lift.h"
#include "Commands/Drive.h"
#include "Commands/Climb.h"
#include "Commands/Kick.h"
#include "Commands/ReleaseHookArms.h"
#include "Commands/ResetKicker.h"
#include "Commands/ThrowHookArms.h"
#include "Commands/ToggleBallLift.h"
#include "WPILib.h"

OI::OI()
{
	// Process operator interface input here.
	lStick = new Joystick(LSTICK);
	rStick = new Joystick(RSTICK);

	Joystick *game_controller = new Joystick(GAME_CONTROLLER);

	Button* ball_lift_button = new JoystickButton(game_controller, RIGHT_SHOULDER_BUTTON);
	Button* ball_kicker_button = new JoystickButton(game_controller, RIGHT_TRIGGER_BUTTON);
	Button* climb_wall_button = new JoystickButton(game_controller, LEFT_TRIGGER_BUTTON);
	Button* throw_hook_arms_button = new JoystickButton(game_controller, LEFT_SHOULDER_BUTTON);
	Button* start_thrower_motor = new JoystickButton(game_controller, A_BUTTON);

//	lbutton_a->WhileHeld(new Push());
//	lbutton_b->WhileHeld(new Shoot());
//	lbutton_c->WhileHeld(new Lift());
//

	start_thrower_motor->ToggleWhenActive(new Shoot());

	ball_lift_button->WhenPressed(new ToggleBallLift());

	CommandGroup* kick = new CommandGroup();
	kick->AddSequential(new Kick());
	kick->AddSequential(new WaitCommand(.5)); // wait half a second
	kick->AddSequential(new ResetKicker());
	ball_kicker_button->WhenPressed(kick);

	climb_wall_button->WhileHeld(new Climb());

	CommandGroup* hook_bar = new CommandGroup();
	hook_bar->AddSequential(new ThrowHookArms());
	hook_bar->AddSequential(new WaitCommand(.5)); // wait half a second
	hook_bar->AddSequential(new ReleaseHookArms());
	throw_hook_arms_button->WhenPressed(hook_bar);
}

Joystick* OI::GetLStick() {
	return lStick;
}

Joystick* OI::GetRStick(){
	return rStick;
}
