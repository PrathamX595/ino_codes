#include <LiquidCrystal.h>

LiquidCrystal lcd(6,7,8,9,10,11);
const int trigpin= 12;
const int ecopin= 13;
long duration; 
int dis;
void setup() {
  lcd.begin(16,2);
 pinMode(trigpin,OUTPUT);
 pinMode(13,INPUT);
}

void loop() {
  digitalWrite(trigpin,LOW);
  delay(2);
  digitalWrite(trigpin,HIGH);
  delay(10);
  digitalWrite(trigpin,LOW);
  duration = pulseIn(ecopin,HIGH);
  dis =duration*0.034/2;
  lcd.setCursor(0,0);
  lcd.print("the distance is");
  lcd.setCursor(0,1);
  lcd.print(dis);
}
