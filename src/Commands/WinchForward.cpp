#include "WinchForward.h"
#include "../Robot.h"

WinchForward::WinchForward()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::wallClimb);
}

// Called just before this Command runs the first time
void WinchForward::Initialize()
{
	Robot::wallClimb->Pull();
}

// Called repeatedly when this Command is scheduled to run
void WinchForward::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool WinchForward::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void WinchForward::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void WinchForward::Interrupted()
{

}
