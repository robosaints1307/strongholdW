#include "Push.h"
#include "../Robot.h"

Push::Push()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::ballPush);
}

// Called just before this Command runs the first time
void Push::Initialize()
{
	Robot::ballPush->Push();
}

// Called repeatedly when this Command is scheduled to run
void Push::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool Push::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void Push::End()
{
	Robot::ballPush->Pull();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Push::Interrupted()
{

}
