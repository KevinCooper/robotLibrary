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
void moveForward();
void moveBackward();
void stopRight();
void stopLeft();
void leftTurn();
void rightTurn();
void halfRight();
void halfLeft();


#endif /* ROBOTLIBRARY_H_ */
