#include "Robot.h"
//#include "Commands/ExampleCommand.h"



	Command *autonomousCommand;
	LiveWindow *lw;

	DriveTrain* Robot::driveTrain = NULL;
	OI* Robot::oi = NULL;
	Shooter* Robot::shooter = NULL;
	BallLift* Robot::ballLift = NULL;
	BallPush* Robot::ballPush = NULL;
	WallClimb* Robot::wallClimb = NULL;

	void RobotInit()
	{

		//autonomousCommand = new ExampleCommand();
		lw = LiveWindow::GetInstance();
		Robot::driveTrain = new DriveTrain();
		Robot::shooter = new Shooter();
		Robot::oi = new OI();
		Robot::ballLift = new BallLift();
		Robot::ballPush = new BallPush();
		Robot::wallClimb = new WallClimb();
	}
	
	void DisabledPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void AutonomousInit()
	{
		if (autonomousCommand != NULL)
			autonomousCommand->Start();
	}

	void AutonomousPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void TeleopInit()
	{
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		if (autonomousCommand != NULL)
			autonomousCommand->Cancel();
	}

	void TeleopPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void TestPeriodic()
	{
		lw->Run();
	}


START_ROBOT_CLASS(Robot);

