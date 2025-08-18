#include <Keypad.h>

const int led1 = 11;
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
     Serial.begin(9600);
}
void loop()  
{
  char customKey = customKeypad.getKey();
    if (customKey)
    {
     char temp;
     temp = customKey; 
     Serial.print(temp); 
     if(customKey='*')
     {
      if(temp == '2')
      
      {
      digitalWrite(led1,HIGH);
      }
      
      }
     
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      }
    }
