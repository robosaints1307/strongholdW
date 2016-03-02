#ifndef ResetKicker_H
#define ResetKicker_H

#include "Commands/Command.h"

class ResetKicker: public Command
{
public:
	ResetKicker();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
