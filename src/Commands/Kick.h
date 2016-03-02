#ifndef Kick_H
#define Kick_H

#include "Commands/Command.h"

class Kick: public Command
{
public:
	Kick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
