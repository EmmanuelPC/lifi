#include <IRremote.h>
IRsend irsend;
int f=0,i=0,j=0,r=0;
char value;
void setup()
{
  Serial.begin(9600);
} 
void loop()
{
 irsend.sendSony(1, 2);
 delay(40);
 for(i=7; i>=0 ;i--)
 {
   if(analogRead(A0)>700)
     r=1;
    else
     r=0;
  delay(35);
  bitWrite(value,i,r);
 }
 
  if(value==47)
    Serial.println("");
  else
    Serial.print(value);
 irsend.sendSony(2, 2);// 2 send data 2 bit size
 delay(40);
}

