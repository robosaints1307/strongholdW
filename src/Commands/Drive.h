#ifndef Drive_H
#define Drive_H

#include "Commands/Command.h"


class Drive: public Command
{
public:
	Drive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
