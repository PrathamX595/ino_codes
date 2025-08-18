const int led = 13;
const int pot = A0;
 int val;
 
 void setup()
 {
 pinMode(led,OUTPUT);
 Serial.begin(9600); 
  }
 void loop() 
 {
 val = analogRead(pot);
 val = map(val,0,1024,0,255);
 Serial.println(val);
 delay (500);
 digitalWrite(led,val);
 }
