#include "Kick.h"
#include "../Robot.h"

Kick::Kick()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::ballKicker);
}

// Called just before this Command runs the first time
void Kick::Initialize()
{
	Robot::ballKicker->Kick();
}

// Called repeatedly when this Command is scheduled to run
void Kick::Execute()
{
}

// Make this return true when this Command no longer needs to run execute()
bool Kick::IsFinished()
{
	return Robot::ballKicker->IsKicked();
}

// Called once after isFinished returns true
void Kick::End()
{
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Kick::Interrupted()
{
	End();
}
