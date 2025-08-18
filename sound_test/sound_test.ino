const int sound = 7 ;
const int led = 13;
int val;
void setup() 
{
 pinMode(sound,INPUT);
 pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() 
{
 val=digitalRead(sound); 
 Serial.print(val);
 delay(1000);
 if(val == 1)
 {
  
   digitalWrite(led,HIGH);
  
  }
  else
  {
    
    
  digitalWrite(led,LOW);
    
    }

}
