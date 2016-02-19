#ifndef WallClimb_H
#define WallClimb_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class WallClimb: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	SpeedController* winch;

	DoubleSolenoid* pistonL;
	DoubleSolenoid* pistonR;
public:
	WallClimb();
	void InitDefaultCommand();
	void Up();
	void Down();
	void Push();
	void Pull();
};

#endif
