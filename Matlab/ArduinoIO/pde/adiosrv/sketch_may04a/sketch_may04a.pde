

void setup()
{
Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop()
{

  if(Serial.available()>0)
  {
    char x=Serial.read();
    if(x=='1')
    {
    digitalWrite(10,1);
    digitalWrite(11,0);
    delay(1000);
    digitalWrite(10,0);
    digitalWrite(11,0);
    delay(2000);
    digitalWrite(10,0);
    digitalWrite(11,1);
    delay(1000);
    digitalWrite(10,0);
    digitalWrite(11,0);
    
    x='0';
    }
    
    
  
  }

}

