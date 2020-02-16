int in_pin=3;
int out_pin=4;
void setup() {
  // put your setup code here, to run once:
  pinMode(in_pin,INPUT);
  pinMode(out_pin,OUTPUT);
  digitalWrite(in_pin,1);
  
}

void loop() {
 boolean x=digitalRead(out_pin);
 boolean check=digitalRead(in_pin);
 delay(300);
  if (check==0)
  { 
    digitalWrite(out_pin,!x);
  }
}
