/*
 * robotLibrary.h
 *
 *  Created on: Nov 20, 2013
 *      Author: C15Kevin.Cooper
 */

#ifndef ROBOTLIBRARY_H_
#define ROBOTLIBRARY_H_

#include <msp430.h>



void initRobot();
void turnLeftWheel();
void turnRightWheel();
void stopRight();
void stopLeft();
void moveForward(char tuneLeft, char tuneRight);
void moveBackward(char tuneLeft, char tuneRight);
void leftTurn();
void rightTurn();
void halfRight();
void halfLeft();
void stop();


#endif /* ROBOTLIBRARY_H_ */
