#ifndef BallPush_H
#define BallPush_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class BallPush: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	DoubleSolenoid* piston;

public:
	BallPush();
	void InitDefaultCommand();
	void Push();
	void Pull();
};

#endif
