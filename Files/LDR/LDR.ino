void setup() {
  pinMode(A0,INPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int pot=analogRead(A0);
  int inp=map(pot,0,1023,0,255);
  analogWrite(3,inp);
  /*
  if (inp>110)
    analogWrite(3,255);
   else
   analogWrite(3,0);
   */
  
  Serial.println(inp);
  delay(500);
  
}
