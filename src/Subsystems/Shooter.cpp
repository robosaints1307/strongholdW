#include "Shooter.h"
#include "../RobotMap.h"
#include "../Commands/Shoot.h"

Shooter::Shooter() :
		Subsystem("Shooter")
{
	control_L = new Spark(LSHOOT);
	control_R = new Spark(RSHOOT);
}

void Shooter::SpinUp(){
	control_L->Set(MAX_SHOOTER_SPEED);
	control_R->Set(-MAX_SHOOTER_SPEED);

	//ball lift
	//ball pusher
}

bool Shooter::AtSpeed() {
     float avg = (control_L->Get() + control_R->Get()) / 2.0;
     // at speed if we are at least 95% of MAX
     return avg >= (MAX_SHOOTER_SPEED * 0.95);
}

void Shooter::Stop(){
	control_L->Set(0.0);
	control_R->Set(0.0);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
