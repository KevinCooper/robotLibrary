/*
 * robotLibrary.c
 *
 *  Created on: Nov 20, 2013
 *      Author: C15Kevin.Cooper
 */

#include <msp430.h>

void initRobot(){
    TA0CTL &= ~MC1|MC0;            // stop timer A0
    TA0CTL |= TACLR;                // clear timer A0
    TA0CTL |= TASSEL1;           // configure for SMCLK
    TA0CCR0 = 100;                // set signal period to 200 clock cycles (~100 microseconds)
    TA0CCR1 = 80;                // set duty cycle to 50/200 (10%)
    TA0CCTL1 |= OUTMOD_3;        // set TACCTL1 to Reset / Set mode
    TA0CTL |= MC0;                // count up

    TA1CTL &= ~MC1|MC0;            // stop timer A1
    TA1CTL |= TACLR;                // clear timer A1
    TA1CTL |= TASSEL1;           // configure for SMCLK
    TA1CCR0 = 100;                // set signal period to 100 clock cycles (~100 microseconds)
    TA1CCR1 = 20;                // set duty cycle to 50/100 (10%)
    TA1CCTL1 |= OUTMOD_3;        // set TA1CCTL1 to Reset / Set mode
    TA1CTL |= MC0;                // count up

}

void turnLeftWheel(){
    P1DIR |= BIT2;
    P1SEL |= BIT2;
}
void turnRightWheel(){
	P2DIR |= BIT1;
	P2SEL |= BIT1;
}
void stopRight(){
	P2DIR &= ~BIT1;
	P2SEL &= ~BIT1;
}

void stopLeft(){
    P1DIR &= ~BIT2;
    P1SEL &= ~BIT2;
}
void moveForward(char tuneLeft, char tuneRight){
	stopLeft();
	stopRight();
	TA0CCR1 = 10 * tuneLeft;
	TA1CCR1 = 10 * tuneRight;

	//Turn right
    P1DIR |= BIT2;
    P1SEL |= BIT2;

    //Turn Left
	P2DIR |= BIT1;
	P2SEL |= BIT1;
}
void moveBackward(char tuneLeft, char tuneRight){
	stopLeft();
	stopRight();
	TA0CCR1 = 10 * tuneLeft;
	TA1CCR1 = 10 * tuneRight;

	//Turn right
    P1DIR |= BIT3;
    P1SEL |= BIT3;

    //Turn Left
	P2DIR |= BIT0;
	P2SEL |= BIT0;
}
void leftTurn(){

}
void rightTurn(){

}
void halfRight(){

}
void halfLeft(){

}
void stop(){
	stopRight();
	stopLeft();
}
