#include <LiquidCrystal.h>
LiquidCrystal lcd (6,7,8,9,10,11);
const int joy = A0;
int joyval;
void setup() 
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("The angle is :");

}

void loop() 
{
  joyval = analogRead(joy);
  joyval = map (joyval,0,1023, 0, 180);
  lcd.setCursor(0,1);
  lcd.print(joyval);

}
