/*
 * debog-- switch clicking may be take time 100ms
*/
int in_up=10;
int in_down=11;
int out_pin[]={2,3,4,5,6,7,8,9};
  int i=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(in_up,INPUT);
  pinMode(in_down,INPUT);
  for(int i=0; i<8;i++)
    pinMode(out_pin[i],OUTPUT);
  digitalWrite(in_up,1);
  digitalWrite(in_down,1);
}

void loop() {
    if (digitalRead(in_up)==0)
    {
      digitalWrite(out_pin[i],1);
      delay(450);
      i++;
    }
    if (digitalRead(in_down)==0)
    {
        digitalWrite(out_pin[i],0);
        delay(450);
      i--;
    }
   
}
