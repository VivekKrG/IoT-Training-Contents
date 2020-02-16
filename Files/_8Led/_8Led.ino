int led[] = {2, 3, 4, 5, 6, 7, 8, 9};
#define wait 300
void setup() {
  for (int i = 0; i < 9; i++)
  {
    pinMode(led[i], OUTPUT);
  }

}

void loop() {
  for ( int j = 0; j < 8; j++)
  {
    for (int  i = 0; i <= j; i++)
    {
      digitalWrite(led[i], 1);
    }
    delay(wait);
    for (int i = 0; i <= 9; i++)
    {
      digitalWrite(led[i], 0);
    }
    delay(wait);
  }
  /*for ( int j = 0; j < 9; j++)
  {
    digitalWrite(led[j],0);
  }
  */
  delay(wait*5);

}

