#include "Robot.h"

	Command *autonomousCommand;

	DriveTrain* Robot::driveTrain = NULL;
	OI* Robot::oi = NULL;
	Shooter* Robot::shooter = NULL;
	BallLift* Robot::ballLift = NULL;
	BallKicker* Robot::ballKicker = NULL;
	WallClimb* Robot::wallClimb = NULL;

	Robot::Robot() {
		compressor = new Compressor();
	}

	void Robot::RobotInit()
	{
		printf("MY ROBOT INIT");
		//autonomousCommand = new ExampleCommand();
		Robot::driveTrain = new DriveTrain();
		Robot::shooter = new Shooter();
		Robot::ballLift = new BallLift();
		Robot::ballKicker = new BallKicker();
		Robot::wallClimb = new WallClimb();
		Robot::oi = new OI();

//		compressor->SetClosedLoopControl(true);
	}
	
	void Robot::AutonomousInit()
	{
		if (autonomousCommand != NULL)
			autonomousCommand->Start();
	}

	void Robot::AutonomousPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void Robot::TeleopInit()
	{
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		if (autonomousCommand != NULL)
			autonomousCommand->Cancel();

	}

	void Robot::TeleopPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void Robot::TestPeriodic()
	{
	}


START_ROBOT_CLASS(Robot);

