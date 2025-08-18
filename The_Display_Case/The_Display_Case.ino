const int led = 7;

#include <Stepper.h>
#define STEPS 64
Stepper stepper(STEPS, 8, 9, 10, 11);
int previous = 0;
void setup()  
{
  pinMode(led,OUTPUT);
 stepper.setSpeed(150);
 Serial.begin(9600);
}
void loop()
{
  
  if(Serial.available())
  {
   char val = Serial.read();
    Serial.println(val);
    if(val == 'R')
    {
      for(int i=0 ;i<10 ; i++)
      {
         stepper.step(360);
         
        }
      
      }
    if(val == '1')
    {
      
      digitalWrite(led,HIGH);
      
      }
    if(val == 'A')
    {
      digitalWrite(led,HIGH);
      for(int i=0 ;i<10 ; i++)
      {
         stepper.step(360);
         
        }
      
      }
      if(val == 'N')
      {
        stepper.step(0);
        digitalWrite(led,LOW);
        
        }
        if(val == '0')
        {
          digitalWrite(led,LOW);
          }
         if(val == 'S')
         {
          
          stepper.step(0);
          
          }

          
    }
      
  
  
 
 }
