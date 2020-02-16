#define led 9
#define pot A0
void setup() {
  pinMode(led,OUTPUT);
  pinMode(pot,INPUT);
  Serial.begin(9600);
}

void loop() {
  
  int vi=analogRead(pot);
  analogWrite(led,vi/4);
  if(Serial.available())
  {
      Serial.print("Potential output: ");
      Serial.println(vi);
      Serial.print("\nAnalog W:");
      Serial.println(vi/4);
      delay(1000);
  }
  
}
