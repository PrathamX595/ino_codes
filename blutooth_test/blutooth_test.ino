const int led = 13;
void setup() 
{
  pinMode(led,OUTPUT);
 
 Serial.begin(9600);
}

void loop() 
{
if (Serial.available())
{
 char val = Serial.read();
  Serial.print(val);
  if(val=='1' )
  {
    digitalWrite(led,HIGH);
    
    }
    if(val=='0')
    {
      
      digitalWrite(led,LOW);
      
      
      }
    
  
  
  }  

}
