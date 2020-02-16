
int led=13;//Already connected led on this pin
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);//takes two input, pin number and mode of pin i or o
 // pinMode(12,INPUT) 
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,0);
delay(500);
digitalWrite(led,1);
delay(500);

}

/*
//R=220ohm, pin 13 with led


*/






















































