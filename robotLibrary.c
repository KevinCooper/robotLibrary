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
    TA0CCR1 = 1;                // set duty cycle to 10/200 (10%)
    TA0CCTL1 |= OUTMOD_7;        // set TACCTL1 to Reset / Set mode
    TA0CTL |= MC0;                // count up

    TA1CTL &= ~MC1|MC0;            // stop timer A1
    TA1CTL |= TACLR;                // clear timer A1
    TA1CTL |= TASSEL1;           // configure for SMCLK
    TA1CCR0 = 100;                // set signal period to 100 clock cycles (~100 microseconds)
    TA1CCR1 = 40;                // set duty cycle to 10/100 (10%)
    TA1CCTL1 |= OUTMOD_7;        // set TA1CCTL1 to Reset / Set mode
    TA1CTL |= MC0;                // count up

}

void turnLeftWheel(){
	//Undo any left wheel movement
    //P1DIR &= ~BIT2;                // TA0CCR1 on P1.2
    //P1SEL &= ~BIT2;
    //Set up right turn movement
	P2DIR |= BIT1;					//Set up P2.1
	P2SEL |= BIT1;					//Set up P2.1
}
void turnRightWheel(){
	//Undo any right wheel movement
	//P2DIR &= ~BIT1;					//Set up P2.1
	//P2SEL &= ~BIT1;
	//Set up left turn movement
    P1DIR |= BIT2;                // TA0CCR1 on P1.2
    P1SEL |= BIT2;
}
void moveForward(){

}
void moveBackward(){

}
void stopRight(){
    P1DIR &= ~BIT2;
    P1SEL &= ~BIT2;
}

void stopLeft(){
	P2DIR &= ~BIT1;
	P2SEL &= ~BIT1;
}
void leftTurn(){

}
void rightTurn(){

}
void halfRight(){

}
void halfLeft(){

}
