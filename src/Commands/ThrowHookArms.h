#ifndef ThrowHookArms_H
#define ThrowHookArms_H

#include "Commands/Command.h"

class ThrowHookArms: public Command
{
public:
	ThrowHookArms();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
