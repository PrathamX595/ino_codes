#include <Servo.h>
Servo myservo ;
const int pot = A0;
int val;
void setup() 
{
myservo.attach(3);  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() 
{
  val = analogRead(pot);
  Serial.print(val);
  if (val >= 500 )
  {
    
    myservo.write(180);
    
    }
if (val <= 250)
{

  myservo.write(0);
 }
}
