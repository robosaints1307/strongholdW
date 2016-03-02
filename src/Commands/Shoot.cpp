#include "Shoot.h"
#include "../Robot.h"


Shoot::Shoot()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
    Requires(Robot::shooter);
}

// Called just before this Command runs the first time
void Shoot::Initialize()
{
	Robot::shooter->SpinUp();
}

// Called repeatedly when this Command is scheduled to run
void Shoot::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool Shoot::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void Shoot::End()
{
	Robot::shooter->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Shoot::Interrupted()
{

}
