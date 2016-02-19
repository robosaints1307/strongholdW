#include "BallLift.h"
#include "../RobotMap.h"
#include "../Commands/Lift.h"

BallLift::BallLift() :
		Subsystem("BallLift")
{
	piston = new DoubleSolenoid(BALL_LIFT_SOL_FORWARD, BALL_LIFT_SOL_REVERSE);
	comp = new Compressor();
}


void BallLift::Lift(){
	piston->Set(DoubleSolenoid::Value::kReverse);
}

void BallLift::Lower(){
	piston->Set(DoubleSolenoid::Value::kForward);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.


//compressor
void BallLift::Compress(){
	comp -> SetClosedLoopControl(true);
}
