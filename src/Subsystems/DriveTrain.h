#ifndef DriveTrain_H
#define DriveTrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
private:
	RobotDrive* robotDrive;
	Encoder* leftEncoder;
	Encoder* rightEncoder;

public:
	DriveTrain();
	void InitDefaultCommand();
	void TankDrive(Joystick* rStick, Joystick* lStick);
	double GetLeftEncoderVal();
	double GetRightEncoderVal();
	void ResetEncoders();
	void AutoMove(float, float);
};

#endif
