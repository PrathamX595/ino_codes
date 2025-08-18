long randnum ;
void setup() 
{
 Serial.begin(9600); 

}

void loop() 
{

  randnum = random(1,7);
  Serial.println(randnum);
  delay(1000);

}
