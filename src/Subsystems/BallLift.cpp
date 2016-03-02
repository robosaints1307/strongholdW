#include "BallLift.h"
#include "../RobotMap.h"

BallLift::BallLift() :
		Subsystem("BallLift")
{
	piston = new DoubleSolenoid(BALL_LIFT_SOL_FORWARD, BALL_LIFT_SOL_REVERSE);
}


void BallLift::Lift(){
	printf("BallLift::Lift\n");
	piston->Set(DoubleSolenoid::Value::kForward);
}

bool BallLift::IsLifted() {
	return piston->Get() == DoubleSolenoid::kForward;
}

void BallLift::Lower(){
	printf("BallLift::Lower\n");
	piston->Set(DoubleSolenoid::Value::kReverse);
}

bool BallLift::IsLowered() {
	return piston->Get() == DoubleSolenoid::kReverse;
}
// Put methods for controlling this subsystem
// here. Call these from Commands.


//compressor
void BallLift::Compress(){
}
