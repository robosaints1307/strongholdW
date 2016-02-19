#ifndef ROBOT_H
#define ROBOT_H

#include "WPILib.h"
#include "Commands/Command.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/WallClimb.h"
#include "Subsystems/BallLift.h"
#include "Subsystems/BallPush.h"
#include "OI.h"

class Robot:public IterativeRobot{

public:
	static DriveTrain* driveTrain;
	static Shooter* shooter;
	static OI* oi;
	static BallLift* ballLift;
	static BallPush* ballPush;
	static WallClimb* wallClimb;
};


#endif
