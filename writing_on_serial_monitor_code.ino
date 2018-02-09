float value = 1.1;
void setup() {
  Serial.begin(9600); 
}
void loop() 
{ 
  value = value - 0.1; 
  if( value == 0)
  Serial.println("The value is exactly zero");
  else if(fabs(value) < .0001) Serial.println("The value is close enough to zero");
  else
Serial.println(value); 
delay(1000);
}
