#define led1 9
#define led2 10
#define led3 11
#define pot A0
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(pot,INPUT);
}

void loop() {
   int vi=analogRead(pot);
   if (vi<1023/3)
   {
    int v1=map(vi,0,1023/3,0,255);
    analogWrite(led1,v1);
   }
   if (vi<2*1023/3 && vi>1023/3) 
   {
    int v2=map(vi,1023/3,2*1023/3,0,255);
       analogWrite(led2,v2);
   }
   if (vi>2*1023/3 && vi<1024)
   {
    int v3=map(vi,2*1023/3,1023,0,255);
    analogWrite(led3,v3);    
   }





}
