#include "Lift.h"
#include "../Robot.h"

Lift::Lift()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::ballLift);
}

// Called just before this Command runs the first time
void Lift::Initialize()
{
	Robot::ballLift->Lower();
}

// Called repeatedly when this Command is scheduled to run
void Lift::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool Lift::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void Lift::End()
{
	Robot::ballLift->Lift();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Lift::Interrupted()
{

}