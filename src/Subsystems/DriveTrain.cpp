#include "DriveTrain.h"
#include "WPILib.h"
#include "../RobotMap.h"
#include "../Commands/Drive.h"

DriveTrain::DriveTrain() :
		Subsystem("DriveTrain")
{
	robotDrive = new RobotDrive(LFTREAD, LBTREAD, RFTREAD, RBTREAD);
	robotDrive->SetSensitivity(1.0);
	robotDrive->SetMaxOutput(1.0);

	// Motors set to inverted because joysticks were driving the wrong way
	robotDrive->SetInvertedMotor(RobotDrive::kRearRightMotor, true);
	robotDrive->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);
	robotDrive->SetInvertedMotor(RobotDrive::kFrontRightMotor, true);
	robotDrive->SetInvertedMotor(RobotDrive::kFrontLeftMotor, true);
}

void DriveTrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new Drive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveTrain::TankDrive(Joystick* rStick, Joystick* lStick){
	SmartDashboard::PutNumber("rStick", rStick->GetY());
	SmartDashboard::PutNumber("lStick", lStick->GetY());
	robotDrive->TankDrive(rStick, lStick);
}
