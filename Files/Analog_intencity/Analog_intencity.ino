int green[]={3,5,6};
int red[]={9,10,11};
#define intnetsity 10
void setup() {
  // put your setup code here, to run once:
for(int i=0;i<=2;i++)
{
  pinMode(green[i],OUTPUT);
  pinMode(red[i],OUTPUT);
  }
  pinMode(3,OUTPUT);
}

void loop() {
}
