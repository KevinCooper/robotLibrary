#Description<br>
This library is for interfacing with the robots for the ECE382 class.<br>
##Functions<br>
Sets up the timer subsystems of the robot to a PWM of 50%<br>
`void initRobot()`<br>
<br>
Enables the left motor and moves it in the forward direction<br>
`void turnLeftWheel()`<br>
<br>
Enables the right motor and moves it in the forward direction<br>
`void turnRightWheel()`<br>
<br>
Enables the left motore and moves it in the backward direction<br>
`void turnLeftWheelBack()`<br>
<br>
Enables the right motore and moves it in the backward direction<br>
`void turnRightWheelBack()`<br>
<br>
Stops the right motor completely<br>
`void stopRight()`<br>
<br>
Stops the left motore completely<br>
`void stopLeft()`<br>
<br>
Change the PWM signal to speedLeft/100 and speedRight/100.  These values should not be set above above 60 or the motor driver chip could be damaged.  This function can be used at any time.
`void modTimer(int speedLeft, int speedRight)`
