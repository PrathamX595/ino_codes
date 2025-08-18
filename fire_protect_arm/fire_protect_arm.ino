#include<Servo.h>

Servo myservo;
const int fire = 13 ;
int val;
void setup() 
{
 myservo.attach(3);
 pinMode(fire,INPUT);
 Serial.begin(9600);

}

void loop() 
{
  val = digitalRead(fire);
  Serial.print(val);
  if(val == LOW)
  {
    myservo.write(90);
    
  }
  if(val==HIGH)
 {
  
  myservo.write(0);
  
  }
}
