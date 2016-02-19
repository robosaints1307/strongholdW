#include "Shooter.h"
#include "../RobotMap.h"
#include "../Commands/Shoot.h"

Shooter::Shooter() :
		Subsystem("Shooter")
{
	control_L = new Spark(LSHOOT);
	control_R = new Spark(RSHOOT);
}

void Shooter::Shoot(){
	control_L->Set(1.0);
	control_R->Set(-1.0);

	//ball lift
	//ball pusher
}

void Shooter::StopShoot(){
	control_L->Set(0.0);
	control_R->Set(0.0);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
