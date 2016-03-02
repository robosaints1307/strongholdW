#ifndef ToggleBallLift_H
#define ToggleBallLift_H

#include "Commands/Command.h"

class ToggleBallLift: public Command
{
private:
	bool lifted;
public:
	ToggleBallLift();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
