#include "ResetKicker.h"
#include "../Robot.h"

ResetKicker::ResetKicker()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::ballKicker);
}

// Called just before this Command runs the first time
void ResetKicker::Initialize()
{
	Robot::ballKicker->Reset();
}

// Called repeatedly when this Command is scheduled to run
void ResetKicker::Execute()
{
}

// Make this return true when this Command no longer needs to run execute()
bool ResetKicker::IsFinished()
{
	return Robot::ballKicker->IsReset();
}

// Called once after isFinished returns true
void ResetKicker::End()
{
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ResetKicker::Interrupted()
{
	End();
}
