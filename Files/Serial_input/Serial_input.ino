// training@iotaonair.com
void setup() {
  for (int i=2;i<13;i++)
  {
    pinMode(i,OUTPUT);
  }

}

void loop() {
  char inp;
  if(Serial.available())
  {
      inp=Serial.read();
      delay(2);
  }
  if (inp <96)
    digitalWrite(int(inp)-93,1);
  if (inp >96)
    digitalWrite(int(inp)-95,0);

}
