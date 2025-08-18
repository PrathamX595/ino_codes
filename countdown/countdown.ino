#include <LiquidCrystal.h>
  LiquidCrystal lcd (6,7,8,9,10,11);
  const int buzz = 2;
  int i = 10;

void setup() 
{
lcd.begin(16,2);  
pinMode(buzz,OUTPUT);
Serial.begin(9600);
}

void loop() 
{  
  lcd.setCursor(0,0);
  lcd.print("time  to 2020 :");
  lcd.setCursor(0,1);
  lcd.print(i);
  delay(1000);
  lcd.clear();
  i--;
  lcd.setCursor(0,0);
  lcd.print("time  to 2020 :");
  lcd.setCursor(0,1);
  lcd.print(i);
  delay(1000);
  lcd.clear();
    i--;
    lcd.setCursor(0,0);
  lcd.print("time  to 2020 :");
  lcd.setCursor(0,1);
    lcd.print(i);
  delay(1000);
  lcd.clear();
    i--;
    lcd.setCursor(0,0);
  lcd.print("time  to 2020 :");
  lcd.setCursor(0,1);
    lcd.print(i);
  delay(1000);
  lcd.clear();
    i--;
    lcd.setCursor(0,0);
  lcd.print("time to 2020 :");
  lcd.setCursor(0,1);
    lcd.print(i);
  delay(1000);
  lcd.clear();
    i--;
    lcd.setCursor(0,0);
  lcd.print("time to 2020 :");
  lcd.setCursor(0,1);
    lcd.print(i);
  delay(1000);
  lcd.clear();
    i--;
    lcd.setCursor(0,0);
  lcd.print("time to 2020 :");
  lcd.setCursor(0,1);
    lcd.print(i);
  delay(1000);
  lcd.clear();
    i--;
    lcd.setCursor(0,0);
  lcd.print("time to 2020 :");
  lcd.setCursor(0,1);
    lcd.print(i);
  delay(1000);
  lcd.clear();
    i--;
    lcd.setCursor(0,0);
  lcd.print("time to 2020 :");
  lcd.setCursor(0,1);
    lcd.print(i);
  delay(1000);
  lcd.clear();
    i--;
    lcd.setCursor(0,0);
  lcd.print("time to 2020 :");
  lcd.setCursor(0,1);
    lcd.print(i);
  delay(1000);
  lcd.clear();
    i--;
    lcd.setCursor(0,0);
  lcd.print("time to 2020 :");
  lcd.setCursor(0,1);
    lcd.print(i);
  if(i==0)
  { 
    digitalWrite(buzz,HIGH);
    lcd.clear();
    lcd.print("welcome to 2020");
    lcd.setCursor(0,1);
    lcd.print("Happy newyear");
    delay(10000);
    
    
    }
  

}
