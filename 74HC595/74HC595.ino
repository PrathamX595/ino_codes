#include <ShiftRegister74HC595.h>
const int CLOCK = 12;
const int LATCH = 11;
const int DATA = 10;
byte counter =0;

void setup() 
{
  pinMode(CLOCK,OUTPUT);
  pinMode(LATCH,OUTPUT);
  pinMode(DATA,OUTPUT);

}

void loop() 
{
 digitalWrite(LATCH,LOW);
 shiftOut(DATA,CLOCK,MSBFIRST,counter);
 digitalWrite(LATCH,HIGH);
 delay(100);
 counter=counter+1;

}
