const int water = 8;
const int led = 13;
int val ;
void setup() 
{
pinMode(led,OUTPUT);
pinMode(water,INPUT);  
Serial.begin(9600);
}

void loop() 
{
val = digitalRead(water);
Serial.print(val);
delay(1000); 
if (val == 1)
{
  
  digitalWrite(led,HIGH);
  
  }
 if(val == 0)
 {
  
  digitalWrite(led,LOW);
  }
}
