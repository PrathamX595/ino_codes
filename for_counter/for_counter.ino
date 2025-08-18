void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
   for(int i=10;i>0;i--)
   {
    
    Serial.print("time to 2020   ");
    Serial.println(i);
    delay(1000);
   
   if(i==1)
   {
    
 
    Serial.print("Happy new year");
    }
   }// put your main code here, to run repeatedly:

}
