#include <Commands/AutoMove.h>

AutoMove::AutoMove(float distance)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::driveTrain);
	pid = new PIDController(0.8, 0.6, 0.2, new AutoMoveSource(), new AutoMoveOutput());
	pid->SetAbsoluteTolerance(0.3);
	pid->SetOutputRange(-0.725, 0.725);
	pid->SetContinuous(false);
	pid->SetSetpoint(distance);
}

// Called just before this Command runs the first time
void AutoMove::Initialize()
{
	Robot::driveTrain->ResetEncoders();

	pid->Reset();
	pid->Enable();
	//driveTrain->AutoDrive(10.0, 10.0);
	//
	printf("AutoMove::Init()\n");
}

// Called repeatedly when this Command is scheduled to run
void AutoMove::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool AutoMove::IsFinished()
{
	//printf("LeftPID:%f RightPID:%f",driveTrain->leftEncoder->PIDGet(), driveTrain->rightEncoder->PIDGet());
	//printf("AutoMove::IsFinished() PidTarget:%d\n", pid->OnTarget());

	//return pid->OnTarget();
	return pid->OnTarget();
}

// Called once after isFinished returns true
void AutoMove::End()
{
	pid->Disable();
	Robot::driveTrain->AutoMove(0.0, 0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoMove::Interrupted()
{
	End();
}

AutoMoveSource::~AutoMoveSource(){}
double AutoMoveSource::PIDGet(){
	double get = (Robot::driveTrain->GetRightEncoderVal() + Robot::driveTrain->GetLeftEncoderVal())/2.0;
	printf("Pid:%f\n", get);
	return get;
}
AutoMoveOutput::~AutoMoveOutput(){}
void AutoMoveOutput::PIDWrite(float d){
	printf("PidWrite:D:%f", d);
	Robot::driveTrain->AutoMove(d, d);
}
