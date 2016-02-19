#include "DriveTrain.h"
#include "WPILib.h"
#include "../RobotMap.h"
#include "../Commands/Drive.h"

DriveTrain::DriveTrain() :
		Subsystem("DriveTrain")
{
	robotDrive = new RobotDrive(LFTREAD,LBTREAD,RFTREAD,RBTREAD);
	robotDrive->SetSensitivity(1.0);
	robotDrive->SetMaxOutput(1.0);

	robotDrive->SetInvertedMotor(RobotDrive::kFrontRightMotor, false);	// invert the left side motors
	robotDrive->SetInvertedMotor(RobotDrive::kRearRightMotor, false);
	robotDrive->SetInvertedMotor(RobotDrive::kFrontLeftMotor, false);	// invert the left side motors
	robotDrive->SetInvertedMotor(RobotDrive::kRearLeftMotor, false);
}

void DriveTrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveTrain::TankDrive(Joystick* rStick, Joystick* lStick){

	robotDrive->TankDrive(rStick, lStick);



}
