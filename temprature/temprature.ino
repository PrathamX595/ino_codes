#include <LiquidCrystal.h>

#include <SimpleDHT.h>
SimpleDHT11 dth11;
LiquidCrystal lcd (6,7,8,9,10,11);
const int temp = 7;

void setup() 
{
  lcd.begin(16,2);
  pinMode(temp,INPUT);
}

void loop() 
{
lcd.print("temp=");
lcd.setCursor(0,1);
lcd.print(dth11.read(temp));
delay(2000);  

}
