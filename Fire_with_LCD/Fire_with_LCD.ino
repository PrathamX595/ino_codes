#include <LiquidCrystal.h>
LiquidCrystal lcd (6,7,8,9,10,11);
const int fire = 13;
const int led = 2 ;

void setup() 
{
lcd.begin(16,2);
lcd.print("no go near fire ");
delay(2000);
lcd.clear();

}

void loop()
{
int val = digitalRead(fire); 
  if(val == LOW)
  {
  lcd.setCursor(0,0);
  lcd.print("FIRE!! Call 112");
  digitalWrite(led,HIGH);
  }
}
