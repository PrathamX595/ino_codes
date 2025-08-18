const int irin = 12;
const int irout = 13;
void setup() {
  pinMode(irin,INPUT);
  pinMode(irout,INPUT);
 Serial.begin(9600);
}

void loop() {
  int val = digitalRead(irin);
  int val1= digitalRead(irout);
  Serial.print(val);
  Serial.print(val1);
  delay(1000); 
}
