#include <LiquidCrystal.h>
LiquidCrystal lcd (6,7,8,9,10,11);
const int bpin_1 = 4 ; 
const int bpin_2 = 5 ;
long rnum_1;
long rnum_2;
int sum_1 = 0;
int sum_2 = 0;
int x ;
int y ; 

void setup() 
{

  lcd.begin(16,2);
  pinMode(bpin_1,INPUT);
  pinMode(bpin_2,INPUT);
  Serial.begin(9600);
}

void loop() 
{
  x = digitalRead(bpin_1);
  y = digitalRead(bpin_2);
  rnum_1 = random(7);
  Serial.println(rnum_1);
  delay(2000);
  rnum_2 = random(7);
Serial.println(rnum_2);
  delay(2000);
  
if(rnum_1!=rnum_2)
{
  if (x == 1)
  {
    delay(500);
        lcd.setCursor(0,1);
    lcd.print(rnum_1);

      sum_1 = sum_1 + rnum_1 ; 
}
  if (y == 1)
  {
    delay(500);
    sum_2 = sum_2 + rnum_2 ; 
        lcd.setCursor(9,1);
    lcd.print(rnum_2);
  
  }
    lcd.setCursor(0,0);
    lcd.print("player_1");

    lcd.setCursor(9,0);
    lcd.print("player_2");

  
   
}   
else
{
      if (sum_1 > sum_2)
      {
        lcd.clear();
        delay(500);
        lcd.print("Player_1 wins");
      }
  else    if (sum_2 > sum_1)
      {
        lcd.clear();
        delay(500);
        lcd.print("Player_2 wins");
       }
       else
       {
        lcd.print("Tie!!!");
       }
       }
  

}
