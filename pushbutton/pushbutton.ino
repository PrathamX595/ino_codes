const int led = 2;
const int button1 = 4;
const int button2 = 5;
int buttonstate1 = 0;
int buttonstate2 = 0;


void setup() 
{
  pinMode(led,OUTPUT);
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);

}

void loop() 
{
buttonstate1 = digitalRead(button1);
buttonstate2 = digitalRead(button2);

if(buttonstate1 == 1)
{
  
  digitalWrite(led,HIGH);
  
  }
  if(buttonstate2 == 1)
  {
    
    digitalWrite(led,LOW);
    
    }

  
}
