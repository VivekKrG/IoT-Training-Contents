#define out1 3
#define out2 5

void setup() {
  // put your setup code here, to run once:
  pinMode(out1,OUTPUT);
  pinMode(out2,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=255;i++)
  {
       analogWrite(out1,i);
       delay(10);
       analogWrite(out2,i);
       delay(10);
  }
  delay(1000);/*
  for(int i=255;i>=0;i--)
  {
       digitalWrite(3,i);
       delay(300);
       digitalWrite(5,i);
       delay(300);
  }  */
}
