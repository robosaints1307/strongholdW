#include "ReleaseHookArms.h"
#include "../Robot.h"

ReleaseHookArms::ReleaseHookArms()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::wallClimb);
}

// Called just before this Command runs the first time
void ReleaseHookArms::Initialize()
{
	Robot::wallClimb->ActuateHookArms();
}

// Called repeatedly when this Command is scheduled to run
void ReleaseHookArms::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ReleaseHookArms::IsFinished()
{
	return Robot::wallClimb->HookArmsActuated();
}

// Called once after isFinished returns true
void ReleaseHookArms::End()
{
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ReleaseHookArms::Interrupted()
{
	End();
}
