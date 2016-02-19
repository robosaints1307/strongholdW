#ifndef WinchBack_H
#define WinchBack_H

#include "Commands/Command.h"

class WinchBack: public Command
{
public:
	WinchBack();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
