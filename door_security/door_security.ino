const int echo = 7;
const int trig = 6;
const int buzz = 8;
int dis ;
long duration ;

void setup() 
{
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);
 pinMode(buzz,OUTPUT);

}

void loop() 
{
   digitalWrite(trig,LOW);
  delay(2);
  digitalWrite(trig,HIGH);
  delay(10);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo,HIGH);
  dis = duration*0.034/2;
 
  if(dis <= 50 )
  {
    digitalWrite(buzz,LOW);
  }
if (dis >= 51)
{
  
  digitalWrite(buzz,HIGH);
  
  }

}
