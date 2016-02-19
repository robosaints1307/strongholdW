#include "BallPush.h"
#include "../RobotMap.h"
#include "../Commands/Push.h"

BallPush::BallPush() :
		Subsystem("BallPush")
{
	piston = new DoubleSolenoid(BALL_PUSH_SOL_FORWARD,BALL_PUSH_SOL_REVERSE);
}

void BallPush::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void BallPush::Push(){
	piston->Set(DoubleSolenoid::Value::kForward);
}

void BallPush::Pull(){
	piston->Set(DoubleSolenoid::Value::kReverse);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
