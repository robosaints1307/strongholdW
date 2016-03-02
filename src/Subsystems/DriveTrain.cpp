#include "DriveTrain.h"
#include "WPILib.h"
#include "../RobotMap.h"
#include "../Commands/Drive.h"

DriveTrain::DriveTrain() :
		Subsystem("DriveTrain")
{
	rightEncoder = new Encoder(RIGHT_ENCODER_CHAN_A, RIGHT_ENCODER_CHAN_B, true, Encoder::k1X);
	leftEncoder = new Encoder(LEFT_ENCODER_CHAN_A, LEFT_ENCODER_CHAN_B, true, Encoder::k1X);

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

double DriveTrain::GetLeftEncoderVal(){
	return leftEncoder->PIDGet();
}

double DriveTrain::GetRightEncoderVal(){
	return rightEncoder->PIDGet();
}

void DriveTrain::ResetEncoders(){
	leftEncoder->Reset();
	rightEncoder->Reset();
}

void DriveTrain::AutoMove(float rVal, float lVal){
	robotDrive->TankDrive(rVal, lVal);
}
