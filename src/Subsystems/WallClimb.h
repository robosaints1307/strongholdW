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
	DoubleSolenoid* piston;

public:
	WallClimb();
	void InitDefaultCommand();
	void ActuateHookArms();
	bool HookArmsActuated();
	void ReleaseHookArms();
	bool HookArmsReleased();
	void Climb();
	void Descend();
	void Stop();
};

#endif
