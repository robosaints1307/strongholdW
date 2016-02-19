#ifndef Shooter_H
#define Shooter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Shooter: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	SpeedController* control_L;
	SpeedController* control_R;

public:
	Shooter();
	void Shoot();
	void StopShoot();
};

#endif
