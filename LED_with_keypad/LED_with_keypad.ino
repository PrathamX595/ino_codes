#include <Keypad.h>
const int led1 = 11;
const int led2 = 12;
const int led3 = 13;
const byte ROWS = 4;     //four rows
const byte COLS = 4;      //four columns
char hexaKeys[ROWS][COLS] = 
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; //connect to the Rows of the keypad pin 8, 7, 6, 5 respectively
byte colPins[COLS] = {5, 4, 3, 2}; //connect to the Columns of the keypad pin 4, 3, 2, 1 respectively
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
void setup()   
{
     pinMode(led1,OUTPUT);
     pinMode(led2,OUTPUT);
     pinMode(led3,OUTPUT);
     Serial.begin(9600);
}
void loop()  
{
  char customKey = customKeypad.getKey();
    if (customKey)
    {
     Serial.print(customKey); // Send the pressed key value to the arduino serial monitor
    if(customKey == '1')
    {
      digitalWrite(led1,HIGH);
      
      }
       if(customKey == '2')
    {
      digitalWrite(led2,HIGH);
      
      }
       if(customKey == '3')
    {
      digitalWrite(led3,HIGH);
      
      }
       if(customKey == '4')
    {
      digitalWrite(led1,LOW);
      
      }
       if(customKey == '5')
    {
      digitalWrite(led2,LOW);
      
      }
      if(customKey == '6')
    {
      digitalWrite(led3,LOW);
      
      }
      
    }
}
