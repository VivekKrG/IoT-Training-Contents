void setup() {
  // put your setup code here, to run once:
  pinMode(D1,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(D0,OUTPUT);
  digitalWrite(D1,1);
  Serial.begin(9600);
}

void loop() {
  Serial.println("This is default text.");
  while(!Serial.available())
    delay(10);
    
  char reading[100];
  int i=0;
  while(Serial.available()){
    reading[i]=Serial.read();
    delay(10);
    i++;
  }
  Serial.println("You have entered following");
  for(int j=0;j<i;j++){
  Serial.print(reading[j]);
  delay(50);
  }
  Serial.println("\n");
}
