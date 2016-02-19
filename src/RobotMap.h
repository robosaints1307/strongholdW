#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
//const int LEFTMOTOR = 1;
//const int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;

static const int LSTICK = 0;
static const int RSTICK = 1;
static const int STICK = 0;

const int LFTREAD = 0;
const int LBTREAD = 1;
const int RFTREAD = 2;
const int RBTREAD = 3;
const int WINCH = 4;
const int LSHOOT = 5;
const int RSHOOT = 6;

const int BALL_LIFT_SOL_FORWARD = 0;
const int BALL_LIFT_SOL_REVERSE = 1;
const int BALL_PUSH_SOL_FORWARD = 2;
const int BALL_PUSH_SOL_REVERSE = 3;

const int WINCH_PISTON_L_F = 4;
const int WINCH_PISTON_L_R = 5;

const int WINCH_PISTON_R_F = 6;
const int WINCH_PISTON_R_R = 7;

//AUTONOMOUS

const int LEFT = 2;
const int RIGHT = 0;

#endif
