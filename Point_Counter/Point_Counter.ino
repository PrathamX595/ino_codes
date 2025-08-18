#include <LiquidCrystal.h>
LiquidCrystal lcd (6,7,8,9,10,11);
int val_1 = 0 ;
int val_2 = 0 ;
const int bpin_1 = 5 ;
const int bpin_2 = 4;
int x = 0;
int y = 0;
void setup() 
{
 lcd.begin(16,2);
 pinMode(bpin_1,INPUT);
 pinMode(bpin_2,INPUT);
 lcd.print("Let's Begin");
 delay(2000);
 lcd.clear();
}

void loop() 
{
 x = digitalRead(bpin_1);
 y = digitalRead(bpin_2); 

  if (x == 1)
  {
    delay(500);
    val_1 = val_1 + 1 ; 
   }
  if (y == 1)
  {
    delay(500);
    val_2 = val_2 + 1 ;  
  }
    if (val_1 == 5)
    {
      lcd.clear();
      delay(500);
      lcd.setCursor(0,0);
      lcd.print("Pratham-Wins!!!");
      lcd.setCursor(0,1);
      lcd.print("Parth lost ha ha!!");
      delay(10000);
    }
    if (val_2 == 5)
    {
      lcd.clear();
      delay(500);
      lcd.setCursor(0,0);
      lcd.print("Parth Wins!!!!!!");
      lcd.setCursor(0,1);
      lcd.print("Pratham lost ha!");
      delay(10000);
    }
  lcd.setCursor(2,0);
  lcd.print("Pratham");
  lcd.setCursor(3,1);
  lcd.print(val_1);
  lcd.setCursor(11,0);
  lcd.print("Parth");
  lcd.setCursor(12,1);
  lcd.print(val_2);
}
