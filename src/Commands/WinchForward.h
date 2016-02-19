#ifndef WinchForward_H
#define WinchForward_H

#include "Commands/Command.h"

class WinchForward: public Command
{
public:
	WinchForward();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
