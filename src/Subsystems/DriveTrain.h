#ifndef DriveTrain_H
#define DriveTrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
private:
	RobotDrive* robotDrive;

public:
	DriveTrain();
	void InitDefaultCommand();
	void TankDrive(Joystick* rStick, Joystick* lStick);
};

#endif
