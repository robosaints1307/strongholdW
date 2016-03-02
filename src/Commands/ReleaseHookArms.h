#ifndef ReleaseHookArms_H
#define ReleaseHookArms_H

#include "Commands/Command.h"

class ReleaseHookArms: public Command
{
public:
	ReleaseHookArms();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
