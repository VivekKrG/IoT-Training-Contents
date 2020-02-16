//Vivek Kumar Gupta 7631785036 eknowledgec@gmail.com //EC
//Astha nema 8989033219 asthanema4349@gmail.com //BM
//ravi bhushan sharma 9754228100 ravibhushansharma08@gmail.com //EE

/*1. Red
2. Green
3. Blue
4. R+G
5. G+B
6. B+R
7. R+G+B
8. RGB flasher without controler
9. RGB fading effect with pot. effect
*/
#define r 9
#define g 10
#define b 11
#define pot A0
#define sw 2
int go2=0;
void ledflash();
void ledfade();
void value(int t);
void setup() {
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(pot,INPUT);
  pinMode(sw,INPUT);
  //digitalWrite(sw,1);
  attachInterrupt(0,value,RISING);
}
void loop() {
  // int clk= digitalRead(sw);
  int wait=analogRead(A0);
  
 /* if(clk==0)
  {
    delay(400);
    go2+=1;  
  }
  */
  /*if (go2==10)
    go2=0;*/
  switch(go2)
  {
    case 0:
      digitalWrite(r,0);
      digitalWrite(g,0);
      digitalWrite(b,0);
      break;
     case 1:
      digitalWrite(r,1);
      digitalWrite(g,0);
      digitalWrite(b,0);
      break;
      case 2:
      digitalWrite(r,0);
      digitalWrite(g,1);
      digitalWrite(b,0);
      break;
     case 3:
      digitalWrite(r,0);
      digitalWrite(g,0);
      digitalWrite(b,1);
      break;
      case 4:
      digitalWrite(r,1);
      digitalWrite(g,1);
      digitalWrite(b,0);
      break;
     case 5:
      digitalWrite(r,0);
      digitalWrite(g,1);
      digitalWrite(b,1);
      break;
      case 6:
      digitalWrite(r,1);
      digitalWrite(g,0);
      digitalWrite(b,1);
      break;
     case 7:
      digitalWrite(r,1);
      digitalWrite(g,1);
      digitalWrite(b,1);
      break;
      case 8:
          while (go2==8)
       {  
          ledflash(); 
//          if(digitalRead(sw)==0)
//          {
//            delay(400);
//               go2+=1;  
//          }
            
       }
       break;

     case 9:
      while (go2==9)
       {  
          
//          if(digitalRead(sw)==0)
//          {
//            delay(4000);
//               go2+=1;  
//          }
          ledfade();
       }
       delay(1000);
       
    break;
 }
}


   void ledflash()
   {
      int wait=analogRead(A0);
      digitalWrite(r,0);
       digitalWrite(g,0);
       digitalWrite(b,0);
       delay(500);
      digitalWrite(r,1);
      delay(wait);
      digitalWrite(r,0);
      digitalWrite(g,1);
      delay(wait); 
      digitalWrite(g,0);
      digitalWrite(b,1);
      delay(wait);
      digitalWrite(b,0);
    //2 ek sath
     digitalWrite(r,1);
     digitalWrite(g,1);
     delay(wait);
     digitalWrite(r,0);
     digitalWrite(g,1);
     digitalWrite(b,1);
     delay(wait); 
     digitalWrite(r,1);
     digitalWrite(g,0);
     digitalWrite(b,1);
     delay(wait); 
     digitalWrite(r,1);
     digitalWrite(g,1);
     digitalWrite(b,1);
     delay(wait); 
     if(digitalRead(sw)==0)
    return;  
   }
   void ledfade()
   {
      int wait=analogRead(A0);
      int led[]={9,10,11};
      int h=map(wait,0,1023,0,2);
      for (int i=0;i<=2;i++)
      {
          for (int j=0;j<=255;j++)
          {
                analogWrite(led[i],j);
                analogWrite(led[i-1],255-j);
                analogWrite(led[i+1],255+j);
                delay(h);
          }
    //  if(digitalRead(sw)==0)
        return;
      }
}
void value()
{
   delay(300);
   go2++;
 
  if(go2>9)
    go2=0;
}
