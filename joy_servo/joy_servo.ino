#include <Servo.h>

Servo myservo;
const int joyx= A0;

int joyvalx;

void setup() 
{
  myservo.attach(3);

}

void loop() 
{
joyvalx= analogRead(joyx);
joyvalx=map(joyvalx, 0, 1023, 0, 180);
myservo.write(joyvalx);  

}
