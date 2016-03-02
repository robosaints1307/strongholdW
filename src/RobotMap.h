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

static const int RSTICK = 0;
static const int LSTICK = 1;
static const int GAME_CONTROLLER = 2;

// GAME CONTROLLER BUTTON ASSIGNMENTS
static const int X_BUTTON = 1;
static const int Y_BUTTON = 4;
static const int B_BUTTON = 3;
static const int A_BUTTON = 2;
static const int LEFT_SHOULDER_BUTTON = 5;
static const int RIGHT_SHOULDER_BUTTON = 6;
static const int LEFT_TRIGGER_BUTTON = 7;
static const int RIGHT_TRIGGER_BUTTON = 8;

// crawler track channels
const int LFTREAD = 0;
const int LBTREAD = 1;
const int RFTREAD = 2;
const int RBTREAD = 3;

// motor controller channels
const int WINCH = 6;
const int LSHOOT = 4;
const int RSHOOT = 5;

// solenoid channels
const int HOOK_ARM_PISTON_FORWARD = 0;
const int HOOK_ARM_PISTON_REVERSE = 1;
const int BALL_LIFT_SOL_FORWARD = 2;
const int BALL_LIFT_SOL_REVERSE = 3;
const int BALL_PUSH_SOL_FORWARD = 4;
const int BALL_PUSH_SOL_REVERSE = 5;

// ball thrower speed
const float MAX_SHOOTER_SPEED = 0.5;

//encoders

static const int LEFT_ENCODER_CHAN_A = 0;
static const int LEFT_ENCODER_CHAN_B = 1;
static const int RIGHT_ENCODER_CHAN_A = 2;
static const int RIGHT_ENCODER_CHAN_B = 3;

#endif
