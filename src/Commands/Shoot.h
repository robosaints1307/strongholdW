#ifndef Shoot_H
#define Shoot_H

#include "Commands/Command.h"

class Shoot: public Command
{
public:
	Shoot();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

};

#endif
