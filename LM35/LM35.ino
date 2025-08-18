#include <LiquidCrystal.h>
LiquidCrystal lcd (6,7,8,9,10,11);
float temp;
void setup() 
{
Serial.begin(9600);
lcd.begin(16,2);
}

void loop() 
{

temp=analogRead(A0);
temp=temp*0.48828125;
lcd.setCursor(0,0);
lcd.print("the temp is  ");
lcd.setCursor(0,1);
lcd.print(temp);
delay(1000);



  
}
