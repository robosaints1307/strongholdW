#ifndef BallLift_H
#define BallLift_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
//#include "Robot.h"

class BallLift: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	DoubleSolenoid* piston;

public:
	BallLift();
	void Lift();
	bool IsLifted();
	void Lower();
	bool IsLowered();
	void Compress();
};

#endif
