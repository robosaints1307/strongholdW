#ifndef ROBOT_H
#define ROBOT_H

#include "WPILib.h"
#include "Commands/Command.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/WallClimb.h"
#include "Subsystems/BallLift.h"
#include "Subsystems/BallKicker.h"
#include "OI.h"

class Robot: public IterativeRobot {

public:
	static DriveTrain* driveTrain;
	static Shooter* shooter;
	static BallLift* ballLift;
	static BallKicker* ballKicker;
	static WallClimb* wallClimb;
	static OI* oi;
    Robot();

private:
    Compressor* compressor;
	void RobotInit();
	void AutonomousInit();
	void AutonomousPeriodic();
	void TeleopInit();
	void TeleopPeriodic();
	void TestPeriodic();

};


#endif
