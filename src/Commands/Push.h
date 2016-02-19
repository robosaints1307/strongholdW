#ifndef Push_H
#define Push_H

#include "Commands/Command.h"

class Push: public Command
{
public:
	Push();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
