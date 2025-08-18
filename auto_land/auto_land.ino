#include <Servo.h>
Servo myservo ;
const int trig = 8;
const int echo = 9;
int dis ;
long duration;

void setup() 
{
  myservo.attach(3);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop() 
{
   digitalWrite(trig,LOW);
  delay(2);
  digitalWrite(trig,HIGH);
  delay(10);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo,HIGH);
  dis = duration*0.034/2;
  Serial.println(dis);
  delay(1000);
  if (dis<=10)
  myservo.write(180);
  if(dis>=15)
  myservo.write(0);

}
