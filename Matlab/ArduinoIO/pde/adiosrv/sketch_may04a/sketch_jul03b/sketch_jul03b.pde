void setup()
{
Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop()
{

  if(Serial.available()>0)
  {
    char x=Serial.read();
    if(x=='1')
    {
    digitalWrite(13,1);
    delay(3000);
    digitalWrite(13,0);
    }
  }
}
