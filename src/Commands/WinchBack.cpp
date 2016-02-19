#include "WinchBack.h"
#include "../Robot.h"

WinchBack::WinchBack()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::wallClimb);
}

// Called just before this Command runs the first time
void WinchBack::Initialize()
{
	Robot::wallClimb->Push();
}

// Called repeatedly when this Command is scheduled to run
void WinchBack::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool WinchBack::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void WinchBack::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void WinchBack::Interrupted()
{

}
