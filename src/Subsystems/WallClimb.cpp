#include "WallClimb.h"
#include "../RobotMap.h"
#include "../Commands/Climb.h"
#include "../Commands/WinchForward.h"
#include "../Commands/WinchBack.h"

WallClimb::WallClimb() :
		Subsystem("WallClimb")
{
	pistonL = new DoubleSolenoid(WINCH_PISTON_L_F, WINCH_PISTON_L_R);
	pistonR = new DoubleSolenoid(WINCH_PISTON_R_F, WINCH_PISTON_R_R);

	winch = new Talon(WINCH);
}

void WallClimb::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void WallClimb::Up(){
	pistonL->Set(DoubleSolenoid::Value::kForward);
	pistonR->Set(DoubleSolenoid::Value::kForward);
}

void WallClimb::Down(){
	pistonL->Set(DoubleSolenoid::Value::kReverse);
	pistonR->Set(DoubleSolenoid::Value::kReverse);
}

void WallClimb::Pull(){
	winch->Set(0.5);
}

void WallClimb::Push(){
	winch->Set(-0.5);
}
