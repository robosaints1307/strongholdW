#include "ToggleBallLift.h"
#include "../Robot.h"

ToggleBallLift::ToggleBallLift()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::ballLift);
	lifted = Robot::ballLift->IsLifted();
}

// Called just before this Command runs the first time
void ToggleBallLift::Initialize()
{
	if (lifted) Robot::ballLift->Lower();
	else Robot::ballLift->Lift();
}

// Called repeatedly when this Command is scheduled to run
void ToggleBallLift::Execute()
{
}

// Make this return true when this Command no longer needs to run execute()
bool ToggleBallLift::IsFinished()
{
	if (lifted) return Robot::ballLift->IsLowered();
	else return Robot::ballLift->IsLifted();
}

// Called once after isFinished returns true
void ToggleBallLift::End()
{
	lifted = Robot::ballLift->IsLifted();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleBallLift::Interrupted()
{
	End();
}
