const int fire = 13;
int  val;
void setup() 
{
  pinMode(fire,INPUT);
  Serial.begin(9600);
  
}

void loop() 
{
val = digitalRead(fire);
Serial.print(val);  
delay(1000);
}
