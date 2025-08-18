#include <Servo.h>
Servo myservo_1;   
Servo myservo_2;     // define the servos
Servo myservo_3;
const int flex_1 = A0;
const int flex_2 = A1;   // define the flex sensors
const int flex_3 = A2;
const int led = 5;  //define the led
int val_1;
int val_2;
int val_3;
void setup() 
{
  myservo_1.attach(3);
  myservo_2.attach(9);  //define the servo pins
  myservo_3.attach(10);

  pinMode(led,OUTPUT); //define the mode of use
}
void loop() 
{
 val_1 = analogRead(A0);
 val_2 = analogRead(A1);  //storing the flex values in vals
 val_3 = analogRead(A2);
 if (val_1 <= 200)
 {
  myservo_1.write(90);  //it will move finger1
  }                                     
 if (val_2 <= 200)
 {
  myservo_2.write(90);  //it will move finger2
  }
   if (val_3 <= 200)
 {
  myservo_3.write(90);  //it will move finger3
  }

  if(val_1 <= 200 && val_2 <= 200 && val_3 <= 200)
   {
    digitalWrite(led,HIGH); //it will turn the led on
    }
  }
