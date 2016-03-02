#ifndef BallKicker_h
#define BallKicker_h

#include "Commands/Subsystem.h"
#include "WPILib.h"

class BallKicker: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	DoubleSolenoid* piston;

public:
	BallKicker();
	void InitDefaultCommand();
	void Kick();
	bool IsKicked();
	void Reset();
	bool IsReset();
};

#endif
