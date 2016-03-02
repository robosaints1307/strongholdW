#include "WallClimb.h"
#include "../RobotMap.h"
#include "../Commands/Climb.h"

bool climbing;
WallClimb::WallClimb() :
		Subsystem("WallClimb")
{
	piston = new DoubleSolenoid(HOOK_ARM_PISTON_FORWARD, HOOK_ARM_PISTON_REVERSE);
	climbing = false;
	winch = new Talon(WINCH);
	winch->Set(0);
}

void WallClimb::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void WallClimb::ActuateHookArms(){
	piston->Set(DoubleSolenoid::Value::kReverse);
}

bool WallClimb::HookArmsActuated() {
	return piston->Get() == DoubleSolenoid::kReverse;
}
void WallClimb::ReleaseHookArms(){
	printf("WalClimb::ActuateHookArms");
	piston->Set(DoubleSolenoid::Value::kForward);
}

bool WallClimb::HookArmsReleased() {
	return piston->Get() == DoubleSolenoid::kForward;
}

void WallClimb::Climb(){
	winch->Set(-1);
}

void WallClimb::Descend(){
	winch->Set(1);
}

void WallClimb::Stop(){
	winch->StopMotor();
}
