
// File for The Constants and Initialization of the Rover   



// DC Motors
AF_DCMotor motor1(1);  //front left
AF_DCMotor motor2(2);  // back left
AF_DCMotor motor3(3);  // back right
AF_DCMotor motor4(4);  // front right


int time180 = 1090*2.2; // a need to make a factor for speed and time!
int speedpwm = 250; // (speed/255)*100 = the precent of power
int delaytime = 1000;

// UlraSonic Constants
long duration;
int distance;
int safetyDistance = 5; // Safety distance in centimeters





