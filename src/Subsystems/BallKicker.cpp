#include "BallKicker.h"
#include "../RobotMap.h"

BallKicker::BallKicker() :
		Subsystem("BallKicker")
{
	piston = new DoubleSolenoid(BALL_PUSH_SOL_REVERSE,BALL_PUSH_SOL_FORWARD);
	piston->Set(DoubleSolenoid::kForward);
}

void BallKicker::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void BallKicker::Kick(){
	printf("BallPush::Push() %d\n", piston->Get());
	piston->Set(DoubleSolenoid::kReverse);
}

bool BallKicker::IsKicked() {
	return piston->Get() == DoubleSolenoid::kReverse;
}

void BallKicker::Reset(){
	printf("BallPush::Pull() %d\n", piston->Get());
	piston->Set(DoubleSolenoid::kForward);
}

bool BallKicker::IsReset() {
	return piston->Get() == DoubleSolenoid::kForward;
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
